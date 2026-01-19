#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x670000
// =============================================================================

SMRGLTextureBasic* g_LightTexturesEnd = nullptr;
WatcomStaticDestructorNode g_CKeyFramedModelPoolDestructorNode = {nullptr, (WatcomDestructorCall *)&WatcomDestructorCall_0065c960, 0x00000001, (void *)&g_CKeyFramedModelPool};
int g_TriangleMatchTableA[3] = {0x00000001, 0x00000002, 0x00000000};
int g_TriangleMatchTableB[3] = {0x00000002, 0x00000000, 0x00000001};
undefined4 g_CZombieDogClassVersion = 0x00000002;
undefined4 g_CDoorClassVersion = 0x0000000B;
WatcomStaticDestructorNode DAT_006703a0 = {nullptr, (WatcomDestructorCall *)&WatcomDestructorCall_0065cd40, 0x00000001, (void *)&SFreaky_ARRAY_02c6d0c0};
int g_CDraculaBrideClassVersion = 0x9;
int g_DashLength = 0x1;
CDemonRenderer* g_CDemonRendererPtr1 = (CDemonRenderer*)&g_CDemonRendererInstance;
CDemonRenderer* g_CDemonRendererPtr2 = (CDemonRenderer*)&g_CDemonRendererInstance;
int g_RenderPixelBudget = 0x1;
SInputFace* g_VisibleFacePointers[2000] = {};
undefined4 g_CDripClassVersion = 0x00000006;
undefined4 g_CDroneClassVersion = 0x00000002;
SMRGLTextureBasic* g_SkyDomeTexturePtr = (SMRGLTextureBasic*)&g_SkyDomeTextureData;
uint g_PerspectiveLeftU = 0x0;
uint g_PerspectiveLeftV = 0x0;
uint g_PerspectiveLeftZ = 0x0;
uint g_PerspectiveLeftW = 0x0;
uint g_PerspectiveInterpolatedW = 0x0;
uint g_PerspectiveRightW = 0x0;
uint g_PerspectiveRightU = 0x0;
uint g_PerspectiveRightV = 0x0;
uint g_PerspectiveRightZ = 0x0;
int g_PerspectiveSubdivDeltaU = 0x0;
int g_PerspectiveSubdivDeltaV = 0x0;
int g_PerspectiveSubdivDeltaZ = 0x0;
uint g_PerspectiveCurrentU = 0x0;
uint g_PerspectiveCurrentV = 0x0;
uint g_PerspectiveNextU = 0x0;
uint g_PerspectiveNextV = 0x0;
uint g_StartDepthZ = 0x0;
int g_DeltaTextureU = 0x0;
int g_DeltaTextureV = 0x0;
int g_DeltaDepthZ = 0x0;
void* g_PerspectiveScanlineColorPtr = nullptr;
int g_PerspectiveScanlinePixelCount = 0x0;
uint* g_PerspectiveScanlineZPtr = nullptr;
uint g_PerspectiveColorCache[16] = {};
ulonglong g_FilterBlendConstant = 0x0;
ulonglong g_LightmapBlendBias1 = 0x0;
ulonglong g_LightmapBlendBias2 = 0x8000800080008;
ulonglong g_AmbientLightMMX1 = 0x4000400040004;
ulonglong g_AmbientLightMMX2 = 0xc000c000c000c;
ulonglong g_LightmapBlendBias5 = 0x0;
ulonglong g_LightmapBlendBias6 = 0x40004000400040;
ulonglong g_LightmapBlendBias3 = 0x20002000200020;
ulonglong g_LightmapBlendBias4 = 0x60006000600060;
ushort g_LightmapData[384] = {
    0x0000, 0x0000, 0x0000, 0x0000, 0x0040, 0x0040, 0x0040, 0x0040,
    0x0080, 0x0080, 0x0080, 0x0080, 0x00C0, 0x00C0, 0x00C0, 0x00C0,
    0x0100, 0x0100, 0x0100, 0x0100, 0x0140, 0x0140, 0x0140, 0x0140,
    0x0180, 0x0180, 0x0180, 0x0180, 0x01C0, 0x01C0, 0x01C0, 0x01C0,
    0x0200, 0x0200, 0x0200, 0x0200, 0x0240, 0x0240, 0x0240, 0x0240,
    0x0280, 0x0280, 0x0280, 0x0280, 0x02C0, 0x02C0, 0x02C0, 0x02C0,
    0x0300, 0x0300, 0x0300, 0x0300, 0x0340, 0x0340, 0x0340, 0x0340,
    0x0380, 0x0380, 0x0380, 0x0380, 0x03C0, 0x03C0, 0x03C0, 0x03C0,
    0x0400, 0x0400, 0x0400, 0x0400, 0x0440, 0x0440, 0x0440, 0x0440,
    0x0480, 0x0480, 0x0480, 0x0480, 0x04C0, 0x04C0, 0x04C0, 0x04C0,
    0x0500, 0x0500, 0x0500, 0x0500, 0x0540, 0x0540, 0x0540, 0x0540,
    0x0580, 0x0580, 0x0580, 0x0580, 0x05C0, 0x05C0, 0x05C0, 0x05C0,
    0x0600, 0x0600, 0x0600, 0x0600, 0x0640, 0x0640, 0x0640, 0x0640,
    0x0680, 0x0680, 0x0680, 0x0680, 0x06C0, 0x06C0, 0x06C0, 0x06C0,
    0x0700, 0x0700, 0x0700, 0x0700, 0x0740, 0x0740, 0x0740, 0x0740,
    0x0780, 0x0780, 0x0780, 0x0780, 0x07C0, 0x07C0, 0x07C0, 0x07C0,
    0x0800, 0x0800, 0x0800, 0x0800, 0x0840, 0x0840, 0x0840, 0x0840,
    0x0880, 0x0880, 0x0880, 0x0880, 0x08C0, 0x08C0, 0x08C0, 0x08C0,
    0x0900, 0x0900, 0x0900, 0x0900, 0x0940, 0x0940, 0x0940, 0x0940,
    0x0980, 0x0980, 0x0980, 0x0980, 0x09C0, 0x09C0, 0x09C0, 0x09C0,
    0x0A00, 0x0A00, 0x0A00, 0x0A00, 0x0A40, 0x0A40, 0x0A40, 0x0A40,
    0x0A80, 0x0A80, 0x0A80, 0x0A80, 0x0AC0, 0x0AC0, 0x0AC0, 0x0AC0,
    0x0B00, 0x0B00, 0x0B00, 0x0B00, 0x0B40, 0x0B40, 0x0B40, 0x0B40,
    0x0B80, 0x0B80, 0x0B80, 0x0B80, 0x0BC0, 0x0BC0, 0x0BC0, 0x0BC0,
    0x0C00, 0x0C00, 0x0C00, 0x0C00, 0x0C40, 0x0C40, 0x0C40, 0x0C40,
    0x0C80, 0x0C80, 0x0C80, 0x0C80, 0x0CC0, 0x0CC0, 0x0CC0, 0x0CC0,
    0x0D00, 0x0D00, 0x0D00, 0x0D00, 0x0D40, 0x0D40, 0x0D40, 0x0D40,
    0x0D80, 0x0D80, 0x0D80, 0x0D80, 0x0DC0, 0x0DC0, 0x0DC0, 0x0DC0,
    0x0E00, 0x0E00, 0x0E00, 0x0E00, 0x0E40, 0x0E40, 0x0E40, 0x0E40,
    0x0E80, 0x0E80, 0x0E80, 0x0E80, 0x0EC0, 0x0EC0, 0x0EC0, 0x0EC0,
    0x0F00, 0x0F00, 0x0F00, 0x0F00, 0x0F40, 0x0F40, 0x0F40, 0x0F40,
    0x0F80, 0x0F80, 0x0F80, 0x0F80, 0x0FC0, 0x0FC0, 0x0FC0, 0x0FC0,
    0x1000, 0x1000, 0x1000, 0x1000, 0x1040, 0x1040, 0x1040, 0x1040,
    0x1080, 0x1080, 0x1080, 0x1080, 0x10C0, 0x10C0, 0x10C0, 0x10C0,
    0x1100, 0x1100, 0x1100, 0x1100, 0x1140, 0x1140, 0x1140, 0x1140,
    0x1180, 0x1180, 0x1180, 0x1180, 0x11C0, 0x11C0, 0x11C0, 0x11C0,
    0x1200, 0x1200, 0x1200, 0x1200, 0x1240, 0x1240, 0x1240, 0x1240,
    0x1280, 0x1280, 0x1280, 0x1280, 0x12C0, 0x12C0, 0x12C0, 0x12C0,
    0x1300, 0x1300, 0x1300, 0x1300, 0x1340, 0x1340, 0x1340, 0x1340,
    0x1380, 0x1380, 0x1380, 0x1380, 0x13C0, 0x13C0, 0x13C0, 0x13C0,
    0x1400, 0x1400, 0x1400, 0x1400, 0x1440, 0x1440, 0x1440, 0x1440,
    0x1480, 0x1480, 0x1480, 0x1480, 0x14C0, 0x14C0, 0x14C0, 0x14C0,
    0x1500, 0x1500, 0x1500, 0x1500, 0x1540, 0x1540, 0x1540, 0x1540,
    0x1580, 0x1580, 0x1580, 0x1580, 0x15C0, 0x15C0, 0x15C0, 0x15C0,
    0x1600, 0x1600, 0x1600, 0x1600, 0x1640, 0x1640, 0x1640, 0x1640,
    0x1680, 0x1680, 0x1680, 0x1680, 0x16C0, 0x16C0, 0x16C0, 0x16C0,
    0x1700, 0x1700, 0x1700, 0x1700, 0x1740, 0x1740, 0x1740, 0x1740,
    0x1780, 0x1780, 0x1780, 0x1780, 0x17C0, 0x17C0, 0x17C0, 0x17C0
};
int g_GeoFileFormatVersion = 0x4;
int g_CDynamiteClassVersion = 0x1;
WatcomStaticDestructorNode g_CEditorToolsDestructorNode = {nullptr, (WatcomDestructorCall *)&WatcomDestructorCall_0065d440, 0x00000001, (void *)&g_CEditorToolsInstance};
CEditorTools* g_CEditorToolsPtr = (CEditorTools*)&g_CEditorToolsInstance;
int g_CursorSizeHorizontal = 0x9;
int g_CursorSizeVertical = 0x9;
int g_CElephantGunClassVersion = 0x1;
undefined4 g_CEmitterClassVersion = 0x00000007;
int g_CEnemyClassVersion = 0xa;
int g_WindowWidth = 0x140;
int g_WindowHeight = 0xc8;
int g_BitsPerPixel = 0x8;
int g_TextureFilteringEnabled = 0x1;
int g_CurrentTextureDimension = 0x100;
int g_InputKeyMask = 0x7f;
int g_JoystickNumButtons = 0x4;
uint g_CPUFamily = 0x5;
int g_CurrentAlphaValue = 0xff;
int g_RenderingQuality = 0x1;
uint g_VertexProcessingEnabled = 0x1;
int g_ProjectionScale = 0x10000;
CEventList* g_CEventListPtr = (CEventList*)&g_CEventListInstance;
void* switchdataD_00679d10 = (void*)0x004B1A0C; // caseD_0
void* switchdataD_00679d54 = (void*)0x004B1A9B; // caseD_0
int g_CFilmReelClassVersion = 0x2;
int g_CFilmProjectorClassVersion = 0x2;
WatcomStaticDestructorNode g_CFireEffectStakesDestructorNode = {nullptr, (WatcomDestructorCall *)&WatcomDestructorCall_0065dc30, 0x00000001, (void *)&g_StakePool};
WatcomStaticDestructorNode g_CFireEffectSparksDestructorNode = {nullptr, (WatcomDestructorCall *)&WatcomDestructorCall_0065dc3c, 0x00000001, (void *)&g_SparkPool};
WatcomStaticDestructorNode g_CFireEffectGlassParticlesDestructorNode = {nullptr, (WatcomDestructorCall *)&WatcomDestructorCall_0065dc48, 0x00000001, (void *)&g_GlassParticlePool};
WatcomStaticDestructorNode g_CFireEffectFireballsDestructorNode = {nullptr, (WatcomDestructorCall *)&WatcomDestructorCall_0065dc54, 0x00000001, (void *)&g_FireballPool};
WatcomStaticDestructorNode g_CFireEffectRocksDestructorNode = {nullptr, (WatcomDestructorCall *)&WatcomDestructorCall_0065dc60, 0x00000001, (void *)&g_RockPool};
WatcomStaticDestructorNode g_CFireEffectTossesDestructorNodes = {nullptr, (WatcomDestructorCall *)&WatcomDestructorCall_0065dc6c, 0x00000001, (void *)&g_TossPool};
WatcomStaticDestructorNode g_CFireEffectCratersDestructorNodes = {nullptr, (WatcomDestructorCall *)&WatcomDestructorCall_0065dc78, 0x00000001, (void *)&g_CraterPool};
WatcomStaticDestructorNode g_CFireEffectShellsDestructorNode = {nullptr, (WatcomDestructorCall *)&WatcomDestructorCall_0065dc84, 0x00000001, (void *)&g_ShellPool};
WatcomStaticDestructorNode g_CFireEffectPopcornsDestructorNode = {nullptr, (WatcomDestructorCall *)&WatcomDestructorCall_0065dc90, 0x00000001, (void *)&g_PopcornPool};
WatcomStaticDestructorNode g_CFireEffectRainDropsDestructorNode = {nullptr, (WatcomDestructorCall *)&WatcomDestructorCall_0065dc9c, 0x00000001, (void *)&g_RainDropPool};
CFireEffect* g_CFireEffectPtr = (CFireEffect*)&g_CFireEffectInstance;
SMRGLTextureBasic g_FireEffectSmokeParticleTextures[40] = {
    {{0x0000000D, 0x00000000}, "SPFB0050.RAW"},
    {{0x0000000D, 0x00000000}, "SPFB0051.RAW"},
    {{0x0000000D, 0x00000000}, "SPFB0052.RAW"},
    {{0x0000000D, 0x00000000}, "SPFB0053.RAW"},
    {{0x0000000D, 0x00000000}, "SPFB0054.RAW"},
    {{0x0000000D, 0x00000000}, "SPFB0055.RAW"},
    {{0x0000000D, 0x00000000}, "SPFB0056.RAW"},
    {{0x0000000D, 0x00000000}, "SPFB0057.RAW"},
    {{0x0000000D, 0x00000000}, "SPFB0058.RAW"},
    {{0x0000000D, 0x00000000}, "SPFB0059.RAW"},
    {{0x0000000D, 0x00000000}, "SPFB0060.RAW"},
    {{0x0000000D, 0x00000000}, "SPFB0061.RAW"},
    {{0x0000000D, 0x00000000}, "SPFB0062.RAW"},
    {{0x0000000D, 0x00000000}, "SPFB0063.RAW"},
    {{0x0000000D, 0x00000000}, "SPFB0064.RAW"},
    {{0x0000000D, 0x00000000}, "SPFB0065.RAW"},
    {{0x0000000D, 0x00000000}, "SPFB0066.RAW"},
    {{0x0000000D, 0x00000000}, "SPFB0067.RAW"},
    {{0x0000000D, 0x00000000}, "SPFB0068.RAW"},
    {{0x0000000D, 0x00000000}, "SPFB0069.RAW"},
    {{0x0000000D, 0x00000000}, "SPFB0070.RAW"},
    {{0x0000000D, 0x00000000}, "SPFB0071.RAW"},
    {{0x0000000D, 0x00000000}, "SPFB0072.RAW"},
    {{0x0000000D, 0x00000000}, "SPFB0073.RAW"},
    {{0x0000000D, 0x00000000}, "SPFB0074.RAW"},
    {{0x0000000D, 0x00000000}, "SPFB0075.RAW"},
    {{0x0000000D, 0x00000000}, "SPFB0076.RAW"},
    {{0x0000000D, 0x00000000}, "SPFB0077.RAW"},
    {{0x0000000D, 0x00000000}, "SPFB0078.RAW"},
    {{0x0000000D, 0x00000000}, "SPFB0079.RAW"},
    {{0x0000000D, 0x00000000}, "SPFB0080.RAW"},
    {{0x0000000D, 0x00000000}, "SPFB0081.RAW"},
    {{0x0000000D, 0x00000000}, "SPFB0082.RAW"},
    {{0x0000000D, 0x00000000}, "SPFB0083.RAW"},
    {{0x0000000D, 0x00000000}, "SPFB0084.RAW"},
    {{0x0000000D, 0x00000000}, "SPFB0085.RAW"},
    {{0x0000000D, 0x00000000}, "SPFB0086.RAW"},
    {{0x0000000D, 0x00000000}, "SPFB0087.RAW"},
    {{0x0000000D, 0x00000000}, "SPFB0088.RAW"},
    {{0x0000000D, 0x00000000}, "SPFB0089.RAW"}
};
SMRGLTextureBasic g_FireEffectBlackHoleTexture = {{0x0000000D, 0x00000000}, "BHOLE.RAW"};
SMRGLTextureBasic g_FireEffectSparkTexture = {{0x0000000D, 0x00000000}, "SPARK.RAW"};
SMRGLTextureBasic g_FireEffectBlueSparkTexture = {{0x0000000D, 0x00000000}, "BLUSPARK.RAW"};
SMRGLTextureBasic g_FireEffectGreenSparkTexture = {{0x0000000D, 0x00000000}, "GRNSPARK.RAW"};
SMRGLTextureBasic g_FireEffectRedSparkTexture = {{0x0000000D, 0x00000000}, "REDSPARK.RAW"};
SMRGLTextureBasic g_FireEffectLaserTexture = {{0x0000000D, 0x00000000}, "LASER.RAW"};
SMRGLTextureBasic g_FireEffectBeamFuzzTexture = {{0x0000000D, 0x00000000}, "BEAMFUZZ.RAW"};
SMRGLTextureBasic g_FireEffectReticle = {{0x0000000D, 0x00000000}, "RETICLE.RAW"};
SMRGLTextureBasic g_FireEffectHeadliteTexture = {{0x0000000D, 0x00000000}, "HEADLITE.RAW"};
SMRGLTextureBasic g_FireEffectExplosionTextures[54] = {
    {{0x0000000D, 0x00000000}, "ZG01100.RAW"},
    {{0x0000000D, 0x00000000}, "ZG01101.RAW"},
    {{0x0000000D, 0x00000000}, "ZG01102.RAW"},
    {{0x0000000D, 0x00000000}, "ZG01103.RAW"},
    {{0x0000000D, 0x00000000}, "ZG01104.RAW"},
    {{0x0000000D, 0x00000000}, "ZG01105.RAW"},
    {{0x0000000D, 0x00000000}, "ZG01106.RAW"},
    {{0x0000000D, 0x00000000}, "ZG01107.RAW"},
    {{0x0000000D, 0x00000000}, "ZG01108.RAW"},
    {{0x0000000D, 0x00000000}, "ZG01109.RAW"},
    {{0x0000000D, 0x00000000}, "ZG01110.RAW"},
    {{0x0000000D, 0x00000000}, "ZG01111.RAW"},
    {{0x0000000D, 0x00000000}, "ZG01112.RAW"},
    {{0x0000000D, 0x00000000}, "ZG01113.RAW"},
    {{0x0000000D, 0x00000000}, "ZG01114.RAW"},
    {{0x0000000D, 0x00000000}, "ZG01115.RAW"},
    {{0x0000000D, 0x00000000}, "ZG01116.RAW"},
    {{0x0000000D, 0x00000000}, "ZG01117.RAW"},
    {{0x0000000D, 0x00000000}, "ZG01118.RAW"},
    {{0x0000000D, 0x00000000}, "ZG01119.RAW"},
    {{0x0000000D, 0x00000000}, "ZG01120.RAW"},
    {{0x0000000D, 0x00000000}, "ZG01121.RAW"},
    {{0x0000000D, 0x00000000}, "ZG01122.RAW"},
    {{0x0000000D, 0x00000000}, "ZG01123.RAW"},
    {{0x0000000D, 0x00000000}, "ZG01124.RAW"},
    {{0x0000000D, 0x00000000}, "ZG01125.RAW"},
    {{0x0000000D, 0x00000000}, "ZG01126.RAW"},
    {{0x0000000D, 0x00000000}, "ZG01127.RAW"},
    {{0x0000000D, 0x00000000}, "ZG01128.RAW"},
    {{0x0000000D, 0x00000000}, "ZG01129.RAW"},
    {{0x0000000D, 0x00000000}, "ZG01130.RAW"},
    {{0x0000000D, 0x00000000}, "ZG01131.RAW"},
    {{0x0000000D, 0x00000000}, "ZG01132.RAW"},
    {{0x0000000D, 0x00000000}, "ZG01133.RAW"},
    {{0x0000000D, 0x00000000}, "ZG01134.RAW"},
    {{0x0000000D, 0x00000000}, "ZG01135.RAW"},
    {{0x0000000D, 0x00000000}, "ZG01140.RAW"},
    {{0x0000000D, 0x00000000}, "ZG01141.RAW"},
    {{0x0000000D, 0x00000000}, "ZG01142.RAW"},
    {{0x0000000D, 0x00000000}, "ZG01143.RAW"},
    {{0x0000000D, 0x00000000}, "ZG01144.RAW"},
    {{0x0000000D, 0x00000000}, "ZG01145.RAW"},
    {{0x0000000D, 0x00000000}, "ZG01146.RAW"},
    {{0x0000000D, 0x00000000}, "ZG01147.RAW"},
    {{0x0000000D, 0x00000000}, "ZG01148.RAW"},
    {{0x0000000D, 0x00000000}, "ZG01149.RAW"},
    {{0x0000000D, 0x00000000}, "ZG01150.RAW"},
    {{0x0000000D, 0x00000000}, "ZG01151.RAW"},
    {{0x0000000D, 0x00000000}, "ZG01152.RAW"},
    {{0x0000000D, 0x00000000}, "ZG01153.RAW"},
    {{0x0000000D, 0x00000000}, "ZG01154.RAW"},
    {{0x0000000D, 0x00000000}, "ZG01155.RAW"},
    {{0x0000000D, 0x00000000}, "ZG01156.RAW"},
    {{0x0000000D, 0x00000000}, "ZG01157.RAW"}
};
SMRGLTextureBasic g_FireEffectBlastTexture = {{0x0000000D, 0x00000000}, "BLAST1.RAW"};
SMRGLTextureBasic g_FireEffectLightningBoltTextures[6] = {
    {{0x0000000D, 0x00000000}, "BOLT1.RAW"},
    {{0x0000000D, 0x00000000}, "BOLT2.RAW"},
    {{0x0000000D, 0x00000000}, "BOLT3.RAW"},
    {{0x0000000D, 0x00000000}, "BOLT4.RAW"},
    {{0x0000000D, 0x00000000}, "BOLT5.RAW"},
    {{0x0000000D, 0x00000000}, "BOLT6.RAW"}
};
SMRGLTextureBasic g_FireEffectPopcornTexture = {{0x0000000D, 0x00000000}, "POPCORN.RAW"};
SMRGLTextureBasic g_FireEffectRainDropTexture = {{0x0000000D, 0x00000000}, "RAINDRP1.RAW"};
SMRGLTextureBasic DAT_0067b0c8 = {{0x0000000D, 0x00000000}, "GLOW1.RAW"};
SMRGLTextureBasic DAT_0067b100 = {{0x0000000D, 0x00000000}, "F0100.RAW"};
SMRGLTextureBasic DAT_0067b118 = {{0x0000000D, 0x00000000}, "F0300.RAW"};
SMRGLTextureBasic DAT_0067B130 = {{0x0000000D, 0x00000000}, "F0500.RAW"};
SMRGLTextureBasic DAT_0067B148 = {{0x0000000D, 0x00000000}, "F0700.RAW"};
SMRGLTextureBasic DAT_0067B160 = {{0x0000000D, 0x00000000}, "F0900.RAW"};
SMRGLTextureBasic DAT_0067B178 = {{0x0000000D, 0x00000000}, "F1100.RAW"};
SMRGLTextureBasic DAT_0067B190 = {{0x0000000D, 0x00000000}, "F1300.RAW"};
SMRGLTextureBasic DAT_0067B1A8 = {{0x0000000D, 0x00000000}, "F1500.RAW"};
SMRGLTextureBasic DAT_0067b1c0 = {{0x0000000D, 0x00000000}, "CAN0100.RAW"};
SMRGLTextureBasic DAT_0067B1D8 = {{0x0000000D, 0x00000000}, "CAN0300.RAW"};
SMRGLTextureBasic DAT_0067B1F0 = {{0x0000000D, 0x00000000}, "CAN0500.RAW"};
SMRGLTextureBasic DAT_0067B208 = {{0x0000000D, 0x00000000}, "CAN0700.RAW"};
SMRGLTextureBasic DAT_0067B220 = {{0x0000000D, 0x00000000}, "CAN0900.RAW"};
SMRGLTextureBasic DAT_0067B238 = {{0x0000000D, 0x00000000}, "CAN1100.RAW"};
SMRGLTextureBasic DAT_0067B250 = {{0x0000000D, 0x00000000}, "CAN1300.RAW"};
SMRGLTextureBasic DAT_0067B268 = {{0x0000000D, 0x00000000}, "CAN1500.RAW"};
SMRGLTextureBasic DAT_0067B280 = {{0x0000000D, 0x00000000}, "BF0100.RAW"};
SMRGLTextureBasic DAT_0067B298 = {{0x0000000D, 0x00000000}, "BF0300.RAW"};
SMRGLTextureBasic DAT_0067B2B0 = {{0x0000000D, 0x00000000}, "BF0500.RAW"};
SMRGLTextureBasic DAT_0067B2C8 = {{0x0000000D, 0x00000000}, "BF0700.RAW"};
SMRGLTextureBasic DAT_0067B2E0 = {{0x0000000D, 0x00000000}, "BF0900.RAW"};
SMRGLTextureBasic DAT_0067B2F8 = {{0x0000000D, 0x00000000}, "BF1100.RAW"};
SMRGLTextureBasic DAT_0067B310 = {{0x0000000D, 0x00000000}, "BF1300.RAW"};
SMRGLTextureBasic DAT_0067B328 = {{0x0000000D, 0x00000000}, "BF1500.RAW"};
SMRGLTextureBasic DAT_0067B340 = {{0x0000000D, 0x00000000}, "BF0100.RAW"};
SMRGLTextureBasic DAT_0067B358 = {{0x0000000D, 0x00000000}, "BF0300.RAW"};
SMRGLTextureBasic DAT_0067B370 = {{0x0000000D, 0x00000000}, "BF0500.RAW"};
SMRGLTextureBasic DAT_0067B388 = {{0x0000000D, 0x00000000}, "BF0700.RAW"};
SMRGLTextureBasic DAT_0067B3A0 = {{0x0000000D, 0x00000000}, "BF0900.RAW"};
SMRGLTextureBasic DAT_0067B3B8 = {{0x0000000D, 0x00000000}, "BF1100.RAW"};
SMRGLTextureBasic DAT_0067B3D0 = {{0x0000000D, 0x00000000}, "BF1300.RAW"};
SMRGLTextureBasic DAT_0067B3E8 = {{0x0000000D, 0x00000000}, "BF1500.RAW"};
SMRGLTextureBasic DAT_0067B400 = {{0x0000000D, 0x00000000}, "BF0100.RAW"};
SMRGLTextureBasic DAT_0067B418 = {{0x0000000D, 0x00000000}, "BF0300.RAW"};
SMRGLTextureBasic DAT_0067B430 = {{0x0000000D, 0x00000000}, "BF0500.RAW"};
SMRGLTextureBasic DAT_0067B448 = {{0x0000000D, 0x00000000}, "BF0700.RAW"};
SMRGLTextureBasic DAT_0067B460 = {{0x0000000D, 0x00000000}, "BF0900.RAW"};
SMRGLTextureBasic DAT_0067B478 = {{0x0000000D, 0x00000000}, "BF1100.RAW"};
SMRGLTextureBasic DAT_0067B490 = {{0x0000000D, 0x00000000}, "BF1300.RAW"};
SMRGLTextureBasic DAT_0067B4A8 = {{0x0000000D, 0x00000000}, "BF1500.RAW"};
int g_CFlameClassVersion = 0x7;
int g_CFlameCanClassVersion = 0x1;
int g_CFlameThrowerClassVersion = 0x1;
int g_CFlashlightClassVersion = 0x1;
int g_CFliesClassVersion = 0x3;
SMRGLTextureBasic DAT_0067b514 = {{0x0000000D, 0x00000000}, "BBWHITE.RAW"};
SMRGLTextureBasic g_FontTextureInfo = {{0x0000000D, 0x00000000}, ""};
int g_CFrankenstienMachineClassVersion = 0x1;
undefined4 g_CGabriellaClassVersion = 0x00000003;
WatcomStaticDestructorNode g_GameDestructorNode1 = {nullptr, (WatcomDestructorCall *)&WatcomDestructorCall_0065e990, 0x00000001, (void *)&g_CDemonLightInstance};
WatcomStaticDestructorNode g_GameDestructorNode2 = {nullptr, (WatcomDestructorCall *)&WatcomDestructorCall_0065e99c, 0x00000001, (void *)&g_CGameInstance};
WatcomStaticDestructorNode g_GameDestructorNode3 = {nullptr, (WatcomDestructorCall *)&WatcomDestructorCall_0065e9a8, 0x00000001, (void *)&g_CPickList};
CGame* g_CGamePtr = (CGame*)&g_CGameInstance;
undefined1 g_MagicNumEFD = 0x45;
int g_CGargoyleClassVersion = 0x2;
int g_CGasMaskClassVersion = 0x1;
int g_CGhoulClassVersion = 0x7;
int g_CGlassClassVersion = 0x6;
SMRGLTextureBasic DAT_0067B948 = {{0x0000000D, 0x00000000}, "7YEARS.RAW"};
WatcomStaticDestructorNode g_CGoreDestructorNode = {nullptr, (WatcomDestructorCall *)&WatcomDestructorCall_0065f000, 0x00000001, (void *)&g_CGoreInstance};
WatcomStaticDestructorNode DAT_0067b980 = {nullptr, (WatcomDestructorCall *)&WatcomDestructorCall_0065f00c, 0x00000001, (void *)0x02D833D4};
WatcomStaticDestructorNode DAT_0067b990 = {nullptr, (WatcomDestructorCall *)&WatcomDestructorCall_0065f018, 0x00000001, (void *)0x02DA8C2C};
CGore* g_CGorePtr = (CGore*)&g_CGoreInstance;
SMRGLTextureBasic DAT_0067b9b0 = {{0x0000000D, 0x00000000}, "BGLOB.RAW"};
SMRGLTextureBasic DAT_0067b9c8 = {{0x0000000D, 0x00000000}, "BHSP1.RAW"};
SMRGLTextureBasic DAT_0067b9e0 = {{0x0000000D, 0x00000000}, "BHSP2.RAW"};
SMRGLTextureBasic DAT_0067B9F8 = {{0x0000000D, 0x00000000}, "BHSP3.RAW"};
SMRGLTextureBasic DAT_0067BA10 = {{0x0000000D, 0x00000000}, "BHSP4.RAW"};
SMRGLTextureBasic DAT_0067ba28 = {{0x0000000D, 0x00000000}, "BVSP1-01.RAW"};
SMRGLTextureBasic DAT_0067ba40 = {{0x0000000D, 0x00000000}, "BVSP1-02.RAW"};
SMRGLTextureBasic DAT_0067BA58 = {{0x0000000D, 0x00000000}, "BVSP1-03.RAW"};
SMRGLTextureBasic DAT_0067BA70 = {{0x0000000D, 0x00000000}, "BVSP1-04.RAW"};
SMRGLTextureBasic DAT_0067BA88 = {{0x0000000D, 0x00000000}, "BVSP1-05.RAW"};
SMRGLTextureBasic DAT_0067BAA0 = {{0x0000000D, 0x00000000}, "BVSP1-06.RAW"};
SMRGLTextureBasic DAT_0067BAB8 = {{0x0000000D, 0x00000000}, "BVSP1-07.RAW"};
SMRGLTextureBasic DAT_0067BAD0 = {{0x0000000D, 0x00000000}, "BVSP1-08.RAW"};
SMRGLTextureBasic DAT_0067BAE8 = {{0x0000000D, 0x00000000}, "BVSP1-09.RAW"};
SMRGLTextureBasic DAT_0067BB00 = {{0x0000000D, 0x00000000}, "BVSP1-10.RAW"};
SMRGLTextureBasic DAT_0067BB18 = {{0x0000000D, 0x00000000}, "BVSP1-11.RAW"};
SMRGLTextureBasic DAT_0067BB30 = {{0x0000000D, 0x00000000}, "BVSP1-12.RAW"};
SMRGLTextureBasic DAT_0067BB48 = {{0x0000000D, 0x00000000}, "BVSP1-13.RAW"};
SMRGLTextureBasic DAT_0067BB60 = {{0x0000000D, 0x00000000}, "BVSP1-14.RAW"};
SMRGLTextureBasic DAT_0067BB78 = {{0x0000000D, 0x00000000}, "BVSP1-15.RAW"};
SMRGLTextureBasic DAT_0067BB90 = {{0x0000000D, 0x00000000}, "BVSP1-16.RAW"};
SMRGLTextureBasic DAT_0067bba8 = {{0x0000000D, 0x00000000}, "BVSP2-01.RAW"};
SMRGLTextureBasic DAT_0067BBC0 = {{0x0000000D, 0x00000000}, "BVSP2-02.RAW"};
SMRGLTextureBasic DAT_0067BBD8 = {{0x0000000D, 0x00000000}, "BVSP2-03.RAW"};
SMRGLTextureBasic DAT_0067BBF0 = {{0x0000000D, 0x00000000}, "BVSP2-04.RAW"};
SMRGLTextureBasic DAT_0067BC08 = {{0x0000000D, 0x00000000}, "BVSP2-05.RAW"};
SMRGLTextureBasic DAT_0067BC20 = {{0x0000000D, 0x00000000}, "BVSP2-06.RAW"};
SMRGLTextureBasic DAT_0067BC38 = {{0x0000000D, 0x00000000}, "BVSP2-07.RAW"};
SMRGLTextureBasic DAT_0067BC50 = {{0x0000000D, 0x00000000}, "BVSP2-08.RAW"};
SMRGLTextureBasic DAT_0067BC68 = {{0x0000000D, 0x00000000}, "BVSP2-09.RAW"};
SMRGLTextureBasic DAT_0067BC80 = {{0x0000000D, 0x00000000}, "BVSP2-10.RAW"};
SMRGLTextureBasic DAT_0067BC98 = {{0x0000000D, 0x00000000}, "BVSP2-11.RAW"};
SMRGLTextureBasic DAT_0067BCB0 = {{0x0000000D, 0x00000000}, "BVSP2-12.RAW"};
SMRGLTextureBasic DAT_0067BCC8 = {{0x0000000D, 0x00000000}, "BVSP2-13.RAW"};
SMRGLTextureBasic DAT_0067BCE0 = {{0x0000000D, 0x00000000}, "BVSP2-14.RAW"};
SMRGLTextureBasic DAT_0067BCF8 = {{0x0000000D, 0x00000000}, "BVSP2-15.RAW"};
SMRGLTextureBasic DAT_0067BD10 = {{0x0000000D, 0x00000000}, "BVSP2-16.RAW"};
SMRGLTextureBasic DAT_0067BD28 = {{0x0000000D, 0x00000000}, "BVSP3-01.RAW"};
SMRGLTextureBasic DAT_0067BD40 = {{0x0000000D, 0x00000000}, "BVSP3-02.RAW"};
SMRGLTextureBasic DAT_0067BD58 = {{0x0000000D, 0x00000000}, "BVSP3-03.RAW"};
SMRGLTextureBasic DAT_0067BD70 = {{0x0000000D, 0x00000000}, "BVSP3-04.RAW"};
SMRGLTextureBasic DAT_0067BD88 = {{0x0000000D, 0x00000000}, "BVSP3-05.RAW"};
SMRGLTextureBasic DAT_0067BDA0 = {{0x0000000D, 0x00000000}, "BVSP3-06.RAW"};
SMRGLTextureBasic DAT_0067BDB8 = {{0x0000000D, 0x00000000}, "BVSP3-07.RAW"};
SMRGLTextureBasic DAT_0067BDD0 = {{0x0000000D, 0x00000000}, "BVSP3-08.RAW"};
SMRGLTextureBasic DAT_0067BDE8 = {{0x0000000D, 0x00000000}, "BVSP3-09.RAW"};
SMRGLTextureBasic DAT_0067BE00 = {{0x0000000D, 0x00000000}, "BVSP3-10.RAW"};
SMRGLTextureBasic DAT_0067BE18 = {{0x0000000D, 0x00000000}, "BVSP3-11.RAW"};
SMRGLTextureBasic DAT_0067BE30 = {{0x0000000D, 0x00000000}, "BVSP3-12.RAW"};
SMRGLTextureBasic DAT_0067BE48 = {{0x0000000D, 0x00000000}, "BVSP3-13.RAW"};
SMRGLTextureBasic DAT_0067BE60 = {{0x0000000D, 0x00000000}, "BVSP3-14.RAW"};
SMRGLTextureBasic DAT_0067BE78 = {{0x0000000D, 0x00000000}, "BVSP3-15.RAW"};
SMRGLTextureBasic DAT_0067BE90 = {{0x0000000D, 0x00000000}, "BVSP3-16.RAW"};
SMRGLTextureBasic DAT_0067BEA8 = {{0x0000000D, 0x00000000}, "BVSP4-01.RAW"};
SMRGLTextureBasic DAT_0067BEC0 = {{0x0000000D, 0x00000000}, "BVSP4-02.RAW"};
SMRGLTextureBasic DAT_0067BED8 = {{0x0000000D, 0x00000000}, "BVSP4-03.RAW"};
SMRGLTextureBasic DAT_0067BEF0 = {{0x0000000D, 0x00000000}, "BVSP4-04.RAW"};
SMRGLTextureBasic DAT_0067BF08 = {{0x0000000D, 0x00000000}, "BVSP4-05.RAW"};
SMRGLTextureBasic DAT_0067BF20 = {{0x0000000D, 0x00000000}, "BVSP4-06.RAW"};
SMRGLTextureBasic DAT_0067BF38 = {{0x0000000D, 0x00000000}, "BVSP4-07.RAW"};
SMRGLTextureBasic DAT_0067BF50 = {{0x0000000D, 0x00000000}, "BVSP4-08.RAW"};
SMRGLTextureBasic DAT_0067BF68 = {{0x0000000D, 0x00000000}, "BVSP4-09.RAW"};
SMRGLTextureBasic DAT_0067BF80 = {{0x0000000D, 0x00000000}, "BVSP4-10.RAW"};
SMRGLTextureBasic DAT_0067BF98 = {{0x0000000D, 0x00000000}, "BVSP4-11.RAW"};
SMRGLTextureBasic DAT_0067BFB0 = {{0x0000000D, 0x00000000}, "BVSP4-12.RAW"};
SMRGLTextureBasic DAT_0067BFC8 = {{0x0000000D, 0x00000000}, "BVSP4-13.RAW"};
SMRGLTextureBasic DAT_0067BFE0 = {{0x0000000D, 0x00000000}, "BVSP4-14.RAW"};
SMRGLTextureBasic DAT_0067BFF8 = {{0x0000000D, 0x00000000}, "BVSP4-15.RAW"};
SMRGLTextureBasic DAT_0067C010 = {{0x0000000D, 0x00000000}, "BVSP4-16.RAW"};
SMRGLTextureBasic DAT_0067c028 = {{0x0000000D, 0x00000000}, "BPOL1-01.RAW"};
SMRGLTextureBasic DAT_0067c040 = {{0x0000000D, 0x00000000}, "BPOL1-02.RAW"};
SMRGLTextureBasic DAT_0067C058 = {{0x0000000D, 0x00000000}, "BPOL1-03.RAW"};
SMRGLTextureBasic DAT_0067C070 = {{0x0000000D, 0x00000000}, "BPOL1-04.RAW"};
SMRGLTextureBasic DAT_0067C088 = {{0x0000000D, 0x00000000}, "BPOL1-05.RAW"};
SMRGLTextureBasic DAT_0067C0A0 = {{0x0000000D, 0x00000000}, "BPOL1-06.RAW"};
SMRGLTextureBasic DAT_0067C0B8 = {{0x0000000D, 0x00000000}, "BPOL1-07.RAW"};
SMRGLTextureBasic DAT_0067C0D0 = {{0x0000000D, 0x00000000}, "BPOL1-08.RAW"};
SMRGLTextureBasic DAT_0067C0E8 = {{0x0000000D, 0x00000000}, "BPOL1-09.RAW"};
SMRGLTextureBasic DAT_0067C100 = {{0x0000000D, 0x00000000}, "BPOL1-10.RAW"};
SMRGLTextureBasic DAT_0067C118 = {{0x0000000D, 0x00000000}, "BPOL1-11.RAW"};
SMRGLTextureBasic DAT_0067C130 = {{0x0000000D, 0x00000000}, "BPOL1-12.RAW"};
SMRGLTextureBasic DAT_0067C148 = {{0x0000000D, 0x00000000}, "BPOL1-13.RAW"};
SMRGLTextureBasic DAT_0067C160 = {{0x0000000D, 0x00000000}, "BPOL1-14.RAW"};
SMRGLTextureBasic DAT_0067C178 = {{0x0000000D, 0x00000000}, "BPOL1-15.RAW"};
SMRGLTextureBasic DAT_0067C190 = {{0x0000000D, 0x00000000}, "BPOL1-16.RAW"};
SMRGLTextureBasic DAT_0067C1A8 = {{0x0000000D, 0x00000000}, "BPOL1-17.RAW"};
SMRGLTextureBasic DAT_0067C1C0 = {{0x0000000D, 0x00000000}, "BPOL1-18.RAW"};
SMRGLTextureBasic DAT_0067C1D8 = {{0x0000000D, 0x00000000}, "BPOL1-19.RAW"};
SMRGLTextureBasic DAT_0067C1F0 = {{0x0000000D, 0x00000000}, "BPOL1-20.RAW"};
SMRGLTextureBasic DAT_0067C208 = {{0x0000000D, 0x00000000}, "BPOL1-21.RAW"};
SMRGLTextureBasic DAT_0067C220 = {{0x0000000D, 0x00000000}, "BPOL1-22.RAW"};
SMRGLTextureBasic DAT_0067C238 = {{0x0000000D, 0x00000000}, "BPOL1-23.RAW"};
SMRGLTextureBasic DAT_0067C250 = {{0x0000000D, 0x00000000}, "BPOL1-24.RAW"};
SMRGLTextureBasic DAT_0067C268 = {{0x0000000D, 0x00000000}, "BPOL1-25.RAW"};
SMRGLTextureBasic DAT_0067C280 = {{0x0000000D, 0x00000000}, "BPOL1-26.RAW"};
SMRGLTextureBasic DAT_0067C298 = {{0x0000000D, 0x00000000}, "BPOL1-27.RAW"};
SMRGLTextureBasic DAT_0067C2B0 = {{0x0000000D, 0x00000000}, "BPOL1-28.RAW"};
SMRGLTextureBasic DAT_0067C2C8 = {{0x0000000D, 0x00000000}, "BPOL1-29.RAW"};
SMRGLTextureBasic DAT_0067c2e0 = {{0x0000000D, 0x00000000}, "BPOL2-01.RAW"};
SMRGLTextureBasic DAT_0067C2F8 = {{0x0000000D, 0x00000000}, "BPOL2-02.RAW"};
SMRGLTextureBasic DAT_0067C310 = {{0x0000000D, 0x00000000}, "BPOL2-03.RAW"};
SMRGLTextureBasic DAT_0067C328 = {{0x0000000D, 0x00000000}, "BPOL2-04.RAW"};
SMRGLTextureBasic DAT_0067C340 = {{0x0000000D, 0x00000000}, "BPOL2-05.RAW"};
SMRGLTextureBasic DAT_0067C358 = {{0x0000000D, 0x00000000}, "BPOL2-06.RAW"};
SMRGLTextureBasic DAT_0067C370 = {{0x0000000D, 0x00000000}, "BPOL2-07.RAW"};
SMRGLTextureBasic DAT_0067C388 = {{0x0000000D, 0x00000000}, "BPOL2-08.RAW"};
SMRGLTextureBasic DAT_0067C3A0 = {{0x0000000D, 0x00000000}, "BPOL2-09.RAW"};
SMRGLTextureBasic DAT_0067C3B8 = {{0x0000000D, 0x00000000}, "BPOL2-10.RAW"};
SMRGLTextureBasic DAT_0067C3D0 = {{0x0000000D, 0x00000000}, "BPOL2-11.RAW"};
SMRGLTextureBasic DAT_0067C3E8 = {{0x0000000D, 0x00000000}, "BPOL2-12.RAW"};
SMRGLTextureBasic DAT_0067C400 = {{0x0000000D, 0x00000000}, "BPOL2-13.RAW"};
SMRGLTextureBasic DAT_0067C418 = {{0x0000000D, 0x00000000}, "BPOL2-14.RAW"};
SMRGLTextureBasic DAT_0067C430 = {{0x0000000D, 0x00000000}, "BPOL2-15.RAW"};
SMRGLTextureBasic DAT_0067C448 = {{0x0000000D, 0x00000000}, "BPOL2-16.RAW"};
SMRGLTextureBasic DAT_0067C460 = {{0x0000000D, 0x00000000}, "BPOL2-17.RAW"};
SMRGLTextureBasic DAT_0067C478 = {{0x0000000D, 0x00000000}, "BPOL2-18.RAW"};
SMRGLTextureBasic DAT_0067C490 = {{0x0000000D, 0x00000000}, "BPOL2-19.RAW"};
SMRGLTextureBasic DAT_0067C4A8 = {{0x0000000D, 0x00000000}, "BPOL2-20.RAW"};
SMRGLTextureBasic DAT_0067C4C0 = {{0x0000000D, 0x00000000}, "BPOL2-21.RAW"};
SMRGLTextureBasic DAT_0067C4D8 = {{0x0000000D, 0x00000000}, "BPOL2-22.RAW"};
SMRGLTextureBasic DAT_0067C4F0 = {{0x0000000D, 0x00000000}, "BPOL2-23.RAW"};
SMRGLTextureBasic DAT_0067C508 = {{0x0000000D, 0x00000000}, "BPOL2-24.RAW"};
SMRGLTextureBasic DAT_0067C520 = {{0x0000000D, 0x00000000}, "BPOL2-25.RAW"};
SMRGLTextureBasic DAT_0067C538 = {{0x0000000D, 0x00000000}, "BPOL2-26.RAW"};
SMRGLTextureBasic DAT_0067C550 = {{0x0000000D, 0x00000000}, "BPOL2-27.RAW"};
SMRGLTextureBasic DAT_0067C568 = {{0x0000000D, 0x00000000}, "BPOL2-28.RAW"};
SMRGLTextureBasic DAT_0067C580 = {{0x0000000D, 0x00000000}, "BPOL2-29.RAW"};
SMRGLTextureBasic DAT_0067C598 = {{0x0000000D, 0x00000000}, "BPOL3-01.RAW"};
SMRGLTextureBasic DAT_0067C5B0 = {{0x0000000D, 0x00000000}, "BPOL3-02.RAW"};
SMRGLTextureBasic DAT_0067C5C8 = {{0x0000000D, 0x00000000}, "BPOL3-03.RAW"};
SMRGLTextureBasic DAT_0067C5E0 = {{0x0000000D, 0x00000000}, "BPOL3-04.RAW"};
SMRGLTextureBasic DAT_0067C5F8 = {{0x0000000D, 0x00000000}, "BPOL3-05.RAW"};
SMRGLTextureBasic DAT_0067C610 = {{0x0000000D, 0x00000000}, "BPOL3-06.RAW"};
SMRGLTextureBasic DAT_0067C628 = {{0x0000000D, 0x00000000}, "BPOL3-07.RAW"};
SMRGLTextureBasic DAT_0067C640 = {{0x0000000D, 0x00000000}, "BPOL3-08.RAW"};
SMRGLTextureBasic DAT_0067C658 = {{0x0000000D, 0x00000000}, "BPOL3-09.RAW"};
SMRGLTextureBasic DAT_0067C670 = {{0x0000000D, 0x00000000}, "BPOL3-10.RAW"};
SMRGLTextureBasic DAT_0067C688 = {{0x0000000D, 0x00000000}, "BPOL3-11.RAW"};
SMRGLTextureBasic DAT_0067C6A0 = {{0x0000000D, 0x00000000}, "BPOL3-12.RAW"};
SMRGLTextureBasic DAT_0067C6B8 = {{0x0000000D, 0x00000000}, "BPOL3-13.RAW"};
SMRGLTextureBasic DAT_0067C6D0 = {{0x0000000D, 0x00000000}, "BPOL3-14.RAW"};
SMRGLTextureBasic DAT_0067C6E8 = {{0x0000000D, 0x00000000}, "BPOL3-15.RAW"};
SMRGLTextureBasic DAT_0067C700 = {{0x0000000D, 0x00000000}, "BPOL3-16.RAW"};
SMRGLTextureBasic DAT_0067C718 = {{0x0000000D, 0x00000000}, "BPOL3-17.RAW"};
SMRGLTextureBasic DAT_0067C730 = {{0x0000000D, 0x00000000}, "BPOL3-18.RAW"};
SMRGLTextureBasic DAT_0067C748 = {{0x0000000D, 0x00000000}, "BPOL3-19.RAW"};
SMRGLTextureBasic DAT_0067C760 = {{0x0000000D, 0x00000000}, "BPOL3-20.RAW"};
SMRGLTextureBasic DAT_0067C778 = {{0x0000000D, 0x00000000}, "BPOL3-21.RAW"};
SMRGLTextureBasic DAT_0067C790 = {{0x0000000D, 0x00000000}, "BPOL3-22.RAW"};
SMRGLTextureBasic DAT_0067C7A8 = {{0x0000000D, 0x00000000}, "BPOL3-23.RAW"};
SMRGLTextureBasic DAT_0067C7C0 = {{0x0000000D, 0x00000000}, "BPOL3-24.RAW"};
SMRGLTextureBasic DAT_0067C7D8 = {{0x0000000D, 0x00000000}, "BPOL3-25.RAW"};
SMRGLTextureBasic DAT_0067C7F0 = {{0x0000000D, 0x00000000}, "BPOL3-26.RAW"};
SMRGLTextureBasic DAT_0067C808 = {{0x0000000D, 0x00000000}, "BPOL3-27.RAW"};
SMRGLTextureBasic DAT_0067C820 = {{0x0000000D, 0x00000000}, "BPOL3-28.RAW"};
SMRGLTextureBasic DAT_0067C838 = {{0x0000000D, 0x00000000}, "BPOL3-29.RAW"};
SMRGLTextureBasic DAT_0067C850 = {{0x0000000D, 0x00000000}, "BPOL4-01.RAW"};
SMRGLTextureBasic DAT_0067C868 = {{0x0000000D, 0x00000000}, "BPOL4-02.RAW"};
SMRGLTextureBasic DAT_0067C880 = {{0x0000000D, 0x00000000}, "BPOL4-03.RAW"};
SMRGLTextureBasic DAT_0067C898 = {{0x0000000D, 0x00000000}, "BPOL4-04.RAW"};
SMRGLTextureBasic DAT_0067C8B0 = {{0x0000000D, 0x00000000}, "BPOL4-05.RAW"};
SMRGLTextureBasic DAT_0067C8C8 = {{0x0000000D, 0x00000000}, "BPOL4-06.RAW"};
SMRGLTextureBasic DAT_0067C8E0 = {{0x0000000D, 0x00000000}, "BPOL4-07.RAW"};
SMRGLTextureBasic DAT_0067C8F8 = {{0x0000000D, 0x00000000}, "BPOL4-08.RAW"};
SMRGLTextureBasic DAT_0067C910 = {{0x0000000D, 0x00000000}, "BPOL4-09.RAW"};
SMRGLTextureBasic DAT_0067C928 = {{0x0000000D, 0x00000000}, "BPOL4-10.RAW"};
SMRGLTextureBasic DAT_0067C940 = {{0x0000000D, 0x00000000}, "BPOL4-11.RAW"};
SMRGLTextureBasic DAT_0067C958 = {{0x0000000D, 0x00000000}, "BPOL4-12.RAW"};
SMRGLTextureBasic DAT_0067C970 = {{0x0000000D, 0x00000000}, "BPOL4-13.RAW"};
SMRGLTextureBasic DAT_0067C988 = {{0x0000000D, 0x00000000}, "BPOL4-14.RAW"};
SMRGLTextureBasic DAT_0067C9A0 = {{0x0000000D, 0x00000000}, "BPOL4-15.RAW"};
SMRGLTextureBasic DAT_0067C9B8 = {{0x0000000D, 0x00000000}, "BPOL4-16.RAW"};
SMRGLTextureBasic DAT_0067C9D0 = {{0x0000000D, 0x00000000}, "BPOL4-17.RAW"};
SMRGLTextureBasic DAT_0067C9E8 = {{0x0000000D, 0x00000000}, "BPOL4-18.RAW"};
SMRGLTextureBasic DAT_0067CA00 = {{0x0000000D, 0x00000000}, "BPOL4-19.RAW"};
SMRGLTextureBasic DAT_0067CA18 = {{0x0000000D, 0x00000000}, "BPOL4-20.RAW"};
SMRGLTextureBasic DAT_0067CA30 = {{0x0000000D, 0x00000000}, "BPOL4-21.RAW"};
SMRGLTextureBasic DAT_0067CA48 = {{0x0000000D, 0x00000000}, "BPOL4-22.RAW"};
SMRGLTextureBasic DAT_0067CA60 = {{0x0000000D, 0x00000000}, "BPOL4-23.RAW"};
SMRGLTextureBasic DAT_0067CA78 = {{0x0000000D, 0x00000000}, "BPOL4-24.RAW"};
SMRGLTextureBasic DAT_0067CA90 = {{0x0000000D, 0x00000000}, "BPOL4-25.RAW"};
SMRGLTextureBasic DAT_0067CAA8 = {{0x0000000D, 0x00000000}, "BPOL4-26.RAW"};
SMRGLTextureBasic DAT_0067CAC0 = {{0x0000000D, 0x00000000}, "BPOL4-27.RAW"};
SMRGLTextureBasic DAT_0067CAD8 = {{0x0000000D, 0x00000000}, "BPOL4-28.RAW"};
SMRGLTextureBasic DAT_0067CAF0 = {{0x0000000D, 0x00000000}, "BPOL4-29.RAW"};
SMRGLTextureBasic DAT_0067cb28 = {{0x0000000D, 0x00000000}, "FOOTSTEP.RAW"};
int g_CGraveClassVersion = 0x4;
WatcomStaticDestructorNode g_CGroundDestructorNode = {nullptr, (WatcomDestructorCall *)&WatcomDestructorCall_0065f230, 0x00000001, (void *)&g_CGroundInstance};
CGround* g_CGroundPtr = (CGround*)&g_CGroundInstance;
int g_CGunClassVersion = 0x1;
int g_CHaystackClassVersion = 0x1;
undefined4 g_CHealthItemClassVersion = 0x00000003;
int g_CHeroClassVersion = 0xc;
int g_CHeroPlaceholderClassVersion = 0x1;
int g_CHiramClassVersion = 0x1;
undefined4 g_CHostageClassVersion = 0x0000000C;
int g_CHotDemonClassVersion = 0x1;
int g_CHighPriestOfGardathClassVersion = 0x1;
int g_CIcePickClassVersion = 0x1;
int g_CImpClassVersion = 0x1;
WatcomStaticDestructorNode DAT_0067cd60 = {nullptr, (WatcomDestructorCall *)&WatcomDestructorCall_006603c0, 0x00000001, (void *)&g_InvBackgroundBitmap};
WatcomStaticDestructorNode DAT_0067cd70 = {nullptr, (WatcomDestructorCall *)&WatcomDestructorCall_006603cc, 0x00000001, (void *)&g_InvBackground2Bitmap};
WatcomStaticDestructorNode DAT_0067cd80 = {nullptr, (WatcomDestructorCall *)&WatcomDestructorCall_006603d8, 0x00000001, (void *)&g_WeapBackgroundBitmap};
WatcomStaticDestructorNode DAT_0067cd90 = {nullptr, (WatcomDestructorCall *)&WatcomDestructorCall_006603e4, 0x00000001, (void *)&g_WeapBackground2Bitmap};
WatcomStaticDestructorNode DAT_0067cda0 = {nullptr, (WatcomDestructorCall *)&WatcomDestructorCall_006603f0, 0x00000001, (void *)&g_BatteryIconBitmap};
WatcomStaticDestructorNode DAT_0067cdb0 = {nullptr, (WatcomDestructorCall *)&WatcomDestructorCall_006603fc, 0x00000001, (void *)&g_HealthBar1Bitmap};
WatcomStaticDestructorNode DAT_0067cdc0 = {nullptr, (WatcomDestructorCall *)&WatcomDestructorCall_00660408, 0x00000001, (void *)&g_HealthBar2Bitmap};
WatcomStaticDestructorNode DAT_0067cdd0 = {nullptr, (WatcomDestructorCall *)&WatcomDestructorCall_00660414, 0x00000001, (void *)&g_TommyClipIconBitmap};
WatcomStaticDestructorNode DAT_0067cde0 = {nullptr, (WatcomDestructorCall *)&WatcomDestructorCall_00660420, 0x00000001, (void *)&g_BulletIconBitmap};
WatcomStaticDestructorNode DAT_0067cdf0 = {nullptr, (WatcomDestructorCall *)&WatcomDestructorCall_0066042c, 0x00000001, (void *)&g_LithiumIconBitmap};
WatcomStaticDestructorNode DAT_0067ce00 = {nullptr, (WatcomDestructorCall *)&WatcomDestructorCall_00660438, 0x00000001, (void *)&g_MercuryBulletIconBitmap};
WatcomStaticDestructorNode DAT_0067ce10 = {nullptr, (WatcomDestructorCall *)&WatcomDestructorCall_00660444, 0x00000001, (void *)&g_ShotShellIconBitmap};
WatcomStaticDestructorNode DAT_0067ce20 = {nullptr, (WatcomDestructorCall *)&WatcomDestructorCall_00660450, 0x00000001, (void *)&g_SilverBulletIconBitmap};
WatcomStaticDestructorNode DAT_0067ce30 = {nullptr, (WatcomDestructorCall *)&WatcomDestructorCall_0066045c, 0x00000001, (void *)&g_HolyBulletIconBitmap};
int g_InventoryWidth = 0xd0;
int g_InventoryHeight = 0x60;
SMRGLTextureBasic g_Inventory3DTextureAtlas = {{0x0000000D, 0x00000000}, "INV3D.RAW"};
undefined4 g_CKeyActorClassVersion = 0x00000003;
CKeys* g_CKeysPtr = (CKeys*)&g_CKeysInstance;
int g_CLadderClassVersion = 0x2;
undefined4 g_CLarvaClassVersion = 0x00000002;
WatcomStaticDestructorNode g_LoadingMoonModelDestructorNode = {nullptr, (WatcomDestructorCall *)&WatcomDestructorCall_006608c0, 0x00000001, (void *)&g_LoadingMoonModel};
CLevelLoader* g_CLevelLoaderPtr = (CLevelLoader*)&g_CLevelLoaderInstance;
SMRGLTextureBasic g_LoadingMoonGlowTexture = {{0x0000000D, 0x00000000}, "MOONGLOW.RAW"};
undefined4 g_CLeverClassVersion = 0x00000008;
int g_AmbientLightLevel = 0x8000;
int g_SpecularEnabled = 0x1;
int g_DiffuseLightMultiplier = 0x10000;
int g_SpecularLightMultiplier = 0x10000;
int g_CLightGunClassVersion = 0x1;
int g_CLightConeClassVersion = 0x2;
WatcomStaticDestructorNode g_CDemonFileManagerDestructorNode = {nullptr, (WatcomDestructorCall *)&WatcomDestructorCall_00660cc0, 0x00000001, (void *)&g_CDemonFileManagerInstance};
WatcomStaticDestructorNode g_LoadingScreenBitmap1DestructorNode = {nullptr, (WatcomDestructorCall *)&WatcomDestructorCall_00660ccc, 0x00000001, (void *)&g_LoadingScreenBitmap1};
WatcomStaticDestructorNode g_LoadingScreenBitmap2DestructorNode = {nullptr, (WatcomDestructorCall *)&WatcomDestructorCall_00660cd8, 0x00000001, (void *)&g_LoadingScreenBitmap2};
WatcomStaticDestructorNode g_LoadingScreenBitmap3DestructorNode = {nullptr, (WatcomDestructorCall *)&WatcomDestructorCall_00660ce4, 0x00000001, (void *)&g_LoadingScreenBitmap3};
WatcomStaticDestructorNode g_LoadingScreenBitmap4DestructorNode = {nullptr, (WatcomDestructorCall *)&WatcomDestructorCall_00660cf0, 0x00000001, (void *)&g_LoadingScreenBitmap4};
int g_CMansionPuzzleCircleClassVersion = 0x3;
int g_CMirrorHackClassVersion = 0x1;
int g_CMarqueeClassVersion = 0x1;
SMRGLTextureBasic DAT_0067d150 = {{0x0000000D, 0x00000000}, "SPARK.RAW"};
undefined4 g_CMeleeClassVersion = 0x00000007;
WatcomStaticDestructorNode g_CLeakCheckerDestructorNode = {nullptr, (WatcomDestructorCall *)&WatcomDestructorCall_006612a0, 0x00000001, (void *)&g_CLeakCheckerInstance};
char* g_CurrentDebugFilename = (char*)s_unknown_0067d200;
WatcomStaticDestructorNode DAT_0067d224 = {nullptr, (WatcomDestructorCall *)&WatcomDestructorCall_006612d0, 0x00000001, (void *)&g_MenuBitmaps};
WatcomStaticDestructorNode DAT_0067d234 = {nullptr, (WatcomDestructorCall *)&WatcomDestructorInfo_006612dc, 0x00000001, (void *)&g_CMoonInstance};
WatcomStaticDestructorNode DAT_0067d244 = {nullptr, (WatcomDestructorCall *)&WatcomDestructorCall_006612e8, 0x00000001, (void *)&g_MenuBlurLeft};
WatcomStaticDestructorNode DAT_0067d254 = {nullptr, (WatcomDestructorCall *)&WatcomDestructorCall_006612f4, 0x00000001, (void *)&g_MenuBlurMiddle};
WatcomStaticDestructorNode DAT_0067d264 = {nullptr, (WatcomDestructorCall *)&WatcomDestructorCall_00661300, 0x00000001, (void *)&g_MenuBlurRight};
WatcomStaticDestructorNode DAT_0067d274 = {nullptr, (WatcomDestructorCall *)&WatcomDestructorCall_0066130c, 0x00000001, (void *)&g_CalibrationBitmap};
SMRGLTextureBasic g_AudioSpectrumTextures[8] = {
    {{0x0000000D, 0x00000000}, "F0100.RAW"},
    {{0x0000000D, 0x00000000}, "F0300.RAW"},
    {{0x0000000D, 0x00000000}, "F0500.RAW"},
    {{0x0000000D, 0x00000000}, "F0700.RAW"},
    {{0x0000000D, 0x00000000}, "F0900.RAW"},
    {{0x0000000D, 0x00000000}, "F1100.RAW"},
    {{0x0000000D, 0x00000000}, "F1300.RAW"},
    {{0x0000000D, 0x00000000}, "F1500.RAW"}
};
WatcomStaticDestructorNode g_TempNeighborFacesDestructorNode = {nullptr, (WatcomDestructorCall *)&WatcomDestructorCall_00661360, 0x00000001, (void *)&g_TempNeighborFaces};
int INT_0067d390 = 0x2D;
int g_EnableMidpointSampling = 0x1;
int INT_0067d39c = 0x1;
int g_CMimicClassVersion = 0x3;
int g_CMineCarClassVersion = 0x1;
CDemonMission* g_CDemonMissionPtr = (CDemonMission*)&g_CDemonMissionInstance;
byte g_CPUInfoFamily = 0x96;
byte g_CPUInfoModel = 0x13;
byte g_CPUInfoStepping = 0x0;
bool g_CPUIDSupported = false;
bool g_CPUInfoIntelCPU = false;
uint g_CPUFeatureFlags = 0x0;
undefined1 g_CPUInfoMMXSupported = 0;
undefined4 g_CMobsterClassVersion = 0x00000007;
int g_CMolochClassVersion = 0x1;
WatcomStaticDestructorNode DAT_0067d718 = {nullptr, (WatcomDestructorCall *)&WatcomDestructorCall_00661ad0, 0x00000001, (void *)&g_MoonCloudTexture};
WatcomStaticDestructorNode DAT_0067d728 = {nullptr, (WatcomDestructorCall *)&WatcomDestructorCall_00661adc, 0x00000001, (void *)&g_MoonAnimTextures};
WatcomStaticDestructorNode DAT_0067d738 = {nullptr, (WatcomDestructorCall *)&WatcomDestructorCall_00661ae8, 0x00000001, (void *)&g_MoonBatCourses};
WatcomStaticDestructorNode DAT_0067d748 = {nullptr, (WatcomDestructorCall *)&WatcomDestructorCall_00661af4, 0x00000001, (void *)&g_MoonBatModel};
int g_MoonBatsEnabled = 0x1;
void* g_MpegLayer2AllocationTables[4][4] = {
    {(void*)0x2472656C, (void*)0x00000024, nullptr, nullptr},
    {(void*)0x00000004, (void*)0x00000008, (void*)0x0000000C, (void*)0x00000010},
    {(void*)0x00000004, (void*)0x00000008, (void*)0x0000000C, (void*)0x00000010},
    {nullptr, (void*)0x00000004, (void*)0x00000008, (void*)0x00000010}
};
int g_MpegSynthesisTableInitialized = 0x1;
int g_Mp3AntiAliasInitialized = 0x1;
int g_Mp3SynthesisTablesInitialized = 0x1;
int g_MpegBitrateTable[2][3][15] = {
    {{0x00000000, 0x00000020, 0x00000030, 0x00000038, 0x00000040, 0x00000050, 0x00000060, 0x00000070, 0x00000080, 0x00000090, 0x000000A0, 0x000000B0, 0x000000C0, 0x000000E0, 0x00000100}, {0x00000000, 0x00000008, 0x00000010, 0x00000018, 0x00000020, 0x00000028, 0x00000030, 0x00000038, 0x00000040, 0x00000050, 0x00000060, 0x00000070, 0x00000080, 0x00000090, 0x000000A0}, {0x00000000, 0x00000008, 0x00000010, 0x00000018, 0x00000020, 0x00000028, 0x00000030, 0x00000038, 0x00000040, 0x00000050, 0x00000060, 0x00000070, 0x00000080, 0x00000090, 0x000000A0}},
    {{0x00000000, 0x00000020, 0x00000040, 0x00000060, 0x00000080, 0x000000A0, 0x000000C0, 0x000000E0, 0x00000100, 0x00000120, 0x00000140, 0x00000160, 0x00000180, 0x000001A0, 0x000001C0}, {0x00000000, 0x00000020, 0x00000030, 0x00000038, 0x00000040, 0x00000050, 0x00000060, 0x00000070, 0x00000080, 0x000000A0, 0x000000C0, 0x000000E0, 0x00000100, 0x00000140, 0x00000180}, {0x00000000, 0x00000020, 0x00000028, 0x00000030, 0x00000038, 0x00000040, 0x00000050, 0x00000060, 0x00000070, 0x00000080, 0x000000A0, 0x000000C0, 0x000000E0, 0x00000100, 0x00000140}}
};
uint g_MpegBitMaskTableSingleBit[8] = {0x00000001, 0x00000002, 0x00000004, 0x00000008, 0x00000010, 0x00000020, 0x00000040, 0x00000080};
uint g_MpegBitMaskTableMultiBit[18] = {
    0x00000000, 0x00000001, 0x00000003, 0x00000007, 0x0000000F, 0x0000001F, 0x0000003F, 0x0000007F,
    0x000000FF, 0x000000FF, 0x000000FE, 0x000000FC, 0x000000F8, 0x000000F0, 0x000000E0, 0x000000C0,
    0x00000080, 0x00000000
};
int g_Layer3LongBandBoundaries[5] = {0x00000000, 0x00000006, 0x0000000B, 0x00000010, 0x00000015};
int g_Layer3ShortBandBoundaries[3] = {0x00000000, 0x00000006, 0x0000000C};
int g_Layer3ScalefacLengths1[16] = {
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000003, 0x00000001, 0x00000001, 0x00000001,
    0x00000002, 0x00000002, 0x00000002, 0x00000003, 0x00000003, 0x00000003, 0x00000004, 0x00000004
};
int g_Layer3ScalefacLengths2[16] = {
    0x00000000, 0x00000001, 0x00000002, 0x00000003, 0x00000000, 0x00000001, 0x00000002, 0x00000003,
    0x00000001, 0x00000002, 0x00000003, 0x00000001, 0x00000002, 0x00000003, 0x00000002, 0x00000003
};
int g_Layer3ScalefactorBandCounts[6][3][4] = {
    {{0x00000006, 0x00000005, 0x00000005, 0x00000005}, {0x00000009, 0x00000009, 0x00000009, 0x00000009}, {0x00000006, 0x00000009, 0x00000009, 0x00000009}},
    {{0x00000006, 0x00000005, 0x00000007, 0x00000003}, {0x00000009, 0x00000009, 0x0000000C, 0x00000006}, {0x00000006, 0x00000009, 0x0000000C, 0x00000006}},
    {{0x0000000B, 0x0000000A, 0x00000000, 0x00000000}, {0x00000012, 0x00000012, 0x00000000, 0x00000000}, {0x0000000F, 0x00000012, 0x00000000, 0x00000000}},
    {{0x00000007, 0x00000007, 0x00000007, 0x00000000}, {0x0000000C, 0x0000000C, 0x0000000C, 0x00000000}, {0x00000006, 0x0000000F, 0x0000000C, 0x00000000}},
    {{0x00000006, 0x00000006, 0x00000006, 0x00000003}, {0x0000000C, 0x00000009, 0x00000009, 0x00000006}, {0x00000006, 0x0000000C, 0x00000009, 0x00000006}},
    {{0x00000008, 0x00000008, 0x00000005, 0x00000000}, {0x0000000F, 0x0000000C, 0x00000009, 0x00000000}, {0x00000006, 0x00000012, 0x00000009, 0x00000000}}
};

