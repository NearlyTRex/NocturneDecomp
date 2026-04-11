#pragma once

// Dependencies
#include "system/basetypes.h"
#include "constants.h"
#include "prototypes/prototypes_600000.h"

// =============================================================================
// CONSTANTS
// =============================================================================

// TerminatedCString constants
static TerminatedCString s_CEnemy_006804b8 = "CEnemy";
static TerminatedCString s_UNDO_TMP_00680800 = "$$UNDO$$.TMP";
static TerminatedCString s_PLAYMSN_TMP_00680820 = "$PLAYMSN.TMP";
static TerminatedCString s_DUPACTOR_TMP_006808f8 = "DUPACTOR.TMP";
static TerminatedCString s_CEdCheck_006809e4 = "$CEdCheck$$";
static TerminatedCString s_SNetPlayer_00680a0c = "$SNetPlayer$$";
static TerminatedCString s_GSPlayer_PGameSettingsCh_00680a20 = "$GSPlayer$:PGameSettingsChanged$$";
static TerminatedCString s_SChatHistory_00680a48 = "$SChatHistory$$";
static TerminatedCString s_CNetGame_00680a5c = "$CNetGame$$";
static TerminatedCString s_CMouse_00680b88 = "$CMouse$$";
static TerminatedCString s_CPassenger_00680ba0 = "$CPassenger$$";
static TerminatedCString s_CPathMap_00680c78 = "$CPathMap$$";
static TerminatedCString s_CPendulum_00680c8c = "$CPendulum$$";
static TerminatedCString s_anon_00680c9c = "PBM\032PBG\032";
static TerminatedCString s_CPackedBitmap_00680ca8 = "$CPackedBitmap$$";
static TerminatedCString s_CPod_00680cc4 = "$CPod$$";
static TerminatedCString s_CDemonPod_00680ce4 = "$CDemonPod$$";
static TerminatedCString s_CScat_00680d04 = "$CScat$$";
static TerminatedCString s_none_00680d58 = "(none)";
static TerminatedCString s_CScript_00681064 = "$CScript$$";
static TerminatedCString s_CSentinel_00681078 = "$CSentinel$$";
static TerminatedCString s_SVDBox_00681400 = "$SVDBox$$";
static TerminatedCString s_SRoom_CDemonSet_00681410 = "$SRoom$:CDemonSet$$";
static TerminatedCString s_C3DSLight_00681428 = "$C3DSLight$$";
static TerminatedCString s_C3DSCamera_0068143c = "$C3DSCamera$$";
static TerminatedCString s_CDemonRaytrace_00681450 = "$CDemonRaytrace$$";
static TerminatedCString s_CDemonSet_00681468 = "$CDemonSet$$";
static TerminatedCString s_SIntersectXZCylinder_00681479 = "$SIntersectXZCylinder$$";
static TerminatedCString s_SCollisionReturnInfo_00681495 = "$SCollisionReturnInfo$$";
static TerminatedCString s_SRaytraceState_006814b1 = "$SRaytraceState$$";
static TerminatedCString s_CZThumb_00681688 = "$CZThumb$$";
static TerminatedCString s_GroundTypes_006816d8 = ".\\GroundTypes";
static TerminatedCString s_CShotgun_0068181c = "$CShotgun$$";
static TerminatedCString s_CShovel_00681830 = "$CShovel$$";
static TerminatedCString s_CSimBox_00681844 = "$CSimBox$$";
static TerminatedCString s_skeledit_ini_00681868 = "skeledit.ini";
static TerminatedCString s_gore_00681878 = "gore";
static TerminatedCString s_file_error_006818e0 = "(file error)";
static TerminatedCString s_TEST_MOT_00681a08 = "$$TEST$$.MOT";
static TerminatedCString s_BatchDfm_txt_00681a18 = "BatchDfm.txt";
static TerminatedCString s_BatchDfm_log_00681a28 = "BatchDfm.log";
static TerminatedCString s_LodVert_00681a44 = "$LodVert$$";
static TerminatedCString s_CSkeleton_00681a73 = "$CSkeleton$$";
static TerminatedCString s_CDeformableModel_00681a84 = "$CDeformableModel$$";
static TerminatedCString s_SVert_CDeformableModel_00681a9c = "$SVert$:CDeformableModel$$";
static TerminatedCString s_CSmiley_00681ac4 = "$CSmiley$$";
static TerminatedCString s_CMP3Decoder_00681d64 = "$CMP3Decoder$$";
static TerminatedCString s_SfxSample_00681d84 = "$SfxSample$$";
static TerminatedCString s_SfxOptions_00681da4 = "$SfxOptions$$";
static TerminatedCString s_SfxSlot_00681dc4 = "$SfxSlot$$";
static TerminatedCString s_STrainNoise_00682184 = "$STrainNoise$$";
static TerminatedCString s_CSpike_00684160 = "$CSpike$$";
static TerminatedCString s_CStairs_00684198 = "$CStairs$$";
static TerminatedCString s_CTempleStone_006841ac = "$CTempleStone$$";
static TerminatedCString s_CStranger_006841c4 = "$CStranger$$";
static TerminatedCString s_CSuccubus_006841dc = "$CSuccubus$$";
static TerminatedCString s_COptimize_006841ed = "$COptimize$$";
static TerminatedCString s_CObj_006841fe = "$CObj$$";
static TerminatedCString s_CPoly_0068420a = "$CPoly$$";
static TerminatedCString s_CP3D_00684217 = "$CP3D$$";
static TerminatedCString s_CP2D_00684223 = "$CP2D$$";
static TerminatedCString s_CVec_0068422f = "$CVec$$";
static TerminatedCString s_CSvetlana_00684258 = "$CSvetlana$$";
static TerminatedCString s_CBassPlayer_00684274 = "$CBassPlayer$$";
static TerminatedCString s_CDrummer_00684288 = "$CDrummer$$";
static TerminatedCString s_CTeleportDest_006842a0 = "$CTeleportDest$$";
static TerminatedCString s_CTeleport_006842b8 = "$CTeleport$$";
static TerminatedCString s_CTentacle_006842d0 = "$CTentacle$$";
static TerminatedCString s_CTextureList_006842fc = "$CTextureList$$";
static TerminatedCString s_CTommyGun_00684314 = "$CTommyGun$$";
static TerminatedCString s_CTrap_0068432c = "$CTrap$$";
static TerminatedCString s_CTrash_00684340 = "$CTrash$$";
static TerminatedCString s_CTrigger_006843ec = "$CTrigger$$";
static TerminatedCString s_CTurret_00684444 = "$CTurret$$";
static TerminatedCString s_CTVBat_00684458 = "$CTVBat$$";
static TerminatedCString s_CVampireBoss_0068446c = "$CVampireBoss$$";
static TerminatedCString s_CVehicle_00684494 = "$CVehicle$$";
static TerminatedCString s_CTire_006844a4 = "$CTire$$";
static TerminatedCString s_CCryptVessel_006844d0 = "$CCryptVessel$$";
static TerminatedCString s_CWater_006846c4 = "$CWater$$";
static TerminatedCString s_CWaterActor_00684878 = "$CWaterActor$$";
static TerminatedCString s_SWaterVertex_0068488c = "$SWaterVertex$$";
static TerminatedCString s_CWayPoint_006848a4 = "$CWayPoint$$";
static TerminatedCString s_CDemonGlobe_006848dc = "$CDemonGlobe$$";
static TerminatedCString s_CWeapon_006848f0 = "$CWeapon$$";
static TerminatedCString s_CWeather_0068494c = "$CWeather$$";
static TerminatedCString s_CWerewolf_00684978 = "$CWerewolf$$";
static TerminatedCString s_CWinFont_00684989 = "$CWinFont$$";
static TerminatedCString s_CZombie_006849b8 = "$CZombie$$";
static TerminatedCString s_ostream_00684ad4 = "$ostream$$";
static TerminatedCString s_strstreambase_00684ae3 = "$strstreambase$$";
static TerminatedCString s_ios_00684af8 = "$ios$$";
static TerminatedCString s_istream_00684b03 = "$istream$$";
static TerminatedCString s_fstreambase_00684b12 = "$fstreambase$$";
static TerminatedCString s_Stack_Overflow_00684b24 = "Stack Overflow!\r\n";
static TerminatedCString s_streambuf_0068503c = "$streambuf$$";
static TerminatedCString s_strstreambuf_0068504d = "$strstreambuf$$";
static TerminatedCString s_s_0123456789abcdefghijkl_006851d8 = "0123456789abcdefghijklmnopqrstuvwxyz";
static TerminatedCString s_DEST_00686842 = "DEST";
static TerminatedCString s_DEST_00686852 = "DEST";
static TerminatedCString s_DEST_00686862 = "DEST";
static TerminatedCString s_DEST_00686872 = "DEST";
static TerminatedCString s_DEST_00686882 = "DEST";
static TerminatedCString s_DEST_00686892 = "DEST";
static TerminatedCString s_DEST_006868a2 = "DEST";
static TerminatedCString s_DEST_006868b2 = "DEST";
static TerminatedCString s_DEST_006868c2 = "DEST";
static TerminatedCString s_DEST_006868d2 = "DEST";
static TerminatedCString s_DEST_006868f2 = "DEST";
static TerminatedCString s_DEST_00686902 = "DEST";
static TerminatedCString s_DEST_00686912 = "DEST";
static TerminatedCString s_DEST_00686922 = "DEST";
static TerminatedCString s_DEST_00686932 = "DEST";
static TerminatedCString s_DEST_00686942 = "DEST";
static TerminatedCString s_DEST_00686952 = "DEST";
static TerminatedCString s_DEST_00686962 = "DEST";
static TerminatedCString s_DEST_00686972 = "DEST";
static TerminatedCString s_DEST_00686982 = "DEST";
static TerminatedCString s_DEST_00686992 = "DEST";
static TerminatedCString s_DEST_006869a2 = "DEST";
static TerminatedCString s_DEST_006869b2 = "DEST";
static TerminatedCString s_DEST_006869c2 = "DEST";

// char*[12] constants
static char* g_MonthNamesLong[12] = {
    "January", "February", "March", "April",
    "May", "June", "July", "August",
    "September", "October", "November", "December"
};

// char*[141] constants
static char* g_CommandTemplates[141] = {
    ":<label>", "{", "}", "addItemToInventory(<actor:CHero'hero'>, <actor'itemToAdd'>)",
    "addLightFilter(<spotLight>, <filename:art\\*.raw>, <float'filterTime'>)", "advanceLightFilter(<spotLight>)", "allowEnemyAttack(<condition>)", "allowHeroControls(<condition>)",
    "allowHeroDamage(<condition>)", "attachActorToPlatform(<actor'actor to attach'>, <actor:CPlatform'platform to attach to'>)", "beginFadeIn", "beginFadeOut",
    "breakPoint", "cancelCameraHold", "cancelWalkTo(<actor:CCharacter>)", "chainToMission(<filename:world\\*.msn>)",
    "clearActorVariable(<actorVariable>)", "createExplosion(<float'radius'>, <float'posX'>, <float'posY'>, <float'posZ'>)", "createExplosion(<float'radius'>, <actor'position actor'>)", "createExplosion(<float'radius'>, <float'posX'>, <float'posY'>, <float'posZ'>, <float'radius'>)",
    "createExplosion(<float'radius'>, <actor'position actor'>, <float'radius'>)", "dbSay(<dbTag>)", "dbStartSay(<dbTag>)", "debug(<text'debug message'>)",
    "dismember(<actor:CCharacter'character to dismember'>, <bodyPartList:0>)", "dismember(<actor:CCharacter'character to dismember'>, <bodyPartList:0>, <float'velX'>, <float'velY'>, <float'velZ'>, <float'velConeAngle'>)", "deleteActor(<actor'actor to delete'>)", "display(<text'display text'>)",
    "displayBitmap(<filename:art\\*.raw'bitmap filename'>, <int'xSize'>, <int'ySize'>)", "else", "enableCamera(<camera>, <condition>)", "enableCameraGroup(<int'cameraGroupNumber'>, <condition>)",
    "enableHealthBar(<actor:CCharacter>, <condition>)", "end", "fadeAmbientSound(<float'volume'>, <float'fadeTime'>)", "fadeIn",
    "fadeOut", "fadeSfx(<sfxUsed>, <float'volume'>, <float'fadeTime'>)", "finishedAct()", "flagOn(<persistentEventName>)",
    "flagOff(<persistentEventName>)", "gameFlagOn(<gameFlagName>)", "gameFlagOff(<gameFlagName>)", "gesture(<actor:CCharacter>, <motionName:0>)",
    "getIniInt(<iniVariable>, <counterSet>)", "getTriggerActor(<actorVariable>, <actor:CTrigger>)", "gosub <label>", "goto <label>",
    "gtfo(<text>)", "holsterWeapon(<actor:CHero>)", "holsterWeapon(<actor:CHero>, <condition>)", "hurtCharacter(<actor:CCharacter>, <damageType>, <float'damageAmount'>)",
    "idle", "if(<condition>)", "incCounter(<counterSet>)", "killCharacter(<actor:CCharacter>, <deathType>)",
    "killCharacter(<actor:CCharacter>, <deathType>, <float'velX'>, <float'velY'>, <float'velZ'>)", "killCharacter(<actor:CCharacter>, <deathType>, <float'velX'>, <float'velY'>, <float'velZ'>, <float'angle'>)", "killHero(<deathType>)", "killSfx(<sfxUsed>)",
    "killSfx(<sfxUsed>, <float'fadeOutTime'>)", "letterBox(<letterBoxMode>)", "lightning()", "lockFocusActor(<condition>)",
    "lookAt(<actor:CCharacter>, <actor>)", "openDoor(<actor:CCharacter>, <actor:CDoor>)", "movePlatform(<actor:CPlatform'platformToMove'>, <float'destination parameter (0..1)'>, <float'movement rate (params/sec)'>)", "playSfx(<wav>)",
    "playSfx(<wav>, <sfxSet>)", "pressButton(<actor:CHero>, <controlButton>)", "raise(<eventCommand>)", "releaseButton(<actor:CHero>, <controlButton>)",
    "removeAllItemsFromInventory(<actor:CHero>)", "removeItemFromInventory(<actor:CHero>, <actor>)", "removeKeys(<int'keyMask'>)", "return",
    "rollCredits()", "say(<actor:CCharacter>, <wav>, <text>)", "selectWeapon(<actor:CHero>, <actorClass:CWeapon>)", "setActorVariable(<actorVariable>, <actor>)",
    "setAmbientSound(<wav>)", "setCameraAmbient(<camera>, <float'ambientValue'>)", "setCameraGroup(<camera>, <int'cameraGroupIndex'>)", "setCounter(<counterSet>)",
    "setCounter(<counterSet>, <int>)", "setCharacterHealth(<actor:CCharacter>, <float'health pct (0..1)'>)", "setFocusActor(<actor>)", "setGroupAmbient(<int'cameraGroupIndex'>, <float'ambientValue'>)",
    "setHeroTask(<actor:CHero>, <heroTask>)", "setIniInt(<iniVariable>, <int>)", "setLeverState(<actor:CLever>, <condition>)", "setLightFilterFrame(<spotLight>, <int'frameNumber'>)",
    "setModelState(<actor:CCharacter>, <motionState:0>)", "setSayTimeOverride()", "setSayTimeOverride(<float'sayTimeDuration'>)", "setSkipLabel(<label>)",
    "setSpeaker(<actor:CCharacter>)", "setTimer(<timer>, <float'timerDuration'>)", "setTimeFactor(<float>)", "setVictim(<actor:CEnemy>)",
    "setVictim(<actor:CEnemy>, disable)", "setVictim(<actor:CEnemy>, <actor:CCharacter>)", "setWeather(<weather>)", "shakeScreen(<float'frequency'>, <float'attackTime'>, <float'sustainTime'>, <float'releaseTime'>)",
    "slamModelToMotion(<actor:CCharacter>, <motionName:0>)", "snapToFace(<actor'actorToTurn'>, <actor'actorToFace'>)", "startSay(<actor:CCharacter>, <wav>, <text>)", "switchCamera(<camera>)",
    "switchCamera(<camera>, <float'holdTime'>)", "syntaxCheckOff", "syntaxCheckOn", "timedDisplay(<float>, <text>)",
    "turnToFace(<actor:CCharacter'actorToTurn'>, <actor'actorToFace'>)", "waitFor(<condition>)", "wait(<float>)", "walkTo(<actor:CCharacter'actorToWalk'>, <actor'destActor'>, <float'walkDist'>)",
    "walkTo(<actor:CCharacter'actorToWalk'>, <actor'destActor'>, <float'walkDist'>, <float'runDist'>)", "warpTo(<actor'actorToWarp'>, <actor'destActor'>)", "warpTo(<actor'actorToWarp'>, <float'x'>, <float'y'>, <float'z'>, <float'h'>)", "warpTo(<actor'actorToWarp'>, <float'x'>, <float'y'>, <float'z'>, <float'p'>, <float'b'>, <float'h'>)",
    "cmp(<counterUsed> <relOp> <counterUsed>)", "exists(<actor>)", "hasItem(<actor>)", "hasItemType(<actor:CHero>, <actorClass>)",
    "isBroken(<actor:CGlass>)", "isCurrentCamera(<camera>)", "isDead(<actor:CCharacter>)", "isFacing(<actor'lookActor'>, <actor'targetActor'>)",
    "isFacing(<actor'lookActor'>, <actor'targetActor'>, <float'toleranceAngle'>)", "isFadeFinished()", "isInRange(<actor'actor1'>, <actor'actor2'>, <float'distance'>)", "isLightOn(<spotLight)",
    "isNudityEnabled()", "isOfType(<actor>, <text>)", "isSfxActive(<sfxUsed>)", "isTalking(<actor:CCharacter>)",
    "isVictim(<actor:CCharacter>)", "isWeaponDrawn(<actor:CHero>)", "isWearingGasMask(<actor:CHero>)", "randBool(<float'odds'>)",
    "reachedDest(<actor>)"
};

// char*[24] constants
static char* g_MathFunctionNames[24] = {
    (char*)0x00002424, "acos", "asin", "sqrt",
    "exp", "cosh", "sinh", "pow",
    "acosh", "log2", "log", "log10",
    "atanh", "atan2", "ipow", "dpowi",
    "cos", "sin", "tan", "y0",
    "y1", "yn", "mod", "cotan"
};

// char*[3] constants
static char* g_WeatherTypeNames[3] = {"None", "Rain & Lightning", "Snow"};

// char*[41] constants
static char* g_ErrorMessageTable[41] = {
    "No error", "No such file or directory", "Arg list too big", "Exec format error",
    "Bad file number", "Not enough memory", "Permission denied", "File exists",
    "Cross-device link", "Invalid argument", "File table overflow", "Too many open files",
    "No space left on device", "Argument too large", "Result too large", "Resource deadlock would occur",
    "System call interrupted", "Child does not exist", "Resource unavailable, try again", "Device or resource busy",
    "File too large", "I/O error", "Is a directory", "Not a directory",
    "Too many links", "Block device required", "Not a character device", "No such device or address",
    "Not owner", "Broken pipe", "Read-only file system", "Illegal seek",
    "No such process", "Text file busy", "Bad address", "Filename too long",
    "No such device", "No locks available in system", "Unknown system call", "Directory not empty",
    "Illegal multibyte sequence"
};

// char*[4] constants
static char* g_VehicleWheelLocationNames[4] = {"Left front", "Right front", "Left rear", "Right rear"};

// char*[7] constants
static char* g_WeekdayNamesLong[7] = {
    "Sunday", "Monday", "Tuesday", "Wednesday",
    "Thursday", "Friday", "Saturday"
};
static char* g_MathErrorMessages[7] = {
    nullptr, "Domain error", "Argument singularity", "Overflow range error",
    "Underflow range error", "Total loss of significance", "Partial loss of significance"
};

// char*[9] constants
static char* g_DirectionCharacters[9] = {
    "x", "N", "S", "E",
    "W", "NE", "NW", "SE",
    "SW"
};

// char[104] constants
static char g_HideActorsWildcardBuffer[104] = {
    (char)0x2A, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00,
    (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00,
    (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00,
    (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00,
    (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00,
    (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00,
    (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00,
    (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00,
    (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00
};
static char g_DeleteActorsWildcardBuffer[104] = {
    (char)0x2A, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00,
    (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00,
    (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00,
    (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00,
    (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00,
    (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00,
    (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00,
    (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00,
    (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00
};

// char[116] constants
static char g_MsnEditImportWildcardPattern[116] = {
    (char)0x2A, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00,
    (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00,
    (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00,
    (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00,
    (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00,
    (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00,
    (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00,
    (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00,
    (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00,
    (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00
};

// char[128] constants
static char g_OSFontName[128] = {
    (char)0x82, (char)0x6C, (char)0x82, (char)0x72, (char)0x20, (char)0x82, (char)0x6F, (char)0x83, (char)0x53, (char)0x83, (char)0x56, (char)0x83,
    (char)0x62, (char)0x83, (char)0x4E, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00,
    (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00,
    (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00,
    (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00,
    (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00,
    (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00,
    (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00,
    (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00,
    (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00,
    (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00
};

// char[12] constants
static char g_MonthInitial[] = "JFMAMJJASOND";
static char g_MonthSecondInitial[] = "aeapauuuecoe";
static char g_MonthThirdInitial[] = "nbrrynlgptvc";

// char[12][4] constants
static char g_MonthNamesShort[12][4] = {
    "Jan", "Feb", "Mar", "Apr",
    "May", "Jun", "Jul", "Aug",
    "Sep", "Oct", "Nov", "Dec"
};

// char[17] constants
static char g_HexLookupTable[] = "0123456789abcdef";

// char[200] constants
static char g_ActorWildcardBuffer[200] = {
    (char)0x2A, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00,
    (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00,
    (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00,
    (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00,
    (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00,
    (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00,
    (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00,
    (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00,
    (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00,
    (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00,
    (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00,
    (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00,
    (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00,
    (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00,
    (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00,
    (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00,
    (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00
};

// char[256] constants
static char g_ShiftJIS_TrailByteTable[256] = {
    (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00,
    (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00,
    (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00,
    (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00,
    (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00,
    (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x08, (char)0x08, (char)0x08, (char)0x08, (char)0x08, (char)0x08, (char)0x08, (char)0x08,
    (char)0x08, (char)0x08, (char)0x08, (char)0x08, (char)0x08, (char)0x08, (char)0x08, (char)0x08, (char)0x08, (char)0x08, (char)0x08, (char)0x08,
    (char)0x08, (char)0x08, (char)0x08, (char)0x08, (char)0x08, (char)0x08, (char)0x08, (char)0x08, (char)0x08, (char)0x08, (char)0x08, (char)0x08,
    (char)0x08, (char)0x08, (char)0x08, (char)0x08, (char)0x08, (char)0x08, (char)0x08, (char)0x08, (char)0x08, (char)0x08, (char)0x08, (char)0x08,
    (char)0x08, (char)0x08, (char)0x08, (char)0x08, (char)0x08, (char)0x08, (char)0x08, (char)0x08, (char)0x08, (char)0x08, (char)0x08, (char)0x08,
    (char)0x08, (char)0x08, (char)0x08, (char)0x08, (char)0x08, (char)0x08, (char)0x08, (char)0x00, (char)0x08, (char)0x0C, (char)0x0C, (char)0x0C,
    (char)0x0C, (char)0x0C, (char)0x0C, (char)0x0C, (char)0x0C, (char)0x0C, (char)0x0C, (char)0x0C, (char)0x0C, (char)0x0C, (char)0x0C, (char)0x0C,
    (char)0x0C, (char)0x0C, (char)0x0C, (char)0x0C, (char)0x0C, (char)0x0C, (char)0x0C, (char)0x0C, (char)0x0C, (char)0x0C, (char)0x0C, (char)0x0C,
    (char)0x0C, (char)0x0C, (char)0x0C, (char)0x0C, (char)0x08, (char)0x0A, (char)0x0A, (char)0x0A, (char)0x0A, (char)0x0A, (char)0x09, (char)0x09,
    (char)0x09, (char)0x09, (char)0x09, (char)0x09, (char)0x09, (char)0x09, (char)0x09, (char)0x09, (char)0x09, (char)0x09, (char)0x09, (char)0x09,
    (char)0x09, (char)0x09, (char)0x09, (char)0x09, (char)0x09, (char)0x09, (char)0x09, (char)0x09, (char)0x09, (char)0x09, (char)0x09, (char)0x09,
    (char)0x09, (char)0x09, (char)0x09, (char)0x09, (char)0x09, (char)0x09, (char)0x09, (char)0x09, (char)0x09, (char)0x09, (char)0x09, (char)0x09,
    (char)0x09, (char)0x09, (char)0x09, (char)0x09, (char)0x09, (char)0x09, (char)0x09, (char)0x09, (char)0x09, (char)0x09, (char)0x09, (char)0x09,
    (char)0x09, (char)0x09, (char)0x09, (char)0x09, (char)0x09, (char)0x09, (char)0x09, (char)0x09, (char)0x0C, (char)0x0C, (char)0x0C, (char)0x0C,
    (char)0x0C, (char)0x0C, (char)0x0C, (char)0x0C, (char)0x0C, (char)0x0C, (char)0x0C, (char)0x0C, (char)0x0C, (char)0x0C, (char)0x0C, (char)0x0C,
    (char)0x0C, (char)0x0C, (char)0x0C, (char)0x0C, (char)0x0C, (char)0x0C, (char)0x0C, (char)0x0C, (char)0x0C, (char)0x0C, (char)0x0C, (char)0x0C,
    (char)0x0C, (char)0x00, (char)0x00, (char)0x00
};

// char[36] constants
static char g_AlphaNumericCharacters1[] = "0123456789abcdefghijklmnopqrstuvwxyz";
static char g_AlphaNumericCharacters2[] = "0123456789abcdefghijklmnopqrstuvwxyz";

// char[64] constants
static char g_HuffmanData16[64] = {
    (char)0x02, (char)0x01, (char)0x00, (char)0x00, (char)0x08, (char)0x01, (char)0x04, (char)0x01, (char)0x02, (char)0x01, (char)0x00, (char)0x08,
    (char)0x00, (char)0x04, (char)0x02, (char)0x01, (char)0x00, (char)0x01, (char)0x00, (char)0x02, (char)0x08, (char)0x01, (char)0x04, (char)0x01,
    (char)0x02, (char)0x01, (char)0x00, (char)0x0C, (char)0x00, (char)0x0A, (char)0x02, (char)0x01, (char)0x00, (char)0x03, (char)0x00, (char)0x06,
    (char)0x06, (char)0x01, (char)0x02, (char)0x01, (char)0x00, (char)0x09, (char)0x02, (char)0x01, (char)0x00, (char)0x05, (char)0x00, (char)0x07,
    (char)0x04, (char)0x01, (char)0x02, (char)0x01, (char)0x00, (char)0x0E, (char)0x00, (char)0x0D, (char)0x02, (char)0x01, (char)0x00, (char)0x0F,
    (char)0x00, (char)0x0B, (char)0x00, (char)0x00
};
static char g_HuffmanData17[64] = {
    (char)0x10, (char)0x01, (char)0x08, (char)0x01, (char)0x04, (char)0x01, (char)0x02, (char)0x01, (char)0x00, (char)0x00, (char)0x00, (char)0x01,
    (char)0x02, (char)0x01, (char)0x00, (char)0x02, (char)0x00, (char)0x03, (char)0x04, (char)0x01, (char)0x02, (char)0x01, (char)0x00, (char)0x04,
    (char)0x00, (char)0x05, (char)0x02, (char)0x01, (char)0x00, (char)0x06, (char)0x00, (char)0x07, (char)0x08, (char)0x01, (char)0x04, (char)0x01,
    (char)0x02, (char)0x01, (char)0x00, (char)0x08, (char)0x00, (char)0x09, (char)0x02, (char)0x01, (char)0x00, (char)0x0A, (char)0x00, (char)0x0B,
    (char)0x04, (char)0x01, (char)0x02, (char)0x01, (char)0x00, (char)0x0C, (char)0x00, (char)0x0D, (char)0x02, (char)0x01, (char)0x00, (char)0x0E,
    (char)0x00, (char)0x0F, (char)0x00, (char)0x00
};

// char[7] constants
static char g_WeekdayInitial[] = "SMTWTFS";
static char g_WeekdaySecondInitial[] = "uouehra";
static char g_WeekdayThirdInitial[] = "nneduit";

// char[7][4] constants
static char g_WeekdayNamesShort[7][4] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};

// char[8] constants
static char s_filebuf_00685484[] = "$filebuf";

// double constants
static double g_ExpUnderflowLimit = 709.78271289338397;
static double DOUBLE_0068506c = -709.78271289338397;

// float constants
static float FLOAT_006804b0 = 0.9f;
static float FLOAT_006804b4 = 1.1f;
static float FLOAT_00684170 = 12.0f;
static float FLOAT_00684174 = 1.0f;
static float g_IEEE754NormalScaleFactor = 0.9375f;
static float g_IEEE754SubnormalScaleFactor = 1.0625f;
static float g_IEEE754RenormScaleFactor = 9.223372e+18f;
static float DAT_00687518 = 16.0f;
static float DAT_0068751C = 0.0625f;

// float10 constants
static float10 g_PiOver2 = 1.5707963f;
static float10 g_CalculatedPi = 3.1415927f;
static float10 g_HalfCalculatedPi = 1.5707963f;
static float10 DAT_00687520 = -0.33333333f;
static float10 DAT_0068752A = 0.2f;
static float10 DAT_00687534 = -0.14285714f;
static float10 DAT_0068753E = 0.11111111f;
static float10 DAT_00687548 = -0.090907585f;
static float10 DAT_00687552 = 0.076416908f;

// int constants
static int DAT_00684F34 = 0x2D;

// short constants
static short DAT_00684F38 = 0x4002;

// uchar[257] constants
static uchar g_CharacterClassificationTable[257] = {
    0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x03, 0x03, 0x03, 0x03, 0x03, 0x01,
    0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
    0x01, 0x0A, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C,
    0x0C, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C,
    0x0C, 0x0C, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48,
    0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x0C, 0x0C, 0x0C, 0x0C,
    0x0C, 0x0C, 0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
    0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x0C, 0x0C, 0x0C, 0x0C,
    0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00
};

// void* constants
static void* DAT_006817E8 = (void*)s_Off_00649199;
static void* DAT_006817EC = (void*)s_On_0064919d;
static void* DAT_00681B04 = (void*)s_anon_0065153f;
static void* DAT_00681B08 = (void*)s_anon_00651541;
static void* DAT_00681B0C = (void*)s_anon_00651542;
static void* DAT_00685594 = (void*)0x0060F960; // LAB_0060f960
static void* DAT_006873D8 = (void*)crt_math_c_fatal_math_error_FUN_00606a87;
static void* DAT_006873DC = (void*)crt_math_c_generate_nan_FUN_00606a8c;
static void* DAT_006873E0 = (void*)crt_math_c_fatal_math_error_FUN_00606a92;
static void* DAT_006873E4 = (void*)crt_math_c_generate_nan_FUN_00606a97;
static void* DAT_006873E8 = (void*)crt_math_c_generate_nan_FUN_00606a9d;
static void* DAT_006873EC = (void*)crt_math_c_generate_nan_FUN_00606aa3;
static void* DAT_006873F0 = (void*)crt_math_c_generate_nan_FUN_00606aa9;
static void* DAT_006873F4 = (void*)crt_math_c_dispatch_divide_FUN_00606aaf;
static void* DAT_006873F8 = (void*)crt_math_c_FUN_00606acb;
static void* DAT_006873FC = (void*)crt_math_c_FUN_00606ad0;
static void* DAT_00687400 = (void*)crt_math_c_FUN_00606ae6;
static void* DAT_00687404 = (void*)crt_math_c_fdiv_thunk_FUN_00606aeb;
static void* DAT_00687408 = (void*)crt_math_c_FUN_00606b07;
static void* DAT_0068740C = (void*)crt_math_c_fdiv_thunk_FUN_00606b17;
static void* DAT_00687410 = (void*)crt_math_c_FUN_00606b2b;
static void* DAT_00687414 = (void*)crt_math_c_FUN_00606b3b;
static void* DAT_00687418 = (void*)crt_math_c_FUN_00606b5b;
static void* DAT_0068741C = (void*)crt_math_c_FUN_00606b60;
static void* DAT_00687420 = (void*)crt_math_c_FUN_00606b7a;
static void* DAT_00687424 = (void*)crt_math_c_fdiv_thunk_FUN_00606b7f;
static void* DAT_00687428 = (void*)crt_math_c_FUN_00606b9f;
static void* DAT_0068742C = (void*)crt_math_c_fdiv_thunk_FUN_00606bb3;
static void* DAT_00687430 = (void*)crt_math_c_FUN_00606bcb;
static void* DAT_00687434 = (void*)crt_math_c_FUN_00606bdf;
static void* DAT_00687438 = (void*)crt_math_c_FUN_00606bff;
static void* DAT_0068743C = (void*)crt_math_c_FUN_00606c04;
static void* DAT_00687440 = (void*)crt_math_c_FUN_00606c1e;
static void* DAT_00687444 = (void*)crt_math_c_FUN_00606c23;
static void* DAT_00687448 = (void*)crt_math_c_FUN_00606c43;
static void* DAT_0068744C = (void*)crt_math_c_FUN_00606c57;
static void* DAT_00687450 = (void*)crt_math_c_FUN_00606c6f;
static void* DAT_00687454 = (void*)crt_math_c_FUN_00606c83;
static void* DAT_00687458 = (void*)crt_math_c_FUN_00606ca3;
static void* DAT_0068745C = (void*)crt_math_c_FUN_00606ca8;
static void* DAT_00687460 = (void*)crt_math_c_FUN_00606cc2;
static void* DAT_00687464 = (void*)crt_math_c_fdiv_thunk_FUN_00606cc7;
static void* DAT_00687468 = (void*)crt_math_c_FUN_00606ce7;
static void* DAT_0068746C = (void*)crt_math_c_fdiv_thunk_FUN_00606cfb;
static void* DAT_00687470 = (void*)crt_math_c_FUN_00606d13;
static void* DAT_00687474 = (void*)crt_math_c_FUN_00606d27;
static void* DAT_00687478 = (void*)crt_math_c_FUN_00606d47;
static void* DAT_0068747C = (void*)crt_math_c_FUN_00606d4c;
static void* DAT_00687480 = (void*)crt_math_c_FUN_00606d66;
static void* DAT_00687484 = (void*)crt_math_c_fdiv_thunk_FUN_00606d6b;
static void* DAT_00687488 = (void*)crt_math_c_FUN_00606d8b;
static void* DAT_0068748C = (void*)crt_math_c_fdiv_thunk_FUN_00606d9f;
static void* DAT_00687490 = (void*)crt_math_c_FUN_00606db7;
static void* DAT_00687494 = (void*)crt_math_c_FUN_00606dcb;
static void* DAT_00687498 = (void*)crt_math_c_FUN_00606deb;
static void* DAT_0068749C = (void*)crt_math_c_FUN_00606df0;
static void* DAT_006874A0 = (void*)crt_math_c_FUN_00606e0a;
static void* DAT_006874A4 = (void*)crt_math_c_fdiv_thunk_FUN_00606e0f;
static void* DAT_006874A8 = (void*)crt_math_c_FUN_00606e2f;
static void* DAT_006874AC = (void*)crt_math_c_fdiv_thunk_FUN_00606e43;
static void* DAT_006874B0 = (void*)crt_math_c_FUN_00606e5b;
static void* DAT_006874B4 = (void*)crt_math_c_FUN_00606e6f;
static void* DAT_006874B8 = (void*)crt_math_c_FUN_00606e8f;
static void* DAT_006874BC = (void*)crt_math_c_FUN_00606e94;
static void* DAT_006874C0 = (void*)crt_math_c_FUN_00606eae;
static void* DAT_006874C4 = (void*)crt_math_c_FUN_00606eb3;
static void* DAT_006874C8 = (void*)crt_math_c_FUN_00606ed3;
static void* DAT_006874CC = (void*)crt_math_c_fdiv_thunk_FUN_00606ee7;
static void* DAT_006874D0 = (void*)crt_math_c_FUN_00606eff;
static void* DAT_006874E8 = (void*)0x0060C5AB; // LAB_0060c5aa+1
static void* DAT_006874EC = (void*)0x0060C5B8; // LAB_0060c5b6+2
static void* DAT_006874F0 = (void*)0x0060C5CB; // LAB_0060c5ca+1
static void* DAT_006874F4 = (void*)0x0060C5E0; // LAB_0060c5df+1
static void* DAT_006874F8 = (void*)0x0060C5F3; // LAB_0060c5f3
static void* DAT_006874FC = (void*)0x0060C608; // LAB_0060c606+2
static void* DAT_00687500 = (void*)0x0060C61B; // LAB_0060c61b

