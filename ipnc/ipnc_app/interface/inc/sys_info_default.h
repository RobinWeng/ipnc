
#ifndef __SYS_INFO_DEFAULT_H__
#define __SYS_INFO_DEFAULT_H__

static SysInfo SysInfoDefault =
{
	ACOUNT_DEFAULT,
	DEVICE_TYPE_DEFAULT,
	/* face_config */
	{
		FDETECT_DEF,
		0,
		0,
		0,
		1280,
		720,
		75,
		0,
		0,
		75,
		1,
		0,
		0
	},
	/* audio_config */
	{
		0,
		0,
		2,
		75,
		0,
		0,
		0,
		0,
		75
	},
	/* osd_config */
	{
		{
			1,
			1,
			1,
			1,
			0,
			1,
			"vl_text1",
			0
		},
		{
			1,
			1,
			1,
			1,
			0,
			1,
			"vl_text2",
			0
		},
		{
			1,
			1,
			1,
			1,
			0,
			1,
			"vl_text3",
			0
		},
		{
			1,
			1,
			1,
			1,
			0,
			1,
			"vl_text4",
			0
		},
		{
			1,
			1,
			1,
			1,
			0,
			1,
			"vl_text5",
			0
		},
		{
			1,
			1,
			0,
			0,
			0,
			1,
			"vl_text6",
			0
		},
		{
			1,
			1,
			0,
			0,
			0,
			1,
			"vl_text7",
			0
		},
		{
			1,
			1,
			0,
			0,
			0,
			1,
			"vl_text8",
			0
		},
		
	},
	/* codec_advconfig */
	{
		{
			30,
			0,
			28,
			1,
			42,
			0,
			100,
			0,
			0
		},
		{
			30,
			0,
			28,
			1,
			42,
			0,
			100,
			0,
			0
		},
		{
			30,
			0,
			28,
			1,
			42,
			0,
			100,
			0,
			0
		},
		{
			30,
			0,
			28,
			1,
			42,
			0,
			100,
			0,
			0
		},
		{
			30,
			0,
			28,
			1,
			42,
			0,
			100,
			0,
			0
		},
		{
			30,
			0,
			28,
			1,
			42,
			0,
			100,
			0,
			0
		},
		{
			30,
			0,
			28,
			1,
			42,
			0,
			100,
			0,
			0
		},
		{
			30,
			0,
			28,
			1,
			42,
			0,
			100,
			0,
			0
		},
		
	},
	/* codec_roiconfig */
	{
		{
			0,
			{
				{
					0,
					0,
					0,
					0,
				},
				{
					0,
					0,
					0,
					0,
				},
				{
					0,
					0,
					0,
					0,
				},
			},
		},
		{
			0,
			{
				{
					0,
					0,
					0,
					0,
				},
				{
					0,
					0,
					0,
					0,
				},
				{
					0,
					0,
					0,
					0,
				},
			},
		},
		{
			0,
			{
				{
					0,
					0,
					0,
					0,
				},
				{
					0,
					0,
					0,
					0,
				},
				{
					0,
					0,
					0,
					0,
				},
			},
		},
		{
			0,
			{
				{
					0,
					0,
					0,
					0,
				},
				{
					0,
					0,
					0,
					0,
				},
				{
					0,
					0,
					0,
					0,
				},
			},
		},
		{
			0,
			{
				{
					0,
					0,
					0,
					0,
				},
				{
					0,
					0,
					0,
					0,
				},
				{
					0,
					0,
					0,
					0,
				},
			},
		},
		{
			0,
			{
				{
					0,
					0,
					0,
					0,
				},
				{
					0,
					0,
					0,
					0,
				},
				{
					0,
					0,
					0,
					0,
				},
			},
		},
		{
			0,
			{
				{
					0,
					0,
					0,
					0,
				},
				{
					0,
					0,
					0,
					0,
				},
				{
					0,
					0,
					0,
					0,
				},
			},
		},
		{
			0,
			{
				{
					0,
					0,
					0,
					0,
				},
				{
					0,
					0,
					0,
					0,
				},
				{
					0,
					0,
					0,
					0,
				},
			},
		},
		
	},
	{
		
		{
			352,
			240,
			8557,
			"H264",
			"h264",
			0
		},
		{
			352,
			240,
			8558,
			"H264",
			"h264",
			0
		},
		{
			352,
			240,
			8559,
			"H264",
			"h264",
			0
		},
		{
			352,
			240,
			8560,
			"H264",
			"h264",
			0
		},
		{
			352,
			240,
			554,
			"JPEG",
			"JPEG",
			0
		},
		{
			352,
			240,
			8554,
			"MPEG4",
			"MPEG4",
			0
		},
		{
			352,
			240,
			8555,
			"MPEG4",
			"MPEG4",
			0
		},
		{
			352,
			240,
			8556,
			"H264",
			"h264",
			0
		},
		
	},
  	{
		MOTIONENABLE_DEFAULT,
		MOTIONCENABLE_DEFAULT,
		MOTIONLEVEL_DEFAULT,
		MOTIONCVALUE_DEFAULT,
		MOTIONBLOCK_DEFAULT
  	},
	{
		FTP_SERVER_IP_DEFAULT,
		FTP_USERNAME_DEFAULT,
		FTP_PASSWORD_DEFAULT,
		FTP_FOLDERNAME_DEFAULT,
		FTP_IMAGEAMOUNT_DEFAULT,
		FTP_PID_DEFAULT,
		FTP_PORT_DEFAULT,
        RFTPENABLE_DEFAULT,
	    FTPFILEFORMAT_DEFAULT
	},
	{
		SMTP_SERVER_IP_DEFAULT,
		SMTP_USERNAME_DEFAULT,
		SMTP_PASSWORD_DEFAULT,
		SMTP_AUTHENTICATION_DEFAULT,
		SMTP_SNEDER_EMAIL_DEFAULT,
		SMTP_RECEIVER_EMAIL_DEFAULT,
		SMTP_CC_DEFAULT,
		SMTP_SUBJECT_DEFAULT,
		SMTP_TEXT_DEFAULT,
		SMTP_ATTACHMENTS_DEFAULT,
		SMTP_VIEW_DEFAULT,
		ASMTPATTACH_DEFAULT,
		ATTFILEFORMAT_DEFAULT
	},
	{
		SDFILEFORMAT_DEFAULT,
		SDRENABLE_DEFAULT,
		SD_INSERT_DEFAULT
    },
	{
		TITLE_DEFAULT,
		WHITEBALANCE_DEFAULT,
		DAY_NIGHT_DEFAULT,
		TV_CABLE_DEFAULT,
		BINNING_DEFAULT,
		BACKLIGHT_CONTROL_DEFAULT,
		BACKLIGHT_VALUE_DEFAULT,
		BRIGHTNESS_DEFAULT,
		CONTRAST_DEFAULT,
		SATURATION_DEFAULT,
		SHARPNESS_DEFAULT,
		LOSTALARM_DEFAULT,
		SDAENABLE_DEFAULT,
		AFTPENABLE_DEFAULT,
		ASMTPENABLE_DEFAULT,
		STREAMTYPE_DEFAULT,
		VCODECMODE_DEFAULT,
		VCODECCOMBO_DEFAULT,
		VCODECRES_DEFAULT,
		RATECONTROL_DEFAULT,
		FRAMERATE1_DEFAULT,
		FRAMERATE2_DEFAULT,
		FRAMERATE3_DEFAULT,
		JPEGQUALITY_DEF,
		MPEG41BITRATE_DEFAULT,
		MPEG42BITRATE_DEFAULT,
		MPEG41XSIZE_DEFAULT,
		MPEG41YSIZE_DEFAULT,
		MPEG42XSIZE_DEFAULT,
		MPEG42YSIZE_DEFAULT,
		JPEGXSIZE_DEFAULT,
		JPEGYSIZE_DEFAULT,
		MPEG41XSIZE_DEFAULT,
		MPEG41YSIZE_DEFAULT,
		MPEG42XSIZE_DEFAULT,
		MPEG42YSIZE_DEFAULT,
		MPEG43XSIZE_DEFAULT,
		MPEG43YSIZE_DEFAULT,
		MPEG44XSIZE_DEFAULT,
		MPEG44YSIZE_DEFAULT,
		MPEG45XSIZE_DEFAULT,
		MPEG45YSIZE_DEFAULT,
		SUPPORTSTREAM5_DEFAULT,
		SUPPORTSTREAM6_DEFAULT,
		SUPPORTSTREAM7_DEFAULT,
		SUPPORTSTREAM8_DEFAULT,
		SUPPORTSTREAM1_DEFAULT,
		SUPPORTSTREAM2_DEFAULT,
		SUPPORTSTREAM3_DEFAULT,
		SUPPORTSTREAM4_DEFAULT,
		
		
		ALARMDURATION_DEFAULT,
		AEW_SWITCH_DEFAULT,
		GIOINENABLE_DEFAULT,
		GIOINTYPE_DEFAULT,
		GIOOUTENABLE_DEFAULT,
		GIOOUTTYPE_DEFAULT,
		TSTAMPENABLE_DEFAULT,
		AVIDURATION_DEFAULT,
		AVIFORMAT_DEFAULT,
		ALARMSTATUS_DEFAULT,
      	MIRROR_DEF,
      	ADVMODE_DEF,
      	DEMOCFG_DEF,
      	REGUSR_DEF,
      	OSDSTREAM_DEF,
      	OSDWINNUM_DEF,
      	OSDWIN_DEF,
      	OSDTEXT_DEF,
		AEW_TYPE_DEFAULT,
		HISTOGRAM_DEF,
		GBCE_DEF,
		0,
		0,
		DATEFORMAT_DEFAULT,
		TSTAMPFORMAT_DEFAULT,
		1,
		1,
		0,
		"snap",
		0,
		RATECONTROL_DEFAULT,
		RATECONTROL_DEFAULT,
		0,
		LOCALDISPLAY_DEFAULT,
		1,
 		0,
		0,
		0,
		0,
		0,
		52,
		1, /* Enable infinite schedule */
		0,
		0,
		0,
		H264_CODEC,
		H264_CODEC,
		H264_CODEC,
		SCHEDULE_DEFAULT,
     	0,
     	0,
     	0,
     	0,
     	MODELNAME_DEFAULT,
     	DUMMY_DEF,
		{
			{IP_DEFAULT},
			{NETMASK_DEFAULT},
			{GATEWAY_DEAFULT},
			{DNS_DEFAULT},
			HTTP_PORT_DEFAULT,
			HTTPS_PORT_DEFAULT,
			DHCP_ENABLE_DEFAULT,
			DHCP_CONFIG_DEFAULT,
			NTP_SERVER_DEFAULT,
			NTP_TIMEZONE_DEFAULT,
			NTP_FREQUENCY_DEFAULT,
			TIME_FORMAT_DEFAULT,
			DAYLIGHT_DEFAULT,
			MAC_DEFAULT,
			MPEG4_RESOLUTION_DEF,
			MPEG4_RESOLUTION2_DEF,
			LIVE_RESOLUTION_DEF,
			MPEG4QUALITY_DEF,
			SUPPORTMPEG4_DEFAULT,
			IMAGEFORMAT_DEFAULT,
			IMAGESOURCE_DEFAULT,
			DEFAULTSTORAGE_DEFAULT,
			DEFAULTCARDGETHTM_DEFAULT,
			BRANDURL_DEFAULT,
			BRANDNAME_DEFAULT,
			SUPPORTTSTAMP_DEFAULT,
			SUPPORTMOTION_DEFAULT,
			SUPPORTWIRELESS_DEFAULT,
			SERVICEFTPCLIENT_DEFAULT,
			SERVICESMTPCLIENT_DEFAULT,
			SERVICEPPPOE_DEFAULT,
			SERVICESNTPCLIENT_DEFAULT,
			SERVICEDDNSCLIENT_DEFAULT,
			SUPPORTMASKAREA_DEFAULT,
			MAXCHANNEL_DEFAULT,
			SUPPORTRS485_DEFAULT,
			SUPPORTRS232_DEFAULT,
			LAYOUTNUM_DEFAULT,
			SUPPORTMUI_DEFAULT,
			MUI_DEFAULT,
			SUPPORTSEQUENCE_DEFAULT,
			QUADMODESELECT_DEFAULT,
			SERVICEIPFILTER_DEFAULT,
			OEMFLAG0_DEFAULT,
			SUPPORTDNCONTROL_DEFAULT,
			SUPPORTAVC_DEFAULT,
			SUPPORTAUDIO_DEFAULT,
			SUPPORTPTZPAGE_DEFAULT,
			MULTICAST_ENABLE_DEFAULT
      	},
	},
	{
            {
                "ptz0",

                0x03,

                PTZCTRL_PELCO_D,
                
                DEV_NO_RS485_0,
                
		PTZ_SPEED_DEFAULT,
		PTZ_DATABIT_DEFAULT,
		PTZ_STOPBIT_DEFAULT,
		PTZ_PARITY_DEFAULT,
                PTZ_STREAMCTRL_DEFAULT,
                PRESET_NOTE_DEFAULT
            },
            {
                "ptz1",

                0x01,

                PTZCTRL_PELCO_D,
                
                DEV_NO_NONE,

		PTZ_SPEED_DEFAULT,
		PTZ_DATABIT_DEFAULT,
		PTZ_STOPBIT_DEFAULT,
		PTZ_PARITY_DEFAULT,
                PTZ_STREAMCTRL_DEFAULT,
                PRESET_NOTE_DEFAULT
            },
            {
                "ptz2",

                0x01,

                PTZCTRL_PELCO_D,
                
                DEV_NO_NONE,

		PTZ_SPEED_DEFAULT,
		PTZ_DATABIT_DEFAULT,
		PTZ_STOPBIT_DEFAULT,
		PTZ_PARITY_DEFAULT,
                PTZ_STREAMCTRL_DEFAULT,
                PRESET_NOTE_DEFAULT
            },
            {
                "ptz3",

                0x01,

                PTZCTRL_PELCO_D,
                
                DEV_NO_NONE,

		PTZ_SPEED_DEFAULT,
		PTZ_DATABIT_DEFAULT,
		PTZ_STOPBIT_DEFAULT,
		PTZ_PARITY_DEFAULT,
                PTZ_STREAMCTRL_DEFAULT,
                PRESET_NOTE_DEFAULT
            },
	},

    
	CUR_LOG_DEFAULT,

	{
	    {
                    DEFAULT_MODBUS_RS,
                    DEFAULT_MODBUS_RS,
                    DEFAULT_MODBUS_RS,
                    DEFAULT_MODBUS_RS,
            },
	    {
    	        DEFAULT_MODBUS_TCP,
    	        DEFAULT_MODBUS_TCP,
    	        DEFAULT_MODBUS_TCP,
    	        DEFAULT_MODBUS_TCP,
                 
    	        DEFAULT_MODBUS_TCP,
    	        DEFAULT_MODBUS_TCP,
    	        DEFAULT_MODBUS_TCP,
    	        DEFAULT_MODBUS_TCP
    	    },
    	    0,
    	    0
        }
};

#endif
