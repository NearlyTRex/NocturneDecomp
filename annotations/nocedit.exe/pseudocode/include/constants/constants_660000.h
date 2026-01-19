#pragma once

// Dependencies
#include <math.h>
#include "system/basetypes.h"
#include "constants.h"
#include "prototypes/prototypes_520000.h"
#include "prototypes/prototypes_5A0000.h"
#include "system/misc.h"
#include "system/watcom.h"

// =============================================================================
// CONSTANTS
// =============================================================================

// TerminatedCString constants
const TerminatedCString s_CPickList_0066e324 = "$CPickList$$";
const TerminatedCString s_CSlew_0066e344 = "$CSlew$$";
const TerminatedCString s_SDamageInfo_0066e354 = "$SDamageInfo$$";
const TerminatedCString s_CBoundingBox3D_0066e374 = "$CBoundingBox3D$$";
const TerminatedCString s_CDemonActor_0066e394 = "$CDemonActor$$";
const TerminatedCString s_CVector_0066e3b4 = "$CVector$$";
const TerminatedCString s_CAmmo_0066e3c8 = "$CAmmo$$";
const TerminatedCString s_CAmmoBox_0066e3dc = "$CAmmoBox$$";
const TerminatedCString s_CAnvil_0066e3f0 = "$CAnvil$$";
const TerminatedCString s_SFire_0066e404 = "$SFire$$";
const TerminatedCString s_CFlame_0066e414 = "$CFlame$$";
const TerminatedCString s_CEnemy_0066e424 = "$CEnemy$$";
const TerminatedCString s_CArmour_0066e434 = "$CArmour$$";
const TerminatedCString s_CBackgroundActor_0066e448 = "$CBackgroundActor$$";
const TerminatedCString s_CBaron_0066e480 = "$CBaron$$";
const TerminatedCString s_CBaronWeapon_0066e490 = "$CBaronWeapon$$";
const TerminatedCString s_CBarrier_0066e4a8 = "$CBarrier$$";
const TerminatedCString s_CBat_0066e4bc = "$CBat$$";
const TerminatedCString s_CBatCreature_0066e4cc = "$CBatCreature$$";
const TerminatedCString s_CBatman_0066e4e4 = "$CBatman$$";
const TerminatedCString s_CBattery_0066e4f8 = "$CBattery$$";
const TerminatedCString s_CBeast_0066e50c = "$CBeast$$";
const TerminatedCString s_CBiggs_0066e520 = "$CBiggs$$";
const TerminatedCString s_CDeformableModelInstance_0066e534 = "$CDeformableModelInstance$$";
const TerminatedCString s_CBodyPart_0066e554 = "$CBodyPart$$";
const TerminatedCString s_SBodyPartFire_0066e568 = "$SBodyPartFire$$";
const TerminatedCString s_SBodyPartModel_0066e580 = "$SBodyPartModel$$";
const TerminatedCString s_CBoneGuy_0066e59c = "$CBoneGuy$$";
const TerminatedCString s_SBoneGuyBox_0066e5ac = "$SBoneGuyBox$$";
const TerminatedCString s_SScrape_0066e5bf = "$SScrape$$";
const TerminatedCString s_CBoxActor_0066e610 = "$CBoxActor$$";
const TerminatedCString s_CLightActor_0066e624 = "$CLightActor$$";
const TerminatedCString s_CDemonFilter_0066e638 = "$CDemonFilter$$";
const TerminatedCString s_CBride_0066e650 = "$CBride$$";
const TerminatedCString s_CBugs_0066e664 = "$CBugs$$";
const TerminatedCString s_CKeyFramedModelInstance_0066e674 = "$CKeyFramedModelInstance$$";
const TerminatedCString s_SBug_0066e694 = "$SBug$$";
const TerminatedCString s_CCameraView_0066e6a0 = "$CCameraView$$";
const TerminatedCString s_noCollision_0066e778 = "noCollision";
const TerminatedCString s_CCharacter_0066e7a4 = "$CCharacter$$";
const TerminatedCString s_SPose_0066e7c4 = "$SPose$$";
const TerminatedCString s_CChain_0066e7d8 = "$CChain$$";
const TerminatedCString s_SChainVertex_0066e7e8 = "$SChainVertex$$";
const TerminatedCString s_SClothBone_0066e81c = "$SClothBone$$";
const TerminatedCString s_SClothVertex_0066e82e = "$SClothVertex$$";
const TerminatedCString s_CLZWCompress_0066e842 = "$CLZWCompress$$";
const TerminatedCString s_CLZWDecompress_0066e856 = "$CLZWDecompress$$";
const TerminatedCString s_ofstream_0066e86c = "$ofstream$$";
const TerminatedCString s_ifstream_0066e87c = "$ifstream$$";
const TerminatedCString s_istrstream_0066e88c = "$istrstream$$";
const TerminatedCString s_ostrstream_0066e89e = "$ostrstream$$";
const TerminatedCString s_CCodec_0066e8b0 = "$CCodec$$";
const TerminatedCString s_CColonel_0066e8c4 = "$CColonel$$";
const TerminatedCString s_console_txt_0066e8e8 = "console.txt";
const TerminatedCString s_CConsole_0066e904 = "$CConsole$$";
const TerminatedCString s_CPlatform_0066e918 = "$CPlatform$$";
const TerminatedCString s_CConveyor_0066e92c = "$CConveyor$$";
const TerminatedCString s_CZombieCow_0066ec68 = "$CZombieCow$$";
const TerminatedCString s_CCrate_0066ec80 = "$CCrate$$";
const TerminatedCString s_CCrossbow_0066ec94 = "$CCrossbow$$";
const TerminatedCString s_CCurtain_0066ecac = "$CCurtain$$";
const TerminatedCString s_SCurtainVertex_0066ecbc = "$SCurtainVertex$$";
const TerminatedCString s_SCollisionInfo_0066ecd4 = "$SCollisionInfo$$";
const TerminatedCString s_EFD_0066ed6c = "EFD";
const TerminatedCString s_CDemonCamera_0066ed74 = "$CDemonCamera$$";
const TerminatedCString s_Texture_map_0066ee08 = "Texture map";
const TerminatedCString s_Texture_map_w_ol_0066ee28 = "Texture map w/ol";
const TerminatedCString s_Flat_shade_0066ee48 = "Flat shade";
const TerminatedCString s_Flat_shade_w_ol_0066ee68 = "Flat shade w/ol";
const TerminatedCString s_Outline_0066ee88 = "Outline";
const TerminatedCString s_CramTex_II_0066ef30 = "CramTex II";
const TerminatedCString s_CActorDestination_0066ef44 = "$CActorDestination$$";
const TerminatedCString s_CFilterFX_0066efd8 = "$CFilterFX$$";
const TerminatedCString s_CFilterCache_0066efec = "$CFilterCache$$";

// WatcomInheritanceLayout constants
const WatcomInheritanceLayout DAT_00665e68 = {.base_type = nullptr, .offset_to_base = 0x00000010};

// WatcomThunkedDestructor constants
const WatcomThunkedDestructor DAT_00665b70 = {.destructor_func = (void *)0x00000048, .this_adjustment_ptr = (int *)0x0000000C};

// WatcomVirtualBaseDescriptor constants
const WatcomVirtualBaseDescriptor DAT_00665b68 = {.flags = 0x00000000, .offset_to_vbase = 0x00000054};
const WatcomVirtualBaseDescriptor DAT_00665d60 = {.flags = 0x00000000, .offset_to_vbase = 0x0000004C};

// char[104] constants
const char g_PropertyNamePrefix[] = "";

// char[300] constants
const char g_LocalizationTemplate[] = "";

// char[80] constants
const char g_LoadedModelName[] = "";

// double constants
const double g_InfiniteCollapseCost = 9.9999999999999997e+34;
const double DOUBLE_00663138 = -1;
const double DOUBLE_00663140 = 1116.4000000000001;
const double DOUBLE_00663148 = 4;
const double DOUBLE_00663150 = 20;
const double g_PositiveInfinity = INFINITY;

// float constants
const float FLOAT_00660484 = 120.0f;
const float FLOAT_006608cc = 256.0f;
const float FLOAT_00661330 = 0.25f;
const float FLOAT_00661334 = 0.25f;
const float FLOAT_00661338 = 1.0f;
const float FLOAT_0066136c = 256.0f;
const float g_MirrorProjectionScale = 256.0f;
const float g_MirrorFloatToInt = 65536.0f;
const float g_MirrorIntToFloat_Coarse = 0.00390625f;
const float g_MirrorIntToFloat_Fine = 1.525879e-05f;
const float FLOAT_00661938 = 2.0f;
const float FLOAT_00661b40 = 256.0f;
const float FLOAT_00661b48 = 0.00390625f;
const float FLOAT_00661ba0 = 256.0f;
const float FLOAT_00662850 = 256.0f;
const float g_VDCoordinateScaleFactor = 256.0f;
const float g_VDCameraDistanceRadius = 200.0f;
const float g_VDNearbyActorRadius = 100.0f;
const float FLOAT_00662a28 = 256.0f;
const float FLOAT_00662a40 = 256.0f;
const float FLOAT_00662e44 = 0.00390625f;
const float FLOAT_00662e98 = 256.0f;
const float FLOAT_00662ea0 = 0.00390625f;
const float g_SoundDivisorConstant = 4.0f;
const float g_SoundReferenceDistanceConstant = 20.0f;
const float FLOAT_00663160 = 10000.0f;
const float FLOAT_00663164 = 2.0f;
const float g_MenuChannel1MaxVolume = 0.25f;
const float g_MenuChannel0MaxVolume = 0.25f;
const float g_MenuChannel2MaxVolume = 1.0f;
const float FLOAT_00663928 = 1.5f;
const float DAT_0066392c = 50.0f;
const float FLOAT_00663930 = 100.0f;
const float FLOAT_00663934 = 15.0f;
const float FLOAT_00663938 = 4.0f;
const float FLOAT_006652cc = 256.0f;

// int constants
const int DAT_0066eea8 = 0x2;

// string constants
const string s_3D_vector_0066e0e0 = "3D vector";
const string s_Euler_PBH_orientation_0066e0f0 = "Euler PBH orientation";
const string s_4D_location_0066e108 = "4D location";
const string s_Quaternion_0066e118 = "Quaternion";
const string s_String_0066e128 = "String";
const string s_Floating_point_value_0066e130 = "Floating point value";
const string s_Integer_value_0066e148 = "Integer value";

// uchar[8] constants
const uchar g_VoxelGridBitmasks[] = "";
const uchar g_LightBitMaskLookup[] = "";

// undefined4 constants
const undefined4 DAT_00660028 = 0x40400000;
const undefined4 DAT_006601dc = 0x40000000;
const undefined4 DAT_00660480 = 0x41F00000;
const undefined4 DAT_006605e8 = 0x3F800000;
const undefined4 DAT_0066071c = 0x41A00000;
const undefined4 DAT_00660a40 = 0x41F00000;
const undefined4 DAT_00660a48 = 0x40000000;
const undefined4 DAT_00661408 = 0x40200000;
const undefined4 DAT_00661778 = 0x40400000;
const undefined4 DAT_0066177c = 0x41F00000;
const undefined4 DAT_00661c44 = 0x40A00000;
const undefined4 DAT_00662458 = 0x3F000000;
const undefined4 DAT_00662638 = 0xFFFFFFFF;
const undefined4 DAT_00662678 = 0x40800000;
const undefined4 DAT_00662f68 = 0x40200000;
const undefined4 DAT_00663744 = 0x41200000;
const undefined4 DAT_00663748 = 0x428C0000;
const undefined4 DAT_0066374c = 0x41900000;
const undefined4 DAT_00663750 = 0x41200000;
const undefined4 DAT_00663754 = 0x41200000;
const undefined4 DAT_00663758 = 0x41000000;
const undefined4 DAT_0066375c = 0x3F000000;
const undefined4 DAT_00663770 = 0xBF860A92;
const undefined4 DAT_00663774 = 0x3F9C61AA;
const undefined4 DAT_00663d58 = 0x40400000;
const undefined4 DAT_00664b6c = 0xBF060A92;
const undefined4 DAT_00664b70 = 0x3F9C61AA;
const undefined4 DAT_0066575c = 0x40400000;
const undefined4 DAT_00665768 = 0x41200000;
const undefined4 DAT_0066576c = 0x3E4CCCCD;
const undefined4 DAT_00665770 = 0x3E4CCCCD;
const undefined4 DAT_00665968 = 0x3F800000;
const undefined4 DAT_0066596c = 0;
const undefined4 DAT_006659c8 = 0x3FA66666;
const undefined4 DAT_00665f3a = 0x003B001F;
const undefined4 DAT_0066e30c = 0x00000001;
const undefined4 DAT_0066e314 = 0x00000002;
const undefined4 DAT_0066e940 = 0;
const undefined4 DAT_0066e944 = 0;
const undefined4 DAT_0066ea48 = 0;
const undefined4 DAT_0066ea4c = 0;
const undefined4 DAT_0066eb50 = 0;
const undefined4 DAT_0066eb54 = 0;
const undefined4 DAT_0066eeac = 0x00000003;

// void* constants
const void* DAT_006618F4 = (void*)core_mobster_cpp_FUN_00527360;
const void* DAT_006630E4 = (void*)core_smiley_cpp_FUN_005a3280;
const void* DAT_00664E89 = (void*)0x0042F000; // LAB_0042f000
const void* DAT_00665B78 = (void*)0x00665B90; // DAT_00665b90
const void* DAT_00665B80 = (void*)0x00665B98; // DAT_00665b98
const void* DAT_00665B88 = (void*)0x00665BA0; // DAT_00665ba0
const void* DAT_00665CD0 = (void*)0x00665CE8; // DAT_00665ce8
const void* DAT_00665CE0 = (void*)0x00665CF8; // DAT_00665cf8
const void* DAT_00665D68 = (void*)0x00665D78; // DAT_00665d78
const void* DAT_00665FA4 = (void*)0x00685038; // DAT_00685038
const void* DAT_0066E5E4 = (void*)s_Rummage_006167f6;
const void* DAT_0066E5EC = (void*)s_Inventory_006167fe;
const void* DAT_0066E5F4 = (void*)s_Carry_00616808;
const void* DAT_0066E5FC = (void*)s_Heavy_0061680e;
const void* DAT_0066E760 = (void*)s_When_hurt_0061776e;
const void* DAT_0066E768 = (void*)s_Always_00617778;
const void* DAT_0066EC5C = (void*)s_z_00619453;

