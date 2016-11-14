/* (c) Magnus Auvinen. See licence.txt in the root of the distribution for more information. */
/* If you are missing that file, acquire a complete release at teeworlds.com.                */
#ifndef ENGINE_SHARED_CONFIG_VARIABLES_H
#define ENGINE_SHARED_CONFIG_VARIABLES_H
#undef ENGINE_SHARED_CONFIG_VARIABLES_H // this file will be included several times

//tee
MACRO_CONFIG_INT(ClAutoswitchWeapons, cl_autoswitch_weapons, 0, 0, 1, "Auto switch weapon on pickup")
MACRO_CONFIG_INT(PlayerUseCustomColor, player_use_custom_color, 0, 0, 1, "Toggles usage of custom colors")
MACRO_CONFIG_INT(PlayerColorBody, player_color_body, 65408, 0, 0xFFFFFF, "Player body color")
MACRO_CONFIG_INT(PlayerColorFeet, player_color_feet, 65408, 0, 0xFFFFFF, "Player feet color")
MACRO_CONFIG_STR(PlayerSkin, player_skin, 24, "default", "Player skin")
MACRO_CONFIG_STR(PlayerName, player_name, 16, "nameless tee", "Name of the player")
MACRO_CONFIG_STR(PlayerClan, player_clan, 12, "", "Clan of the player")
MACRO_CONFIG_INT(PlayerCountry, player_country, -1, -1, 1000, "Country of the player")

//core
MACRO_CONFIG_STR(UiServerAddress, ui_server_address, 64, "localhost:8303", "Interface server address")
MACRO_CONFIG_STR(Password, password, 32, "", "Password to the server")
MACRO_CONFIG_STR(Logfile, logfile, 128, "", "Filename to log all output to")
MACRO_CONFIG_INT(ConsoleOutputLevel, console_output_level, 0, 0, 2, "Adjusts the amount of information in the console")
MACRO_CONFIG_INT(ClCpuThrottle, cl_cpu_throttle, 1, 1, 100, "")
MACRO_CONFIG_STR(Bindaddr, bindaddr, 128, "",  "Address to bind the client to")
MACRO_CONFIG_INT(Debug, debug, 0, 0, 1, "Debug mode")
#endif