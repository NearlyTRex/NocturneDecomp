#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x670000
// =============================================================================

// CDemonMission*
CDemonMission* g_CDemonMissionPtr = (CDemonMission*)&g_CDemonMissionInstance;

// CDemonRenderer*
CDemonRenderer* g_CDemonRendererPtr1 = (CDemonRenderer*)&g_CDemonRendererInstance;
CDemonRenderer* g_CDemonRendererPtr2 = (CDemonRenderer*)&g_CDemonRendererInstance;

// CEditorTools*
CEditorTools* g_CEditorToolsPtr = (CEditorTools*)&g_CEditorToolsInstance;

// CEventList*
CEventList* g_CEventListPtr = (CEventList*)&g_CEventListInstance;

// CFireEffect*
CFireEffect* g_CFireEffectPtr = (CFireEffect*)&g_CFireEffectInstance;

// CGame*
CGame* g_CGamePtr = (CGame*)&g_CGameInstance;

// CGore*
CGore* g_CGorePtr = (CGore*)&g_CGoreInstance;

// CGround*
CGround* g_CGroundPtr = (CGround*)&g_CGroundInstance;

// CKeys*
CKeys* g_CKeysPtr = (CKeys*)&g_CKeysInstance;

// CLevelLoader*
CLevelLoader* g_CLevelLoaderPtr = (CLevelLoader*)&g_CLevelLoaderInstance;

// SInputFace*[2000]
SInputFace* g_VisibleFacePointers[2000] = {};

// SMRGLTextureBasic
SMRGLTextureBasic g_FireEffectBlackHoleTexture = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BHOLE.RAW"
};
SMRGLTextureBasic g_FireEffectSparkTexture = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "SPARK.RAW"
};
SMRGLTextureBasic g_FireEffectBlueSparkTexture = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BLUSPARK.RAW"
};
SMRGLTextureBasic g_FireEffectGreenSparkTexture = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "GRNSPARK.RAW"
};
SMRGLTextureBasic g_FireEffectRedSparkTexture = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "REDSPARK.RAW"
};
SMRGLTextureBasic g_FireEffectLaserTexture = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "LASER.RAW"
};
SMRGLTextureBasic g_FireEffectBeamFuzzTexture = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BEAMFUZZ.RAW"
};
SMRGLTextureBasic g_FireEffectReticle = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "RETICLE.RAW"
};
SMRGLTextureBasic g_FireEffectHeadliteTexture = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "HEADLITE.RAW"
};
SMRGLTextureBasic g_FireEffectBlastTexture = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BLAST1.RAW"
};
SMRGLTextureBasic g_FireEffectPopcornTexture = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "POPCORN.RAW"
};
SMRGLTextureBasic g_FireEffectRainDropTexture = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "RAINDRP1.RAW"
};
SMRGLTextureBasic DAT_0067b0c8 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "GLOW1.RAW"
};
SMRGLTextureBasic DAT_0067b100 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "F0100.RAW"
};
SMRGLTextureBasic DAT_0067b118 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "F0300.RAW"
};
SMRGLTextureBasic DAT_0067B130 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "F0500.RAW"
};
SMRGLTextureBasic DAT_0067B148 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "F0700.RAW"
};
SMRGLTextureBasic DAT_0067B160 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "F0900.RAW"
};
SMRGLTextureBasic DAT_0067B178 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "F1100.RAW"
};
SMRGLTextureBasic DAT_0067B190 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "F1300.RAW"
};
SMRGLTextureBasic DAT_0067B1A8 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "F1500.RAW"
};
SMRGLTextureBasic DAT_0067b1c0 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "CAN0100.RAW"
};
SMRGLTextureBasic DAT_0067B1D8 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "CAN0300.RAW"
};
SMRGLTextureBasic DAT_0067B1F0 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "CAN0500.RAW"
};
SMRGLTextureBasic DAT_0067B208 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "CAN0700.RAW"
};
SMRGLTextureBasic DAT_0067B220 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "CAN0900.RAW"
};
SMRGLTextureBasic DAT_0067B238 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "CAN1100.RAW"
};
SMRGLTextureBasic DAT_0067B250 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "CAN1300.RAW"
};
SMRGLTextureBasic DAT_0067B268 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "CAN1500.RAW"
};
SMRGLTextureBasic DAT_0067B280 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BF0100.RAW"
};
SMRGLTextureBasic DAT_0067B298 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BF0300.RAW"
};
SMRGLTextureBasic DAT_0067B2B0 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BF0500.RAW"
};
SMRGLTextureBasic DAT_0067B2C8 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BF0700.RAW"
};
SMRGLTextureBasic DAT_0067B2E0 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BF0900.RAW"
};
SMRGLTextureBasic DAT_0067B2F8 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BF1100.RAW"
};
SMRGLTextureBasic DAT_0067B310 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BF1300.RAW"
};
SMRGLTextureBasic DAT_0067B328 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BF1500.RAW"
};
SMRGLTextureBasic DAT_0067B340 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BF0100.RAW"
};
SMRGLTextureBasic DAT_0067B358 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BF0300.RAW"
};
SMRGLTextureBasic DAT_0067B370 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BF0500.RAW"
};
SMRGLTextureBasic DAT_0067B388 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BF0700.RAW"
};
SMRGLTextureBasic DAT_0067B3A0 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BF0900.RAW"
};
SMRGLTextureBasic DAT_0067B3B8 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BF1100.RAW"
};
SMRGLTextureBasic DAT_0067B3D0 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BF1300.RAW"
};
SMRGLTextureBasic DAT_0067B3E8 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BF1500.RAW"
};
SMRGLTextureBasic DAT_0067B400 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BF0100.RAW"
};
SMRGLTextureBasic DAT_0067B418 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BF0300.RAW"
};
SMRGLTextureBasic DAT_0067B430 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BF0500.RAW"
};
SMRGLTextureBasic DAT_0067B448 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BF0700.RAW"
};
SMRGLTextureBasic DAT_0067B460 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BF0900.RAW"
};
SMRGLTextureBasic DAT_0067B478 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BF1100.RAW"
};
SMRGLTextureBasic DAT_0067B490 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BF1300.RAW"
};
SMRGLTextureBasic DAT_0067B4A8 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BF1500.RAW"
};
SMRGLTextureBasic DAT_0067b514 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BBWHITE.RAW"
};
SMRGLTextureBasic g_FontTextureInfo = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = ""
};
SMRGLTextureBasic DAT_0067B948 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "7YEARS.RAW"
};
SMRGLTextureBasic DAT_0067b9b0 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BGLOB.RAW"
};
SMRGLTextureBasic DAT_0067b9c8 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BHSP1.RAW"
};
SMRGLTextureBasic DAT_0067b9e0 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BHSP2.RAW"
};
SMRGLTextureBasic DAT_0067B9F8 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BHSP3.RAW"
};
SMRGLTextureBasic DAT_0067BA10 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BHSP4.RAW"
};
SMRGLTextureBasic DAT_0067ba28 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BVSP1-01.RAW"
};
SMRGLTextureBasic DAT_0067ba40 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BVSP1-02.RAW"
};
SMRGLTextureBasic DAT_0067BA58 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BVSP1-03.RAW"
};
SMRGLTextureBasic DAT_0067BA70 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BVSP1-04.RAW"
};
SMRGLTextureBasic DAT_0067BA88 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BVSP1-05.RAW"
};
SMRGLTextureBasic DAT_0067BAA0 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BVSP1-06.RAW"
};
SMRGLTextureBasic DAT_0067BAB8 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BVSP1-07.RAW"
};
SMRGLTextureBasic DAT_0067BAD0 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BVSP1-08.RAW"
};
SMRGLTextureBasic DAT_0067BAE8 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BVSP1-09.RAW"
};
SMRGLTextureBasic DAT_0067BB00 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BVSP1-10.RAW"
};
SMRGLTextureBasic DAT_0067BB18 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BVSP1-11.RAW"
};
SMRGLTextureBasic DAT_0067BB30 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BVSP1-12.RAW"
};
SMRGLTextureBasic DAT_0067BB48 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BVSP1-13.RAW"
};
SMRGLTextureBasic DAT_0067BB60 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BVSP1-14.RAW"
};
SMRGLTextureBasic DAT_0067BB78 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BVSP1-15.RAW"
};
SMRGLTextureBasic DAT_0067BB90 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BVSP1-16.RAW"
};
SMRGLTextureBasic DAT_0067bba8 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BVSP2-01.RAW"
};
SMRGLTextureBasic DAT_0067BBC0 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BVSP2-02.RAW"
};
SMRGLTextureBasic DAT_0067BBD8 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BVSP2-03.RAW"
};
SMRGLTextureBasic DAT_0067BBF0 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BVSP2-04.RAW"
};
SMRGLTextureBasic DAT_0067BC08 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BVSP2-05.RAW"
};
SMRGLTextureBasic DAT_0067BC20 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BVSP2-06.RAW"
};
SMRGLTextureBasic DAT_0067BC38 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BVSP2-07.RAW"
};
SMRGLTextureBasic DAT_0067BC50 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BVSP2-08.RAW"
};
SMRGLTextureBasic DAT_0067BC68 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BVSP2-09.RAW"
};
SMRGLTextureBasic DAT_0067BC80 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BVSP2-10.RAW"
};
SMRGLTextureBasic DAT_0067BC98 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BVSP2-11.RAW"
};
SMRGLTextureBasic DAT_0067BCB0 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BVSP2-12.RAW"
};
SMRGLTextureBasic DAT_0067BCC8 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BVSP2-13.RAW"
};
SMRGLTextureBasic DAT_0067BCE0 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BVSP2-14.RAW"
};
SMRGLTextureBasic DAT_0067BCF8 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BVSP2-15.RAW"
};
SMRGLTextureBasic DAT_0067BD10 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BVSP2-16.RAW"
};
SMRGLTextureBasic DAT_0067BD28 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BVSP3-01.RAW"
};
SMRGLTextureBasic DAT_0067BD40 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BVSP3-02.RAW"
};
SMRGLTextureBasic DAT_0067BD58 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BVSP3-03.RAW"
};
SMRGLTextureBasic DAT_0067BD70 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BVSP3-04.RAW"
};
SMRGLTextureBasic DAT_0067BD88 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BVSP3-05.RAW"
};
SMRGLTextureBasic DAT_0067BDA0 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BVSP3-06.RAW"
};
SMRGLTextureBasic DAT_0067BDB8 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BVSP3-07.RAW"
};
SMRGLTextureBasic DAT_0067BDD0 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BVSP3-08.RAW"
};
SMRGLTextureBasic DAT_0067BDE8 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BVSP3-09.RAW"
};
SMRGLTextureBasic DAT_0067BE00 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BVSP3-10.RAW"
};
SMRGLTextureBasic DAT_0067BE18 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BVSP3-11.RAW"
};
SMRGLTextureBasic DAT_0067BE30 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BVSP3-12.RAW"
};
SMRGLTextureBasic DAT_0067BE48 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BVSP3-13.RAW"
};
SMRGLTextureBasic DAT_0067BE60 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BVSP3-14.RAW"
};
SMRGLTextureBasic DAT_0067BE78 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BVSP3-15.RAW"
};
SMRGLTextureBasic DAT_0067BE90 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BVSP3-16.RAW"
};
SMRGLTextureBasic DAT_0067BEA8 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BVSP4-01.RAW"
};
SMRGLTextureBasic DAT_0067BEC0 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BVSP4-02.RAW"
};
SMRGLTextureBasic DAT_0067BED8 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BVSP4-03.RAW"
};
SMRGLTextureBasic DAT_0067BEF0 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BVSP4-04.RAW"
};
SMRGLTextureBasic DAT_0067BF08 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BVSP4-05.RAW"
};
SMRGLTextureBasic DAT_0067BF20 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BVSP4-06.RAW"
};
SMRGLTextureBasic DAT_0067BF38 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BVSP4-07.RAW"
};
SMRGLTextureBasic DAT_0067BF50 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BVSP4-08.RAW"
};
SMRGLTextureBasic DAT_0067BF68 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BVSP4-09.RAW"
};
SMRGLTextureBasic DAT_0067BF80 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BVSP4-10.RAW"
};
SMRGLTextureBasic DAT_0067BF98 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BVSP4-11.RAW"
};
SMRGLTextureBasic DAT_0067BFB0 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BVSP4-12.RAW"
};
SMRGLTextureBasic DAT_0067BFC8 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BVSP4-13.RAW"
};
SMRGLTextureBasic DAT_0067BFE0 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BVSP4-14.RAW"
};
SMRGLTextureBasic DAT_0067BFF8 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BVSP4-15.RAW"
};
SMRGLTextureBasic DAT_0067C010 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BVSP4-16.RAW"
};
SMRGLTextureBasic DAT_0067c028 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BPOL1-01.RAW"
};
SMRGLTextureBasic DAT_0067c040 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BPOL1-02.RAW"
};
SMRGLTextureBasic DAT_0067C058 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BPOL1-03.RAW"
};
SMRGLTextureBasic DAT_0067C070 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BPOL1-04.RAW"
};
SMRGLTextureBasic DAT_0067C088 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BPOL1-05.RAW"
};
SMRGLTextureBasic DAT_0067C0A0 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BPOL1-06.RAW"
};
SMRGLTextureBasic DAT_0067C0B8 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BPOL1-07.RAW"
};
SMRGLTextureBasic DAT_0067C0D0 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BPOL1-08.RAW"
};
SMRGLTextureBasic DAT_0067C0E8 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BPOL1-09.RAW"
};
SMRGLTextureBasic DAT_0067C100 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BPOL1-10.RAW"
};
SMRGLTextureBasic DAT_0067C118 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BPOL1-11.RAW"
};
SMRGLTextureBasic DAT_0067C130 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BPOL1-12.RAW"
};
SMRGLTextureBasic DAT_0067C148 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BPOL1-13.RAW"
};
SMRGLTextureBasic DAT_0067C160 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BPOL1-14.RAW"
};
SMRGLTextureBasic DAT_0067C178 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BPOL1-15.RAW"
};
SMRGLTextureBasic DAT_0067C190 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BPOL1-16.RAW"
};
SMRGLTextureBasic DAT_0067C1A8 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BPOL1-17.RAW"
};
SMRGLTextureBasic DAT_0067C1C0 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BPOL1-18.RAW"
};
SMRGLTextureBasic DAT_0067C1D8 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BPOL1-19.RAW"
};
SMRGLTextureBasic DAT_0067C1F0 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BPOL1-20.RAW"
};
SMRGLTextureBasic DAT_0067C208 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BPOL1-21.RAW"
};
SMRGLTextureBasic DAT_0067C220 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BPOL1-22.RAW"
};
SMRGLTextureBasic DAT_0067C238 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BPOL1-23.RAW"
};
SMRGLTextureBasic DAT_0067C250 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BPOL1-24.RAW"
};
SMRGLTextureBasic DAT_0067C268 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BPOL1-25.RAW"
};
SMRGLTextureBasic DAT_0067C280 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BPOL1-26.RAW"
};
SMRGLTextureBasic DAT_0067C298 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BPOL1-27.RAW"
};
SMRGLTextureBasic DAT_0067C2B0 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BPOL1-28.RAW"
};
SMRGLTextureBasic DAT_0067C2C8 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BPOL1-29.RAW"
};
SMRGLTextureBasic DAT_0067c2e0 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BPOL2-01.RAW"
};
SMRGLTextureBasic DAT_0067C2F8 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BPOL2-02.RAW"
};
SMRGLTextureBasic DAT_0067C310 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BPOL2-03.RAW"
};
SMRGLTextureBasic DAT_0067C328 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BPOL2-04.RAW"
};
SMRGLTextureBasic DAT_0067C340 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BPOL2-05.RAW"
};
SMRGLTextureBasic DAT_0067C358 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BPOL2-06.RAW"
};
SMRGLTextureBasic DAT_0067C370 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BPOL2-07.RAW"
};
SMRGLTextureBasic DAT_0067C388 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BPOL2-08.RAW"
};
SMRGLTextureBasic DAT_0067C3A0 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BPOL2-09.RAW"
};
SMRGLTextureBasic DAT_0067C3B8 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BPOL2-10.RAW"
};
SMRGLTextureBasic DAT_0067C3D0 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BPOL2-11.RAW"
};
SMRGLTextureBasic DAT_0067C3E8 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BPOL2-12.RAW"
};
SMRGLTextureBasic DAT_0067C400 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BPOL2-13.RAW"
};
SMRGLTextureBasic DAT_0067C418 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BPOL2-14.RAW"
};
SMRGLTextureBasic DAT_0067C430 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BPOL2-15.RAW"
};
SMRGLTextureBasic DAT_0067C448 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BPOL2-16.RAW"
};
SMRGLTextureBasic DAT_0067C460 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BPOL2-17.RAW"
};
SMRGLTextureBasic DAT_0067C478 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BPOL2-18.RAW"
};
SMRGLTextureBasic DAT_0067C490 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BPOL2-19.RAW"
};
SMRGLTextureBasic DAT_0067C4A8 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BPOL2-20.RAW"
};
SMRGLTextureBasic DAT_0067C4C0 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BPOL2-21.RAW"
};
SMRGLTextureBasic DAT_0067C4D8 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BPOL2-22.RAW"
};
SMRGLTextureBasic DAT_0067C4F0 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BPOL2-23.RAW"
};
SMRGLTextureBasic DAT_0067C508 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BPOL2-24.RAW"
};
SMRGLTextureBasic DAT_0067C520 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BPOL2-25.RAW"
};
SMRGLTextureBasic DAT_0067C538 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BPOL2-26.RAW"
};
SMRGLTextureBasic DAT_0067C550 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BPOL2-27.RAW"
};
SMRGLTextureBasic DAT_0067C568 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BPOL2-28.RAW"
};
SMRGLTextureBasic DAT_0067C580 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BPOL2-29.RAW"
};
SMRGLTextureBasic DAT_0067C598 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BPOL3-01.RAW"
};
SMRGLTextureBasic DAT_0067C5B0 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BPOL3-02.RAW"
};
SMRGLTextureBasic DAT_0067C5C8 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BPOL3-03.RAW"
};
SMRGLTextureBasic DAT_0067C5E0 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BPOL3-04.RAW"
};
SMRGLTextureBasic DAT_0067C5F8 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BPOL3-05.RAW"
};
SMRGLTextureBasic DAT_0067C610 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BPOL3-06.RAW"
};
SMRGLTextureBasic DAT_0067C628 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BPOL3-07.RAW"
};
SMRGLTextureBasic DAT_0067C640 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BPOL3-08.RAW"
};
SMRGLTextureBasic DAT_0067C658 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BPOL3-09.RAW"
};
SMRGLTextureBasic DAT_0067C670 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BPOL3-10.RAW"
};
SMRGLTextureBasic DAT_0067C688 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BPOL3-11.RAW"
};
SMRGLTextureBasic DAT_0067C6A0 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BPOL3-12.RAW"
};
SMRGLTextureBasic DAT_0067C6B8 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BPOL3-13.RAW"
};
SMRGLTextureBasic DAT_0067C6D0 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BPOL3-14.RAW"
};
SMRGLTextureBasic DAT_0067C6E8 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BPOL3-15.RAW"
};
SMRGLTextureBasic DAT_0067C700 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BPOL3-16.RAW"
};
SMRGLTextureBasic DAT_0067C718 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BPOL3-17.RAW"
};
SMRGLTextureBasic DAT_0067C730 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BPOL3-18.RAW"
};
SMRGLTextureBasic DAT_0067C748 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BPOL3-19.RAW"
};
SMRGLTextureBasic DAT_0067C760 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BPOL3-20.RAW"
};
SMRGLTextureBasic DAT_0067C778 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BPOL3-21.RAW"
};
SMRGLTextureBasic DAT_0067C790 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BPOL3-22.RAW"
};
SMRGLTextureBasic DAT_0067C7A8 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BPOL3-23.RAW"
};
SMRGLTextureBasic DAT_0067C7C0 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BPOL3-24.RAW"
};
SMRGLTextureBasic DAT_0067C7D8 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BPOL3-25.RAW"
};
SMRGLTextureBasic DAT_0067C7F0 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BPOL3-26.RAW"
};
SMRGLTextureBasic DAT_0067C808 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BPOL3-27.RAW"
};
SMRGLTextureBasic DAT_0067C820 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BPOL3-28.RAW"
};
SMRGLTextureBasic DAT_0067C838 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BPOL3-29.RAW"
};
SMRGLTextureBasic DAT_0067C850 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BPOL4-01.RAW"
};
SMRGLTextureBasic DAT_0067C868 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BPOL4-02.RAW"
};
SMRGLTextureBasic DAT_0067C880 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BPOL4-03.RAW"
};
SMRGLTextureBasic DAT_0067C898 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BPOL4-04.RAW"
};
SMRGLTextureBasic DAT_0067C8B0 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BPOL4-05.RAW"
};
SMRGLTextureBasic DAT_0067C8C8 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BPOL4-06.RAW"
};
SMRGLTextureBasic DAT_0067C8E0 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BPOL4-07.RAW"
};
SMRGLTextureBasic DAT_0067C8F8 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BPOL4-08.RAW"
};
SMRGLTextureBasic DAT_0067C910 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BPOL4-09.RAW"
};
SMRGLTextureBasic DAT_0067C928 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BPOL4-10.RAW"
};
SMRGLTextureBasic DAT_0067C940 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BPOL4-11.RAW"
};
SMRGLTextureBasic DAT_0067C958 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BPOL4-12.RAW"
};
SMRGLTextureBasic DAT_0067C970 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BPOL4-13.RAW"
};
SMRGLTextureBasic DAT_0067C988 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BPOL4-14.RAW"
};
SMRGLTextureBasic DAT_0067C9A0 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BPOL4-15.RAW"
};
SMRGLTextureBasic DAT_0067C9B8 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BPOL4-16.RAW"
};
SMRGLTextureBasic DAT_0067C9D0 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BPOL4-17.RAW"
};
SMRGLTextureBasic DAT_0067C9E8 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BPOL4-18.RAW"
};
SMRGLTextureBasic DAT_0067CA00 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BPOL4-19.RAW"
};
SMRGLTextureBasic DAT_0067CA18 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BPOL4-20.RAW"
};
SMRGLTextureBasic DAT_0067CA30 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BPOL4-21.RAW"
};
SMRGLTextureBasic DAT_0067CA48 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BPOL4-22.RAW"
};
SMRGLTextureBasic DAT_0067CA60 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BPOL4-23.RAW"
};
SMRGLTextureBasic DAT_0067CA78 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BPOL4-24.RAW"
};
SMRGLTextureBasic DAT_0067CA90 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BPOL4-25.RAW"
};
SMRGLTextureBasic DAT_0067CAA8 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BPOL4-26.RAW"
};
SMRGLTextureBasic DAT_0067CAC0 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BPOL4-27.RAW"
};
SMRGLTextureBasic DAT_0067CAD8 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BPOL4-28.RAW"
};
SMRGLTextureBasic DAT_0067CAF0 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BPOL4-29.RAW"
};
SMRGLTextureBasic DAT_0067cb28 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "FOOTSTEP.RAW"
};
SMRGLTextureBasic g_Inventory3DTextureAtlas = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "INV3D.RAW"
};
SMRGLTextureBasic g_LoadingMoonGlowTexture = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "MOONGLOW.RAW"
};
SMRGLTextureBasic DAT_0067d150 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "SPARK.RAW"
};

// SMRGLTextureBasic*
SMRGLTextureBasic* g_LightTexturesEnd = nullptr;
SMRGLTextureBasic* g_SkyDomeTexturePtr = (SMRGLTextureBasic*)&g_SkyDomeTextureData;

// SMRGLTextureBasic[40]
SMRGLTextureBasic g_FireEffectSmokeParticleTextures[40] = {
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0050.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0051.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0052.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0053.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0054.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0055.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0056.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0057.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0058.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0059.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0060.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0061.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0062.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0063.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0064.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0065.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0066.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0067.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0068.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0069.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0070.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0071.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0072.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0073.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0074.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0075.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0076.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0077.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0078.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0079.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0080.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0081.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0082.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0083.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0084.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0085.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0086.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0087.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0088.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0089.RAW"
    }
};

// SMRGLTextureBasic[54]
SMRGLTextureBasic g_FireEffectExplosionTextures[54] = {
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01100.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01101.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01102.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01103.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01104.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01105.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01106.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01107.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01108.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01109.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01110.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01111.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01112.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01113.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01114.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01115.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01116.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01117.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01118.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01119.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01120.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01121.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01122.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01123.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01124.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01125.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01126.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01127.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01128.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01129.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01130.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01131.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01132.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01133.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01134.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01135.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01140.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01141.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01142.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01143.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01144.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01145.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01146.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01147.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01148.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01149.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01150.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01151.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01152.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01153.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01154.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01155.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01156.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01157.RAW"
    }
};

// SMRGLTextureBasic[6]
SMRGLTextureBasic g_FireEffectLightningBoltTextures[6] = {
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BOLT1.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BOLT2.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BOLT3.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BOLT4.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BOLT5.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BOLT6.RAW"
    }
};

// SMRGLTextureBasic[8]
SMRGLTextureBasic g_AudioSpectrumTextures[8] = {
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "F0100.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "F0300.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "F0500.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "F0700.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "F0900.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "F1100.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "F1300.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "F1500.RAW"
    }
};

// TerminatedCString
TerminatedCString s_meshlod_0067d3a0 = "meshlod";

// WatcomStaticDestructorNode
WatcomStaticDestructorNode g_CKeyFramedModelPoolDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&WatcomDestructorCall_0065c960,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CKeyFramedModelPool
};
WatcomStaticDestructorNode DAT_006703a0 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&WatcomDestructorCall_0065cd40,
    .registration_type = 0x00000001,
    .object_instance = (void *)&SFreaky_ARRAY_02c6d0c0
};
WatcomStaticDestructorNode g_CEditorToolsDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&WatcomDestructorCall_0065d440,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CEditorToolsInstance
};
WatcomStaticDestructorNode g_CFireEffectStakesDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&WatcomDestructorCall_0065dc30,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_StakePool
};
WatcomStaticDestructorNode g_CFireEffectSparksDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&WatcomDestructorCall_0065dc3c,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_SparkPool
};
WatcomStaticDestructorNode g_CFireEffectGlassParticlesDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&WatcomDestructorCall_0065dc48,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_GlassParticlePool
};
WatcomStaticDestructorNode g_CFireEffectFireballsDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&WatcomDestructorCall_0065dc54,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_FireballPool
};
WatcomStaticDestructorNode g_CFireEffectRocksDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&WatcomDestructorCall_0065dc60,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_RockPool
};
WatcomStaticDestructorNode g_CFireEffectTossesDestructorNodes = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&WatcomDestructorCall_0065dc6c,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_TossPool
};
WatcomStaticDestructorNode g_CFireEffectCratersDestructorNodes = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&WatcomDestructorCall_0065dc78,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CraterPool
};
WatcomStaticDestructorNode g_CFireEffectShellsDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&WatcomDestructorCall_0065dc84,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_ShellPool
};
WatcomStaticDestructorNode g_CFireEffectPopcornsDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&WatcomDestructorCall_0065dc90,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_PopcornPool
};
WatcomStaticDestructorNode g_CFireEffectRainDropsDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&WatcomDestructorCall_0065dc9c,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_RainDropPool
};
WatcomStaticDestructorNode g_GameDestructorNode1 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&WatcomDestructorCall_0065e990,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CDemonLightInstance
};
WatcomStaticDestructorNode g_GameDestructorNode2 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&WatcomDestructorCall_0065e99c,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CGameInstance
};
WatcomStaticDestructorNode g_GameDestructorNode3 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&WatcomDestructorCall_0065e9a8,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CPickList
};
WatcomStaticDestructorNode g_CGoreDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&WatcomDestructorCall_0065f000,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CGoreInstance
};
WatcomStaticDestructorNode DAT_0067b980 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&WatcomDestructorCall_0065f00c,
    .registration_type = 0x00000001,
    .object_instance = (void *)0x02D833D4
};
WatcomStaticDestructorNode DAT_0067b990 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&WatcomDestructorCall_0065f018,
    .registration_type = 0x00000001,
    .object_instance = (void *)0x02DA8C2C
};
WatcomStaticDestructorNode g_CGroundDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&WatcomDestructorCall_0065f230,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CGroundInstance
};
WatcomStaticDestructorNode DAT_0067cd60 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&WatcomDestructorCall_006603c0,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_InvBackgroundBitmap
};
WatcomStaticDestructorNode DAT_0067cd70 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&WatcomDestructorCall_006603cc,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_InvBackground2Bitmap
};
WatcomStaticDestructorNode DAT_0067cd80 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&WatcomDestructorCall_006603d8,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_WeapBackgroundBitmap
};
WatcomStaticDestructorNode DAT_0067cd90 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&WatcomDestructorCall_006603e4,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_WeapBackground2Bitmap
};
WatcomStaticDestructorNode DAT_0067cda0 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&WatcomDestructorCall_006603f0,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_BatteryIconBitmap
};
WatcomStaticDestructorNode DAT_0067cdb0 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&WatcomDestructorCall_006603fc,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_HealthBar1Bitmap
};
WatcomStaticDestructorNode DAT_0067cdc0 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&WatcomDestructorCall_00660408,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_HealthBar2Bitmap
};
WatcomStaticDestructorNode DAT_0067cdd0 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&WatcomDestructorCall_00660414,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_TommyClipIconBitmap
};
WatcomStaticDestructorNode DAT_0067cde0 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&WatcomDestructorCall_00660420,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_BulletIconBitmap
};
WatcomStaticDestructorNode DAT_0067cdf0 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&WatcomDestructorCall_0066042c,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_LithiumIconBitmap
};
WatcomStaticDestructorNode DAT_0067ce00 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&WatcomDestructorCall_00660438,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_MercuryBulletIconBitmap
};
WatcomStaticDestructorNode DAT_0067ce10 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&WatcomDestructorCall_00660444,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_ShotShellIconBitmap
};
WatcomStaticDestructorNode DAT_0067ce20 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&WatcomDestructorCall_00660450,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_SilverBulletIconBitmap
};
WatcomStaticDestructorNode DAT_0067ce30 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&WatcomDestructorCall_0066045c,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_HolyBulletIconBitmap
};
WatcomStaticDestructorNode g_LoadingMoonModelDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&WatcomDestructorCall_006608c0,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_LoadingMoonModel
};
WatcomStaticDestructorNode g_CDemonFileManagerDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&WatcomDestructorCall_00660cc0,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CDemonFileManagerInstance
};
WatcomStaticDestructorNode g_LoadingScreenBitmap1DestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&WatcomDestructorCall_00660ccc,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_LoadingScreenBitmap1
};
WatcomStaticDestructorNode g_LoadingScreenBitmap2DestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&WatcomDestructorCall_00660cd8,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_LoadingScreenBitmap2
};
WatcomStaticDestructorNode g_LoadingScreenBitmap3DestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&WatcomDestructorCall_00660ce4,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_LoadingScreenBitmap3
};
WatcomStaticDestructorNode g_LoadingScreenBitmap4DestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&WatcomDestructorCall_00660cf0,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_LoadingScreenBitmap4
};
WatcomStaticDestructorNode g_CLeakCheckerDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&WatcomDestructorCall_006612a0,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CLeakCheckerInstance
};
WatcomStaticDestructorNode DAT_0067d224 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&WatcomDestructorCall_006612d0,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_MenuBitmaps
};
WatcomStaticDestructorNode DAT_0067d234 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&WatcomDestructorInfo_006612dc,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CMoonInstance
};
WatcomStaticDestructorNode DAT_0067d244 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&WatcomDestructorCall_006612e8,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_MenuBlurLeft
};
WatcomStaticDestructorNode DAT_0067d254 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&WatcomDestructorCall_006612f4,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_MenuBlurMiddle
};
WatcomStaticDestructorNode DAT_0067d264 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&WatcomDestructorCall_00661300,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_MenuBlurRight
};
WatcomStaticDestructorNode DAT_0067d274 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&WatcomDestructorCall_0066130c,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CalibrationBitmap
};
WatcomStaticDestructorNode g_TempNeighborFacesDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&WatcomDestructorCall_00661360,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_TempNeighborFaces
};
WatcomStaticDestructorNode DAT_0067d718 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&WatcomDestructorCall_00661ad0,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_MoonCloudTexture
};
WatcomStaticDestructorNode DAT_0067d728 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&WatcomDestructorCall_00661adc,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_MoonAnimTextures
};
WatcomStaticDestructorNode DAT_0067d738 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&WatcomDestructorCall_00661ae8,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_MoonBatCourses
};
WatcomStaticDestructorNode DAT_0067d748 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&WatcomDestructorCall_00661af4,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_MoonBatModel
};

// byte
byte g_CPUInfoFamily = 0x96;
byte g_CPUInfoModel = 0x13;
byte g_CPUInfoStepping = 0x0;
byte g_CPUIDSupported = 0x0;
byte g_CPUInfoIntelCPU = 0x0;
byte g_CPUInfoMMXSupported = 0x0;

// char*
char* g_CurrentDebugFilename = (char*)s_unknown_0067d200;

// char[100]
char g_DefaultAuditPath[] = "";
char g_DefaultAuditRecordPath[] = "";

// char[260]
char g_FilePathBuffer[] = "";
char g_DefaultCheckOutPath[] = "";
char g_DefaultPodDirectoryPath[] = "";
char g_DirectoryBufferTemplate[] = "";
char g_FilenameBufferTemplate[] = "";

// char[512]
char g_Field1ParseBuffer[] = "";
char g_Field2ParseBuffer[] = "";

// float
float g_DashAnimationThreshold = 0.1f;
float g_SkyDomeVertexScale = 5.0f;

// int
int g_CZombieDogClassVersion = 0x2;
int g_CDoorClassVersion = 0xb;
int g_CDraculaBrideClassVersion = 0x9;
int g_DashLength = 0x1;
int g_RenderPixelBudget = 0x1;
int g_CDripClassVersion = 0x6;
int g_CDroneClassVersion = 0x2;
int g_PerspectiveSubdivDeltaU = 0x0;
int g_PerspectiveSubdivDeltaV = 0x0;
int g_PerspectiveSubdivDeltaZ = 0x0;
int g_DeltaTextureU = 0x0;
int g_DeltaTextureV = 0x0;
int g_DeltaDepthZ = 0x0;
int g_PerspectiveScanlinePixelCount = 0x0;
int g_GeoFileFormatVersion = 0x4;
int g_CDynamiteClassVersion = 0x1;
int g_CursorSizeHorizontal = 0x9;
int g_CursorSizeVertical = 0x9;
int g_CElephantGunClassVersion = 0x1;
int g_CEmitterClassVersion = 0x7;
int g_CEnemyClassVersion = 0xa;
int g_WindowWidth = 0x140;
int g_WindowHeight = 0xc8;
int g_BitsPerPixel = 0x8;
int g_TextureFilteringEnabled = 0x1;
int g_CurrentTextureDimension = 0x100;
int g_InputKeyMask = 0x7f;
int g_JoystickNumButtons = 0x4;
int g_CurrentAlphaValue = 0xff;
int g_RenderingQuality = 0x1;
int g_ProjectionScale = 0x10000;
int g_CFilmReelClassVersion = 0x2;
int g_CFilmProjectorClassVersion = 0x2;
int g_CFlameClassVersion = 0x7;
int g_CFlameCanClassVersion = 0x1;
int g_CFlameThrowerClassVersion = 0x1;
int g_CFlashlightClassVersion = 0x1;
int g_CFliesClassVersion = 0x3;
int g_CFrankenstienMachineClassVersion = 0x1;
int g_CGabriellaClassVersion = 0x3;
int g_CGargoyleClassVersion = 0x2;
int g_CGasMaskClassVersion = 0x1;
int g_CGhoulClassVersion = 0x7;
int g_CGlassClassVersion = 0x6;
int g_CGraveClassVersion = 0x4;
int g_CGunClassVersion = 0x1;
int g_CHaystackClassVersion = 0x1;
int g_CHealthItemClassVersion = 0x3;
int g_CHeroClassVersion = 0xc;
int g_CHeroPlaceholderClassVersion = 0x1;
int g_CHiramClassVersion = 0x1;
int g_CHostageClassVersion = 0xc;
int g_CHotDemonClassVersion = 0x1;
int g_CHighPriestOfGardathClassVersion = 0x1;
int g_CIcePickClassVersion = 0x1;
int g_CImpClassVersion = 0x1;
int g_InventoryWidth = 0xd0;
int g_InventoryHeight = 0x60;
int g_CKeyActorClassVersion = 0x3;
int g_CLadderClassVersion = 0x2;
int g_CLarvaClassVersion = 0x2;
int g_CLeverClassVersion = 0x8;
int g_AmbientLightLevel = 0x8000;
int g_SpecularEnabled = 0x1;
int g_DiffuseLightMultiplier = 0x10000;
int g_SpecularLightMultiplier = 0x10000;
int g_CLightGunClassVersion = 0x1;
int g_CLightConeClassVersion = 0x2;
int g_CMansionPuzzleCircleClassVersion = 0x3;
int g_CMirrorHackClassVersion = 0x1;
int g_CMarqueeClassVersion = 0x1;
int g_CMeleeClassVersion = 0x7;
int INT_0067d390 = 0x2D;
int g_EnableMidpointSampling = 0x1;
int INT_0067d39c = 0x1;
int g_CMimicClassVersion = 0x3;
int g_CMineCarClassVersion = 0x1;
int g_CPUInfoBasicInfo2 = 0x1000c900;
int g_CPUInfoBaseInfo3 = 0x2D;
int g_CMobsterClassVersion = 0x7;
int g_CMolochClassVersion = 0x1;
int g_MoonBatsEnabled = 0x1;
int g_MpegSynthesisTableInitialized = 0x1;
int g_Mp3AntiAliasInitialized = 0x1;
int g_Mp3SynthesisTablesInitialized = 0x1;

// int[16]
int g_Layer3ScalefacLengths1[16] = {
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000003, 0x00000001, 0x00000001, 0x00000001,
    0x00000002, 0x00000002, 0x00000002, 0x00000003, 0x00000003, 0x00000003, 0x00000004, 0x00000004
};
int g_Layer3ScalefacLengths2[16] = {
    0x00000000, 0x00000001, 0x00000002, 0x00000003, 0x00000000, 0x00000001, 0x00000002, 0x00000003,
    0x00000001, 0x00000002, 0x00000003, 0x00000001, 0x00000002, 0x00000003, 0x00000002, 0x00000003
};

// int[2][3][15]
int g_MpegBitrateTable[2][3][15] = {
    {{0x00000000, 0x00000020, 0x00000030, 0x00000038, 0x00000040, 0x00000050, 0x00000060, 0x00000070, 0x00000080, 0x00000090, 0x000000A0, 0x000000B0, 0x000000C0, 0x000000E0, 0x00000100}, {0x00000000, 0x00000008, 0x00000010, 0x00000018, 0x00000020, 0x00000028, 0x00000030, 0x00000038, 0x00000040, 0x00000050, 0x00000060, 0x00000070, 0x00000080, 0x00000090, 0x000000A0}, {0x00000000, 0x00000008, 0x00000010, 0x00000018, 0x00000020, 0x00000028, 0x00000030, 0x00000038, 0x00000040, 0x00000050, 0x00000060, 0x00000070, 0x00000080, 0x00000090, 0x000000A0}},
    {{0x00000000, 0x00000020, 0x00000040, 0x00000060, 0x00000080, 0x000000A0, 0x000000C0, 0x000000E0, 0x00000100, 0x00000120, 0x00000140, 0x00000160, 0x00000180, 0x000001A0, 0x000001C0}, {0x00000000, 0x00000020, 0x00000030, 0x00000038, 0x00000040, 0x00000050, 0x00000060, 0x00000070, 0x00000080, 0x000000A0, 0x000000C0, 0x000000E0, 0x00000100, 0x00000140, 0x00000180}, {0x00000000, 0x00000020, 0x00000028, 0x00000030, 0x00000038, 0x00000040, 0x00000050, 0x00000060, 0x00000070, 0x00000080, 0x000000A0, 0x000000C0, 0x000000E0, 0x00000100, 0x00000140}}
};

// int[3]
int g_TriangleMatchTableA[3] = {0x00000001, 0x00000002, 0x00000000};
int g_TriangleMatchTableB[3] = {0x00000002, 0x00000000, 0x00000001};
int g_Layer3ShortBandBoundaries[3] = {0x00000000, 0x00000006, 0x0000000C};

// int[5]
int g_Layer3LongBandBoundaries[5] = {0x00000000, 0x00000006, 0x0000000B, 0x00000010, 0x00000015};

// int[6][3][4]
int g_Layer3ScalefactorBandCounts[6][3][4] = {
    {{0x00000006, 0x00000005, 0x00000005, 0x00000005}, {0x00000009, 0x00000009, 0x00000009, 0x00000009}, {0x00000006, 0x00000009, 0x00000009, 0x00000009}},
    {{0x00000006, 0x00000005, 0x00000007, 0x00000003}, {0x00000009, 0x00000009, 0x0000000C, 0x00000006}, {0x00000006, 0x00000009, 0x0000000C, 0x00000006}},
    {{0x0000000B, 0x0000000A, 0x00000000, 0x00000000}, {0x00000012, 0x00000012, 0x00000000, 0x00000000}, {0x0000000F, 0x00000012, 0x00000000, 0x00000000}},
    {{0x00000007, 0x00000007, 0x00000007, 0x00000000}, {0x0000000C, 0x0000000C, 0x0000000C, 0x00000000}, {0x00000006, 0x0000000F, 0x0000000C, 0x00000000}},
    {{0x00000006, 0x00000006, 0x00000006, 0x00000003}, {0x0000000C, 0x00000009, 0x00000009, 0x00000006}, {0x00000006, 0x0000000C, 0x00000009, 0x00000006}},
    {{0x00000008, 0x00000008, 0x00000005, 0x00000000}, {0x0000000F, 0x0000000C, 0x00000009, 0x00000000}, {0x00000006, 0x00000012, 0x00000009, 0x00000000}}
};

// uint
uint g_PerspectiveLeftU = 0x0;
uint g_PerspectiveLeftV = 0x0;
uint g_PerspectiveLeftZ = 0x0;
uint g_PerspectiveLeftW = 0x0;
uint g_PerspectiveInterpolatedW = 0x0;
uint g_PerspectiveRightW = 0x0;
uint g_PerspectiveRightU = 0x0;
uint g_PerspectiveRightV = 0x0;
uint g_PerspectiveRightZ = 0x0;
uint g_PerspectiveCurrentU = 0x0;
uint g_PerspectiveCurrentV = 0x0;
uint g_PerspectiveNextU = 0x0;
uint g_PerspectiveNextV = 0x0;
uint g_StartDepthZ = 0x0;
uint g_CPUFamily = 0x5;
uint g_VertexProcessingEnabled = 0x1;
uint g_CPUFeatureFlags = 0x0;

// uint*
uint* g_PerspectiveScanlineZPtr = nullptr;

// uint[16]
uint g_PerspectiveColorCache[16] = {};

// uint[18]
uint g_MpegBitMaskTableMultiBit[18] = {
    0x00000000, 0x00000001, 0x00000003, 0x00000007, 0x0000000F, 0x0000001F, 0x0000003F, 0x0000007F,
    0x000000FF, 0x000000FF, 0x000000FE, 0x000000FC, 0x000000F8, 0x000000F0, 0x000000E0, 0x000000C0,
    0x00000080, 0x00000000
};

// uint[8]
uint g_MpegBitMaskTableSingleBit[8] = {0x00000001, 0x00000002, 0x00000004, 0x00000008, 0x00000010, 0x00000020, 0x00000040, 0x00000080};

// ulonglong
ulonglong g_FilterBlendConstant = 0x0;
ulonglong g_LightmapBlendBias1 = 0x0;
ulonglong g_LightmapBlendBias2 = 0x8000800080008;
ulonglong g_AmbientLightMMX1 = 0x4000400040004;
ulonglong g_AmbientLightMMX2 = 0xc000c000c000c;
ulonglong g_LightmapBlendBias5 = 0x0;
ulonglong g_LightmapBlendBias6 = 0x40004000400040;
ulonglong g_LightmapBlendBias3 = 0x20002000200020;
ulonglong g_LightmapBlendBias4 = 0x60006000600060;

// undefined1
undefined1 g_MagicNumEFD = 0x45;

// undefined2
undefined2 DAT_0067aebc = 0;

// undefined4
undefined4 DAT_00670210 = 0;
undefined4 DAT_00670214 = 0;
undefined4 DAT_0067241c = 0;
undefined4 DAT_00672420 = 0;
undefined4 DAT_00672424 = 0;
undefined4 DAT_00672428 = 0;
undefined4 DAT_0067242c = 0;
undefined4 DAT_00672430 = 0;
undefined4 DAT_00672434 = 0;
undefined4 DAT_00672438 = 0;
undefined4 DAT_0067243c = 0;
undefined4 DAT_00672440 = 0;
undefined4 DAT_00672444 = 0;
undefined4 DAT_00672448 = 0;
undefined4 DAT_0067244c = 0;
undefined4 DAT_00672450 = 0;
undefined4 DAT_00672454 = 0;
undefined4 DAT_00672458 = 0;
undefined4 DAT_00678a70 = 0;
undefined4 DAT_00678a74 = 0;
undefined4 DAT_00678c80 = 0;
undefined4 DAT_00678c84 = 0;
undefined4 DAT_006793d8 = 0;
undefined4 DAT_006793dc = 0;
undefined4 DAT_006794a0 = 0;
undefined4 DAT_006794a4 = 0;
undefined4 DAT_0067aeb8 = 0;
undefined4 DAT_0067b718 = 0;
undefined4 DAT_0067ce48 = 0;
undefined4 DAT_0067ce4c = 0;
undefined4 DAT_0067ceb0 = 0;
undefined4 DAT_0067ceb4 = 0;
undefined4 DAT_0067d5c0 = 0;
undefined4 DAT_0067d5c4 = 0;
undefined4 DAT_0067d628 = 0;
undefined4 DAT_0067d62c = 0;
undefined4 DAT_0067e184 = 0;

// ushort[384]
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

// void*
void* g_CBaronStaticInitFunc = (void*)core_baron_cpp_staticInit_FUN_00412b41;
void* g_PerspectiveScanlineColorPtr = nullptr;
void* switchdataD_00679d10 = (void*)0x004B1A0C; // caseD_0
void* switchdataD_00679d54 = (void*)0x004B1A9B; // caseD_0

// void*[4][4]
void* g_MpegLayer2AllocationTables[4][4] = {
    {(void*)0x2472656C, (void*)0x00000024, nullptr, nullptr},
    {(void*)0x00000004, (void*)0x00000008, (void*)0x0000000C, (void*)0x00000010},
    {(void*)0x00000004, (void*)0x00000008, (void*)0x0000000C, (void*)0x00000010},
    {nullptr, (void*)0x00000004, (void*)0x00000008, (void*)0x00000010}
};

