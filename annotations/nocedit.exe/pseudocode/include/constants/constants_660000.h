#pragma once

// Dependencies
#include <math.h>
#include "system/basetypes.h"

// =============================================================================
// CONSTANTS
// =============================================================================

// TerminatedCString constants
static TerminatedCString s_CPickList_0066e324 = "$CPickList$$";
static TerminatedCString s_CSlew_0066e344 = "$CSlew$$";
static TerminatedCString s_SDamageInfo_0066e354 = "$SDamageInfo$$";
static TerminatedCString s_CBoundingBox3D_0066e374 = "$CBoundingBox3D$$";
static TerminatedCString s_CDemonActor_0066e394 = "$CDemonActor$$";
static TerminatedCString s_CVector_0066e3b4 = "$CVector$$";
static TerminatedCString s_CAmmo_0066e3c8 = "$CAmmo$$";
static TerminatedCString s_CAmmoBox_0066e3dc = "$CAmmoBox$$";
static TerminatedCString s_CAnvil_0066e3f0 = "$CAnvil$$";
static TerminatedCString s_SFire_0066e404 = "$SFire$$";
static TerminatedCString s_CFlame_0066e414 = "$CFlame$$";
static TerminatedCString s_CEnemy_0066e424 = "$CEnemy$$";
static TerminatedCString s_CArmour_0066e434 = "$CArmour$$";
static TerminatedCString s_CBackgroundActor_0066e448 = "$CBackgroundActor$$";
static TerminatedCString s_CBaron_0066e480 = "$CBaron$$";
static TerminatedCString s_CBaronWeapon_0066e490 = "$CBaronWeapon$$";
static TerminatedCString s_CBarrier_0066e4a8 = "$CBarrier$$";
static TerminatedCString s_CBat_0066e4bc = "$CBat$$";
static TerminatedCString s_CBatCreature_0066e4cc = "$CBatCreature$$";
static TerminatedCString s_CBatman_0066e4e4 = "$CBatman$$";
static TerminatedCString s_CBattery_0066e4f8 = "$CBattery$$";
static TerminatedCString s_CBeast_0066e50c = "$CBeast$$";
static TerminatedCString s_CBiggs_0066e520 = "$CBiggs$$";
static TerminatedCString s_CDeformableModelInstance_0066e534 = "$CDeformableModelInstance$$";
static TerminatedCString s_CBodyPart_0066e554 = "$CBodyPart$$";
static TerminatedCString s_SBodyPartFire_0066e568 = "$SBodyPartFire$$";
static TerminatedCString s_SBodyPartModel_0066e580 = "$SBodyPartModel$$";
static TerminatedCString s_CBoneGuy_0066e59c = "$CBoneGuy$$";
static TerminatedCString s_SBoneGuyBox_0066e5ac = "$SBoneGuyBox$$";
static TerminatedCString s_SScrape_0066e5bf = "$SScrape$$";
static TerminatedCString s_CBoxActor_0066e610 = "$CBoxActor$$";
static TerminatedCString s_CLightActor_0066e624 = "$CLightActor$$";
static TerminatedCString s_CDemonFilter_0066e638 = "$CDemonFilter$$";
static TerminatedCString s_CBride_0066e650 = "$CBride$$";
static TerminatedCString s_CBugs_0066e664 = "$CBugs$$";
static TerminatedCString s_CKeyFramedModelInstance_0066e674 = "$CKeyFramedModelInstance$$";
static TerminatedCString s_SBug_0066e694 = "$SBug$$";
static TerminatedCString s_CCameraView_0066e6a0 = "$CCameraView$$";
static TerminatedCString s_noCollision_0066e778 = "noCollision";
static TerminatedCString s_CCharacter_0066e7a4 = "$CCharacter$$";
static TerminatedCString s_SPose_0066e7c4 = "$SPose$$";
static TerminatedCString s_CChain_0066e7d8 = "$CChain$$";
static TerminatedCString s_SChainVertex_0066e7e8 = "$SChainVertex$$";
static TerminatedCString s_SClothBone_0066e81c = "$SClothBone$$";
static TerminatedCString s_SClothVertex_0066e82e = "$SClothVertex$$";
static TerminatedCString s_CLZWCompress_0066e842 = "$CLZWCompress$$";
static TerminatedCString s_CLZWDecompress_0066e856 = "$CLZWDecompress$$";
static TerminatedCString s_ofstream_0066e86c = "$ofstream$$";
static TerminatedCString s_ifstream_0066e87c = "$ifstream$$";
static TerminatedCString s_istrstream_0066e88c = "$istrstream$$";
static TerminatedCString s_ostrstream_0066e89e = "$ostrstream$$";
static TerminatedCString s_CCodec_0066e8b0 = "$CCodec$$";
static TerminatedCString s_CColonel_0066e8c4 = "$CColonel$$";
static TerminatedCString s_console_txt_0066e8e8 = "console.txt";
static TerminatedCString s_CConsole_0066e904 = "$CConsole$$";
static TerminatedCString s_CPlatform_0066e918 = "$CPlatform$$";
static TerminatedCString s_CConveyor_0066e92c = "$CConveyor$$";
static TerminatedCString s_CZombieCow_0066ec68 = "$CZombieCow$$";
static TerminatedCString s_CCrate_0066ec80 = "$CCrate$$";
static TerminatedCString s_CCrossbow_0066ec94 = "$CCrossbow$$";
static TerminatedCString s_CCurtain_0066ecac = "$CCurtain$$";
static TerminatedCString s_SCurtainVertex_0066ecbc = "$SCurtainVertex$$";
static TerminatedCString s_SCollisionInfo_0066ecd4 = "$SCollisionInfo$$";
static TerminatedCString s_EFD_0066ed6c = "EFD";
static TerminatedCString s_CDemonCamera_0066ed74 = "$CDemonCamera$$";
static TerminatedCString s_Texture_map_0066ee08 = "Texture map";
static TerminatedCString s_Texture_map_w_ol_0066ee28 = "Texture map w/ol";
static TerminatedCString s_Flat_shade_0066ee48 = "Flat shade";
static TerminatedCString s_Flat_shade_w_ol_0066ee68 = "Flat shade w/ol";
static TerminatedCString s_Outline_0066ee88 = "Outline";
static TerminatedCString s_CramTex_II_0066ef30 = "CramTex II";
static TerminatedCString s_CActorDestination_0066ef44 = "$CActorDestination$$";
static TerminatedCString s_CFilterFX_0066efd8 = "$CFilterFX$$";
static TerminatedCString s_CFilterCache_0066efec = "$CFilterCache$$";

// char*[4] constants
static char* g_CourseAxisLabels[4] = {nullptr, "x", "y", "z"};

// double constants
static double g_InfiniteCollapseCost = 9.9999999999999997e+34;
static double DOUBLE_00663138 = -1;
static double DOUBLE_00663140 = 1116.4000000000001;
static double DOUBLE_00663148 = 4;
static double DOUBLE_00663150 = 20;
static double DOUBLE_00665f28 = -1.79399301312127e-307;
static double g_PositiveInfinity = INFINITY;

// float constants
static float FLOAT_00660028 = 3.0f;
static float FLOAT_006601dc = 2.0f;
static float FLOAT_006601e0 = 50.0f;
static float FLOAT_006601e4 = 100.0f;
static float FLOAT_006601e8 = 10.0f;
static float FLOAT_006601ec = 4.0f;
static float FLOAT_00660480 = 30.0f;
static float FLOAT_00660484 = 120.0f;
static float FLOAT_006605d0 = 256.0f;
static float FLOAT_006605e8 = 1.0f;
static float FLOAT_0066071c = 20.0f;
static float FLOAT_00660720 = 20.0f;
static float FLOAT_00660724 = 100.0f;
static float FLOAT_006608cc = 256.0f;
static float FLOAT_006608f8 = 0.00390625f;
static float FLOAT_00660a3c = 8.0f;
static float FLOAT_00660a40 = 30.0f;
static float FLOAT_00660a44 = 112.0f;
static float FLOAT_00660a48 = 2.0f;
static float FLOAT_00660a4c = 2.5f;
static float FLOAT_00660a50 = 1.0f;
static float FLOAT_00660a54 = 2.0f;
static float FLOAT_00660d70 = 256.0f;
static float FLOAT_00660d8c = 0.5235988f;
static float FLOAT_00660d90 = 2.0f;
static float FLOAT_00660d94 = 2.0f;
static float FLOAT_00660d98 = 2.0f;
static float FLOAT_00660d9c = 2.0f;
static float FLOAT_00661020 = 256.0f;
static float FLOAT_00661330 = 0.25f;
static float FLOAT_00661334 = 0.25f;
static float FLOAT_00661338 = 1.0f;
static float FLOAT_0066136c = 256.0f;
static float FLOAT_00661408 = 2.5f;
static float FLOAT_0066140c = 50.0f;
static float FLOAT_00661410 = 100.0f;
static float FLOAT_00661414 = 1.0f;
static float g_MirrorProjectionScale = 256.0f;
static float g_MirrorFloatToInt = 65536.0f;
static float g_MirrorIntToFloat_Coarse = 0.00390625f;
static float g_MirrorIntToFloat_Fine = 1.525879e-05f;
static float FLOAT_00661778 = 3.0f;
static float FLOAT_0066177c = 30.0f;
static float FLOAT_00661780 = 50.0f;
static float FLOAT_00661784 = 100.0f;
static float FLOAT_00661788 = 20.0f;
static float FLOAT_00661938 = 2.0f;
static float FLOAT_00661b40 = 256.0f;
static float FLOAT_00661b48 = 0.00390625f;
static float FLOAT_00661ba0 = 256.0f;
static float FLOAT_00661c30 = 0.00390625f;
static float FLOAT_00661c44 = 5.0f;
static float FLOAT_00661f58 = 2.0f;
static float FLOAT_00662138 = 0.00390625f;
static float FLOAT_00662280 = 256.0f;
static float FLOAT_00662458 = 0.5f;
static float FLOAT_00662678 = 4.0f;
static float FLOAT_0066267c = 50.0f;
static float FLOAT_00662680 = 100.0f;
static float FLOAT_00662684 = 12.0f;
static float FLOAT_00662850 = 256.0f;
static float g_VDCoordinateScaleFactor = 256.0f;
static float g_VDCameraDistanceRadius = 200.0f;
static float g_VDNearbyActorRadius = 100.0f;
static float FLOAT_00662a28 = 256.0f;
static float FLOAT_00662a40 = 256.0f;
static float FLOAT_00662a7c = 8.0f;
static float FLOAT_00662e44 = 0.00390625f;
static float FLOAT_00662e98 = 256.0f;
static float FLOAT_00662ea0 = 0.00390625f;
static float FLOAT_00662f68 = 2.5f;
static float FLOAT_00662f6c = 50.0f;
static float FLOAT_00662f70 = 100.0f;
static float g_SoundDivisorConstant = 4.0f;
static float g_SoundReferenceDistanceConstant = 20.0f;
static float FLOAT_00663160 = 10000.0f;
static float FLOAT_00663164 = 2.0f;
static float g_MenuChannel1MaxVolume = 0.25f;
static float g_MenuChannel0MaxVolume = 0.25f;
static float g_MenuChannel2MaxVolume = 1.0f;
static float FLOAT_006634b0 = 256.0f;
static float FLOAT_0066372c = 1.1f;
static float FLOAT_00663730 = 1.2f;
static float FLOAT_00663734 = 0.2f;
static float FLOAT_00663738 = 2.0f;
static float FLOAT_0066373c = 0.05f;
static float FLOAT_00663740 = 0.5f;
static float FLOAT_00663744 = 10.0f;
static float FLOAT_00663748 = 70.0f;
static float FLOAT_0066374c = 18.0f;
static float FLOAT_00663750 = 10.0f;
static float FLOAT_00663754 = 10.0f;
static float FLOAT_00663758 = 8.0f;
static float FLOAT_0066375c = 0.5f;
static float FLOAT_00663760 = 2.5f;
static float FLOAT_00663764 = 3.5f;
static float FLOAT_00663768 = 1.5f;
static float FLOAT_0066376c = 1.5f;
static float FLOAT_00663770 = -1.047198f;
static float FLOAT_00663774 = 1.22173f;
static float FLOAT_00663778 = 2.7f;
static float FLOAT_00663928 = 1.5f;
static float FLOAT_0066392c = 50.0f;
static float FLOAT_00663930 = 100.0f;
static float FLOAT_00663934 = 15.0f;
static float FLOAT_00663938 = 4.0f;
static float FLOAT_00663d58 = 3.0f;
static float FLOAT_00664468 = 0.5f;
static float FLOAT_0066466c = 8.0f;
static float FLOAT_00664a00 = 256.0f;
static float FLOAT_00664b58 = 0.00390625f;
static float FLOAT_00664b6c = -0.5235988f;
static float FLOAT_00664b70 = 1.22173f;
static float FLOAT_00664cb0 = 256.0f;
static float FLOAT_00664e7c = 5.0f;
static float FLOAT_00664e80 = 10.0f;
static float FLOAT_00664e84 = 3.141593f;
static float FLOAT_00664e88 = 120.0f;
static float FLOAT_006652cc = 256.0f;
static float FLOAT_00665310 = 256.0f;
static float FLOAT_00665460 = 256.0f;
static float FLOAT_00665700 = 256.0f;
static float FLOAT_00665740 = 256.0f;
static float FLOAT_0066575c = 3.0f;
static float FLOAT_00665760 = 50.0f;
static float FLOAT_00665764 = 100.0f;
static float FLOAT_00665768 = 10.0f;
static float FLOAT_0066576c = 0.2f;
static float FLOAT_00665770 = 0.2f;
static float FLOAT_006659c8 = 1.3f;
static float FLOAT_006659cc = 50.0f;
static float FLOAT_006659d0 = 100.0f;

// float[6] constants
static float g_MoveAwayAngleOffsets[6] = {
    2.3561945f, 3.9269907f, 1.5707964f, 4.712389f,
    0.78539819f, 5.497787f
};

// string constants
static string s_3D_vector_0066e0e0 = "3D vector";
static string s_Euler_PBH_orientation_0066e0f0 = "Euler PBH orientation";
static string s_4D_location_0066e108 = "4D location";
static string s_Quaternion_0066e118 = "Quaternion";
static string s_String_0066e128 = "String";
static string s_Floating_point_value_0066e130 = "Floating point value";
static string s_Integer_value_0066e148 = "Integer value";

// uchar[8] constants
static uchar g_VoxelGridBitmasks[8] = {0x01, 0x02, 0x04, 0x08, 0x10, 0x20, 0x40, 0x80};
static uchar g_LightBitMaskLookup[8] = {0x01, 0x02, 0x04, 0x08, 0x10, 0x20, 0x40, 0x80};

// undefined4 constants
static undefined4 DAT_00665f3a = 0x003B001F;

// void* constants
static void* DAT_00665B78 = (void*)0x00665B90; // DAT_00665b90
static void* DAT_00665B80 = (void*)0x00665B98; // DAT_00665b98
static void* DAT_00665B88 = (void*)0x00665BA0; // DAT_00665ba0
static void* DAT_00665CD0 = (void*)0x00665CE8; // DAT_00665ce8
static void* DAT_00665CE0 = (void*)0x00665CF8; // DAT_00665cf8
static void* DAT_00665D68 = (void*)0x00665D78; // DAT_00665d78
static void* DAT_00665FA4 = (void*)&INT_00685038;

