/* -------------------------------------------------------------------------------
	Script Title       : TestUserStory1 - Logging
	Script Description : Login and Logout of a retail website
   
   ------------------------------------------------------------------------------- */

TestUserStory1_Login()
{
	//As we have Login and Logout functionality for testing I have placed them in Action 

	
	web_set_sockets_option("SSL_VERSION", "TLS1.2");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	// Check point 
	web_reg_find("Search=Body",
		"Text=Welcome to Resene Techspec",
		LAST);
	lr_start_transaction("TestUserStory1_01_LauchUrl");

	web_url("{url}", 
		"URL=https://{url}/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		EXTRARES,  
		LAST);

	web_add_header("A-IM", 
		"x-bm,gzip");


	web_add_header("Origin", 
		"https://{url}");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_custom_request("SetGAClientID", 
		"URL=https://{url}/Home/SetGAClientID?id=2001375033.1560567924", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://{url}/", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);
	
	lr_end_transaction("TestUserStory1_01_LauchUrl", LR_AUTO);
	
	lr_think_time(5);


	//checkpoint
	web_reg_find("Search=Body",
		"Text=Log in to your Resene TechSpec Account",
		LAST);
	//<input name="__RequestVerificationToken" type="hidden" value="{RequestVerificationToken}" /> 
	
	//Correlation - capturing a value that changes for different user
	web_reg_save_param("RequestVerificationToken","LB=type=\"hidden\" value=\"","RB=\" /> ",LAST);
	
	lr_start_transaction("TestUserStory1_02_Click_Login");

	web_url("Login", 
		"URL=https://{url}/Account/Login", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{url}/", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("TestUserStory1_02_Click_Login",LR_AUTO);

	lr_think_time(5);
	
	// Rendezvous points instruct Vusers to wait during test execution for multiple Vusers to arrive at a certain point, in order that they may simultaneously perform a task.
	lr_rendezvous("1000_Users");
	// As we want 1000 users to login simultaneously we have given 1000_users as input
	// During execution before Logging into the application it will wait for 1000 users to lauch and login at the same time

	lr_start_transaction("TestUserStory1_03_EnterCredentials_ClickSignin");	


	web_custom_request("login", 
		"URL=https://sb-ssl.google.com/safebrowsing/clientreport/login?key=AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		"EncType=application/octet-stream", 
		"BodyBinary=\n,https://{url}/Account/Login\\x10\\x02\\x1A\\xEA\\x01\\x08\\x00\\x1A,https://{url}/Account/Login \\x01*p\n,https://{url}/Account/Login\\x10\\x01\\x1A\\x0E23.101.222.150\"\\x1Fhttps://{url}/0\\x009\\x00\\xB0\\xEA\\x8E\\x91\\xB5vBP\\x03X\\x00*D\n\\x1Fhttps://{url}/\\x10\\x02\\x1A\\x0E23.101.222.150\"\\x000\\x009\\x00@8\\x87\\x91\\xB5vBP\\x01X\\x01\"\\x04\\x18\\x00(\\x01(\\x002\n\\x08\\x01\\x10\\x00"
		"(\\x020\\x008\\x018\\x00B\ttext/html", 
		LAST);


	//	Request verification token correlated for script to run for multiple users 
	web_reg_save_param("token1","LB=\"__RequestVerificationToken\" type=\"hidden\" value=\"","RB=\" />",LAST);

	//<input name="__RequestVerificationToken" type="hidden" value="{token1}" />  
	
	//Username and Pasword parameterized for the script to run for mutiple users
	
	web_submit_data("Login_2", 
		"Action=https://{url}/Account/Login", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://{url}/Account/Login", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=__RequestVerificationToken", "Value={RequestVerificationToken}", ENDITEM, 
	  //"Name=__RequestVerificationToken", "Value=78ljUS9u90we52vAY_X4C2vsGP1g9OUgicfWzMy5MFFbpv47y1zOG9ZZAENZvmDgzdmcK1nDTYVEV7eib0UPj7rj62r_SwhexcHuvOksT-o1", ENDITEM, 	
		"Name=UserName", "Value={username}", ENDITEM, 
		"Name=Password", "Value={password}", ENDITEM, 
		"Name=RememberMe", "Value=false", ENDITEM, 
		LAST);

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_custom_request("SetGAClientID_2", 
		"URL=https://{url}/Home/SetGAClientID?id=2001375033.1560567924", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://{url}/", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	lr_end_transaction("TestUserStory1_03_EnterCredentials_ClickSignin",LR_AUTO);

	lr_think_time(5);

	lr_start_transaction("TestUserStory1_04_LogOff");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_submit_data("LogOff", 
		"Action=https://{url}/Account/LogOff", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://{url}/", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=__RequestVerificationToken", "Value={token1}", ENDITEM, 
		LAST);

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_custom_request("SetGAClientID_3", 
		"URL=https://{url}/Home/SetGAClientID?id=2001375033.1560567924", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://{url}/", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	lr_end_transaction("TestUserStory1_04_LogOff",LR_AUTO);

	lr_think_time(5);

	return 0;
}