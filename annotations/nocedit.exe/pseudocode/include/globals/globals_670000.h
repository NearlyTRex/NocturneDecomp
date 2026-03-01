#pragma once

// Type dependencies
#include "system/basetypes.h"
#include "system/watcom.h"
#include "system/winnt.h"
#include "types/classes/CDemonMission.h"
#include "types/classes/CDemonRenderer.h"
#include "types/classes/CEditorTools.h"
#include "types/classes/CEventList.h"
#include "types/classes/CFireEffect.h"
#include "types/classes/CGame.h"
#include "types/classes/CGore.h"
#include "types/classes/CGround.h"
#include "types/classes/CKeys.h"
#include "types/classes/CLevelLoader.h"
#include "types/structs/SEnumPair.h"
#include "types/structs/SInputFace.h"
#include "types/structs/SMRGLTextureBasic.h"
#include "types/structs/SMpegLayer3BandIndex.h"

// =============================================================================
// GLOBAL VARIABLES - Range 0x670000
// =============================================================================

// CDemonMission*
extern CDemonMission* g_CDemonMissionPtr;

// CDemonRenderer*
extern CDemonRenderer* g_CDemonRendererPtr1;
extern CDemonRenderer* g_CDemonRendererPtr2;

// CEditorTools*
extern CEditorTools* g_CEditorToolsPtr;

// CEventList*
extern CEventList* g_CEventListPtr;

// CFireEffect*
extern CFireEffect* g_CFireEffectPtr;

// CGame*
extern CGame* g_CGamePtr;

// CGore*
extern CGore* g_CGorePtr;

// CGround*
extern CGround* g_CGroundPtr;

// CKeys*
extern CKeys* g_CKeysPtr;

// CLevelLoader*
extern CLevelLoader* g_CLevelLoaderPtr;

// SEnumPair[11]
extern SEnumPair g_EmitterTypePairs[11];

// SEnumPair[2]
extern SEnumPair g_DoorSideTypePairs[2];
extern SEnumPair g_DoorSwingTypePairs[2];
extern SEnumPair g_EmitterSoundTypePairs[2];
extern SEnumPair g_MarqueeDisplayTypePairs[2];

// SEnumPair[3]
extern SEnumPair g_DoorOneShotTypePairs[3];
extern SEnumPair g_LeverOpenFromSideTypePairs[3];

// SEnumPair[4]
extern SEnumPair g_DoorTypePairs[4];
extern SEnumPair g_DoorOpenFromSideTypePairs[4];
extern SEnumPair g_FlameTypePairs[4];

// SEnumPair[5]
extern SEnumPair g_MansionPuzzleSlewTypePairs[5];

// SEnumPair[9]
extern SEnumPair g_MeleeDamageTypePairs[9];

// SInputFace*[2000]
extern SInputFace* g_VisibleFacePointers[2000];

// SMRGLTextureBasic
extern SMRGLTextureBasic g_FireEffectBlackHoleTexture;
extern SMRGLTextureBasic g_FireEffectSparkTexture;
extern SMRGLTextureBasic g_FireEffectBlueSparkTexture;
extern SMRGLTextureBasic g_FireEffectGreenSparkTexture;
extern SMRGLTextureBasic g_FireEffectRedSparkTexture;
extern SMRGLTextureBasic g_FireEffectLaserTexture;
extern SMRGLTextureBasic g_FireEffectBeamFuzzTexture;
extern SMRGLTextureBasic g_FireEffectReticle;
extern SMRGLTextureBasic g_FireEffectHeadliteTexture;
extern SMRGLTextureBasic g_FireEffectBlastTexture;
extern SMRGLTextureBasic g_FireEffectPopcornTexture;
extern SMRGLTextureBasic g_FireEffectRainDropTexture;
extern SMRGLTextureBasic SMRGLTextureBasic_0067b0c8;
extern SMRGLTextureBasic SMRGLTextureBasic_0067b514;
extern SMRGLTextureBasic g_FontTextureInfo;
extern SMRGLTextureBasic DAT_0067B948;
extern SMRGLTextureBasic g_BloodParticleTexture;
extern SMRGLTextureBasic g_FootstepTexture;
extern SMRGLTextureBasic g_Inventory3DTextureAtlas;
extern SMRGLTextureBasic g_LoadingMoonGlowTexture;
extern SMRGLTextureBasic SMRGLTextureBasic_0067d150;

// SMRGLTextureBasic*
extern SMRGLTextureBasic* g_LightTexturesEnd;
extern SMRGLTextureBasic* g_SkyDomeTexturePtr;

// SMRGLTextureBasic[116]
extern SMRGLTextureBasic g_BloodPoolAnimTextures[116];

// SMRGLTextureBasic[40]
extern SMRGLTextureBasic g_FireEffectSmokeParticleTextures[40];
extern SMRGLTextureBasic SMRGLTextureBasic_ARRAY_0067b100[40];

// SMRGLTextureBasic[4]
extern SMRGLTextureBasic g_BloodSplatTextures[4];

// SMRGLTextureBasic[54]
extern SMRGLTextureBasic g_FireEffectExplosionTextures[54];

// SMRGLTextureBasic[64]
extern SMRGLTextureBasic g_BloodSplatAnimTextures[64];

// SMRGLTextureBasic[6]
extern SMRGLTextureBasic g_FireEffectLightningBoltTextures[6];

// SMRGLTextureBasic[8]
extern SMRGLTextureBasic g_AudioSpectrumTextures[8];

// SMpegLayer3BandIndex[6]
extern SMpegLayer3BandIndex g_Layer3BandIndex[6];

// TerminatedCString
extern TerminatedCString s_meshlod_0067d3a0;

// WatcomStaticDestructorNode
extern WatcomStaticDestructorNode g_CKeyFramedModelPoolDestructorNode;
extern WatcomStaticDestructorNode WatcomStaticDestructorNode_006703a0;
extern WatcomStaticDestructorNode g_CEditorToolsDestructorNode;
extern WatcomStaticDestructorNode g_CFireEffectStakesDestructorNode;
extern WatcomStaticDestructorNode g_CFireEffectSparksDestructorNode;
extern WatcomStaticDestructorNode g_CFireEffectGlassParticlesDestructorNode;
extern WatcomStaticDestructorNode g_CFireEffectFireballsDestructorNode;
extern WatcomStaticDestructorNode g_CFireEffectRocksDestructorNode;
extern WatcomStaticDestructorNode g_CFireEffectTossesDestructorNodes;
extern WatcomStaticDestructorNode g_CFireEffectCratersDestructorNodes;
extern WatcomStaticDestructorNode g_CFireEffectShellsDestructorNode;
extern WatcomStaticDestructorNode g_CFireEffectPopcornsDestructorNode;
extern WatcomStaticDestructorNode g_CFireEffectRainDropsDestructorNode;
extern WatcomStaticDestructorNode g_CDemonLightDestructorNode;
extern WatcomStaticDestructorNode g_CGameDestructorNode;
extern WatcomStaticDestructorNode g_CPickListDestructorNode;
extern WatcomStaticDestructorNode g_CGoreDestructorNode;
extern WatcomStaticDestructorNode WatcomStaticDestructorNode_0067b980;
extern WatcomStaticDestructorNode WatcomStaticDestructorNode_0067b990;
extern WatcomStaticDestructorNode g_CGroundDestructorNode;
extern WatcomStaticDestructorNode WatcomStaticDestructorNode_0067cd60;
extern WatcomStaticDestructorNode WatcomStaticDestructorNode_0067cd70;
extern WatcomStaticDestructorNode WatcomStaticDestructorNode_0067cd80;
extern WatcomStaticDestructorNode WatcomStaticDestructorNode_0067cd90;
extern WatcomStaticDestructorNode WatcomStaticDestructorNode_0067cda0;
extern WatcomStaticDestructorNode WatcomStaticDestructorNode_0067cdb0;
extern WatcomStaticDestructorNode WatcomStaticDestructorNode_0067cdc0;
extern WatcomStaticDestructorNode WatcomStaticDestructorNode_0067cdd0;
extern WatcomStaticDestructorNode WatcomStaticDestructorNode_0067cde0;
extern WatcomStaticDestructorNode WatcomStaticDestructorNode_0067cdf0;
extern WatcomStaticDestructorNode WatcomStaticDestructorNode_0067ce00;
extern WatcomStaticDestructorNode WatcomStaticDestructorNode_0067ce10;
extern WatcomStaticDestructorNode WatcomStaticDestructorNode_0067ce20;
extern WatcomStaticDestructorNode WatcomStaticDestructorNode_0067ce30;
extern WatcomStaticDestructorNode g_LoadingMoonModelDestructorNode;
extern WatcomStaticDestructorNode g_CDemonFileManagerDestructorNode;
extern WatcomStaticDestructorNode g_LoadingScreenBitmap1DestructorNode;
extern WatcomStaticDestructorNode g_LoadingScreenBitmap2DestructorNode;
extern WatcomStaticDestructorNode g_LoadingScreenBitmap3DestructorNode;
extern WatcomStaticDestructorNode g_LoadingScreenBitmap4DestructorNode;
extern WatcomStaticDestructorNode g_CLeakCheckerDestructorNode;
extern WatcomStaticDestructorNode WatcomStaticDestructorNode_0067d224;
extern WatcomStaticDestructorNode WatcomStaticDestructorNode_0067d234;
extern WatcomStaticDestructorNode WatcomStaticDestructorNode_0067d244;
extern WatcomStaticDestructorNode WatcomStaticDestructorNode_0067d254;
extern WatcomStaticDestructorNode WatcomStaticDestructorNode_0067d264;
extern WatcomStaticDestructorNode WatcomStaticDestructorNode_0067d274;
extern WatcomStaticDestructorNode g_TempNeighborFacesDestructorNode;
extern WatcomStaticDestructorNode WatcomStaticDestructorNode_0067d718;
extern WatcomStaticDestructorNode WatcomStaticDestructorNode_0067d728;
extern WatcomStaticDestructorNode WatcomStaticDestructorNode_0067d738;
extern WatcomStaticDestructorNode WatcomStaticDestructorNode_0067d748;

// _MMX_INTEGER
extern _MMX_INTEGER g_FilterBlendConstant;
extern _MMX_INTEGER g_LightmapBlendBias1;
extern _MMX_INTEGER g_LightmapBlendBias2;
extern _MMX_INTEGER g_AmbientLightMMX1;
extern _MMX_INTEGER g_AmbientLightMMX2;
extern _MMX_INTEGER g_LightmapBlendBias5;
extern _MMX_INTEGER g_LightmapBlendBias6;
extern _MMX_INTEGER g_LightmapBlendBias3;
extern _MMX_INTEGER g_LightmapBlendBias4;

// byte
extern byte g_CPUInfoFamily;
extern byte g_CPUInfoModel;
extern byte g_CPUInfoStepping;
extern byte g_CPUIDSupported;
extern byte g_CPUInfoIntelCPU;
extern byte g_CPUInfoMMXSupported;

// char*
extern char* g_CurrentDebugFilename;

// char[100]
extern char g_DefaultAuditPath[100];
extern char g_DefaultAuditRecordPath[100];
extern char g_EventCommandBuffer[100];

// char[260]
extern char g_FilePathBuffer[260];
extern char g_DefaultCheckOutPath[260];
extern char g_DefaultPodDirectoryPath[260];
extern char g_DirectoryBufferTemplate[260];
extern char g_FilenameBufferTemplate[260];

// char[512]
extern char g_Field1ParseBuffer[512];
extern char g_Field2ParseBuffer[512];

// float
extern float g_DashAnimationThreshold;
extern float g_SkyDomeVertexScale;

// int
extern int g_CZombieDogClassVersion;
extern int g_CDoorClassVersion;
extern int g_CDraculaBrideClassVersion;
extern int g_DashLength;
extern int g_RenderPixelBudget;
extern int g_CDripClassVersion;
extern int g_CDroneClassVersion;
extern int g_PerspectiveSubdivDeltaU;
extern int g_PerspectiveSubdivDeltaV;
extern int g_PerspectiveSubdivDeltaZ;
extern int g_DeltaTextureU;
extern int g_DeltaTextureV;
extern int g_DeltaDepthZ;
extern int g_PerspectiveScanlinePixelCount;
extern int g_GeoFileFormatVersion;
extern int g_CDynamiteClassVersion;
extern int g_CursorSizeHorizontal;
extern int g_CursorSizeVertical;
extern int g_CElephantGunClassVersion;
extern int g_CEmitterClassVersion;
extern int g_CEnemyClassVersion;
extern int g_WindowWidth;
extern int g_WindowHeight;
extern int g_BitsPerPixel;
extern int g_TextureFilteringEnabled;
extern int g_CurrentTextureDimension;
extern int g_InputKeyMask;
extern int g_JoystickNumButtons;
extern int g_CurrentAlphaValue;
extern int g_RenderingQuality;
extern int g_ProjectionScale;
extern int g_CFilmReelClassVersion;
extern int g_CFilmProjectorClassVersion;
extern int g_CFlameClassVersion;
extern int g_CFlameCanClassVersion;
extern int g_CFlameThrowerClassVersion;
extern int g_CFlashlightClassVersion;
extern int g_CFliesClassVersion;
extern int g_CFrankenstienMachineClassVersion;
extern int g_CGabriellaClassVersion;
extern int g_MovieRecordingWidth;
extern int g_MovieRecordingHeight;
extern int g_CGargoyleClassVersion;
extern int g_CGasMaskClassVersion;
extern int g_CGhoulClassVersion;
extern int g_CGlassClassVersion;
extern int g_CGraveClassVersion;
extern int g_CGunClassVersion;
extern int g_CHaystackClassVersion;
extern int g_CHealthItemClassVersion;
extern int g_CHeroClassVersion;
extern int g_CHeroPlaceholderClassVersion;
extern int g_CHiramClassVersion;
extern int g_CHostageClassVersion;
extern int g_CHotDemonClassVersion;
extern int g_CHighPriestOfGardathClassVersion;
extern int g_CIcePickClassVersion;
extern int g_CImpClassVersion;
extern int g_InventoryWidth;
extern int g_InventoryHeight;
extern int g_CKeyActorClassVersion;
extern int g_CLadderClassVersion;
extern int g_CLarvaClassVersion;
extern int g_CLeverClassVersion;
extern int g_AmbientLightLevel;
extern int g_SpecularEnabled;
extern int g_DiffuseLightMultiplier;
extern int g_SpecularLightMultiplier;
extern int g_CLightGunClassVersion;
extern int g_CLightConeClassVersion;
extern int g_CMansionPuzzleCircleClassVersion;
extern int g_CMirrorHackClassVersion;
extern int g_CMarqueeClassVersion;
extern int g_CMeleeClassVersion;
extern int INT_0067d390;
extern int g_EnableMidpointSampling;
extern int INT_0067d39c;
extern int g_CMimicClassVersion;
extern int g_CMineCarClassVersion;
extern int g_CPUInfoBasicInfo2;
extern int g_CPUInfoBaseInfo3;
extern int g_CMobsterClassVersion;
extern int g_CMolochClassVersion;
extern int g_MoonBatsEnabled;
extern int g_MpegSynthesisTableInitialized;
extern int g_Mp3AntiAliasInitialized;
extern int g_Mp3SynthesisTablesInitialized;

// int[16]
extern int g_Layer3ScalefacLengths1[16];
extern int g_Layer3ScalefacLengths2[16];

// int[22]
extern int g_Layer3Pretab[22];

// int[2][3][15]
extern int g_MpegBitrateTable[2][3][15];

// int[3]
extern int g_TriangleMatchTableA[3];
extern int g_TriangleMatchTableB[3];
extern int g_Layer3ShortBandGroupCounts[3];

// int[4][4]
extern int g_MpegLayer2AllocationTables[4][4];

// int[5]
extern int g_Layer3LongBandGroupCounts[5];

// int[6][3][4]
extern int g_Layer3ScalefactorBandCounts[6][3][4];

// uint
extern uint g_PerspectiveLeftU;
extern uint g_PerspectiveLeftV;
extern uint g_PerspectiveLeftZ;
extern uint g_PerspectiveLeftW;
extern uint g_PerspectiveInterpolatedW;
extern uint g_PerspectiveRightW;
extern uint g_PerspectiveRightU;
extern uint g_PerspectiveRightV;
extern uint g_PerspectiveRightZ;
extern uint g_PerspectiveCurrentU;
extern uint g_PerspectiveCurrentV;
extern uint g_PerspectiveNextU;
extern uint g_PerspectiveNextV;
extern uint g_StartDepthZ;
extern uint g_CPUFamily;
extern uint g_VertexProcessingEnabled;
extern uint g_CPUFeatureFlags;

// uint*
extern uint* g_PerspectiveScanlineZPtr;

// uint[16]
extern uint g_PerspectiveColorCache[16];

// uint[18]
extern uint g_MpegBitMaskTableMultiBit[18];

// uint[8]
extern uint g_MpegBitMaskTableSingleBit[8];

// undefined1
extern undefined1 g_MagicNumEFD;

// undefined2
extern undefined2 DAT_0067aebc;

// undefined4
extern undefined4 DAT_00670210;
extern undefined4 DAT_00670214;
extern undefined4 DAT_0067241c;
extern undefined4 DAT_00672420;
extern undefined4 DAT_00672424;
extern undefined4 DAT_00672428;
extern undefined4 DAT_0067242c;
extern undefined4 DAT_00672430;
extern undefined4 DAT_00672434;
extern undefined4 DAT_00672438;
extern undefined4 DAT_0067243c;
extern undefined4 DAT_00672440;
extern undefined4 DAT_00672444;
extern undefined4 DAT_00672448;
extern undefined4 DAT_0067244c;
extern undefined4 DAT_00672450;
extern undefined4 DAT_00672454;
extern undefined4 DAT_00672458;
extern undefined4 DAT_00678a70;
extern undefined4 DAT_00678a74;
extern undefined4 DAT_00678c80;
extern undefined4 DAT_00678c84;
extern undefined4 DAT_006793d8;
extern undefined4 DAT_006793dc;
extern undefined4 DAT_006794a0;
extern undefined4 DAT_006794a4;
extern undefined4 DAT_0067aeb8;
extern undefined4 DAT_0067b718;
extern undefined4 DAT_0067ce48;
extern undefined4 DAT_0067ce4c;
extern undefined4 DAT_0067ceb0;
extern undefined4 DAT_0067ceb4;
extern undefined4 DAT_0067d5c0;
extern undefined4 DAT_0067d5c4;
extern undefined4 DAT_0067d628;
extern undefined4 DAT_0067d62c;

// ushort[384]
extern ushort g_LightmapData[384];

// void*
extern void* g_PerspectiveScanlineColorPtr;
extern void* switchdataD_00679d10;
extern void* switchdataD_00679d54;

