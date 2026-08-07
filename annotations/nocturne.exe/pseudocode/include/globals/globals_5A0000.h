#pragma once

// Type dependencies
#include "system/basetypes.h"
#include "system/fstream.h"
#include "system/strstream.h"
#include "system/watcom.h"
#include "types/classes/CCharacter_full_vtable.h"
#include "types/classes/CConsole.h"
#include "types/classes/CDemonActor_vtable.h"
#include "types/classes/CDemonPod_vtable.h"
#include "types/classes/CDemonRenderer.h"
#include "types/classes/CEnemy_full_vtable.h"
#include "types/classes/CFont_vtable.h"
#include "types/classes/CHero_full_vtable.h"
#include "types/classes/CMobster_full_vtable.h"
#include "types/classes/CMotionController_vtable.h"
#include "types/classes/CParticle_vtable.h"
#include "types/classes/CPod_vtable.h"
#include "types/classes/CSmiley_full_vtable.h"
#include "types/classes/CSoundDeviceFull_vtable.h"
#include "types/classes/CWeapon_full_vtable.h"
#include "types/structs/SFontGlyph.h"
#include "types/structs/SResolutionEntry.h"

// =============================================================================
// GLOBAL VARIABLES - Range 0x5A0000
// =============================================================================

// CCharacter_full_vtable
extern CCharacter_full_vtable g_CNPCVTable;
extern CCharacter_full_vtable g_CPassengerVTable;
extern CCharacter_full_vtable g_CBassPlayerVTable;
extern CCharacter_full_vtable g_CDrummerVTable;

// CConsole*
extern CConsole* g_CConsole_PTR_005ad350;

// CDemonActor_vtable
extern CDemonActor_vtable g_CMansionPuzzleCircleVTable;
extern CDemonActor_vtable g_CMirrorHackVTable;
extern CDemonActor_vtable g_CMarqueeVTable;
extern CDemonActor_vtable g_CMineCarVTable;
extern CDemonActor_vtable g_CPendulumVTable;
extern CDemonActor_vtable g_CPlatformVTable;
extern CDemonActor_vtable g_CSimBoxVTable;
extern CDemonActor_vtable g_CSpikeVTable;
extern CDemonActor_vtable g_CStairsVTable;
extern CDemonActor_vtable g_CTempleStoneVTable;
extern CDemonActor_vtable g_CTeleportDestVTable;
extern CDemonActor_vtable g_CTeleportVTable;
extern CDemonActor_vtable g_CTrapVTable;
extern CDemonActor_vtable g_CTrashVTable;
extern CDemonActor_vtable g_CTriggerVTable;
extern CDemonActor_vtable g_CVehicleVTable;
extern CDemonActor_vtable g_CCryptVesselVTable;
extern CDemonActor_vtable g_CWaterActorVTable;
extern CDemonActor_vtable g_CWayPointVTable;

// CDemonPod_vtable
extern CDemonPod_vtable g_CDemonPodVTable;

// CDemonRenderer*
extern CDemonRenderer* g_CDemonRenderer_PTR_005ae704;

// CEnemy_full_vtable
extern CEnemy_full_vtable g_CMimicVTable;
extern CEnemy_full_vtable g_CSentinelVTable;
extern CEnemy_full_vtable g_CSuccubusVTable;
extern CEnemy_full_vtable g_CTentacleVTable;
extern CEnemy_full_vtable g_CTVBatVTable;
extern CEnemy_full_vtable g_CVampireBossVTable;
extern CEnemy_full_vtable g_CWerewolfVTable;
extern CEnemy_full_vtable g_CZombieVTable;

// CFont_vtable
extern CFont_vtable g_CFontVTable;
extern CFont_vtable g_CWinFontVTable;

// CHero_full_vtable
extern CHero_full_vtable g_CMolochVTable;
extern CHero_full_vtable g_CScatVTable;
extern CHero_full_vtable g_CStrangerVTable;
extern CHero_full_vtable g_CSvetlanaVTable;

// CMobster_full_vtable
extern CMobster_full_vtable g_CMobsterVTable;

// CMotionController_vtable
extern CMotionController_vtable g_CMotionControllerVTable;
extern CMotionController_vtable g_CDeformableModelInstanceVTable;

// CParticle_vtable
extern CParticle_vtable g_CParticleVTable;

// CPod_vtable
extern CPod_vtable g_CPodVTable;

// CSmiley_full_vtable
extern CSmiley_full_vtable g_CSmileyVTable;

// CSoundDeviceFull_vtable
extern CSoundDeviceFull_vtable g_CDirectSoundDeviceVTable;
extern CSoundDeviceFull_vtable g_CWavOutDeviceVTable;

// CWeapon_full_vtable
extern CWeapon_full_vtable g_CMeleeVTable;
extern CWeapon_full_vtable g_CShotgunVTable;
extern CWeapon_full_vtable g_CShovelVTable;
extern CWeapon_full_vtable g_CTommyGunVTable;
extern CWeapon_full_vtable g_CTurretVTable;
extern CWeapon_full_vtable g_CWeaponVTable;

// SFontGlyph[224]
extern SFontGlyph g_FontTable[224];

// SResolutionEntry[9]
extern SResolutionEntry g_ResolutionTable[9];

// WatcomDestructorCall
extern WatcomDestructorCall g_WatcomDestructorCall_005a0510;
extern WatcomDestructorCall g_WatcomDestructorCall_005a051c;
extern WatcomDestructorCall g_WatcomDestructorCall_005a0528;
extern WatcomDestructorCall g_WatcomDestructorCall_005a0534;
extern WatcomDestructorCall g_WatcomDestructorCall_005a0540;
extern WatcomDestructorCall g_WatcomDestructorCall_005a054c;
extern WatcomDestructorCall g_WatcomDestructorCall_005a0c30;
extern WatcomDestructorCall g_WatcomDestructorCall_005a0c3c;
extern WatcomDestructorCall g_WatcomDestructorCall_005a0c48;
extern WatcomDestructorCall g_WatcomDestructorCall_005a0c54;
extern WatcomDestructorCall g_WatcomDestructorCall_005a0d90;
extern WatcomDestructorCall g_WatcomDestructorCall_005a0e40;
extern WatcomDestructorCall g_WatcomDestructorCall_005a11d0;
extern WatcomDestructorCall g_WatcomDestructorCall_005a14e0;
extern WatcomDestructorCall g_WatcomDestructorCall_005a16c0;
extern WatcomDestructorCall g_WatcomDestructorCall_005a16cc;
extern WatcomDestructorCall g_WatcomDestructorCall_005a18c0;
extern WatcomDestructorCall g_WatcomDestructorCall_005a18cc;
extern WatcomDestructorCall g_WatcomDestructorCall_005a18d8;
extern WatcomDestructorCall g_WatcomDestructorCall_005a18e4;
extern WatcomDestructorCall g_WatcomDestructorCall_005a1e90;
extern WatcomDestructorCall g_WatcomDestructorCall_005a1e9c;
extern WatcomDestructorCall g_WatcomDestructorCall_005a2120;
extern WatcomDestructorCall g_WatcomDestructorCall_005a212c;
extern WatcomDestructorCall g_WatcomDestructorCall_005a2138;
extern WatcomDestructorCall g_WatcomDestructorCall_005a22c0;
extern WatcomDestructorCall g_WatcomDestructorCall_005a3270;
extern WatcomDestructorCall g_WatcomDestructorCall_005a3e80;

// WatcomStaticDestructorNode
extern WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005ad08c;
extern WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005ad340;
extern WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005ad434;
extern WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005ad4dc;
extern WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005ad4ec;
extern WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005ad4fc;
extern WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005ad50c;
extern WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005ae638;
extern WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005ae6b8;

// WatcomTypeInfo
extern WatcomTypeInfo g_SPanelTypeInfo_005a0210;
extern WatcomTypeInfo g_SGemTypeInfo_005a0230;
extern WatcomTypeInfo g_SReflectorTypeInfo_005a0250;
extern WatcomTypeInfo g_CMirrorHackTypeInfo_005a0270;
extern WatcomTypeInfo g_CMansionPuzzleCircleTypeInfo_005a0290;
extern WatcomTypeInfo g_CMarqueeTypeInfo_005a03b0;
extern WatcomTypeInfo g_CMeleeTypeInfo_005a04f0;
extern WatcomTypeInfo g_CMoonTypeInfo_005a0580;
extern WatcomTypeInfo g_CMimicTypeInfo_005a0740;
extern WatcomTypeInfo g_CMineCarTypeInfo_005a0860;
extern WatcomTypeInfo g_SClipPlaneTypeInfo_005a08a0;
extern WatcomTypeInfo g_CDemonMissionTypeInfo_005a08e0;
extern WatcomTypeInfo g_CMobsterTypeInfo_005a0a80;
extern WatcomTypeInfo g_CMolochTypeInfo_005a0c10;
extern WatcomTypeInfo g_CCourseTypeInfo_005a0c80;
extern WatcomTypeInfo g_SBatTypeInfo_005a0ca0;
extern WatcomTypeInfo g_CMorphModelTypeInfo_005a0ce0;
extern WatcomTypeInfo g_CMotionControllerTypeInfo_005a0d30;
extern WatcomTypeInfo g_CNetGameTypeInfo_005a0dc0;
extern WatcomTypeInfo g_SChatHistoryTypeInfo_005a0de0;
extern WatcomTypeInfo g_SPlayerTypeInfo_005a0e00;
extern WatcomTypeInfo g_SNetPlayerTypeInfo_005a0e20;
extern WatcomTypeInfo g_CMouseTypeInfo_005a0e70;
extern WatcomTypeInfo g_CPassengerTypeInfo_005a11b0;
extern WatcomTypeInfo g_CPathMapTypeInfo_005a1200;
extern WatcomTypeInfo g_CPendulumTypeInfo_005a1320;
extern WatcomTypeInfo g_CPackedBitmapTypeInfo_005a1340;
extern WatcomTypeInfo g_CPodTypeInfo_005a14a0;
extern WatcomTypeInfo g_CPodFileTypeInfo_005a14c0;
extern WatcomTypeInfo g_CDemonPodTypeInfo_005a1510;
extern WatcomTypeInfo g_CScatTypeInfo_005a16a0;
extern WatcomTypeInfo g_CScriptTypeInfo_005a1700;
extern WatcomTypeInfo g_CSentinelTypeInfo_005a18a0;
extern WatcomTypeInfo g_CDemonSetTypeInfo_005a1910;
extern WatcomTypeInfo g_CDemonCameraTypeInfo_005a1930;
extern WatcomTypeInfo g_CDemonRaytraceTypeInfo_005a1950;
extern WatcomTypeInfo g_C3DSCameraTypeInfo_005a1970;
extern WatcomTypeInfo g_C3DSLightTypeInfo_005a1990;
extern WatcomTypeInfo g_SRoomTypeInfo_005a19b0;
extern WatcomTypeInfo g_SVDBoxTypeInfo_005a19d0;
extern WatcomTypeInfo g_SRaytraceStateTypeInfo_005a1a10;
extern WatcomTypeInfo g_SCollisionReturnTypeInfo_005a1a30;
extern WatcomTypeInfo g_SIntersectXZCylinderTypeInfo_005a1a50;
extern WatcomTypeInfo g_CShotgunTypeInfo_005a1bf0;
extern WatcomTypeInfo g_CShovelTypeInfo_005a1d30;
extern WatcomTypeInfo g_CSimBoxTypeInfo_005a1e50;
extern WatcomTypeInfo g_SVertTypeInfo_005a1ee0;
extern WatcomTypeInfo g_CDeformableModelInstanceTypeInfo_005a1f00;
extern WatcomTypeInfo g_CDeformableModelTypeInfo_005a1f20;
extern WatcomTypeInfo g_CSkeletonTypeInfo_005a1f40;
extern WatcomTypeInfo g_CSmileyTypeInfo_005a2100;
extern WatcomTypeInfo g_SSfxSlotTypeInfo_005a2180;
extern WatcomTypeInfo g_SSfxOptionsTypeInfo_005a21a0;
extern WatcomTypeInfo g_SSfxSampleTypeInfo_005a21c0;
extern WatcomTypeInfo g_CMP3DecoderTypeInfo_005a21e0;
extern WatcomTypeInfo g_STrainNoiseTypeInfo_005a22f0;
extern WatcomTypeInfo g_CSpikeTypeInfo_005a2410;
extern WatcomTypeInfo g_CSpotViewTypeInfo_005a2470;
extern WatcomTypeInfo g_CStairsTypeInfo_005a2590;
extern WatcomTypeInfo g_CTempleStoneTypeInfo_005a26b0;
extern WatcomTypeInfo g_CStrangerTypeInfo_005a2890;
extern WatcomTypeInfo g_CSuccubusTypeInfo_005a2a30;
extern WatcomTypeInfo g_CSvetlanaTypeInfo_005a2bc0;
extern WatcomTypeInfo g_CDrummerTypeInfo_005a2e80;
extern WatcomTypeInfo g_CBassPlayerTypeInfo_005a2ea0;
extern WatcomTypeInfo g_CTeleportTypeInfo_005a30a0;
extern WatcomTypeInfo g_CTeleportDestTypeInfo_005a30c0;
extern WatcomTypeInfo g_CTentacleTypeInfo_005a3250;
extern WatcomTypeInfo g_CTextureListTypeInfo_005a32a0;
extern WatcomTypeInfo g_CTommyGunTypeInfo_005a33e0;
extern WatcomTypeInfo g_CTrapTypeInfo_005a3500;
extern WatcomTypeInfo g_CTrashTypeInfo_005a3620;
extern WatcomTypeInfo g_CTriggerTypeInfo_005a3740;
extern WatcomTypeInfo g_CTurretTypeInfo_005a38b0;
extern WatcomTypeInfo g_CTVBatTypeInfo_005a3a40;
extern WatcomTypeInfo g_CVampireBossTypeInfo_005a3be0;
extern WatcomTypeInfo g_CTireTypeInfo_005a3d20;
extern WatcomTypeInfo g_CVehicleTypeInfo_005a3d40;
extern WatcomTypeInfo g_CCryptVesselTypeInfo_005a3e60;
extern WatcomTypeInfo g_CWaterTypeInfo_005a3eb0;
extern WatcomTypeInfo g_SWaterVertexTypeInfo_005a3fd0;
extern WatcomTypeInfo g_CWaterActorTypeInfo_005a3ff0;
extern WatcomTypeInfo g_CWayPointTypeInfo_005a4110;
extern WatcomTypeInfo g_CWeaponTypeInfo_005a4250;
extern WatcomTypeInfo g_CDemonGlobeTypeInfo_005a4270;
extern WatcomTypeInfo g_CWeatherTypeInfo_005a42b0;
extern WatcomTypeInfo g_CWerewolfTypeInfo_005a4460;
extern WatcomTypeInfo g_CZombieTypeInfo_005a46a0;
extern WatcomTypeInfo g_ostreamTypeInfo_005a4960;
extern WatcomTypeInfo g_strstreambaseTypeInfo_005a4980;
extern WatcomTypeInfo g_iosTypeInfo_005a49a0;
extern WatcomTypeInfo g_istreamTypeInfo_005a4a00;
extern WatcomTypeInfo g_fstreambaseTypeInfo_005a4a60;
extern WatcomTypeInfo g_strstreambufTypeInfo_005a4af0;
extern WatcomTypeInfo g_filebufTypeInfo_005a4b60;

// filebuf_vtable
extern filebuf_vtable g_FilebufVTable;

// float
extern float FLOAT_005a2158;
extern float FLOAT_005a2160;

// int
extern int g_INT_005acc88;
extern int g_INT_005acea0;
extern int g_INT_005aceb4;
extern int g_INT_005acec8;
extern int g_INT_005acedc;
extern int g_INT_005acf20;
extern int g_INT_005acf3c;
extern int g_INT_005acf58;
extern int g_INT_005acf80;
extern int g_INT_005acf94;
extern int g_INT_005acfa4;
extern int g_INT_005acfbc;
extern int g_INT_005acfd0;
extern int g_INT_005acfe4;
extern int g_INT_005acff8;
extern int g_INT_005ad00c;
extern int g_INT_005ad054;
extern int g_INT_005ad09c;
extern int INT_005ad0a0;
extern int g_INT_005ad0e0;
extern int g_INT_005ad0f4;
extern int g_INT_005ad1e8;
extern int g_INT_005ad250;
extern int g_INT_005ad32c;
extern int g_INT_005ad380;
extern int g_INT_005ad3ac;
extern int g_INT_005ad3c4;
extern int g_INT_005ad3d8;
extern int INT_005ad3f0;
extern int g_INT_005ad4bc;
extern int g_INT_005ae678;
extern int g_INT_005ae690;
extern int g_INT_005ae6c8;

// strstreambuf_vtable
extern strstreambuf_vtable g_StrstreambufVTable;

// undefined1
extern undefined1 DAT_005acc8f;
extern undefined1 DAT_005acc90;
extern undefined1 DAT_005acc91;

// undefined1*
extern undefined1* g_StreambufVTable;
extern undefined1* g_MRGLBlockHandlerTable;

// undefined4
extern undefined4 DAT_005a4b78;
extern undefined4 DAT_005acab4;
extern undefined4 DAT_005accf8;
extern undefined4 DAT_005accfc;
extern undefined4 DAT_005ad280;
extern undefined4 DAT_005ad284;
extern undefined4 DAT_005ad444;
extern undefined4 DAT_005ad448;
extern undefined4 DAT_005ad44c;
extern undefined4 DAT_005ad450;
extern undefined4 DAT_005ad454;
extern undefined4 DAT_005ad458;
extern undefined4 DAT_005ad45c;
extern undefined4 DAT_005ad594;
extern undefined4 DAT_005ad59c;
extern undefined4 DAT_005ad898;
extern undefined4 DAT_005ad89c;
extern undefined4 DAT_005ad8bc;
extern undefined4 DAT_005ad8c0;
extern undefined4 DAT_005ae6f4;
extern undefined4 DAT_005ae6f8;
extern undefined4 DAT_005ae708;

