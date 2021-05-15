class CfgPatches
{
	class HoldBreathImproved
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] =
		{
			"DZ_Data"
		};
	};
};
class CfgMods
{
	class HoldBreathImproved
	{
		dir = "HoldBreathImproved";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "HoldBreathImproved";
		credits = "DUAL";
		author = "DUAL";
		authorID = "0";
		version = "1.0";
		extra = 0;
		type = "mod";
		dependencies[] =
		{
			"Game",
			"World",
			"Mission"
		};
		class defs
		{
			class gameScriptModule
			{
				value = "";
				files[] =
				{
					"HoldBreathImproved\3_Game"
				};
			};
			class worldScriptModule
			{
				value = "";
				files[] =
				{
					"HoldBreathImproved\4_World"
				};
			};
		};
	};
};
