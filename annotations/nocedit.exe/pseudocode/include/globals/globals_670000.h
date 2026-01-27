#pragma once

// Type dependencies
#include "system/basetypes.h"
#include "system/misc.h"
#include "system/watcom.h"
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
#include "types/structs/SInputFace.h"
#include "types/structs/SMRGLTextureBasic.h"

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
extern SMRGLTextureBasic DAT_0067b0c8;
extern SMRGLTextureBasic DAT_0067b100;
extern SMRGLTextureBasic DAT_0067b118;
extern SMRGLTextureBasic DAT_0067B130;
extern SMRGLTextureBasic DAT_0067B148;
extern SMRGLTextureBasic DAT_0067B160;
extern SMRGLTextureBasic DAT_0067B178;
extern SMRGLTextureBasic DAT_0067B190;
extern SMRGLTextureBasic DAT_0067B1A8;
extern SMRGLTextureBasic DAT_0067b1c0;
extern SMRGLTextureBasic DAT_0067B1D8;
extern SMRGLTextureBasic DAT_0067B1F0;
extern SMRGLTextureBasic DAT_0067B208;
extern SMRGLTextureBasic DAT_0067B220;
extern SMRGLTextureBasic DAT_0067B238;
extern SMRGLTextureBasic DAT_0067B250;
extern SMRGLTextureBasic DAT_0067B268;
extern SMRGLTextureBasic DAT_0067B280;
extern SMRGLTextureBasic DAT_0067B298;
extern SMRGLTextureBasic DAT_0067B2B0;
extern SMRGLTextureBasic DAT_0067B2C8;
extern SMRGLTextureBasic DAT_0067B2E0;
extern SMRGLTextureBasic DAT_0067B2F8;
extern SMRGLTextureBasic DAT_0067B310;
extern SMRGLTextureBasic DAT_0067B328;
extern SMRGLTextureBasic DAT_0067B340;
extern SMRGLTextureBasic DAT_0067B358;
extern SMRGLTextureBasic DAT_0067B370;
extern SMRGLTextureBasic DAT_0067B388;
extern SMRGLTextureBasic DAT_0067B3A0;
extern SMRGLTextureBasic DAT_0067B3B8;
extern SMRGLTextureBasic DAT_0067B3D0;
extern SMRGLTextureBasic DAT_0067B3E8;
extern SMRGLTextureBasic DAT_0067B400;
extern SMRGLTextureBasic DAT_0067B418;
extern SMRGLTextureBasic DAT_0067B430;
extern SMRGLTextureBasic DAT_0067B448;
extern SMRGLTextureBasic DAT_0067B460;
extern SMRGLTextureBasic DAT_0067B478;
extern SMRGLTextureBasic DAT_0067B490;
extern SMRGLTextureBasic DAT_0067B4A8;
extern SMRGLTextureBasic DAT_0067b514;
extern SMRGLTextureBasic g_FontTextureInfo;
extern SMRGLTextureBasic DAT_0067B948;
extern SMRGLTextureBasic DAT_0067b9b0;
extern SMRGLTextureBasic DAT_0067b9c8;
extern SMRGLTextureBasic DAT_0067b9e0;
extern SMRGLTextureBasic DAT_0067B9F8;
extern SMRGLTextureBasic DAT_0067BA10;
extern SMRGLTextureBasic DAT_0067ba28;
extern SMRGLTextureBasic DAT_0067ba40;
extern SMRGLTextureBasic DAT_0067BA58;
extern SMRGLTextureBasic DAT_0067BA70;
extern SMRGLTextureBasic DAT_0067BA88;
extern SMRGLTextureBasic DAT_0067BAA0;
extern SMRGLTextureBasic DAT_0067BAB8;
extern SMRGLTextureBasic DAT_0067BAD0;
extern SMRGLTextureBasic DAT_0067BAE8;
extern SMRGLTextureBasic DAT_0067BB00;
extern SMRGLTextureBasic DAT_0067BB18;
extern SMRGLTextureBasic DAT_0067BB30;
extern SMRGLTextureBasic DAT_0067BB48;
extern SMRGLTextureBasic DAT_0067BB60;
extern SMRGLTextureBasic DAT_0067BB78;
extern SMRGLTextureBasic DAT_0067BB90;
extern SMRGLTextureBasic DAT_0067bba8;
extern SMRGLTextureBasic DAT_0067BBC0;
extern SMRGLTextureBasic DAT_0067BBD8;
extern SMRGLTextureBasic DAT_0067BBF0;
extern SMRGLTextureBasic DAT_0067BC08;
extern SMRGLTextureBasic DAT_0067BC20;
extern SMRGLTextureBasic DAT_0067BC38;
extern SMRGLTextureBasic DAT_0067BC50;
extern SMRGLTextureBasic DAT_0067BC68;
extern SMRGLTextureBasic DAT_0067BC80;
extern SMRGLTextureBasic DAT_0067BC98;
extern SMRGLTextureBasic DAT_0067BCB0;
extern SMRGLTextureBasic DAT_0067BCC8;
extern SMRGLTextureBasic DAT_0067BCE0;
extern SMRGLTextureBasic DAT_0067BCF8;
extern SMRGLTextureBasic DAT_0067BD10;
extern SMRGLTextureBasic DAT_0067BD28;
extern SMRGLTextureBasic DAT_0067BD40;
extern SMRGLTextureBasic DAT_0067BD58;
extern SMRGLTextureBasic DAT_0067BD70;
extern SMRGLTextureBasic DAT_0067BD88;
extern SMRGLTextureBasic DAT_0067BDA0;
extern SMRGLTextureBasic DAT_0067BDB8;
extern SMRGLTextureBasic DAT_0067BDD0;
extern SMRGLTextureBasic DAT_0067BDE8;
extern SMRGLTextureBasic DAT_0067BE00;
extern SMRGLTextureBasic DAT_0067BE18;
extern SMRGLTextureBasic DAT_0067BE30;
extern SMRGLTextureBasic DAT_0067BE48;
extern SMRGLTextureBasic DAT_0067BE60;
extern SMRGLTextureBasic DAT_0067BE78;
extern SMRGLTextureBasic DAT_0067BE90;
extern SMRGLTextureBasic DAT_0067BEA8;
extern SMRGLTextureBasic DAT_0067BEC0;
extern SMRGLTextureBasic DAT_0067BED8;
extern SMRGLTextureBasic DAT_0067BEF0;
extern SMRGLTextureBasic DAT_0067BF08;
extern SMRGLTextureBasic DAT_0067BF20;
extern SMRGLTextureBasic DAT_0067BF38;
extern SMRGLTextureBasic DAT_0067BF50;
extern SMRGLTextureBasic DAT_0067BF68;
extern SMRGLTextureBasic DAT_0067BF80;
extern SMRGLTextureBasic DAT_0067BF98;
extern SMRGLTextureBasic DAT_0067BFB0;
extern SMRGLTextureBasic DAT_0067BFC8;
extern SMRGLTextureBasic DAT_0067BFE0;
extern SMRGLTextureBasic DAT_0067BFF8;
extern SMRGLTextureBasic DAT_0067C010;
extern SMRGLTextureBasic DAT_0067c028;
extern SMRGLTextureBasic DAT_0067c040;
extern SMRGLTextureBasic DAT_0067C058;
extern SMRGLTextureBasic DAT_0067C070;
extern SMRGLTextureBasic DAT_0067C088;
extern SMRGLTextureBasic DAT_0067C0A0;
extern SMRGLTextureBasic DAT_0067C0B8;
extern SMRGLTextureBasic DAT_0067C0D0;
extern SMRGLTextureBasic DAT_0067C0E8;
extern SMRGLTextureBasic DAT_0067C100;
extern SMRGLTextureBasic DAT_0067C118;
extern SMRGLTextureBasic DAT_0067C130;
extern SMRGLTextureBasic DAT_0067C148;
extern SMRGLTextureBasic DAT_0067C160;
extern SMRGLTextureBasic DAT_0067C178;
extern SMRGLTextureBasic DAT_0067C190;
extern SMRGLTextureBasic DAT_0067C1A8;
extern SMRGLTextureBasic DAT_0067C1C0;
extern SMRGLTextureBasic DAT_0067C1D8;
extern SMRGLTextureBasic DAT_0067C1F0;
extern SMRGLTextureBasic DAT_0067C208;
extern SMRGLTextureBasic DAT_0067C220;
extern SMRGLTextureBasic DAT_0067C238;
extern SMRGLTextureBasic DAT_0067C250;
extern SMRGLTextureBasic DAT_0067C268;
extern SMRGLTextureBasic DAT_0067C280;
extern SMRGLTextureBasic DAT_0067C298;
extern SMRGLTextureBasic DAT_0067C2B0;
extern SMRGLTextureBasic DAT_0067C2C8;
extern SMRGLTextureBasic DAT_0067c2e0;
extern SMRGLTextureBasic DAT_0067C2F8;
extern SMRGLTextureBasic DAT_0067C310;
extern SMRGLTextureBasic DAT_0067C328;
extern SMRGLTextureBasic DAT_0067C340;
extern SMRGLTextureBasic DAT_0067C358;
extern SMRGLTextureBasic DAT_0067C370;
extern SMRGLTextureBasic DAT_0067C388;
extern SMRGLTextureBasic DAT_0067C3A0;
extern SMRGLTextureBasic DAT_0067C3B8;
extern SMRGLTextureBasic DAT_0067C3D0;
extern SMRGLTextureBasic DAT_0067C3E8;
extern SMRGLTextureBasic DAT_0067C400;
extern SMRGLTextureBasic DAT_0067C418;
extern SMRGLTextureBasic DAT_0067C430;
extern SMRGLTextureBasic DAT_0067C448;
extern SMRGLTextureBasic DAT_0067C460;
extern SMRGLTextureBasic DAT_0067C478;
extern SMRGLTextureBasic DAT_0067C490;
extern SMRGLTextureBasic DAT_0067C4A8;
extern SMRGLTextureBasic DAT_0067C4C0;
extern SMRGLTextureBasic DAT_0067C4D8;
extern SMRGLTextureBasic DAT_0067C4F0;
extern SMRGLTextureBasic DAT_0067C508;
extern SMRGLTextureBasic DAT_0067C520;
extern SMRGLTextureBasic DAT_0067C538;
extern SMRGLTextureBasic DAT_0067C550;
extern SMRGLTextureBasic DAT_0067C568;
extern SMRGLTextureBasic DAT_0067C580;
extern SMRGLTextureBasic DAT_0067C598;
extern SMRGLTextureBasic DAT_0067C5B0;
extern SMRGLTextureBasic DAT_0067C5C8;
extern SMRGLTextureBasic DAT_0067C5E0;
extern SMRGLTextureBasic DAT_0067C5F8;
extern SMRGLTextureBasic DAT_0067C610;
extern SMRGLTextureBasic DAT_0067C628;
extern SMRGLTextureBasic DAT_0067C640;
extern SMRGLTextureBasic DAT_0067C658;
extern SMRGLTextureBasic DAT_0067C670;
extern SMRGLTextureBasic DAT_0067C688;
extern SMRGLTextureBasic DAT_0067C6A0;
extern SMRGLTextureBasic DAT_0067C6B8;
extern SMRGLTextureBasic DAT_0067C6D0;
extern SMRGLTextureBasic DAT_0067C6E8;
extern SMRGLTextureBasic DAT_0067C700;
extern SMRGLTextureBasic DAT_0067C718;
extern SMRGLTextureBasic DAT_0067C730;
extern SMRGLTextureBasic DAT_0067C748;
extern SMRGLTextureBasic DAT_0067C760;
extern SMRGLTextureBasic DAT_0067C778;
extern SMRGLTextureBasic DAT_0067C790;
extern SMRGLTextureBasic DAT_0067C7A8;
extern SMRGLTextureBasic DAT_0067C7C0;
extern SMRGLTextureBasic DAT_0067C7D8;
extern SMRGLTextureBasic DAT_0067C7F0;
extern SMRGLTextureBasic DAT_0067C808;
extern SMRGLTextureBasic DAT_0067C820;
extern SMRGLTextureBasic DAT_0067C838;
extern SMRGLTextureBasic DAT_0067C850;
extern SMRGLTextureBasic DAT_0067C868;
extern SMRGLTextureBasic DAT_0067C880;
extern SMRGLTextureBasic DAT_0067C898;
extern SMRGLTextureBasic DAT_0067C8B0;
extern SMRGLTextureBasic DAT_0067C8C8;
extern SMRGLTextureBasic DAT_0067C8E0;
extern SMRGLTextureBasic DAT_0067C8F8;
extern SMRGLTextureBasic DAT_0067C910;
extern SMRGLTextureBasic DAT_0067C928;
extern SMRGLTextureBasic DAT_0067C940;
extern SMRGLTextureBasic DAT_0067C958;
extern SMRGLTextureBasic DAT_0067C970;
extern SMRGLTextureBasic DAT_0067C988;
extern SMRGLTextureBasic DAT_0067C9A0;
extern SMRGLTextureBasic DAT_0067C9B8;
extern SMRGLTextureBasic DAT_0067C9D0;
extern SMRGLTextureBasic DAT_0067C9E8;
extern SMRGLTextureBasic DAT_0067CA00;
extern SMRGLTextureBasic DAT_0067CA18;
extern SMRGLTextureBasic DAT_0067CA30;
extern SMRGLTextureBasic DAT_0067CA48;
extern SMRGLTextureBasic DAT_0067CA60;
extern SMRGLTextureBasic DAT_0067CA78;
extern SMRGLTextureBasic DAT_0067CA90;
extern SMRGLTextureBasic DAT_0067CAA8;
extern SMRGLTextureBasic DAT_0067CAC0;
extern SMRGLTextureBasic DAT_0067CAD8;
extern SMRGLTextureBasic DAT_0067CAF0;
extern SMRGLTextureBasic DAT_0067cb28;
extern SMRGLTextureBasic g_Inventory3DTextureAtlas;
extern SMRGLTextureBasic g_LoadingMoonGlowTexture;
extern SMRGLTextureBasic DAT_0067d150;

// SMRGLTextureBasic*
extern SMRGLTextureBasic* g_LightTexturesEnd;
extern SMRGLTextureBasic* g_SkyDomeTexturePtr;

// SMRGLTextureBasic[40]
extern SMRGLTextureBasic g_FireEffectSmokeParticleTextures[40];

// SMRGLTextureBasic[54]
extern SMRGLTextureBasic g_FireEffectExplosionTextures[54];

// SMRGLTextureBasic[6]
extern SMRGLTextureBasic g_FireEffectLightningBoltTextures[6];

// SMRGLTextureBasic[8]
extern SMRGLTextureBasic g_AudioSpectrumTextures[8];

// TerminatedCString
extern TerminatedCString s_meshlod_0067d3a0;

// WatcomStaticDestructorNode
extern WatcomStaticDestructorNode g_CKeyFramedModelPoolDestructorNode;
extern WatcomStaticDestructorNode DAT_006703a0;
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
extern WatcomStaticDestructorNode g_GameDestructorNode1;
extern WatcomStaticDestructorNode g_GameDestructorNode2;
extern WatcomStaticDestructorNode g_GameDestructorNode3;
extern WatcomStaticDestructorNode g_CGoreDestructorNode;
extern WatcomStaticDestructorNode DAT_0067b980;
extern WatcomStaticDestructorNode DAT_0067b990;
extern WatcomStaticDestructorNode g_CGroundDestructorNode;
extern WatcomStaticDestructorNode DAT_0067cd60;
extern WatcomStaticDestructorNode DAT_0067cd70;
extern WatcomStaticDestructorNode DAT_0067cd80;
extern WatcomStaticDestructorNode DAT_0067cd90;
extern WatcomStaticDestructorNode DAT_0067cda0;
extern WatcomStaticDestructorNode DAT_0067cdb0;
extern WatcomStaticDestructorNode DAT_0067cdc0;
extern WatcomStaticDestructorNode DAT_0067cdd0;
extern WatcomStaticDestructorNode DAT_0067cde0;
extern WatcomStaticDestructorNode DAT_0067cdf0;
extern WatcomStaticDestructorNode DAT_0067ce00;
extern WatcomStaticDestructorNode DAT_0067ce10;
extern WatcomStaticDestructorNode DAT_0067ce20;
extern WatcomStaticDestructorNode DAT_0067ce30;
extern WatcomStaticDestructorNode g_LoadingMoonModelDestructorNode;
extern WatcomStaticDestructorNode g_CDemonFileManagerDestructorNode;
extern WatcomStaticDestructorNode g_LoadingScreenBitmap1DestructorNode;
extern WatcomStaticDestructorNode g_LoadingScreenBitmap2DestructorNode;
extern WatcomStaticDestructorNode g_LoadingScreenBitmap3DestructorNode;
extern WatcomStaticDestructorNode g_LoadingScreenBitmap4DestructorNode;
extern WatcomStaticDestructorNode g_CLeakCheckerDestructorNode;
extern WatcomStaticDestructorNode DAT_0067d224;
extern WatcomStaticDestructorNode DAT_0067d234;
extern WatcomStaticDestructorNode DAT_0067d244;
extern WatcomStaticDestructorNode DAT_0067d254;
extern WatcomStaticDestructorNode DAT_0067d264;
extern WatcomStaticDestructorNode DAT_0067d274;
extern WatcomStaticDestructorNode g_TempNeighborFacesDestructorNode;
extern WatcomStaticDestructorNode DAT_0067d718;
extern WatcomStaticDestructorNode DAT_0067d728;
extern WatcomStaticDestructorNode DAT_0067d738;
extern WatcomStaticDestructorNode DAT_0067d748;

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

// int[2][3][15]
extern int g_MpegBitrateTable[2][3][15];

// int[3]
extern int g_TriangleMatchTableA[3];
extern int g_TriangleMatchTableB[3];
extern int g_Layer3ShortBandBoundaries[3];

// int[5]
extern int g_Layer3LongBandBoundaries[5];

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

// ulonglong
extern ulonglong g_FilterBlendConstant;
extern ulonglong g_LightmapBlendBias1;
extern ulonglong g_LightmapBlendBias2;
extern ulonglong g_AmbientLightMMX1;
extern ulonglong g_AmbientLightMMX2;
extern ulonglong g_LightmapBlendBias5;
extern ulonglong g_LightmapBlendBias6;
extern ulonglong g_LightmapBlendBias3;
extern ulonglong g_LightmapBlendBias4;

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
extern undefined4 DAT_0067e184;

// ushort[384]
extern ushort g_LightmapData[384];

// void*
extern void* g_CBaronStaticInitFunc;
extern void* g_PerspectiveScanlineColorPtr;
extern void* switchdataD_00679d10;
extern void* switchdataD_00679d54;

// void*[4][4]
extern void* g_MpegLayer2AllocationTables[4][4];

