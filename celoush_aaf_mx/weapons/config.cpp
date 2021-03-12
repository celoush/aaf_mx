class CfgPatches
{
	class Celoush_Weapons
	{
		author = "celoush";
		requiredAddons[] = {"A3_Weapons_F_Rifles_MX"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
    		authorUrl = "https://github.com/celoush/";
	};
};


class CfgWeapons
{
	class arifle_MX_F;

	class celoush_aaf_arifle_MX_F: arifle_MX_F
	{
		
		displayName = "MX AAF 6.5 mm";
		author = "Celoush";
		baseWeapon = "celoush_aaf_arifle_MX_F";
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag_Tracer","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green_mag_Tracer"};
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\A3\weapons_f\ammoboxes\bags\data\backpack_compact_digi_co.paa","\A3\weapons_f\ammoboxes\bags\data\backpack_compact_digi_co.paa"};		
	};

}
