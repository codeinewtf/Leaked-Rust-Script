#include <direct.h>
#include <iostream>
#include <string>
#include <wtypes.h>
#include <fstream>
#include <d3d9types.h>
#include <random>
#include <strsafe.h>
#include <direct.h>
#include <Windows.h>
#include <map>


class Includes {
public:
	static std::string sub1;
	static std::string uid1;
	static HDC ragedc;
	static float game_sensitivity;
	static float XCONTROL;
	static float YCONTROL;
	static float bulletscale;
	static int XSCALE;
	static int YSCALE;
	static int currentTab;
	static int currentTab2;
	static int Tab;
	static int button;
	static int selectedItemWP;
	static int selectedItemSC;
	static int selectedItemBR;
	static int selectedCross;
	static int resbind;
	static int akbind;
	static int lrbind;
	static int hgbind;
	static int s1;
	static int s2;
	static int s;
	static int zmbind;
	static int mpbind;
	static int csbind;
	static int tmbind;
	static int smbind;
	static int m2bind;
	static int ptbind;
	static int xxbind;
	static int yybind;
	static int hhbind;
	static int ssbind;
	static int slbind;
	static int bobind;
	static int brbind;
	static int crouch_key;
	static int w_key;
	static int a_key;
	static int s_key;
	static int d_key;
	static int hpbind;
	static int subColumn;
	static int currentColumn;
	static int hsbind;
	static int codekey;
	static int code1;
	static int code2;
	static int code3;
	static int code4;
	static int crosshairsize;
	static int crossbind;
	static int cx;
	static int cy;
	static int rpbind;
	static int pybind;
	static int m9bind;
	static int m3bind;
	static int revbind;

	static bool running;
	static bool showing;
	static bool rememberme;
	static bool recoil;
	static bool autodetect;
	static bool hideshow;
	static bool auto_lock;
	static bool crosshair;
	static bool clrnon;
	static bool clrprp;
	static bool clrgrn;
	static bool clrblu;
	static bool clrcyn;
	static bool clrred;
	static bool hide_on_ads;
	static bool legitmode;
	static bool bRapidf;
	static bool hipfire;
	static bool show_info;
	static bool show_snek;
	static bool crossrandomcolor;
	static bool zoom;
	static bool antiafk;
	static bool hip_active;
	static bool randomxy_active;
	static bool m249_active;
	static bool semi_active;
	static bool custom_active;
	static bool thompson_active;
	static bool mp5_active;
	static bool lr_active;
	static bool break_active;
	static bool boost_active;
	static bool silencer_active;
	static bool x16_active;
	static bool simple_active;
	static bool sniper_active;
	static bool resetbut;
	static bool ak_active;
	static bool holo_active;
	static bool py_active;
	static bool m39_active;
	static bool m92_active;
	static bool revolver_active;
	static const char* Enabled;
	static const char* Active_Weapon;
	static const char* Active_Scopes;
	static const char* Active_Barrel;
	static const char* Active_Cross;
	static const char* Cross_color;
	static char* cfgname;
	static char username[256];
	static char password[256];
};