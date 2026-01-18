#pragma once

// Dependencies
#include "system/basetypes.h"
#include "prototypes/prototypes_600000.h"
#include "system/misc.h"

// =============================================================================
// CONSTANTS
// =============================================================================

// TerminatedCString constants
const TerminatedCString s_CEnemy_006804b8 = "CEnemy";
const TerminatedCString s_UNDO_TMP_00680800 = "$$UNDO$$.TMP";
const TerminatedCString s_PLAYMSN_TMP_00680820 = "$PLAYMSN.TMP";
const TerminatedCString s_DUPACTOR_TMP_006808f8 = "DUPACTOR.TMP";
const TerminatedCString s_CEdCheck_006809e4 = "$CEdCheck$$";
const TerminatedCString s_SNetPlayer_00680a0c = "$SNetPlayer$$";
const TerminatedCString s_GSPlayer_PGameSettingsCh_00680a20 = "$GSPlayer$:PGameSettingsChanged$$";
const TerminatedCString s_SChatHistory_00680a48 = "$SChatHistory$$";
const TerminatedCString s_CNetGame_00680a5c = "$CNetGame$$";
const TerminatedCString s_CMouse_00680b88 = "$CMouse$$";
const TerminatedCString s_CPassenger_00680ba0 = "$CPassenger$$";
const TerminatedCString s_CPathMap_00680c78 = "$CPathMap$$";
const TerminatedCString s_CPendulum_00680c8c = "$CPendulum$$";
const TerminatedCString s_anon_00680c9c = "PBM\032PBG\032";
const TerminatedCString s_CPackedBitmap_00680ca8 = "$CPackedBitmap$$";
const TerminatedCString s_CPod_00680cc4 = "$CPod$$";
const TerminatedCString s_CDemonPod_00680ce4 = "$CDemonPod$$";
const TerminatedCString s_CScat_00680d04 = "$CScat$$";
const TerminatedCString s_none_00680d58 = "(none)";
const TerminatedCString s_CScript_00681064 = "$CScript$$";
const TerminatedCString s_CSentinel_00681078 = "$CSentinel$$";
const TerminatedCString s_SVDBox_00681400 = "$SVDBox$$";
const TerminatedCString s_SRoom_CDemonSet_00681410 = "$SRoom$:CDemonSet$$";
const TerminatedCString s_C3DSLight_00681428 = "$C3DSLight$$";
const TerminatedCString s_C3DSCamera_0068143c = "$C3DSCamera$$";
const TerminatedCString s_CDemonRaytrace_00681450 = "$CDemonRaytrace$$";
const TerminatedCString s_CDemonSet_00681468 = "$CDemonSet$$";
const TerminatedCString s_SIntersectXZCylinder_00681479 = "$SIntersectXZCylinder$$";
const TerminatedCString s_SCollisionReturnInfo_00681495 = "$SCollisionReturnInfo$$";
const TerminatedCString s_SRaytraceState_006814b1 = "$SRaytraceState$$";
const TerminatedCString s_CZThumb_00681688 = "$CZThumb$$";
const TerminatedCString s_GroundTypes_006816d8 = ".\\GroundTypes";
const TerminatedCString s_CShotgun_0068181c = "$CShotgun$$";
const TerminatedCString s_CShovel_00681830 = "$CShovel$$";
const TerminatedCString s_CSimBox_00681844 = "$CSimBox$$";
const TerminatedCString s_skeledit_ini_00681868 = "skeledit.ini";
const TerminatedCString s_gore_00681878 = "gore";
const TerminatedCString s_file_error_006818e0 = "(file error)";
const TerminatedCString s_TEST_MOT_00681a08 = "$$TEST$$.MOT";
const TerminatedCString s_BatchDfm_txt_00681a18 = "BatchDfm.txt";
const TerminatedCString s_BatchDfm_log_00681a28 = "BatchDfm.log";
const TerminatedCString s_LodVert_00681a44 = "$LodVert$$";
const TerminatedCString s_CSkeleton_00681a73 = "$CSkeleton$$";
const TerminatedCString s_CDeformableModel_00681a84 = "$CDeformableModel$$";
const TerminatedCString s_SVert_CDeformableModel_00681a9c = "$SVert$:CDeformableModel$$";
const TerminatedCString s_CSmiley_00681ac4 = "$CSmiley$$";
const TerminatedCString s_CMP3Decoder_00681d64 = "$CMP3Decoder$$";
const TerminatedCString s_SfxSample_00681d84 = "$SfxSample$$";
const TerminatedCString s_SfxOptions_00681da4 = "$SfxOptions$$";
const TerminatedCString s_SfxSlot_00681dc4 = "$SfxSlot$$";
const TerminatedCString s_STrainNoise_00682184 = "$STrainNoise$$";
const TerminatedCString s_CSpike_00684160 = "$CSpike$$";
const TerminatedCString s_CStairs_00684198 = "$CStairs$$";
const TerminatedCString s_CTempleStone_006841ac = "$CTempleStone$$";
const TerminatedCString s_CStranger_006841c4 = "$CStranger$$";
const TerminatedCString s_CSuccubus_006841dc = "$CSuccubus$$";
const TerminatedCString s_COptimize_006841ed = "$COptimize$$";
const TerminatedCString s_CObj_006841fe = "$CObj$$";
const TerminatedCString s_CPoly_0068420a = "$CPoly$$";
const TerminatedCString s_CP3D_00684217 = "$CP3D$$";
const TerminatedCString s_CP2D_00684223 = "$CP2D$$";
const TerminatedCString s_CVec_0068422f = "$CVec$$";
const TerminatedCString s_CSvetlana_00684258 = "$CSvetlana$$";
const TerminatedCString s_CBassPlayer_00684274 = "$CBassPlayer$$";
const TerminatedCString s_CDrummer_00684288 = "$CDrummer$$";
const TerminatedCString s_CTeleportDest_006842a0 = "$CTeleportDest$$";
const TerminatedCString s_CTeleport_006842b8 = "$CTeleport$$";
const TerminatedCString s_CTentacle_006842d0 = "$CTentacle$$";
const TerminatedCString s_CTextureList_006842fc = "$CTextureList$$";
const TerminatedCString s_CTommyGun_00684314 = "$CTommyGun$$";
const TerminatedCString s_CTrap_0068432c = "$CTrap$$";
const TerminatedCString s_CTrash_00684340 = "$CTrash$$";
const TerminatedCString s_CTrigger_006843ec = "$CTrigger$$";
const TerminatedCString s_CTurret_00684444 = "$CTurret$$";
const TerminatedCString s_CTVBat_00684458 = "$CTVBat$$";
const TerminatedCString s_CVampireBoss_0068446c = "$CVampireBoss$$";
const TerminatedCString s_CVehicle_00684494 = "$CVehicle$$";
const TerminatedCString s_CTire_006844a4 = "$CTire$$";
const TerminatedCString s_CCryptVessel_006844d0 = "$CCryptVessel$$";
const TerminatedCString s_CWater_006846c4 = "$CWater$$";
const TerminatedCString s_ete_006846d8 = "ete";
const TerminatedCString s_lte_006846e0 = "lte";
const TerminatedCString s_ste_006846e8 = "ste";
const TerminatedCString s_CWaterActor_00684878 = "$CWaterActor$$";
const TerminatedCString s_SWaterVertex_0068488c = "$SWaterVertex$$";
const TerminatedCString s_CWayPoint_006848a4 = "$CWayPoint$$";
const TerminatedCString s_CDemonGlobe_006848dc = "$CDemonGlobe$$";
const TerminatedCString s_CWeapon_006848f0 = "$CWeapon$$";
const TerminatedCString s_CWeather_0068494c = "$CWeather$$";
const TerminatedCString s_CWerewolf_00684978 = "$CWerewolf$$";
const TerminatedCString s_CWinFont_00684989 = "$CWinFont$$";
const TerminatedCString s_CZombie_006849b8 = "$CZombie$$";
const TerminatedCString s_ostream_00684ad4 = "$ostream$$";
const TerminatedCString s_strstreambase_00684ae3 = "$strstreambase$$";
const TerminatedCString s_ios_00684af8 = "$ios$$";
const TerminatedCString s_istream_00684b03 = "$istream$$";
const TerminatedCString s_fstreambase_00684b12 = "$fstreambase$$";
const TerminatedCString s_Stack_Overflow_00684b24 = "Stack Overflow!\r\n";
const TerminatedCString s_streambuf_0068503c = "$streambuf$$";
const TerminatedCString s_strstreambuf_0068504d = "$strstreambuf$$";
const TerminatedCString s_EST_006850bc = "EST";
const TerminatedCString s_EDT_0068513d = "EDT";
const TerminatedCString s_s_0123456789abcdefghijkl_006851d8 = "0123456789abcdefghijklmnopqrstuvwxyz";
const TerminatedCString s_DEST_00686842 = "DEST";
const TerminatedCString s_DEST_00686852 = "DEST";
const TerminatedCString s_DEST_00686862 = "DEST";
const TerminatedCString s_DEST_00686872 = "DEST";
const TerminatedCString s_DEST_00686882 = "DEST";
const TerminatedCString s_DEST_00686892 = "DEST";
const TerminatedCString s_DEST_006868a2 = "DEST";
const TerminatedCString s_DEST_006868b2 = "DEST";
const TerminatedCString s_DEST_006868c2 = "DEST";
const TerminatedCString s_DEST_006868d2 = "DEST";
const TerminatedCString s_DEST_006868f2 = "DEST";
const TerminatedCString s_DEST_00686902 = "DEST";
const TerminatedCString s_DEST_00686912 = "DEST";
const TerminatedCString s_DEST_00686922 = "DEST";
const TerminatedCString s_DEST_00686932 = "DEST";
const TerminatedCString s_DEST_00686942 = "DEST";
const TerminatedCString s_DEST_00686952 = "DEST";
const TerminatedCString s_DEST_00686962 = "DEST";
const TerminatedCString s_DEST_00686972 = "DEST";
const TerminatedCString s_DEST_00686982 = "DEST";
const TerminatedCString s_DEST_00686992 = "DEST";
const TerminatedCString s_DEST_006869a2 = "DEST";
const TerminatedCString s_DEST_006869b2 = "DEST";
const TerminatedCString s_DEST_006869c2 = "DEST";

// char*[12] constants
const char* g_MonthNamesLong[12] = {
    "January", "February", "March", "April",
    "May", "June", "July", "August",
    "September", "October", "November", "December"
};

// char*[24] constants
const char* g_MathFunctionNames[24] = {
    (char*)0x00002424, "acos", "asin", "sqrt",
    "exp", "cosh", "sinh", "pow",
    "acosh", "log2", "log", "log10",
    "atanh", "atan2", "ipow", "dpowi",
    "cos", "sin", "tan", "y0",
    "y1", "yn", "mod", "cotan"
};

// char*[41] constants
const char* g_ErrorMessageTable[41] = {
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

// char*[7] constants
const char* g_WeekdayNamesLong[7] = {
    "Sunday", "Monday", "Tuesday", "Wednesday",
    "Thursday", "Friday", "Saturday"
};
const char* g_MathErrorMessages[7] = {
    nullptr, "Domain error", "Argument singularity", "Overflow range error",
    "Underflow range error", "Total loss of significance", "Partial loss of significance"
};

// char*[9] constants
const char* g_DirectionCharacters[9] = {
    "x", "N", "S", "E",
    "W", "NE", "NW", "SE",
    "SW"
};

// char[104] constants
const char g_SoundResultBufferTemplate[] = "";

// char[108] constants
const char g_TrainSoundFilenameTemplate[] = "";

// char[128] constants
const char g_OSFontName[] = "";

// char[12] constants
const char g_MonthInitial[] = "JFMAMJJASOND";
const char g_MonthSecondInitial[] = "aeapauuuecoe";
const char g_MonthThirdInitial[] = "nbrrynlgptvc";

// char[12][4] constants
const char g_MonthNamesShort[12][4] = {
    "Jan", "Feb", "Mar", "Apr",
    "May", "Jun", "Jul", "Aug",
    "Sep", "Oct", "Nov", "Dec"
};

// char[17] constants
const char g_HexLookupTable[] = "0123456789abcdef";

// char[256] constants
const char g_DefaultRecordingDeviceName[] = "";
const char g_DefaultDeviceName[] = "";
const char g_CharacterClassificationTable[] = "";
const char g_ShiftJIS_TrailByteTable[] = "";

// char[260] constants
const char g_TempDirectoryBuffer[] = "";

// char[36] constants
const char g_AlphaNumericCharacters1[] = "0123456789abcdefghijklmnopqrstuvwxyz";
const char g_AlphaNumericCharacters2[] = "0123456789abcdefghijklmnopqrstuvwxyz";

// char[7] constants
const char g_WeekdayInitial[] = "SMTWTFS";
const char g_WeekdaySecondInitial[] = "uouehra";
const char g_WeekdayThirdInitial[] = "nneduit";

// char[7][4] constants
const char g_WeekdayNamesShort[7][4] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};

// double constants
const double DOUBLE_00681b30 = 1;
const double DOUBLE_00681b38 = 1;
const double g_SelectedClearColor = 0;
const double g_ClearColor = 0;
const double g_ExpUnderflowLimit = 709.78271289338397;
const double DOUBLE_0068506c = -709.78271289338397;

// float constants
const float g_MaxSoftwareLatency = 0.5f;
const float FLOAT_00684170 = 12.0f;
const float FLOAT_00684174 = 1.0f;
const float g_IEEE754NormalScaleFactor = 0.9375f;
const float g_IEEE754SubnormalScaleFactor = 1.0625f;
const float g_IEEE754RenormScaleFactor = 9.223372e+18f;

// float10 constants
const float10 g_PiOver2 = 1.5707963f;
const float10 g_CalculatedPi = 3.1415927f;
const float10 g_HalfCalculatedPi = 1.5707963f;

// undefined1 constants
const undefined1 DAT_00684acc = 0;
const undefined1 DAT_00684acd = 0;
const undefined1 DAT_00684d05 = 0;
const undefined1 DAT_0068500c = 0;
const undefined1 DAT_006852db = 0;

// undefined2 constants
const undefined2 DAT_00684f38 = 0x4002;
const undefined2 DAT_0068546c = 0x127F;

// undefined4 constants
const undefined4 DAT_006804b0 = 0x3F666666;
const undefined4 DAT_006804b4 = 0x3F8CCCCD;
const undefined4 DAT_00680648 = 0xFFFFFFFF;
const undefined4 DAT_00680818 = 0x501502F9;
const undefined4 DAT_00680830 = 0;
const undefined4 DAT_00680834 = 0;
const undefined4 DAT_00680908 = 0;
const undefined4 DAT_0068090c = 0;
const undefined4 DAT_00680970 = 0x0000002A;
const undefined4 DAT_00680974 = 0;
const undefined4 DAT_00680a04 = 0x00000001;
const undefined4 DAT_00680bd8 = 0xFFFFFFFF;
const undefined4 DAT_00680bdc = 0;
const undefined4 DAT_00680d60 = 0;
const undefined4 DAT_00680d64 = 0;
const undefined4 DAT_0068105c = 0x00000001;
const undefined4 DAT_006810dc = 0x00000180;
const undefined4 DAT_006810e0 = 0x00000200;
const undefined4 DAT_006810e4 = 0x00000180;
const undefined4 DAT_0068125c = 0;
const undefined4 DAT_00681260 = 0;
const undefined4 DAT_00681264 = 0x00000080;
const undefined4 DAT_00681864 = 0x00000007;
const undefined4 DAT_006819fc = 0xFFFFF100;
const undefined4 DAT_00681a00 = 0;
const undefined4 DAT_00681a04 = 0xFFFFF100;
const undefined4 DAT_006844f4 = 0x00002000;
const undefined4 DAT_00684ccc = 0;
const undefined4 DAT_00684cd0 = 0x00000001;
const undefined4 DAT_00684cea = 0x00000002;
const undefined4 DAT_00684ed0 = 0x00000100;
const undefined4 DAT_00684edc = 0;
const undefined4 DAT_00684f30 = 0;
const undefined4 DAT_00684f34 = 0xA0000000;
const undefined4 DAT_00684fd0 = 0;
const undefined4 DAT_00685094 = 0;
const undefined4 DAT_006850a4 = 0x00000005;
const undefined4 DAT_006850a8 = 0x00000009;
const undefined4 DAT_006850b0 = 0;
const undefined4 DAT_006850b4 = 0;
const undefined4 DAT_006850b8 = 0;
const undefined4 DAT_00685210 = 0xFF010806;
const undefined4 DAT_00685280 = 0;
const undefined4 DAT_0068528c = 0;
const undefined4 DAT_006852c4 = 0;
const undefined4 DAT_006854ec = 0;
const undefined4 DAT_006854f0 = 0x00000001;
const undefined4 DAT_006855d8 = 0x0FFFFFFF;

// void* constants
const void* DAT_00680E30 = (void*)0x006441CB; // s_anon_006441cb
const void* DAT_00680E34 = (void*)0x006441CD; // s_addItemToInventory_actor_006441cd
const void* DAT_00680E38 = (void*)0x00644209; // s_addLightFilter_spotLight_00644209
const void* DAT_00680E3C = (void*)0x00644250; // s_advanceLightFilter_spotL_00644250
const void* DAT_00680E40 = (void*)0x00644270; // s_allowEnemyAttack_conditi_00644270
const void* DAT_00680E44 = (void*)0x0064428E; // s_allowHeroControls_condit_0064428e
const void* DAT_00680E48 = (void*)0x006442AD; // s_allowHeroDamage_conditio_006442ad
const void* DAT_00680E4C = (void*)0x006442CA; // s_attachActorToPlatform_ac_006442ca
const void* DAT_00680E50 = (void*)0x00644324; // s_beginFadeIn_00644324
const void* DAT_00680E54 = (void*)0x00644330; // s_beginFadeOut_00644330
const void* DAT_00680E58 = (void*)0x0064433D; // s_breakPoint_0064433d
const void* DAT_00680E5C = (void*)0x00644348; // s_cancelCameraHold_00644348
const void* DAT_00680E60 = (void*)0x00644359; // s_cancelWalkTo_actor_CChar_00644359
const void* DAT_00680E64 = (void*)0x0064437A; // s_chainToMission_filename__0064437a
const void* DAT_00680E68 = (void*)0x006443A1; // s_clearActorVariable_actor_006443a1
const void* DAT_00680E6C = (void*)0x006443C5; // s_createExplosion_float_ra_006443c5
const void* DAT_00680E70 = (void*)0x00644413; // s_createExplosion_float_ra_00644413
const void* DAT_00680E74 = (void*)0x0064444D; // s_createExplosion_float_ra_0064444d
const void* DAT_00680E78 = (void*)0x006444AC; // s_createExplosion_float_ra_006444ac
const void* DAT_00680E7C = (void*)0x006444F7; // s_dbSay_dbTag_006444f7
const void* DAT_00680E80 = (void*)0x00644506; // s_dbStartSay_dbTag_00644506
const void* DAT_00680E84 = (void*)0x0064451A; // s_debug_text_debug_message_0064451a
const void* DAT_00680E88 = (void*)0x00644537; // s_dismember_actor_CCharact_00644537
const void* DAT_00680E8C = (void*)0x0064457F; // s_dismember_actor_CCharact_0064457f
const void* DAT_00680E90 = (void*)0x0064460B; // s_deleteActor_actor_actor__0064460b
const void* DAT_00680E94 = (void*)0x00644631; // s_display_text_display_tex_00644631
const void* DAT_00680E98 = (void*)0x0064464F; // s_displayBitmap_filename_a_0064464f
const void* DAT_00680E9C = (void*)0x006446A0; // s_else_006446a0
const void* DAT_00680EA0 = (void*)0x006446A5; // s_enableCamera_camera_cond_006446a5
const void* DAT_00680EA4 = (void*)0x006446C9; // s_enableCameraGroup_int_ca_006446c9
const void* DAT_00680EA8 = (void*)0x00644702; // s_enableHealthBar_actor_CC_00644702
const void* DAT_00680EAC = (void*)0x00644733; // s_end_00644733
const void* DAT_00680EB0 = (void*)0x00644737; // s_fadeAmbientSound_float_v_00644737
const void* DAT_00680EB4 = (void*)0x0064476C; // s_fadeIn_0064476c
const void* DAT_00680EB8 = (void*)0x00644773; // s_fadeOut_00644773
const void* DAT_00680EBC = (void*)0x0064477B; // s_fadeSfx_sfxUsed_float_vo_0064477b
const void* DAT_00680EC0 = (void*)0x006447B2; // s_finishedAct_006447b2
const void* DAT_00680EC4 = (void*)0x006447C0; // s_flagOn_persistentEventNa_006447c0
const void* DAT_00680EC8 = (void*)0x006447DE; // s_flagOff_persistentEventN_006447de
const void* DAT_00680ECC = (void*)0x006447FD; // s_gameFlagOn_gameFlagName_006447fd
const void* DAT_00680ED0 = (void*)0x00644818; // s_gameFlagOff_gameFlagName_00644818
const void* DAT_00680ED4 = (void*)0x00644834; // s_gesture_actor_CCharacter_00644834
const void* DAT_00680ED8 = (void*)0x00644860; // s_getIniInt_iniVariable_co_00644860
const void* DAT_00680EDC = (void*)0x00644887; // s_getTriggerActor_actorVar_00644887
const void* DAT_00680EE0 = (void*)0x006448BA; // s_gosub_label_006448ba
const void* DAT_00680EE4 = (void*)0x006448C8; // s_goto_label_006448c8
const void* DAT_00680EE8 = (void*)0x006448D5; // s_gtfo_text_006448d5
const void* DAT_00680EEC = (void*)0x006448E2; // s_holsterWeapon_actor_CHer_006448e2
const void* DAT_00680EF0 = (void*)0x006448FF; // s_holsterWeapon_actor_CHer_006448ff
const void* DAT_00680EF4 = (void*)0x00644929; // s_hurtCharacter_actor_CCha_00644929
const void* DAT_00680EF8 = (void*)0x00644970; // s_idle_00644970
const void* DAT_00680EFC = (void*)0x00644975; // s_if_condition_00644975
const void* DAT_00680F00 = (void*)0x00644985; // s_incCounter_counterSet_00644985
const void* DAT_00680F04 = (void*)0x0064499E; // s_killCharacter_actor_CCha_0064499e
const void* DAT_00680F08 = (void*)0x006449CD; // s_killCharacter_actor_CCha_006449cd
const void* DAT_00680F0C = (void*)0x00644A29; // s_killCharacter_actor_CCha_00644a29
const void* DAT_00680F10 = (void*)0x00644A95; // s_killHero_deathType_00644a95
const void* DAT_00680F14 = (void*)0x00644AAB; // s_killSfx_sfxUsed_00644aab
const void* DAT_00680F18 = (void*)0x00644ABE; // s_killSfx_sfxUsed_float_fa_00644abe
const void* DAT_00680F1C = (void*)0x00644AE7; // s_letterBox_letterBoxMode_00644ae7
const void* DAT_00680F20 = (void*)0x00644B02; // s_lightning_00644b02
const void* DAT_00680F24 = (void*)0x00644B0E; // s_lockFocusActor_condition_00644b0e
const void* DAT_00680F28 = (void*)0x00644B2A; // s_lookAt_actor_CCharacter__00644b2a
const void* DAT_00680F2C = (void*)0x00644B4E; // s_openDoor_actor_CCharacte_00644b4e
const void* DAT_00680F30 = (void*)0x00644B7A; // s_movePlatform_actor_CPlat_00644b7a
const void* DAT_00680F34 = (void*)0x00644BF6; // s_playSfx_wav_00644bf6
const void* DAT_00680F38 = (void*)0x00644C05; // s_playSfx_wav_sfxSet_00644c05
const void* DAT_00680F3C = (void*)0x00644C1E; // s_pressButton_actor_CHero__00644c1e
const void* DAT_00680F40 = (void*)0x00644C4A; // s_raise_eventCommand_00644c4a
const void* DAT_00680F44 = (void*)0x00644C60; // s_releaseButton_actor_CHer_00644c60
const void* DAT_00680F48 = (void*)0x00644C8E; // s_removeAllItemsFromInvent_00644c8e
const void* DAT_00680F4C = (void*)0x00644CB9; // s_removeItemFromInventory__00644cb9
const void* DAT_00680F50 = (void*)0x00644CE9; // s_removeKeys_int_keyMask_00644ce9
const void* DAT_00680F54 = (void*)0x00644D04; // s_return_00644d04
const void* DAT_00680F58 = (void*)0x00644D0B; // s_rollCredits_00644d0b
const void* DAT_00680F5C = (void*)0x00644D19; // s_say_actor_CCharacter_wav_00644d19
const void* DAT_00680F60 = (void*)0x00644D40; // s_selectWeapon_actor_CHero_00644d40
const void* DAT_00680F64 = (void*)0x00644D72; // s_setActorVariable_actorVa_00644d72
const void* DAT_00680F68 = (void*)0x00644D9D; // s_setAmbientSound_wav_00644d9d
const void* DAT_00680F6C = (void*)0x00644DB4; // s_setCameraAmbient_camera__00644db4
const void* DAT_00680F70 = (void*)0x00644DE6; // s_setCameraGroup_camera_in_00644de6
const void* DAT_00680F74 = (void*)0x00644E18; // s_setCounter_counterSet_00644e18
const void* DAT_00680F78 = (void*)0x00644E31; // s_setCounter_counterSet_in_00644e31
const void* DAT_00680F7C = (void*)0x00644E51; // s_setCharacterHealth_actor_00644e51
const void* DAT_00680F80 = (void*)0x00644E94; // s_setFocusActor_actor_00644e94
const void* DAT_00680F84 = (void*)0x00644EAB; // s_setGroupAmbient_int_came_00644eab
const void* DAT_00680F88 = (void*)0x00644EEB; // s_setHeroTask_actor_CHero__00644eeb
const void* DAT_00680F8C = (void*)0x00644F12; // s_setIniInt_iniVariable_in_00644f12
const void* DAT_00680F90 = (void*)0x00644F32; // s_setLeverState_actor_CLev_00644f32
const void* DAT_00680F94 = (void*)0x00644F5D; // s_setLightFilterFrame_spot_00644f5d
const void* DAT_00680F98 = (void*)0x00644F92; // s_setModelState_actor_CCha_00644f92
const void* DAT_00680F9C = (void*)0x00644FC5; // s_setSayTimeOverride_00644fc5
const void* DAT_00680FA0 = (void*)0x00644FDA; // s_setSayTimeOverride_float_00644fda
const void* DAT_00680FA4 = (void*)0x00645007; // s_setSkipLabel_label_00645007
const void* DAT_00680FA8 = (void*)0x0064501D; // s_setSpeaker_actor_CCharac_0064501d
const void* DAT_00680FAC = (void*)0x0064503C; // s_setTimer_timer_float_tim_0064503c
const void* DAT_00680FB0 = (void*)0x00645066; // s_setTimeFactor_float_00645066
const void* DAT_00680FB4 = (void*)0x0064507D; // s_setVictim_actor_CEnemy_0064507d
const void* DAT_00680FB8 = (void*)0x00645097; // s_setVictim_actor_CEnemy_d_00645097
const void* DAT_00680FBC = (void*)0x006450BA; // s_setVictim_actor_CEnemy_a_006450ba
const void* DAT_00680FC0 = (void*)0x006450E8; // s_setWeather_weather_006450e8
const void* DAT_00680FC4 = (void*)0x006450FE; // s_shakeScreen_float_freque_006450fe
const void* DAT_00680FC8 = (void*)0x0064515F; // s_slamModelToMotion_actor__0064515f
const void* DAT_00680FCC = (void*)0x00645195; // s_snapToFace_actor_actorTo_00645195
const void* DAT_00680FD0 = (void*)0x006451CC; // s_startSay_actor_CCharacte_006451cc
const void* DAT_00680FD4 = (void*)0x006451F8; // s_switchCamera_camera_006451f8
const void* DAT_00680FD8 = (void*)0x0064520F; // s_switchCamera_camera_floa_0064520f
const void* DAT_00680FDC = (void*)0x00645239; // s_syntaxCheckOff_00645239
const void* DAT_00680FE0 = (void*)0x00645248; // s_syntaxCheckOn_00645248
const void* DAT_00680FE4 = (void*)0x00645256; // s_timedDisplay_float_text_00645256
const void* DAT_00680FE8 = (void*)0x00645274; // s_turnToFace_actor_CCharac_00645274
const void* DAT_00680FEC = (void*)0x006452B6; // s_waitFor_condition_006452b6
const void* DAT_00680FF0 = (void*)0x006452CB; // s_wait_float_006452cb
const void* DAT_00680FF4 = (void*)0x006452D9; // s_walkTo_actor_CCharacter__006452d9
const void* DAT_00680FF8 = (void*)0x00645328; // s_walkTo_actor_CCharacter__00645328
const void* DAT_00680FFC = (void*)0x00645389; // s_warpTo_actor_actorToWarp_00645389
const void* DAT_00681000 = (void*)0x006453BA; // s_warpTo_actor_actorToWarp_006453ba
const void* DAT_00681004 = (void*)0x00645407; // s_warpTo_actor_actorToWarp_00645407
const void* DAT_00681010 = (void*)0x006454A5; // s_hasItem_actor_006454a5
const void* DAT_00681014 = (void*)0x006454B6; // s_hasItemType_actor_CHero__006454b6
const void* DAT_00681018 = (void*)0x006454DF; // s_isBroken_actor_CGlass_006454df
const void* DAT_0068101C = (void*)0x006454F8; // s_isCurrentCamera_camera_006454f8
const void* DAT_00681020 = (void*)0x00645512; // s_isDead_actor_CCharacter_00645512
const void* DAT_00681024 = (void*)0x0064552D; // s_isFacing_actor_lookActor_0064552d
const void* DAT_00681028 = (void*)0x00645560; // s_isFacing_actor_lookActor_00645560
const void* DAT_0068102C = (void*)0x006455AC; // s_isFadeFinished_006455ac
const void* DAT_00681030 = (void*)0x006455BD; // s_isInRange_actor_actor1_a_006455bd
const void* DAT_00681034 = (void*)0x006455FC; // s_isLightOn_spotLight_006455fc
const void* DAT_00681038 = (void*)0x00645612; // s_isNudityEnabled_00645612
const void* DAT_0068103C = (void*)0x00645624; // s_isOfType_actor_text_00645624
const void* DAT_00681040 = (void*)0x0064563E; // s_isSfxActive_sfxUsed_0064563e
const void* DAT_00681044 = (void*)0x00645655; // s_isTalking_actor_CCharact_00645655
const void* DAT_00681048 = (void*)0x00645673; // s_isVictim_actor_CCharacte_00645673
const void* DAT_0068104C = (void*)0x00645690; // s_isWeaponDrawn_actor_CHer_00645690
const void* DAT_00681050 = (void*)0x006456AD; // s_isWearingGasMask_actor_C_006456ad
const void* DAT_00681054 = (void*)0x006456CD; // s_randBool_float_odds_006456cd
const void* DAT_00681058 = (void*)0x006456E5; // s_reachedDest_actor_006456e5
const void* DAT_006810EE = (void*)0x00800000; // DAT_00800000
const void* DAT_006817E8 = (void*)0x00649199; // s_Off_00649199
const void* DAT_006817EC = (void*)0x0064919D; // s_On_0064919d
const void* DAT_006817F4 = (void*)0x006491A5; // s_Rain_Lightning_006491a5
const void* DAT_006817F8 = (void*)0x006491B6; // s_Snow_006491b6
const void* DAT_00681B04 = (void*)0x0065153F; // s_anon_0065153f
const void* DAT_00681B08 = (void*)0x00651541; // s_anon_00651541
const void* DAT_00681B0C = (void*)0x00651542; // s_anon_00651542
const void* DAT_00684128 = (void*)0x00652EE7; // s_Random_00652ee7
const void* DAT_00684130 = (void*)0x00652EEE; // s_One_shot_00652eee
const void* DAT_00684140 = (void*)0x00652F06; // s_Extending_00652f06
const void* DAT_00684148 = (void*)0x00652F10; // s_Extended_00652f10
const void* DAT_00684150 = (void*)0x00652F19; // s_Retracting_00652f19
const void* DAT_0068436C = (void*)0x00655871; // s_One_shot_00655871
const void* DAT_00684374 = (void*)0x0065587A; // s_Rising_edge_0065587a
const void* DAT_0068437C = (void*)0x00655886; // s_Falling_edge_00655886
const void* DAT_0068438C = (void*)0x006558AF; // s_An_actor_triggers_me_006558af
const void* DAT_00684394 = (void*)0x006558C4; // s_Light_triggers_me_006558c4
const void* DAT_0068439C = (void*)0x006558D6; // s_The_action_button_trigge_006558d6
const void* DAT_006843A4 = (void*)0x006558F4; // s_Bullet_triggers_me_006558f4
const void* DAT_006843AC = (void*)0x00655907; // s_Laser_triggers_me_00655907
const void* DAT_006843B4 = (void*)0x00655919; // s_Explosion_triggers_me_00655919
const void* DAT_006843BC = (void*)0x0065592F; // s_Damage_triggers_me_0065592f
const void* DAT_006843C4 = (void*)0x00655942; // s_Motion_triggers_me_00655942
const void* DAT_006843CC = (void*)0x00655955; // s_Matched_actors_trigger_m_00655955
const void* DAT_006843DC = (void*)0x00655984; // s_Cylinder_00655984
const void* DAT_0068441C = (void*)0x006567B9; // s_Charging_006567b9
const void* DAT_00684424 = (void*)0x006567C2; // s_Active_006567c2
const void* DAT_0068442C = (void*)0x006567C9; // s_Patrol_006567c9
const void* DAT_00684434 = (void*)0x006567D0; // s_PowerDown_006567d0
const void* DAT_0068448C = (void*)0x00656FD6; // s_Right_rear_00656fd6
const void* DAT_006844B8 = (void*)0x00657198; // s_Fire_00657198
const void* DAT_006844C0 = (void*)0x0065719D; // s_Water_0065719d
const void* DAT_006848BC = (void*)0x00657B50; // s_In_Inventory_00657b50
const void* DAT_006848C4 = (void*)0x00657B5D; // s_In_Hand_00657b5d
const void* DAT_006848CC = (void*)0x00657B65; // s_On_Hook_00657b65
const void* DAT_00685594 = (void*)crt_thread_c_create_thread_with_sync_FUN_0060f960;
const void* DAT_006873D8 = (void*)crt_math_c_fatal_math_error_FUN_00606a87;
const void* DAT_006873DC = (void*)crt_math_c_generate_nan_FUN_00606a8c;
const void* DAT_006873E0 = (void*)crt_math_c_fatal_math_error_FUN_00606a92;
const void* DAT_006873E4 = (void*)crt_math_c_generate_nan_FUN_00606a97;
const void* DAT_006873E8 = (void*)crt_math_c_generate_nan_FUN_00606a9d;
const void* DAT_006873EC = (void*)crt_math_c_generate_nan_FUN_00606aa3;
const void* DAT_006873F0 = (void*)crt_math_c_generate_nan_FUN_00606aa9;
const void* DAT_006873F4 = (void*)crt_math_c_dispatch_divide_FUN_00606aaf;
const void* DAT_006873F8 = (void*)crt_math_c_FUN_00606acb;
const void* DAT_006873FC = (void*)crt_math_c_FUN_00606ad0;
const void* DAT_00687400 = (void*)crt_math_c_FUN_00606ae6;
const void* DAT_00687404 = (void*)crt_math_c_fdiv_thunk_FUN_00606aeb;
const void* DAT_00687408 = (void*)crt_math_c_FUN_00606b07;
const void* DAT_0068740C = (void*)crt_math_c_fdiv_thunk_FUN_00606b17;
const void* DAT_00687410 = (void*)crt_math_c_FUN_00606b2b;
const void* DAT_00687414 = (void*)crt_math_c_FUN_00606b3b;
const void* DAT_00687418 = (void*)crt_math_c_FUN_00606b5b;
const void* DAT_0068741C = (void*)crt_math_c_FUN_00606b60;
const void* DAT_00687420 = (void*)crt_math_c_FUN_00606b7a;
const void* DAT_00687424 = (void*)crt_math_c_fdiv_thunk_FUN_00606b7f;
const void* DAT_00687428 = (void*)crt_math_c_FUN_00606b9f;
const void* DAT_0068742C = (void*)crt_math_c_fdiv_thunk_FUN_00606bb3;
const void* DAT_00687430 = (void*)crt_math_c_FUN_00606bcb;
const void* DAT_00687434 = (void*)crt_math_c_FUN_00606bdf;
const void* DAT_00687438 = (void*)crt_math_c_FUN_00606bff;
const void* DAT_0068743C = (void*)crt_math_c_FUN_00606c04;
const void* DAT_00687440 = (void*)crt_math_c_FUN_00606c1e;
const void* DAT_00687444 = (void*)crt_math_c_FUN_00606c23;
const void* DAT_00687448 = (void*)crt_math_c_FUN_00606c43;
const void* DAT_0068744C = (void*)crt_math_c_FUN_00606c57;
const void* DAT_00687450 = (void*)crt_math_c_FUN_00606c6f;
const void* DAT_00687454 = (void*)crt_math_c_FUN_00606c83;
const void* DAT_00687458 = (void*)crt_math_c_FUN_00606ca3;
const void* DAT_0068745C = (void*)crt_math_c_FUN_00606ca8;
const void* DAT_00687460 = (void*)crt_math_c_FUN_00606cc2;
const void* DAT_00687464 = (void*)crt_math_c_fdiv_thunk_FUN_00606cc7;
const void* DAT_00687468 = (void*)crt_math_c_FUN_00606ce7;
const void* DAT_0068746C = (void*)crt_math_c_fdiv_thunk_FUN_00606cfb;
const void* DAT_00687470 = (void*)crt_math_c_FUN_00606d13;
const void* DAT_00687474 = (void*)crt_math_c_FUN_00606d27;
const void* DAT_00687478 = (void*)crt_math_c_FUN_00606d47;
const void* DAT_0068747C = (void*)crt_math_c_FUN_00606d4c;
const void* DAT_00687480 = (void*)crt_math_c_FUN_00606d66;
const void* DAT_00687484 = (void*)crt_math_c_fdiv_thunk_FUN_00606d6b;
const void* DAT_00687488 = (void*)crt_math_c_FUN_00606d8b;
const void* DAT_0068748C = (void*)crt_math_c_fdiv_thunk_FUN_00606d9f;
const void* DAT_00687490 = (void*)crt_math_c_FUN_00606db7;
const void* DAT_00687494 = (void*)crt_math_c_FUN_00606dcb;
const void* DAT_00687498 = (void*)crt_math_c_FUN_00606deb;
const void* DAT_0068749C = (void*)crt_math_c_FUN_00606df0;
const void* DAT_006874A0 = (void*)crt_math_c_FUN_00606e0a;
const void* DAT_006874A4 = (void*)crt_math_c_fdiv_thunk_FUN_00606e0f;
const void* DAT_006874A8 = (void*)crt_math_c_FUN_00606e2f;
const void* DAT_006874AC = (void*)crt_math_c_fdiv_thunk_FUN_00606e43;
const void* DAT_006874B0 = (void*)crt_math_c_FUN_00606e5b;
const void* DAT_006874B4 = (void*)crt_math_c_FUN_00606e6f;
const void* DAT_006874B8 = (void*)crt_math_c_FUN_00606e8f;
const void* DAT_006874BC = (void*)crt_math_c_FUN_00606e94;
const void* DAT_006874C0 = (void*)crt_math_c_FUN_00606eae;
const void* DAT_006874C4 = (void*)crt_math_c_FUN_00606eb3;
const void* DAT_006874C8 = (void*)crt_math_c_FUN_00606ed3;
const void* DAT_006874CC = (void*)crt_math_c_fdiv_thunk_FUN_00606ee7;
const void* DAT_006874D0 = (void*)crt_math_c_FUN_00606eff;
const void* DAT_006874E8 = (void*)crt_math_c_atan2_negate_epilogue_FUN_0060c5ab;
const void* DAT_006874EC = (void*)crt_math_c_atan2_pi_minus_epilogue_FUN_0060c5b8;
const void* DAT_006874F0 = (void*)crt_math_c_atan2_minus_pi_epilogue_FUN_0060c5cb;
const void* DAT_006874F4 = (void*)crt_math_c_atan2_pi_half_minus_epilogue_FUN_0060c5e0;
const void* DAT_006874F8 = (void*)crt_math_c_atan2_minus_pi_half_epilogue_FUN_0060c5f3;
const void* DAT_006874FC = (void*)crt_math_c_atan2_pi_half_plus_epilogue_FUN_0060c608;
const void* DAT_00687500 = (void*)crt_math_c_atan2_minus_pi_half_minus_epilogue_FUN_0060c61b;

