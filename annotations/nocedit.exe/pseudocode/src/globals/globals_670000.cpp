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

// SEnumPair[11]
SEnumPair g_EmitterTypePairs[11] = {
    {.name = (char *)s_Spark_00624185, .value = 0x00000000},
    {.name = (char *)s_Smoke_0062418b, .value = 0x00000001},
    {.name = (char *)s_Fireball_00624191, .value = 0x00000002},
    {.name = (char *)s_Laser_0062419a, .value = 0x00000003},
    {.name = (char *)s_Rock_006241a0, .value = 0x00000004},
    {.name = (char *)s_Flame_006241a5, .value = 0x00000005},
    {.name = (char *)s_Popcorn_006241ab, .value = 0x00000006},
    {.name = (char *)s_Lightning_006241b3, .value = 0x00000007},
    {.name = (char *)s_Blue_Spark_006241bd, .value = 0x00000008},
    {.name = (char *)s_Point_to_point_lightning_006241c8, .value = 0x00000009},
    {.name = (char *)s_Sound_006241e1, .value = 0x0000000A}
};

// SEnumPair[2]
SEnumPair g_DoorSideTypePairs[2] = {
    {.name = (char *)s_Left_0062139b, .value = 0x00000000},
    {.name = (char *)s_Right_006213a0, .value = 0x00000001}
};
SEnumPair g_DoorSwingTypePairs[2] = {
    {.name = (char *)s_Clockwise_006213bb, .value = 0x00000000},
    {.name = (char *)s_Counter_Clockwise_006213c5, .value = 0x00000001}
};
SEnumPair g_EmitterSoundTypePairs[2] = {
    {.name = (char *)s_Normal_006242ab, .value = 0x00000000},
    {.name = (char *)s_One_Shot_006242b2, .value = 0x00000001}
};
SEnumPair g_MarqueeDisplayTypePairs[2] = {
    {.name = (char *)s_Ring_006359fc, .value = 0x00000000},
    {.name = (char *)s_Cursive_00635a01, .value = 0x00000001}
};

// SEnumPair[3]
SEnumPair g_DoorOneShotTypePairs[3] = {
    {.name = (char *)s_No_006214d9, .value = 0x00000000},
    {.name = (char *)s_Yes_006214dc, .value = 0x00000001},
    {.name = (char *)s_Done_006214e0, .value = 0x00000002}
};
SEnumPair g_LeverOpenFromSideTypePairs[3] = {
    {.name = (char *)s_Both_00631204, .value = 0x00000002},
    {.name = (char *)s_Pos_Z_only_00631209, .value = 0x00000000},
    {.name = (char *)s_Neg_Z_only_00631214, .value = 0x00000001}
};

// SEnumPair[4]
SEnumPair g_DoorTypePairs[4] = {
    {.name = (char *)s_Normal_00621366, .value = 0x00000000},
    {.name = (char *)s_Gate_0062136d, .value = 0x00000001},
    {.name = (char *)s_Elevator_00621372, .value = 0x00000002},
    {.name = (char *)s_Coffin_Lid_vertical_0062137b, .value = 0x00000003}
};
SEnumPair g_DoorOpenFromSideTypePairs[4] = {
    {.name = (char *)s_Both_00621504, .value = 0x00000003},
    {.name = (char *)s_Pos_Z_only_00621509, .value = 0x00000001},
    {.name = (char *)s_Neg_Z_only_00621514, .value = 0x00000002},
    {.name = (char *)s_Neither_cannot_manual_op_0062151f, .value = 0x00000000}
};
SEnumPair g_FlameTypePairs[4] = {
    {.name = (char *)s_Torch_0062a1d6, .value = 0x00000000},
    {.name = (char *)s_Candle_0062a1dc, .value = 0x00000001},
    {.name = (char *)s_Blue_flame_0062a1e3, .value = 0x00000002},
    {.name = (char *)s_No_flame_0062a1ee, .value = 0x00000003}
};

// SEnumPair[5]
SEnumPair g_MansionPuzzleSlewTypePairs[5] = {
    {.name = (char *)s_Normal_0063595b, .value = 0x00000000},
    {.name = (char *)s_Emitter_00635962, .value = 0x00000001},
    {.name = (char *)s_Gem_0063596a, .value = 0x00000002},
    {.name = (char *)s_Reflector_0_start_0063596e, .value = 0x00000003},
    {.name = (char *)s_Reflector_0_end_00635980, .value = 0x00000004}
};

// SEnumPair[9]
SEnumPair g_MeleeDamageTypePairs[9] = {
    {.name = (char *)s_Generic_00635d67, .value = 0x00000000},
    {.name = (char *)s_Holy_00635d6f, .value = 0x00000001},
    {.name = (char *)s_Wood_00635d74, .value = 0x00000002},
    {.name = (char *)s_Silver_00635d79, .value = 0x00000003},
    {.name = (char *)s_Gold_00635d80, .value = 0x00000004},
    {.name = (char *)s_Flaming_00635d85, .value = 0x00000005},
    {.name = (char *)s_Blanks_00635d8d, .value = 0x00000006},
    {.name = (char *)s_Lithium_00635d94, .value = 0x00000007},
    {.name = (char *)s_Mercury_00635d9c, .value = 0x00000008}
};

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
SMRGLTextureBasic SMRGLTextureBasic_0067b0c8 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "GLOW1.RAW"
};
SMRGLTextureBasic SMRGLTextureBasic_0067b514 = {
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
SMRGLTextureBasic g_BloodParticleTexture = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BGLOB.RAW"
};
SMRGLTextureBasic g_FootstepTexture = {
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
SMRGLTextureBasic SMRGLTextureBasic_0067d150 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "SPARK.RAW"
};

// SMRGLTextureBasic*
SMRGLTextureBasic* g_LightTexturesEnd = nullptr;
SMRGLTextureBasic* g_SkyDomeTexturePtr = (SMRGLTextureBasic*)&g_SkyDomeTextureData;

// SMRGLTextureBasic[116]
SMRGLTextureBasic g_BloodPoolAnimTextures[116] = {
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL1-01.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL1-02.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL1-03.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL1-04.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL1-05.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL1-06.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL1-07.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL1-08.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL1-09.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL1-10.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL1-11.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL1-12.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL1-13.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL1-14.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL1-15.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL1-16.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL1-17.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL1-18.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL1-19.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL1-20.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL1-21.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL1-22.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL1-23.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL1-24.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL1-25.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL1-26.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL1-27.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL1-28.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL1-29.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL2-01.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL2-02.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL2-03.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL2-04.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL2-05.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL2-06.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL2-07.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL2-08.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL2-09.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL2-10.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL2-11.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL2-12.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL2-13.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL2-14.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL2-15.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL2-16.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL2-17.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL2-18.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL2-19.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL2-20.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL2-21.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL2-22.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL2-23.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL2-24.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL2-25.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL2-26.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL2-27.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL2-28.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL2-29.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL3-01.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL3-02.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL3-03.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL3-04.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL3-05.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL3-06.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL3-07.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL3-08.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL3-09.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL3-10.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL3-11.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL3-12.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL3-13.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL3-14.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL3-15.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL3-16.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL3-17.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL3-18.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL3-19.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL3-20.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL3-21.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL3-22.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL3-23.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL3-24.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL3-25.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL3-26.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL3-27.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL3-28.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL3-29.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL4-01.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL4-02.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL4-03.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL4-04.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL4-05.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL4-06.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL4-07.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL4-08.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL4-09.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL4-10.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL4-11.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL4-12.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL4-13.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL4-14.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL4-15.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL4-16.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL4-17.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL4-18.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL4-19.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL4-20.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL4-21.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL4-22.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL4-23.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL4-24.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL4-25.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL4-26.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL4-27.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL4-28.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL4-29.RAW"
    }
};

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
SMRGLTextureBasic SMRGLTextureBasic_ARRAY_0067b100[40] = {
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
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "CAN0100.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "CAN0300.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "CAN0500.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "CAN0700.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "CAN0900.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "CAN1100.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "CAN1300.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "CAN1500.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BF0100.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BF0300.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BF0500.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BF0700.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BF0900.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BF1100.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BF1300.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BF1500.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BF0100.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BF0300.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BF0500.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BF0700.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BF0900.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BF1100.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BF1300.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BF1500.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BF0100.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BF0300.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BF0500.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BF0700.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BF0900.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BF1100.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BF1300.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BF1500.RAW"
    }
};

// SMRGLTextureBasic[4]
SMRGLTextureBasic g_BloodSplatTextures[4] = {
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BHSP1.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BHSP2.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BHSP3.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BHSP4.RAW"
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

// SMRGLTextureBasic[64]
SMRGLTextureBasic g_BloodSplatAnimTextures[64] = {
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP1-01.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP1-02.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP1-03.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP1-04.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP1-05.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP1-06.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP1-07.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP1-08.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP1-09.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP1-10.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP1-11.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP1-12.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP1-13.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP1-14.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP1-15.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP1-16.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP2-01.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP2-02.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP2-03.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP2-04.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP2-05.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP2-06.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP2-07.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP2-08.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP2-09.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP2-10.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP2-11.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP2-12.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP2-13.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP2-14.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP2-15.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP2-16.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP3-01.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP3-02.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP3-03.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP3-04.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP3-05.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP3-06.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP3-07.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP3-08.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP3-09.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP3-10.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP3-11.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP3-12.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP3-13.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP3-14.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP3-15.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP3-16.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP4-01.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP4-02.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP4-03.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP4-04.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP4-05.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP4-06.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP4-07.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP4-08.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP4-09.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP4-10.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP4-11.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP4-12.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP4-13.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP4-14.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP4-15.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP4-16.RAW"
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

// SMpegLayer3BandIndex[6]
SMpegLayer3BandIndex g_Layer3BandIndex[6] = {
    {
        .l = {0x00000000, 0x00000006, 0x0000000C, 0x00000012, 0x00000018, 0x0000001E, 0x00000024, 0x0000002C, 0x00000036, 0x00000042, 0x00000050, 0x00000060, 0x00000074, 0x0000008C, 0x000000A8, 0x000000C8, 0x000000EE, 0x0000011C, 0x00000150, 0x0000018C, 0x000001D0, 0x0000020A, 0x00000240},
        .s = {0x00000000, 0x00000004, 0x00000008, 0x0000000C, 0x00000012, 0x00000018, 0x00000020, 0x0000002A, 0x00000038, 0x0000004A, 0x00000064, 0x00000084, 0x000000AE, 0x000000C0}
    },
    {
        .l = {0x00000000, 0x00000006, 0x0000000C, 0x00000012, 0x00000018, 0x0000001E, 0x00000024, 0x0000002C, 0x00000036, 0x00000042, 0x00000050, 0x00000060, 0x00000072, 0x00000088, 0x000000A2, 0x000000C2, 0x000000E8, 0x00000116, 0x0000014A, 0x0000018A, 0x000001D0, 0x0000021C, 0x00000240},
        .s = {0x00000000, 0x00000004, 0x00000008, 0x0000000C, 0x00000012, 0x0000001A, 0x00000024, 0x00000030, 0x0000003E, 0x00000050, 0x00000068, 0x00000088, 0x000000B4, 0x000000C0}
    },
    {
        .l = {0x00000000, 0x00000006, 0x0000000C, 0x00000012, 0x00000018, 0x0000001E, 0x00000024, 0x0000002C, 0x00000036, 0x00000042, 0x00000050, 0x00000060, 0x00000074, 0x0000008C, 0x000000A8, 0x000000C8, 0x000000EE, 0x0000011C, 0x00000150, 0x0000018C, 0x000001D0, 0x0000020A, 0x00000240},
        .s = {0x00000000, 0x00000004, 0x00000008, 0x0000000C, 0x00000012, 0x0000001A, 0x00000024, 0x00000030, 0x0000003E, 0x00000050, 0x00000068, 0x00000086, 0x000000AE, 0x000000C0}
    },
    {
        .l = {0x00000000, 0x00000004, 0x00000008, 0x0000000C, 0x00000010, 0x00000014, 0x00000018, 0x0000001E, 0x00000024, 0x0000002C, 0x00000034, 0x0000003E, 0x0000004A, 0x0000005A, 0x0000006E, 0x00000086, 0x000000A2, 0x000000C4, 0x000000EE, 0x00000120, 0x00000156, 0x000001A2, 0x00000240},
        .s = {0x00000000, 0x00000004, 0x00000008, 0x0000000C, 0x00000010, 0x00000016, 0x0000001E, 0x00000028, 0x00000034, 0x00000042, 0x00000054, 0x0000006A, 0x00000088, 0x000000C0}
    },
    {
        .l = {0x00000000, 0x00000004, 0x00000008, 0x0000000C, 0x00000010, 0x00000014, 0x00000018, 0x0000001E, 0x00000024, 0x0000002A, 0x00000032, 0x0000003C, 0x00000048, 0x00000058, 0x0000006A, 0x00000080, 0x0000009C, 0x000000BE, 0x000000E6, 0x00000114, 0x0000014A, 0x00000180, 0x00000240},
        .s = {0x00000000, 0x00000004, 0x00000008, 0x0000000C, 0x00000010, 0x00000016, 0x0000001C, 0x00000026, 0x00000032, 0x00000040, 0x00000050, 0x00000064, 0x0000007E, 0x000000C0}
    },
    {
        .l = {0x00000000, 0x00000004, 0x00000008, 0x0000000C, 0x00000010, 0x00000014, 0x00000018, 0x0000001E, 0x00000024, 0x0000002C, 0x00000036, 0x00000042, 0x00000052, 0x00000066, 0x0000007E, 0x0000009C, 0x000000C2, 0x000000F0, 0x00000128, 0x0000016C, 0x000001C0, 0x00000226, 0x00000240},
        .s = {0x00000000, 0x00000004, 0x00000008, 0x0000000C, 0x00000010, 0x00000016, 0x0000001E, 0x0000002A, 0x0000003A, 0x0000004E, 0x00000068, 0x0000008A, 0x000000B4, 0x000000C0}
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
WatcomStaticDestructorNode WatcomStaticDestructorNode_006703a0 = {
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
WatcomStaticDestructorNode g_CDemonLightDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&WatcomDestructorCall_0065e990,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CDemonLightInstance
};
WatcomStaticDestructorNode g_CGameDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&WatcomDestructorCall_0065e99c,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CGameInstance
};
WatcomStaticDestructorNode g_CPickListDestructorNode = {
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
WatcomStaticDestructorNode WatcomStaticDestructorNode_0067b980 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&WatcomDestructorCall_0065f00c,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_BloodParticles
};
WatcomStaticDestructorNode WatcomStaticDestructorNode_0067b990 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&WatcomDestructorCall_0065f018,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_Footsteps
};
WatcomStaticDestructorNode g_CGroundDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&WatcomDestructorCall_0065f230,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CGroundInstance
};
WatcomStaticDestructorNode WatcomStaticDestructorNode_0067cd60 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&WatcomDestructorCall_006603c0,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_InvBackgroundBitmap
};
WatcomStaticDestructorNode WatcomStaticDestructorNode_0067cd70 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&WatcomDestructorCall_006603cc,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_InvBackground2Bitmap
};
WatcomStaticDestructorNode WatcomStaticDestructorNode_0067cd80 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&WatcomDestructorCall_006603d8,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_WeapBackgroundBitmap
};
WatcomStaticDestructorNode WatcomStaticDestructorNode_0067cd90 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&WatcomDestructorCall_006603e4,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_WeapBackground2Bitmap
};
WatcomStaticDestructorNode WatcomStaticDestructorNode_0067cda0 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&WatcomDestructorCall_006603f0,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_BatteryIconBitmap
};
WatcomStaticDestructorNode WatcomStaticDestructorNode_0067cdb0 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&WatcomDestructorCall_006603fc,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_HealthBar1Bitmap
};
WatcomStaticDestructorNode WatcomStaticDestructorNode_0067cdc0 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&WatcomDestructorCall_00660408,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_HealthBar2Bitmap
};
WatcomStaticDestructorNode WatcomStaticDestructorNode_0067cdd0 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&WatcomDestructorCall_00660414,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_TommyClipIconBitmap
};
WatcomStaticDestructorNode WatcomStaticDestructorNode_0067cde0 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&WatcomDestructorCall_00660420,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_BulletIconBitmap
};
WatcomStaticDestructorNode WatcomStaticDestructorNode_0067cdf0 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&WatcomDestructorCall_0066042c,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_LithiumIconBitmap
};
WatcomStaticDestructorNode WatcomStaticDestructorNode_0067ce00 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&WatcomDestructorCall_00660438,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_MercuryBulletIconBitmap
};
WatcomStaticDestructorNode WatcomStaticDestructorNode_0067ce10 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&WatcomDestructorCall_00660444,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_ShotShellIconBitmap
};
WatcomStaticDestructorNode WatcomStaticDestructorNode_0067ce20 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&WatcomDestructorCall_00660450,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_SilverBulletIconBitmap
};
WatcomStaticDestructorNode WatcomStaticDestructorNode_0067ce30 = {
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
WatcomStaticDestructorNode WatcomStaticDestructorNode_0067d224 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&WatcomDestructorCall_006612d0,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_MenuBitmaps
};
WatcomStaticDestructorNode WatcomStaticDestructorNode_0067d234 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&WatcomDestructorInfo_006612dc,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CMoonInstance
};
WatcomStaticDestructorNode WatcomStaticDestructorNode_0067d244 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&WatcomDestructorCall_006612e8,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_MenuBlurLeft
};
WatcomStaticDestructorNode WatcomStaticDestructorNode_0067d254 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&WatcomDestructorCall_006612f4,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_MenuBlurMiddle
};
WatcomStaticDestructorNode WatcomStaticDestructorNode_0067d264 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&WatcomDestructorCall_00661300,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_MenuBlurRight
};
WatcomStaticDestructorNode WatcomStaticDestructorNode_0067d274 = {
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
WatcomStaticDestructorNode WatcomStaticDestructorNode_0067d718 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&WatcomDestructorCall_00661ad0,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_MoonCloudTexture
};
WatcomStaticDestructorNode WatcomStaticDestructorNode_0067d728 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&WatcomDestructorCall_00661adc,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_MoonAnimTextures
};
WatcomStaticDestructorNode WatcomStaticDestructorNode_0067d738 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&WatcomDestructorCall_00661ae8,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_MoonBatCourses
};
WatcomStaticDestructorNode WatcomStaticDestructorNode_0067d748 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&WatcomDestructorCall_00661af4,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_MoonBatModel
};

// _MMX_INTEGER
_MMX_INTEGER g_FilterBlendConstant = {};
_MMX_INTEGER g_LightmapBlendBias1 = {};
_MMX_INTEGER g_LightmapBlendBias2 = {0x0008000800080008ULL};
_MMX_INTEGER g_AmbientLightMMX1 = {0x0004000400040004ULL};
_MMX_INTEGER g_AmbientLightMMX2 = {0x000C000C000C000CULL};
_MMX_INTEGER g_LightmapBlendBias5 = {};
_MMX_INTEGER g_LightmapBlendBias6 = {0x0040004000400040ULL};
_MMX_INTEGER g_LightmapBlendBias3 = {0x0020002000200020ULL};
_MMX_INTEGER g_LightmapBlendBias4 = {0x0060006000600060ULL};

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
int INT_0067b664 = 0x40;
int INT_0067b668 = 0x40;
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

// int[22]
int g_Layer3Pretab[22] = {
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000002,
    0x00000002, 0x00000003, 0x00000003, 0x00000003, 0x00000002, 0x00000000
};

// int[2][3][15]
int g_MpegBitrateTable[2][3][15] = {
    {{0x00000000, 0x00000020, 0x00000030, 0x00000038, 0x00000040, 0x00000050, 0x00000060, 0x00000070, 0x00000080, 0x00000090, 0x000000A0, 0x000000B0, 0x000000C0, 0x000000E0, 0x00000100}, {0x00000000, 0x00000008, 0x00000010, 0x00000018, 0x00000020, 0x00000028, 0x00000030, 0x00000038, 0x00000040, 0x00000050, 0x00000060, 0x00000070, 0x00000080, 0x00000090, 0x000000A0}, {0x00000000, 0x00000008, 0x00000010, 0x00000018, 0x00000020, 0x00000028, 0x00000030, 0x00000038, 0x00000040, 0x00000050, 0x00000060, 0x00000070, 0x00000080, 0x00000090, 0x000000A0}},
    {{0x00000000, 0x00000020, 0x00000040, 0x00000060, 0x00000080, 0x000000A0, 0x000000C0, 0x000000E0, 0x00000100, 0x00000120, 0x00000140, 0x00000160, 0x00000180, 0x000001A0, 0x000001C0}, {0x00000000, 0x00000020, 0x00000030, 0x00000038, 0x00000040, 0x00000050, 0x00000060, 0x00000070, 0x00000080, 0x000000A0, 0x000000C0, 0x000000E0, 0x00000100, 0x00000140, 0x00000180}, {0x00000000, 0x00000020, 0x00000028, 0x00000030, 0x00000038, 0x00000040, 0x00000050, 0x00000060, 0x00000070, 0x00000080, 0x000000A0, 0x000000C0, 0x000000E0, 0x00000100, 0x00000140}}
};

// int[3]
int g_TriangleMatchTableA[3] = {0x00000001, 0x00000002, 0x00000000};
int g_TriangleMatchTableB[3] = {0x00000002, 0x00000000, 0x00000001};
int g_Layer3ShortBandGroupCounts[3] = {0x00000000, 0x00000006, 0x0000000C};

// int[4][4]
int g_MpegLayer2AllocationTables[4][4] = {
    {0x2472656C, 0x00000024, 0x00000000, 0x00000000},
    {0x00000004, 0x00000008, 0x0000000C, 0x00000010},
    {0x00000004, 0x00000008, 0x0000000C, 0x00000010},
    {0x00000000, 0x00000004, 0x00000008, 0x00000010}
};

// int[5]
int g_Layer3LongBandGroupCounts[5] = {0x00000000, 0x00000006, 0x0000000B, 0x00000010, 0x00000015};

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
void* g_PerspectiveScanlineColorPtr = nullptr;
void* switchdataD_00679d10 = (void*)0x004B1A0C; // caseD_0
void* switchdataD_00679d54 = (void*)0x004B1A9B; // caseD_0

