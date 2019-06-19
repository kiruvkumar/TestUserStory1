Action()
{

	web_set_sockets_option("SSL_VERSION", "TLS1.2");

	web_url("client_model_v5_variation_0.pb", 
		"URL=https://ssl.gstatic.com/safebrowsing/csd/client_model_v5_variation_0.pb", 
		"Resource=1", 
		"RecContentType=application/octet-stream", 
		"Referer=", 
		"Snapshot=t12.inf", 
		LAST);

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("www.resenetechspec.com", 
		"URL=https://www.resenetechspec.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://ssl.gstatic.com/safebrowsing/csd/client_model_v5_ext_variation_0.pb", "Referer=", ENDITEM, 
		"Url=https://fonts.googleapis.com/css?family=EB+Garamond&subset=latin,cyrillic,latin-ext", ENDITEM, 
		"Url=https://www.google-analytics.com/analytics.js", ENDITEM, 
		"Url=https://www.google-analytics.com/r/collect?v=1&_v=j76&a=1486493267&t=pageview&_s=1&dl=https%3A%2F%2Fwww.resenetechspec.com%2F&ul=en-us&de=UTF-8&dt=Welcome%20to%20Resene%20Techspec%20-%20Resene%20TechSpec%20System&sd=24-bit&sr=1280x800&vp=1263x689&je=0&_u=IEBAAAAB~&jid=836495306&gjid=1893732914&cid=2001375033.1560567924&tid=UA-49289843-1&_gid=101686158.1560567924&_r=1&z=1556351407", ENDITEM, 
		"Url=/favicon.ico", ENDITEM, 
		LAST);

	web_add_header("A-IM", 
		"x-bm,gzip");

	web_url("seed", 
		"URL=https://clientservices.googleapis.com/chrome-variations/seed?osname=win&channel=stable&milestone=74", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://www.resenetechspec.com/Content/images/gradient_background_bg.jpg", "Referer=https://www.resenetechspec.com/Content/site.css?ver=1", ENDITEM, 
		"Url=https://www.resenetechspec.com/engine1/pause.png", "Referer=https://www.resenetechspec.com/engine1/style.css?ver=1", ENDITEM, 
		"Url=https://clients1.google.com/tbproxy/af/query?q=Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRMZ6hAhndAIRb4jLTWF3YUkFA==", "Referer=", ENDITEM, 
		LAST);

	web_add_cookie("_ga=GA1.2.2001375033.1560567924; DOMAIN=www.resenetechspec.com");

	web_add_cookie("_gid=GA1.2.101686158.1560567924; DOMAIN=www.resenetechspec.com");

	web_add_cookie("_gat=1; DOMAIN=www.resenetechspec.com");

	web_add_header("Origin", 
		"https://www.resenetechspec.com");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_custom_request("SetGAClientID", 
		"URL=https://www.resenetechspec.com/Home/SetGAClientID?id=2001375033.1560567924", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.resenetechspec.com/", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_add_header("X-Goog-Update-AppId", 
		"aapocclcgogkmnckokdopfmhonfmgoek,aohghmighlieiainnegkcijnfilokake,apdfllckaahabafndbhieahigkjlhalf,blpcfgokakmgnkcojhhkbfbldkacnbeo,felcaaldnbdncclmgdcncolpebgiejap,ghbmnnjooekpmoecnnnilnnbdlolhkhi,nmmhkkegccagdldgiimedpiccmgmieda,pjkljhegncpnkpknbcohdijeoejaedia,pkedcjkdefgpdelpbcmbmeomcjbeemfm");

	web_add_header("X-Goog-Update-Interactivity", 
		"bg");

	web_add_header("X-Goog-Update-Updater", 
		"chromecrx-74.0.3729.169");

	web_url("crx", 
		"URL=https://clients2.google.com/service/update2/crx?os=win&arch=x64&os_arch=x86_64&nacl_arch=x86-64&prod=chromecrx&prodchannel=&prodversion=74.0.3729.169&lang=en-US&acceptformat=crx2,crx3&x=id%3Daapocclcgogkmnckokdopfmhonfmgoek%26v%3D0.10%26installedby%3Dinternal%26uc%26brand%3DCHBF&x=id%3Daohghmighlieiainnegkcijnfilokake%26v%3D0.10%26installedby%3Dinternal%26uc%26brand%3DCHBF&x=id%3Dapdfllckaahabafndbhieahigkjlhalf%26v%3D14.2%26installedby%3Dinternal%26uc%26brand%3DCHBF&x="
		"id%3Dblpcfgokakmgnkcojhhkbfbldkacnbeo%26v%3D4.2.8%26installedby%3Dinternal%26uc%26brand%3DCHBF&x=id%3Dfelcaaldnbdncclmgdcncolpebgiejap%26v%3D1.2%26installedby%3Dinternal%26uc%26brand%3DCHBF&x=id%3Dghbmnnjooekpmoecnnnilnnbdlolhkhi%26v%3D1.7%26installedby%3Dexternal%26uc%26brand%3DCHBF&x=id%3Dnmmhkkegccagdldgiimedpiccmgmieda%26v%3D1.0.0.4%26installedby%3Dother%26uc%26brand%3DCHBF&x=id%3Dpjkljhegncpnkpknbcohdijeoejaedia%26v%3D8.2%26installedby%3Dinternal%26uc%26brand%3DCHBF&x="
		"id%3Dpkedcjkdefgpdelpbcmbmeomcjbeemfm%26v%3D7419.311.0.1%26installedby%3Dother%26uc%26brand%3DCHBF", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		LAST);

	lr_start_transaction("click login ");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("Login", 
		"URL=https://www.resenetechspec.com/Account/Login", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.resenetechspec.com/", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("click login ",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("credentials n signin");

	web_add_cookie("NID=182=dJwE4tn8_DFlMg0nOAKkupvGnqgRzw2EcZZKOqoL30n5zVPDjZVv9GWpcPXWWsLhtbsXr5Gl2pYzQ9141xKaqSgYhEDC-hqDln-EI706aysSdtN-UR3oSePqwBwm9whJWPpQPe0L7sdMJ4G48AUozUZ6BxBpqoWIOep4eBJtabA; DOMAIN=sb-ssl.google.com");

	lr_think_time(27);

	web_custom_request("login", 
		"URL=https://sb-ssl.google.com/safebrowsing/clientreport/login?key=AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		"EncType=application/octet-stream", 
		"BodyBinary=\n,https://www.resenetechspec.com/Account/Login\\x10\\x02\\x1A\\xEA\\x01\\x08\\x00\\x1A,https://www.resenetechspec.com/Account/Login \\x01*p\n,https://www.resenetechspec.com/Account/Login\\x10\\x01\\x1A\\x0E23.101.222.150\"\\x1Fhttps://www.resenetechspec.com/0\\x009\\x00\\xB0\\xEA\\x8E\\x91\\xB5vBP\\x03X\\x00*D\n\\x1Fhttps://www.resenetechspec.com/\\x10\\x02\\x1A\\x0E23.101.222.150\"\\x000\\x009\\x00@8\\x87\\x91\\xB5vBP\\x01X\\x01\"\\x04\\x18\\x00(\\x01(\\x002\n\\x08\\x01\\x10\\x00"
		"(\\x020\\x008\\x018\\x00B\ttext/html", 
		LAST);

	web_add_auto_header("Origin", 
		"https://www.resenetechspec.com");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_submit_data("Login_2", 
		"Action=https://www.resenetechspec.com/Account/Login", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://www.resenetechspec.com/Account/Login", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=__RequestVerificationToken", "Value=78ljUS9u90we52vAY_X4C2vsGP1g9OUgicfWzMy5MFFbpv47y1zOG9ZZAENZvmDgzdmcK1nDTYVEV7eib0UPj7rj62r_SwhexcHuvOksT-o1", ENDITEM, 
		"Name=UserName", "Value=kirkivkumar", ENDITEM, 
		"Name=Password", "Value=Kirki123$", ENDITEM, 
		"Name=RememberMe", "Value=false", ENDITEM, 
		LAST);

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_custom_request("SetGAClientID_2", 
		"URL=https://www.resenetechspec.com/Home/SetGAClientID?id=2001375033.1560567924", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.resenetechspec.com/", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	lr_end_transaction("credentials n signin",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("logoff");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_submit_data("LogOff", 
		"Action=https://www.resenetechspec.com/Account/LogOff", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://www.resenetechspec.com/", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=__RequestVerificationToken", "Value=bvDVnSvy7ae4qY2lXc_kUapZaTB3SysXXqeEdjY4TcTCHZMBXIQh4MvMzpXtSr3PUpR2pAhsmVKec8jpzaRzkM8Q4Ampn_vkgv3ULNt6c6ocrdmexxW4R2l_yUxmh0bc0", ENDITEM, 
		LAST);

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_custom_request("SetGAClientID_3", 
		"URL=https://www.resenetechspec.com/Home/SetGAClientID?id=2001375033.1560567924", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.resenetechspec.com/", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	lr_end_transaction("logoff",LR_AUTO);

	lr_think_time(3);

	return 0;
}