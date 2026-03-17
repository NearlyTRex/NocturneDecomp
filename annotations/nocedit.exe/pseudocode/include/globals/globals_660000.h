#pragma once

// Type dependencies
#include "system/basetypes.h"
#include "system/fstream.h"
#include "system/iostream.h"
#include "system/strstream.h"
#include "system/watcom.h"
#include "types/classes/CCharacter_vtable.h"
#include "types/classes/CConsole.h"
#include "types/classes/CDemonActor_vtable.h"
#include "types/classes/CDemonFilter.h"
#include "types/classes/CDemonPod_vtable.h"
#include "types/classes/CEnemy_vtable.h"
#include "types/classes/CFileManager_vtable.h"
#include "types/classes/CFilterCache.h"
#include "types/classes/CFilterFx.h"
#include "types/classes/CFont_vtable.h"
#include "types/classes/CHero_vtable.h"
#include "types/classes/CKeys_vtable.h"
#include "types/classes/CMatrix3x4f.h"
#include "types/classes/CMotionController_vtable.h"
#include "types/classes/CObj_vtable.h"
#include "types/classes/COptimize_vtable.h"
#include "types/classes/CParticle_vtable.h"
#include "types/classes/CPod_vtable.h"
#include "types/classes/CPoly_vtable.h"
#include "types/classes/CQuaternion4f.h"
#include "types/classes/CSoundDeviceBasic_vtable.h"
#include "types/classes/CSoundDeviceFull_vtable.h"
#include "types/classes/CVector3i.h"
#include "types/classes/CWeapon_vtable.h"
#include "types/funcdefs/MRGLBlockHandlerFunc.h"
#include "types/structs/SEnumPair.h"
#include "types/structs/SFontGlyph.h"
#include "types/structs/SMRGLLightPrimitive.h"
#include "types/structs/SMRGLTextureBasic.h"
#include "types/structs/SPropertyFlag.h"
#include "types/structs/SResolutionEntry.h"

// =============================================================================
// GLOBAL VARIABLES - Range 0x660000
// =============================================================================

// CCharacter_vtable
extern CCharacter_vtable DAT_00660120;
extern CCharacter_vtable DAT_006602E0;
extern CCharacter_vtable DAT_00660820;
extern CCharacter_vtable DAT_00661510;
extern CCharacter_vtable DAT_00661880;
extern CCharacter_vtable DAT_00661A30;
extern CCharacter_vtable DAT_00661E80;
extern CCharacter_vtable DAT_00662050;
extern CCharacter_vtable DAT_00662550;
extern CCharacter_vtable DAT_00662780;
extern CCharacter_vtable DAT_00663070;
extern CCharacter_vtable DAT_00663870;
extern CCharacter_vtable DAT_00663A30;
extern CCharacter_vtable DAT_00663E50;
extern CCharacter_vtable DAT_00664000;
extern CCharacter_vtable DAT_00664160;
extern CCharacter_vtable DAT_00664560;
extern CCharacter_vtable DAT_00664DC0;
extern CCharacter_vtable DAT_00664F80;
extern CCharacter_vtable DAT_00665870;
extern CCharacter_vtable DAT_00665AD0;

// CConsole*
extern CConsole* g_CConsolePtr;

// CDemonActor_vtable
extern CDemonActor_vtable g_CIcePickVTable;
extern CDemonActor_vtable g_CImpVTable;
extern CDemonActor_vtable g_CKeyActorVTable;
extern CDemonActor_vtable g_CLadderVTable;
extern CDemonActor_vtable g_CLarvaVTable;
extern CDemonActor_vtable g_CLeverVTable;
extern CDemonActor_vtable g_CLightGunVTable;
extern CDemonActor_vtable g_CLightConeVTable;
extern CDemonActor_vtable g_CMansionPuzzleCircleVTable;
extern CDemonActor_vtable g_CMirrorHackVTable;
extern CDemonActor_vtable g_CMarqueeVTable;
extern CDemonActor_vtable g_CMeleeVTable;
extern CDemonActor_vtable g_CMimicVTable;
extern CDemonActor_vtable g_CMinecarVTable;
extern CDemonActor_vtable g_CMobsterVTable;
extern CDemonActor_vtable g_CMolochVTable;
extern CDemonActor_vtable g_CNPCVTable;
extern CDemonActor_vtable g_CPassengerVTable;
extern CDemonActor_vtable g_CPendulumVTable;
extern CDemonActor_vtable g_CPlatformVTable;
extern CDemonActor_vtable g_CScatVTable;
extern CDemonActor_vtable g_CSentinelVTable;
extern CDemonActor_vtable g_CShotgunVTable;
extern CDemonActor_vtable g_CShovelVTable;
extern CDemonActor_vtable g_CSimBoxVTable;
extern CDemonActor_vtable g_CSmileyVTable;
extern CDemonActor_vtable g_CSpikeVTable;
extern CDemonActor_vtable g_CStairsVTable;
extern CDemonActor_vtable g_CTempleStoneVTable;
extern CDemonActor_vtable g_CStrangerVTable;
extern CDemonActor_vtable g_CSuccubusVTable;
extern CDemonActor_vtable g_CSvetlanaVTable;
extern CDemonActor_vtable g_CBassPlayerVTable;
extern CDemonActor_vtable g_CDrummerVTable;
extern CDemonActor_vtable g_CTeleportDestVTable;
extern CDemonActor_vtable g_CTeleportVTable;
extern CDemonActor_vtable g_CTentacleVTable;
extern CDemonActor_vtable g_CTommyGunVTable;
extern CDemonActor_vtable g_CTrapVTable;
extern CDemonActor_vtable g_CTrashVTable;
extern CDemonActor_vtable g_CTriggerVTable;
extern CDemonActor_vtable g_CTurretVTable;
extern CDemonActor_vtable g_CTVBatVTable;
extern CDemonActor_vtable g_CVampireBossVTable;
extern CDemonActor_vtable g_CVehicleVTable;
extern CDemonActor_vtable g_CCryptVesselVTable;
extern CDemonActor_vtable g_CWaterActorVTable;
extern CDemonActor_vtable g_CWayPointVTable;
extern CDemonActor_vtable g_CWeaponVTable;
extern CDemonActor_vtable g_CWerewolfVTable;
extern CDemonActor_vtable g_CZombieVTable;

// CDemonFilter*[4]
extern CDemonFilter* g_PlayerFilters[4];

// CDemonFilter*[8]
extern CDemonFilter* g_GlobalFilters[8];

// CDemonPod_vtable
extern CDemonPod_vtable g_CDemonPodVTable;

// CEnemy_vtable
extern CEnemy_vtable DAT_00660348;
extern CEnemy_vtable DAT_00660888;
extern CEnemy_vtable DAT_00661578;
extern CEnemy_vtable DAT_006618E8;
extern CEnemy_vtable DAT_006627E8;
extern CEnemy_vtable DAT_006630D8;
extern CEnemy_vtable DAT_00663A98;
extern CEnemy_vtable DAT_006645C8;
extern CEnemy_vtable DAT_00664E28;
extern CEnemy_vtable DAT_00664FE8;
extern CEnemy_vtable DAT_006658D8;
extern CEnemy_vtable DAT_00665B38;

// CFileManager_vtable
extern CFileManager_vtable g_CDemonFileManagerVTable;

// CFilterCache*
extern CFilterCache* g_CFilterCachePtr;

// CFilterFx*
extern CFilterFx* g_CFilterFXPtr;

// CFont_vtable
extern CFont_vtable g_CFontVTable;
extern CFont_vtable g_CWinFontVTable;

// CHero_vtable
extern CHero_vtable DAT_00660188;
extern CHero_vtable DAT_00661A98;
extern CHero_vtable DAT_006625B8;
extern CHero_vtable DAT_006638D8;
extern CHero_vtable DAT_00663EB8;

// CKeys_vtable
extern CKeys_vtable g_CKeysVTable;

// CMatrix3x4f
extern CMatrix3x4f CMatrix3x4f_00665968;

// CMotionController_vtable
extern CMotionController_vtable g_CMotionControllerVTable;
extern CMotionController_vtable g_CDeformableModelInstanceVTable;

// CObj_vtable
extern CObj_vtable g_CObjVTable;

// COptimize_vtable
extern COptimize_vtable g_COptimizeVTable;

// CParticle_vtable
extern CParticle_vtable g_CParticleVTable;

// CPod_vtable
extern CPod_vtable g_CPodVTable;

// CPoly_vtable
extern CPoly_vtable g_CPolyVTable;

// CQuaternion4f
extern CQuaternion4f CQuaternion4f_00665998;

// CSoundDeviceBasic_vtable
extern CSoundDeviceBasic_vtable g_CWavInDeviceVTable;

// CSoundDeviceFull_vtable
extern CSoundDeviceFull_vtable g_CDirectSoundDeviceVTable;
extern CSoundDeviceFull_vtable g_CWavOutDeviceVTable;

// CVector3i[62]
extern CVector3i g_CoronaVertexPositions[62];

// CWeapon_vtable
extern CWeapon_vtable DAT_00660B50;
extern CWeapon_vtable DAT_00661260;
extern CWeapon_vtable DAT_00662B70;
extern CWeapon_vtable DAT_00662CC0;
extern CWeapon_vtable DAT_00664760;
extern CWeapon_vtable DAT_00664C70;
extern CWeapon_vtable DAT_006656A0;

// MRGLBlockHandlerFunc*[67]
extern MRGLBlockHandlerFunc* g_MRGLBlockHandlerTable[67];

// SEnumPair[3]
extern SEnumPair g_CharacterHealthBarTypePairs[3];

// SEnumPair[5]
extern SEnumPair g_BoxActorPickupTypePairs[5];

// SFontGlyph[224]
extern SFontGlyph g_FontTable[224];

// SMRGLLightPrimitive[84]
extern SMRGLLightPrimitive g_CoronaFacePrimitives[84];

// SMRGLTextureBasic
extern SMRGLTextureBasic SMRGLTextureBasic_0066e158;
extern SMRGLTextureBasic SMRGLTextureBasic_0066e460;
extern SMRGLTextureBasic SMRGLTextureBasic_0066e784;
extern SMRGLTextureBasic g_CameraBackdropTexture;
extern SMRGLTextureBasic g_CoronaHeadliteTexture;

// SMRGLTextureBasic[20]
extern SMRGLTextureBasic g_LightTextures[20];

// SMRGLTextureBasic[6]
extern SMRGLTextureBasic SMRGLTextureBasic_ARRAY_0066e6b0[6];

// SPropertyFlag[2]
extern SPropertyFlag SPropertyFlag_ARRAY_0066e30c[2];

// SResolutionEntry[9]
extern SResolutionEntry g_ResolutionTable[9];

// WatcomDestructorCall
extern WatcomDestructorCall WatcomDestructorCall_006603c0;
extern WatcomDestructorCall WatcomDestructorCall_006603cc;
extern WatcomDestructorCall WatcomDestructorCall_006603d8;
extern WatcomDestructorCall WatcomDestructorCall_006603e4;
extern WatcomDestructorCall WatcomDestructorCall_006603f0;
extern WatcomDestructorCall WatcomDestructorCall_006603fc;
extern WatcomDestructorCall WatcomDestructorCall_00660408;
extern WatcomDestructorCall WatcomDestructorCall_00660414;
extern WatcomDestructorCall WatcomDestructorCall_00660420;
extern WatcomDestructorCall WatcomDestructorCall_0066042c;
extern WatcomDestructorCall WatcomDestructorCall_00660438;
extern WatcomDestructorCall WatcomDestructorCall_00660444;
extern WatcomDestructorCall WatcomDestructorCall_00660450;
extern WatcomDestructorCall WatcomDestructorCall_0066045c;
extern WatcomDestructorCall WatcomDestructorCall_006608c0;
extern WatcomDestructorCall WatcomDestructorCall_00660cc0;
extern WatcomDestructorCall WatcomDestructorCall_00660ccc;
extern WatcomDestructorCall WatcomDestructorCall_00660cd8;
extern WatcomDestructorCall WatcomDestructorCall_00660ce4;
extern WatcomDestructorCall WatcomDestructorCall_00660cf0;
extern WatcomDestructorCall WatcomDestructorCall_006612a0;
extern WatcomDestructorCall WatcomDestructorCall_006612d0;
extern WatcomDestructorCall WatcomDestructorInfo_006612dc;
extern WatcomDestructorCall WatcomDestructorCall_006612e8;
extern WatcomDestructorCall WatcomDestructorCall_006612f4;
extern WatcomDestructorCall WatcomDestructorCall_00661300;
extern WatcomDestructorCall WatcomDestructorCall_0066130c;
extern WatcomDestructorCall WatcomDestructorCall_00661360;
extern WatcomDestructorCall WatcomDestructorCall_00661ad0;
extern WatcomDestructorCall WatcomDestructorCall_00661adc;
extern WatcomDestructorCall WatcomDestructorCall_00661ae8;
extern WatcomDestructorCall WatcomDestructorCall_00661af4;
extern WatcomDestructorCall WatcomDestructorCall_00661c10;
extern WatcomDestructorCall WatcomDestructorCall_00661c1c;
extern WatcomDestructorCall WatcomDestructorCall_00661c70;
extern WatcomDestructorCall WatcomDestructorCall_00661d20;
extern WatcomDestructorCall WatcomDestructorCall_006620e0;
extern WatcomDestructorCall g_CDemonPodDestructorNode;
extern WatcomDestructorCall WatcomDestructorCall_006625f0;
extern WatcomDestructorCall WatcomDestructorCall_006625fc;
extern WatcomDestructorCall WatcomDestructorCall_00662608;
extern WatcomDestructorCall WatcomDestructorCall_00662614;
extern WatcomDestructorCall WatcomDestructorCall_00662820;
extern WatcomDestructorCall WatcomDestructorCall_0066282c;
extern WatcomDestructorCall WatcomDestructorCall_00662838;
extern WatcomDestructorCall WatcomDestructorCall_00662844;
extern WatcomDestructorCall WatcomDestructorCall_006629b0;
extern WatcomDestructorCall WatcomDestructorCall_00662a10;
extern WatcomDestructorCall WatcomDestructorCall_00662a1c;
extern WatcomDestructorCall WatcomDestructorCall_00662e30;
extern WatcomDestructorCall WatcomDestructorCall_00662e80;
extern WatcomDestructorCall WatcomDestructorCall_00662e8c;
extern WatcomDestructorCall WatcomDestructorCall_00663110;
extern WatcomDestructorCall WatcomDestructorCall_0066311c;
extern WatcomDestructorCall WatcomDestructorCall_00663128;
extern WatcomDestructorCall WatcomDestructorCall_006632e0;
extern WatcomDestructorCall WatcomDestructorCall_006632ec;
extern WatcomDestructorCall WatcomDestructorCall_00664600;
extern WatcomDestructorCall WatcomDestructorCall_006652c0;

// WatcomInheritanceLayout
extern WatcomInheritanceLayout g_OStream_InheritanceLayout;
extern WatcomInheritanceLayout WatcomInheritanceLayout_00665e68;

// WatcomStaticDestructorNode
extern WatcomStaticDestructorNode WatcomStaticDestructorNode_0066e5cc;
extern WatcomStaticDestructorNode g_CDeformableModelInstanceDestructorNode;
extern WatcomStaticDestructorNode g_ConsoleDestructorNode;
extern WatcomStaticDestructorNode g_CLZWDecompressDestructorNode;
extern WatcomStaticDestructorNode WatcomStaticDestructorNode_0066ef5c;
extern WatcomStaticDestructorNode WatcomStaticDestructorNode_0066ef6c;
extern WatcomStaticDestructorNode g_CFilterCacheDestructorNode;
extern WatcomStaticDestructorNode g_CFilterFXDestructorNode;

// WatcomThunkedDestructor
extern WatcomThunkedDestructor WatcomThunkedDestructor_00665b70;
extern WatcomThunkedDestructor WatcomThunkedDestructor_00665e74;

// WatcomTypeInfo
extern WatcomTypeInfo g_CIcePickTypeInfo;
extern WatcomTypeInfo g_CImpTypeInfo;
extern WatcomTypeInfo g_CIniTypeInfo;
extern WatcomTypeInfo g_CKeyActorTypeInfo;
extern WatcomTypeInfo g_CLadderTypeInfo;
extern WatcomTypeInfo g_CLarvaTypeInfo;
extern WatcomTypeInfo g_CLeverTypeInfo;
extern WatcomTypeInfo g_CLightGunTypeInfo;
extern WatcomTypeInfo g_CLightConeTypeInfo;
extern WatcomTypeInfo g_CDemonFileManagerTypeInfo;
extern WatcomTypeInfo g_CEdScrollBarTypeInfo;
extern WatcomTypeInfo g_SPanelTypeInfo;
extern WatcomTypeInfo g_SGemTypeInfo;
extern WatcomTypeInfo g_SReflectorTypeInfo;
extern WatcomTypeInfo g_CMirrorHackTypeInfo;
extern WatcomTypeInfo g_CMansionPuzzleCircleTypeInfo;
extern WatcomTypeInfo g_CMarqueeTypeInfo;
extern WatcomTypeInfo g_CMeleeTypeInfo;
extern WatcomTypeInfo g_CLeakCheckerTypeInfo;
extern WatcomTypeInfo g_CMoonTypeInfo;
extern WatcomTypeInfo g_LodFaceTypeInfo;
extern WatcomTypeInfo g_CSpotViewTypeInfo;
extern WatcomTypeInfo g_LodMeshTypeInfo;
extern WatcomTypeInfo g_CMimicTypeInfo;
extern WatcomTypeInfo g_CMineCarTypeInfo;
extern WatcomTypeInfo g_SClipPlaneTypeInfo;
extern WatcomTypeInfo g_CDemonMissionTypeInfo;
extern WatcomTypeInfo g_CMobsterTypeInfo;
extern WatcomTypeInfo g_CMolochTypeInfo;
extern WatcomTypeInfo g_SBatTypeInfo;
extern WatcomTypeInfo g_CMorphModelTypeInfo;
extern WatcomTypeInfo g_SMorphControlPointTypeInfo;
extern WatcomTypeInfo g_CMotionControllerTypeInfo;
extern WatcomTypeInfo g_CEdCheckTypeInfo;
extern WatcomTypeInfo g_CNetGameTypeInfo;
extern WatcomTypeInfo g_SChatHistoryTypeInfo;
extern WatcomTypeInfo g_SPlayerTypeInfo;
extern WatcomTypeInfo g_SNetPlayerTypeInfo;
extern WatcomTypeInfo g_CMouseTypeInfo;
extern WatcomTypeInfo g_CPassengerTypeInfo;
extern WatcomTypeInfo g_CPathMapTypeInfo;
extern WatcomTypeInfo g_CPendulumTypeInfo;
extern WatcomTypeInfo g_CPackedBitmapTypeInfo;
extern WatcomTypeInfo g_CPodTypeInfo;
extern WatcomTypeInfo g_CDemonPodTypeInfo;
extern WatcomTypeInfo g_CScatTypeInfo;
extern WatcomTypeInfo g_CScriptTypeInfo;
extern WatcomTypeInfo g_CSentinelTypeInfo;
extern WatcomTypeInfo g_CDemonSetTypeInfo;
extern WatcomTypeInfo g_CDemonRaytraceTypeInfo;
extern WatcomTypeInfo g_C3DSCameraTypeInfo;
extern WatcomTypeInfo g_C3DSLightTypeInfo;
extern WatcomTypeInfo g_SRoomTypeInfo;
extern WatcomTypeInfo g_SVDBoxTypeInfo;
extern WatcomTypeInfo g_SRaytraceStateTypeInfo;
extern WatcomTypeInfo g_SCollisionReturnInfoTypeInfo;
extern WatcomTypeInfo g_SIntersectXZCylinderTypeInfo;
extern WatcomTypeInfo g_CZThumbTypeInfo;
extern WatcomTypeInfo g_CShotgunTypeInfo;
extern WatcomTypeInfo g_CShovelTypeInfo;
extern WatcomTypeInfo g_CSimBoxTypeInfo;
extern WatcomTypeInfo g_LodVertTypeInfo;
extern WatcomTypeInfo g_SVertTypeInfo;
extern WatcomTypeInfo g_CDeformableModelTypeInfo;
extern WatcomTypeInfo g_CSkeletonTypeInfo;
extern WatcomTypeInfo g_CSmileyTypeInfo;
extern WatcomTypeInfo g_SfxSlotTypeInfo;
extern WatcomTypeInfo g_SfxOptionsTypeInfo;
extern WatcomTypeInfo g_SfxSampleTypeInfo;
extern WatcomTypeInfo g_CMP3DecoderTypeInfo;
extern WatcomTypeInfo g_STrainNoiseTypeInfo;
extern WatcomTypeInfo g_CSpikeTypeInfo;
extern WatcomTypeInfo g_CStairsTypeInfo;
extern WatcomTypeInfo g_CTempleStoneTypeInfo;
extern WatcomTypeInfo g_CStrangerTypeInfo;
extern WatcomTypeInfo g_CSuccubusTypeInfo;
extern WatcomTypeInfo g_CVecTypeInfo;
extern WatcomTypeInfo g_CP2DTypeInfo;
extern WatcomTypeInfo g_CP3DTypeInfo;
extern WatcomTypeInfo g_CPolyTypeInfo;
extern WatcomTypeInfo g_CObjTypeInfo;
extern WatcomTypeInfo g_COptimizeTypeInfo;
extern WatcomTypeInfo g_CSvetlanaTypeInfo;
extern WatcomTypeInfo g_CDrummerTypeInfo;
extern WatcomTypeInfo g_CBassPlayerTypeInfo;
extern WatcomTypeInfo g_CTeleportTypeInfo;
extern WatcomTypeInfo g_CTeleportDestTypeInfo;
extern WatcomTypeInfo g_CTentacleTypeInfo;
extern WatcomTypeInfo g_CTextureListTypeInfo;
extern WatcomTypeInfo g_CTommyGunTypeInfo;
extern WatcomTypeInfo g_CTrapTypeInfo;
extern WatcomTypeInfo g_CTrashTypeInfo;
extern WatcomTypeInfo g_CTriggerTypeInfo;
extern WatcomTypeInfo g_CTurretTypeInfo;
extern WatcomTypeInfo g_CTVBatTypeInfo;
extern WatcomTypeInfo g_CVampireBossTypeInfo;
extern WatcomTypeInfo g_CTireTypeInfo;
extern WatcomTypeInfo g_CVehicleTypeInfo;
extern WatcomTypeInfo g_CCryptVesselTypeInfo;
extern WatcomTypeInfo g_CWaterTypeInfo;
extern WatcomTypeInfo g_SWaterVertexTypeInfo;
extern WatcomTypeInfo g_CWaterActorTypeInfo;
extern WatcomTypeInfo g_CWayPointTypeInfo;
extern WatcomTypeInfo g_CWeaponTypeInfo;
extern WatcomTypeInfo g_CDemonGlobeTypeInfo;
extern WatcomTypeInfo g_CWeatherTypeInfo;
extern WatcomTypeInfo g_CWerewolfTypeInfo;
extern WatcomTypeInfo g_CWinFontTypeInfo;
extern WatcomTypeInfo g_CZombieTypeInfo;
extern WatcomTypeInfo g_OStreamTypeInfo;
extern WatcomTypeInfo g_StrStreamBaseTypeInfo;
extern WatcomTypeInfo g_IOSTypeInfo;
extern WatcomTypeInfo g_IStreamTypeInfo;
extern WatcomTypeInfo g_FStreamBaseTypeInfo;
extern WatcomTypeInfo g_StrStreamBufTypeInfo;
extern WatcomTypeInfo g_FilebufTypeInfo;

// WatcomVirtualBaseDescriptor
extern WatcomVirtualBaseDescriptor WatcomVirtualBaseDescriptor_00665b68;
extern WatcomVirtualBaseDescriptor g_IstrstreamLayoutInfo;
extern WatcomVirtualBaseDescriptor g_IFStream_LayoutInfo;
extern WatcomVirtualBaseDescriptor g_IFStream_IStreamSubobjectLayout;
extern WatcomVirtualBaseDescriptor g_OFStream_VirtualBaseLayout;
extern WatcomVirtualBaseDescriptor g_OFStream_OStreamSubobjectLayout;
extern WatcomVirtualBaseDescriptor g_Strstream_VirtualLayout;
extern WatcomVirtualBaseDescriptor g_FStreamBase_VirtualBaseLayout;

// char[104]
extern char g_PropertyNamePrefix[104];

// char[256]
extern char g_CourseLastBonPath[256];

// char[264]
extern char g_CourseLastPthPath[264];
extern char g_CourseLastCrsPath[264];

// char[2]
extern char g_PropertyNamePrefixMinusTwo[2];

// char[300]
extern char g_LocalizationTemplate[300];

// char[80]
extern char g_LoadedModelName[80];

// filebuf_vtable
extern filebuf_vtable g_FilebufVTable;

// int
extern int g_Istrstream_IstreamLastReadLength;
extern int g_DefaultStreamBufferSize;
extern int g_TextWrapEnabled;
extern int g_CurrentTextColor;
extern int INT_0066df80;
extern int g_CurrentRenderColor;
extern int g_CDemonActorClassVersion;
extern int g_CAmmoClassVersion;
extern int g_CAmmoBoxClassVersion;
extern int g_CAnvilClassVersion;
extern int g_CArmourClassVersion;
extern int g_CBackgroundActorClassVersion;
extern int g_CBaronClassVersion;
extern int g_CBaronWeaponClassVersion;
extern int g_CBarrierClassVersion;
extern int g_CBatClassVersion;
extern int g_CBatCreatureClassVersion;
extern int g_CBatmanClassVersion;
extern int g_CBatteryClassVersion;
extern int g_CBeastClassVersion;
extern int g_CBiggsClassVersion;
extern int g_CBodyPartClassVersion;
extern int g_CBoneGuyClassVersion;
extern int g_CBoxActorClassVersion;
extern int g_CLightActorClassVersion;
extern int g_CBrideClassVersion;
extern int g_CBugsClassVersion;
extern int g_CCharacterClassVersion;
extern int g_CChainClassVersion;
extern int g_LineClippingDisabled;
extern int g_NearPlaneDistance;
extern int g_CColonelClassVersion;
extern int g_CConveyorClassVersion;
extern int g_CZombieCowClassVersion;
extern int g_CCrateClassVersion;
extern int g_CCrossbowClassVersion;
extern int g_CCurtainClassVersion;
extern int g_CameraShakePeakValue;
extern int g_CameraShakeSustainValue;
extern int g_CameraShakeState;
extern int g_FogColorIndexR;
extern int g_FogColorIndexG;
extern int g_FogColorIndexB;
extern int INT_0066ed68;
extern int g_EditorDetailLevel;
extern int g_MouseReferenceY;
extern int g_EditorColorMode;
extern int g_EditorCurrentTexture;
extern int g_ZBufferEnabled;
extern int g_CActorDestinationClassVersion;

// int[14]
extern int g_OctantRotationAngles[14];

// int[16]
extern int g_ColorLookupTable[16];

// int[20]
extern int g_PolygonReductionParams[20];

// int[8]
extern int g_CameraEdgeOffsetX[8];
extern int g_CameraEdgeOffsetY[8];

// short
extern short g_DaysInMonth_Normal;
extern short g_DaysInMonth_Leap;

// streambuf_vtable
extern streambuf_vtable g_StreambufVTable;

// strstreambuf_vtable
extern strstreambuf_vtable g_StrstreambufVTable;

// void*
extern void* g_IFStream_FStreamBaseDestructor;
extern void* g_IFStream_IStreamDestructor;
extern void* g_IFStream_IOSDestructor;
extern void* g_OFStream_FStreamBaseDestructor;
extern void* g_OFStream_OStream;
extern void* g_OFStream_IOS;
extern void* g_StrStreamBase_Destructor;
extern void* g_StrStreamBase_IOSDestructor;
extern void* g_OStream_Destructor;
extern void* g_OStream_IOSDestructor;
extern void* g_IOS_Destructor;
extern void* g_FStreamBase_Destructor;
extern void* g_FStreamBase_IOSDestructor;

