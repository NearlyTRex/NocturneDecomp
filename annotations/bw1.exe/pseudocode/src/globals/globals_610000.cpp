#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x610000
// =============================================================================

// CConsole*
CConsole* g_CConsolePtr = (CConsole*)&g_CConsoleInstance;

// CDemonFilter*
CDemonFilter* g_GlobalFilters = (CDemonFilter*)&CDemonFilter_ARRAY_0152c39c;
CDemonFilter* g_PlayerFilters = (CDemonFilter*)&CDemonFilter_ARRAY_0152c39c;

// CEditorTools*
CEditorTools* g_CEditorToolsPtr = (CEditorTools*)&g_CEditorToolsInstance;

// CFieldNotes*
CFieldNotes* g_CFieldNotesPtr = (CFieldNotes*)&g_CFieldNotesInstance;

// CFilterCache*
CFilterCache* g_CFilterCachePtr = (CFilterCache*)&g_CFilterCacheInstance;

// CFilterFX*
CFilterFX* g_CFilterFXPtr = (CFilterFX*)&g_CFilterFXInstance;

// CGame*
CGame* g_CGamePtr = (CGame*)&g_CGameInstance;

// CGore*
CGore* g_CGorePtr = (CGore*)&g_CGoreInstance;

// CGround*
CGround* g_CGroundPtr = (CGround*)&g_CGroundInstance;

// CMini3D*
CMini3D* g_CMini3DPtr = (CMini3D*)&g_CMini3DInstance;

// WatcomStaticDestructorNode
WatcomStaticDestructorNode DAT_00610A05 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005FC8F0,
    .registration_type = 0x00000001,
    .object_instance = (void *)&CAlphaBitmap_ARRAY_007c3984
};
WatcomStaticDestructorNode DAT_00610A15 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005FC8FC,
    .registration_type = 0x00000001,
    .object_instance = (void *)&CAlphaBitmap_ARRAY_007c39d4
};
WatcomStaticDestructorNode DAT_00610A25 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005FC908,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CAudioRecPuzzleInstance
};
WatcomStaticDestructorNode DAT_00610A35 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005FC914,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CChemPuzzleInstance
};
WatcomStaticDestructorNode DAT_00610B4C = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005FCE20,
    .registration_type = 0x00000001,
    .object_instance = (void *)&CDemonFilter_ARRAY_007c5098
};
WatcomStaticDestructorNode g_ConsoleDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_CConsoleDestructorCall,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CConsoleInstance
};
WatcomStaticDestructorNode g_CLZWDecompressDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005FE5F0,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CLZWDecompressInstance
};
WatcomStaticDestructorNode DAT_006112E8 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005FE950,
    .registration_type = 0x00000001,
    .object_instance = (void *)&CDemonFilter_ARRAY_0152c39c
};
WatcomStaticDestructorNode DAT_006112F8 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005FE95C,
    .registration_type = 0x00000001,
    .object_instance = (void *)&CDemonFilter_ARRAY_0152c5fc
};
WatcomStaticDestructorNode g_CFilterCacheDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005FE968,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CFilterCacheInstance
};
WatcomStaticDestructorNode g_CFilterFXDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005FE974,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CFilterFXInstance
};
WatcomStaticDestructorNode g_CKeyFramedModelPoolDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005FEC30,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CKeyFramedModelPool
};
WatcomStaticDestructorNode g_CEditorToolsDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005FF7E0,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CEditorToolsInstance
};
WatcomStaticDestructorNode g_CFireEffectStakesDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005FFF10,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_StakePool
};
WatcomStaticDestructorNode g_CFireEffectSparksDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005FFF1C,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_SparkPool
};
WatcomStaticDestructorNode DAT_0061BF80 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005FFF28,
    .registration_type = 0x00000001,
    .object_instance = (void *)&CFirefly_ARRAY_01c9dab8
};
WatcomStaticDestructorNode g_CFireEffectGlassParticlesDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005FFF34,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_GlassParticlePool
};
WatcomStaticDestructorNode g_CFireEffectFireballsDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005FFF40,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_FireballPool
};
WatcomStaticDestructorNode g_CFireEffectRocksDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005FFF4C,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_RockPool
};
WatcomStaticDestructorNode DAT_0061BFC0 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005FFF58,
    .registration_type = 0x00000001,
    .object_instance = (void *)&CLeaf_ARRAY_01cadb68
};
WatcomStaticDestructorNode g_CFireEffectTossesDestructorNodes = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005FFF64,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_TossPool
};
WatcomStaticDestructorNode g_CFireEffectShellsDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005FFF70,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_ShellPool
};
WatcomStaticDestructorNode g_CFireEffectPopcornsDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005FFF7C,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_PopcornPool
};
WatcomStaticDestructorNode g_CFireEffectRainDropsDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005FFF88,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_RainDropPool
};
WatcomStaticDestructorNode DAT_0061D1F0 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x00600850,
    .registration_type = 0x00000001,
    .object_instance = (void *)&SNotesSection_ARRAY_01cc4474
};
WatcomStaticDestructorNode DAT_0061D200 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x0060085C,
    .registration_type = 0x00000001,
    .object_instance = (void *)&SNotesMap_ARRAY_01cc55d0
};
WatcomStaticDestructorNode DAT_0061D210 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x00600868,
    .registration_type = 0x00000001,
    .object_instance = (void *)&CAlphaBitmap_01cc7b94
};
WatcomStaticDestructorNode DAT_0061D220 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x00600874,
    .registration_type = 0x00000001,
    .object_instance = (void *)&CAlphaBitmap_ARRAY_01cc7ba8
};
WatcomStaticDestructorNode DAT_0061D230 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x00600880,
    .registration_type = 0x00000001,
    .object_instance = (void *)&CAlphaBitmap_01cc7c20
};
WatcomStaticDestructorNode DAT_0061D240 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x0060088C,
    .registration_type = 0x00000001,
    .object_instance = (void *)&CAlphaBitmap_01cc7c34
};
WatcomStaticDestructorNode DAT_0061D250 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x00600898,
    .registration_type = 0x00000001,
    .object_instance = (void *)&CAlphaBitmap_01cc7c48
};
WatcomStaticDestructorNode DAT_0061D260 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x006008A4,
    .registration_type = 0x00000001,
    .object_instance = (void *)&CAlphaBitmap_01cc7c5c
};
WatcomStaticDestructorNode DAT_0061D270 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x006008B0,
    .registration_type = 0x00000001,
    .object_instance = (void *)&CAlphaBitmap_01cc7c70
};
WatcomStaticDestructorNode DAT_0061D280 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x006008BC,
    .registration_type = 0x00000001,
    .object_instance = (void *)&CAlphaBitmap_01cc7c84
};
WatcomStaticDestructorNode DAT_0061D290 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x006008C8,
    .registration_type = 0x00000001,
    .object_instance = (void *)&CAlphaBitmap_01cc7c98
};
WatcomStaticDestructorNode DAT_0061D2A0 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x006008D4,
    .registration_type = 0x00000001,
    .object_instance = (void *)&CAlphaBitmap_01cc7cac
};
WatcomStaticDestructorNode DAT_0061D2B0 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x006008E0,
    .registration_type = 0x00000001,
    .object_instance = (void *)&CAlphaBitmap_01cc7cc0
};
WatcomStaticDestructorNode DAT_0061D2C0 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x006008EC,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_STextViewInstance
};
WatcomStaticDestructorNode DAT_0061D2D0 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x006008F8,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CFieldNotesInstance
};
WatcomStaticDestructorNode g_CDemonLightDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x00600F30,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CDemonLightInstance
};
WatcomStaticDestructorNode g_CGameDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x00600F3C,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CGameInstance
};
WatcomStaticDestructorNode g_CPickListDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x00600F48,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CPickList
};
WatcomStaticDestructorNode DAT_0061D8D0 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x00600F54,
    .registration_type = 0x00000001,
    .object_instance = (void *)&CDemonFilter_01cd0af0
};
WatcomStaticDestructorNode DAT_0061D8E0 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x00600F60,
    .registration_type = 0x00000001,
    .object_instance = (void *)&CAlphaBitmap_ARRAY_01cd0b44
};
WatcomStaticDestructorNode g_CGoreDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x00601690,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CGoreInstance
};
WatcomStaticDestructorNode DAT_0061DC94 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x0060169C,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_BloodParticles
};
WatcomStaticDestructorNode g_CGroundDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x006018B0,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CGroundInstance
};
WatcomStaticDestructorNode DAT_0061F090 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x006029B0,
    .registration_type = 0x00000001,
    .object_instance = (void *)&CAlphaBitmap_01d08d78
};
WatcomStaticDestructorNode DAT_0061F0A0 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x006029BC,
    .registration_type = 0x00000001,
    .object_instance = (void *)&CAlphaBitmap_01d08d8c
};
WatcomStaticDestructorNode DAT_0061F0B0 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x006029C8,
    .registration_type = 0x00000001,
    .object_instance = (void *)&CAlphaBitmap_01d08da0
};
WatcomStaticDestructorNode DAT_0061F0C0 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x006029D4,
    .registration_type = 0x00000001,
    .object_instance = (void *)&CAlphaBitmap_01d08db4
};
WatcomStaticDestructorNode DAT_0061F0D0 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x006029E0,
    .registration_type = 0x00000001,
    .object_instance = (void *)&CAlphaBitmap_01d1b9d0
};
WatcomStaticDestructorNode DAT_0061F0E0 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x006029EC,
    .registration_type = 0x00000001,
    .object_instance = (void *)&CAlphaBitmap_01d1b9e4
};
WatcomStaticDestructorNode DAT_0061F0F0 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x006029F8,
    .registration_type = 0x00000001,
    .object_instance = (void *)&CAlphaBitmap_01d1b9f8
};
WatcomStaticDestructorNode DAT_0061F100 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x00602A04,
    .registration_type = 0x00000001,
    .object_instance = (void *)&CAlphaBitmap_01d1ba0c
};
WatcomStaticDestructorNode DAT_0061F110 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x00602A10,
    .registration_type = 0x00000001,
    .object_instance = (void *)&CAlphaBitmap_01d1ba20
};
WatcomStaticDestructorNode DAT_0061F120 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x00602A1C,
    .registration_type = 0x00000001,
    .object_instance = (void *)&CAlphaBitmap_01d1ba34
};
WatcomStaticDestructorNode DAT_0061F130 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x00602A28,
    .registration_type = 0x00000001,
    .object_instance = (void *)&CAlphaBitmap_01d1ba48
};
WatcomStaticDestructorNode DAT_0061F140 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x00602A34,
    .registration_type = 0x00000001,
    .object_instance = (void *)&CAlphaBitmap_01d1ba5c
};
WatcomStaticDestructorNode DAT_0061F150 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x00602A40,
    .registration_type = 0x00000001,
    .object_instance = (void *)&CAlphaBitmap_01d1ba70
};
WatcomStaticDestructorNode DAT_0061F160 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x00602A4C,
    .registration_type = 0x00000001,
    .object_instance = (void *)&CAlphaBitmap_01d1ba84
};
WatcomStaticDestructorNode DAT_0061F170 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x00602A58,
    .registration_type = 0x00000001,
    .object_instance = (void *)&CAlphaBitmap_01d1ba98
};
WatcomStaticDestructorNode DAT_0061F180 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x00602A64,
    .registration_type = 0x00000001,
    .object_instance = (void *)&CAlphaBitmap_01d1baf4
};
WatcomStaticDestructorNode DAT_0061F190 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x00602A70,
    .registration_type = 0x00000001,
    .object_instance = (void *)&CAlphaBitmap_ARRAY_01d1bb08
};
WatcomStaticDestructorNode g_LoadingMoonModelDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x00602EA0,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_LoadingMoonModel
};
WatcomStaticDestructorNode DAT_0061F366 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x006033D0,
    .registration_type = 0x00000001,
    .object_instance = (void *)&CAlphaBitmap_01d1d40c
};
WatcomStaticDestructorNode DAT_0061F376 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x006033DC,
    .registration_type = 0x00000001,
    .object_instance = (void *)&CAlphaBitmap_01d1d420
};
WatcomStaticDestructorNode DAT_0061F386 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x006033E8,
    .registration_type = 0x00000001,
    .object_instance = (void *)&CAlphaBitmap_01d1d434
};
WatcomStaticDestructorNode DAT_0061F396 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x006033F4,
    .registration_type = 0x00000001,
    .object_instance = (void *)&CAlphaBitmap_01d1d448
};
WatcomStaticDestructorNode DAT_0061F450 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x00603910,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_MenuBitmaps
};
WatcomStaticDestructorNode DAT_0061F460 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x0060391C,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CMoonInstance
};
WatcomStaticDestructorNode DAT_0061F470 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x00603928,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_MenuBlurLeft
};
WatcomStaticDestructorNode DAT_0061F480 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x00603934,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_MenuBlurMiddle
};
WatcomStaticDestructorNode DAT_0061F490 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x00603940,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_MenuBlurRight
};
WatcomStaticDestructorNode DAT_0061F4A0 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x0060394C,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CalibrationBitmap
};
WatcomStaticDestructorNode DAT_0061F5C8 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x00603C70,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CMini3DInstance
};
WatcomStaticDestructorNode DAT_0061F800 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x00604220,
    .registration_type = 0x00000001,
    .object_instance = (void *)&CAlphaBitmap_01d33ce4
};
WatcomStaticDestructorNode DAT_0061F810 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x0060422C,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_MoonAnimTextures
};
WatcomStaticDestructorNode DAT_0061F820 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x00604238,
    .registration_type = 0x00000001,
    .object_instance = (void *)&CAlphaBitmap_01d33f50
};

// int
int g_CDemonActorClassVersion = 0x7;
int g_CAmmoClassVersion = 0x1;
int g_CAmmoBoxClassVersion = 0x4;
int g_CAnvilClassVersion = 0x1;
int g_CArmourClassVersion = 0x1;
int g_CBackgroundActorClassVersion = 0x3;
int g_CBaronClassVersion = 0x2;
int g_CBarrierClassVersion = 0x2;
int g_CBatClassVersion = 0x4;
int g_CBatCreatureClassVersion = 0x1;
int g_CBatmanClassVersion = 0x3;
int g_CBatteryClassVersion = 0x1;
int g_CBeastClassVersion = 0x1;
int g_CBiggsClassVersion = 0x1;
int g_CBirdClassVersion = 0x1;
int g_CBodyPartClassVersion = 0x6;
int g_CBoneGuyClassVersion = 0x5;
int g_CBoxActorClassVersion = 0x10;
int g_CBrideClassVersion = 0x4;
int g_CBugsClassVersion = 0x1;
int g_CCarvedClassVersion = 0x1;
int g_CCharacterClassVersion = 0xB;
int g_CChainClassVersion = 0x4;
int g_CColonelClassVersion = 0x1;
int g_CConstructClassVersion = 0x3;
int g_CConveyorClassVersion = 0x2;
int g_CZombieCowClassVersion = 0x2;
int g_CCrateClassVersion = 0x2;
int g_CCrossbowClassVersion = 0x1;
int g_CCurtainClassVersion = 0x6;
int g_CDemnfolkClassVersion = 0xC;
int g_CActorDestinationClassVersion = 0x4;
int g_CDjienClassVersion = 0x2;
int g_CDocClassVersion = 0x9;
int g_CZombieDogClassVersion = 0x2;
int g_CDoorClassVersion = 0xD;
int g_CDraculaBrideClassVersion = 0x9;
int g_CDripClassVersion = 0x6;
int g_CDroneClassVersion = 0x2;
int g_CDynamiteClassVersion = 0x1;
int g_CElephantGunClassVersion = 0x1;
int g_CEmitterClassVersion = 0xE;
int g_CEnemyClassVersion = 0xA;
int g_CFilmReelClassVersion = 0x2;
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
int g_CGogglesClassVersion = 0x1;
int g_CGraveClassVersion = 0x4;
int g_CGunClassVersion = 0x1;
int g_CHaystackClassVersion = 0x1;
int g_CHealthItemClassVersion = 0x3;
int g_CHeroClassVersion = 0xD;
int g_CHiramClassVersion = 0x1;
int g_CHostageClassVersion = 0xC;
int g_CHotDemonClassVersion = 0x1;
int g_CHighPriestOfGardathClassVersion = 0x1;
int g_CIcePickClassVersion = 0x1;
int g_CImpClassVersion = 0x1;
int g_CKeyActorClassVersion = 0x3;
int g_CLadderClassVersion = 0x2;
int g_CLarvaClassVersion = 0x2;
int g_CLeverClassVersion = 0x8;
int g_CLightGunClassVersion = 0x1;
int g_CLightPisClassVersion = 0x1;
int g_CLightConeClassVersion = 0x2;
int g_CMansionPuzzleCircleClassVersion = 0x3;
int g_CMarqueeClassVersion = 0x1;
int g_CMeleeClassVersion = 0x7;
int g_CMimicClassVersion = 0x3;
int g_CMineCarClassVersion = 0x1;
int g_CMobsterClassVersion = 0x7;
int g_CMolochClassVersion = 0x1;
int g_CMooCowClassVersion = 0x1;

// undefined1
undefined1 DAT_006106bf = 0x00;
undefined1 DAT_006106c0 = 0x00;
undefined1 DAT_006106c1 = 0x00;
undefined1 DAT_0061f7b8 = 0x00;
undefined1 DAT_0061f7bc = 0x00;
undefined1 DAT_0061f7c1 = 0x00;

// undefined2
undefined2 DAT_0061cb74 = 0x0000;

// undefined4
undefined4 DAT_0061049c = 0x00000001;
undefined4 DAT_006104a0 = 0x000000F8;
undefined4 DAT_006104f0 = 0x00FFFFFF;
undefined4 DAT_00610728 = 0x00000000;
undefined4 DAT_0061072c = 0x00000000;
undefined4 DAT_00610d44 = 0x7FFFFFFF;
undefined4 DAT_00611224 = 0x00010000;
undefined4 DAT_00611228 = 0x00C80000;
undefined4 DAT_0061122c = 0x00000003;
undefined4 DAT_00611230 = 0x00000040;
undefined4 DAT_00611234 = 0x00000040;
undefined4 DAT_00611238 = 0x00000040;
undefined4 DAT_0061123c = 0x00000000;
undefined4 DAT_006113a0 = 0x00000000;
undefined4 DAT_006113a8 = 0x00000000;
undefined4 DAT_006116a4 = 0x00000000;
undefined4 DAT_006116a8 = 0x00000000;
undefined4 DAT_006116c8 = 0x00000000;
undefined4 DAT_00612560 = 0x01BC120C;
undefined4 DAT_00612564 = 0x00000001;
undefined4 DAT_00614518 = 0x00000000;
undefined4 DAT_0061451c = 0x00000000;
undefined4 DAT_00614524 = 0x00000000;
undefined4 DAT_00614540 = 0x00000000;
undefined4 DAT_00614544 = 0x00000000;
undefined4 DAT_00614548 = 0x00000000;
undefined4 DAT_00619b60 = 0x00000000;
undefined4 DAT_0061abc4 = 0x00000009;
undefined4 DAT_0061abc8 = 0x00000009;
undefined4 DAT_0061aee8 = 0x00000000;
undefined4 DAT_0061aeec = 0x00000000;
undefined4 DAT_0061b0e8 = 0x00000000;
undefined4 DAT_0061b0ec = 0x00000000;
undefined4 DAT_0061b2e8 = 0x00000000;
undefined4 DAT_0061b2ec = 0x00000000;
undefined4 DAT_0061b498 = 0x00000140;
undefined4 DAT_0061b49c = 0x000000C8;
undefined4 DAT_0061b4a0 = 0x00000008;
undefined4 DAT_0061b4a8 = 0x00000100;
undefined4 DAT_0061b4ac = 0x0000007F;
undefined4 DAT_0061b4b8 = 0x000000FF;
undefined4 DAT_0061b4c0 = 0x00000001;
undefined4 DAT_0061b4c4 = 0x00010000;
undefined4 DAT_0061b4d4 = 0x00000000;
undefined4 DAT_0061b514 = 0x00000000;
undefined4 DAT_0061b518 = 0x00000000;
undefined4 DAT_0061b51c = 0x00000000;
undefined4 DAT_0061b568 = 0x00000000;
undefined4 DAT_0061b56c = 0x00000000;
undefined4 DAT_0061b630 = 0x00000000;
undefined4 DAT_0061b634 = 0x00000000;
undefined4 DAT_0061cb70 = 0x00000000;
undefined4 DAT_0061d2e0 = 0x00000001;
undefined4 DAT_0061d2e4 = 0x00000001;
undefined4 DAT_0061d310 = 0xFFFFFFFF;
undefined4 DAT_0061d420 = 0x00000000;
undefined4 DAT_0061d424 = 0x00000000;
undefined4 DAT_0061f1a8 = 0x00000000;
undefined4 DAT_0061f1ac = 0x00000000;
undefined4 DAT_0061f210 = 0x00000000;
undefined4 DAT_0061f214 = 0x00000000;
undefined4 DAT_0061f310 = 0x00008000;
undefined4 DAT_0061f314 = 0x00000001;
undefined4 DAT_0061f318 = 0x00010000;
undefined4 DAT_0061f31c = 0x00010000;
undefined4 DAT_0061f6c0 = 0x00000000;
undefined4 DAT_0061f6c4 = 0x00000000;
undefined4 DAT_0061f728 = 0x00000000;
undefined4 DAT_0061f72c = 0x00000000;
undefined4 DAT_0061f7bd = 0x00000000;
undefined4 DAT_0061f8ac = 0x00000001;
undefined4 DAT_0061f8b0 = 0x00000001;
undefined4 DAT_0061f8b4 = 0x00000001;

// undefined8
undefined8 DAT_006185a8 = 0x0000000000000000;
undefined8 DAT_006185e8 = 0x0000000000000000;
undefined8 DAT_00618608 = 0x0000000000000000;

// void*
void* switchdataD_0061bea0 = (void*)0x004AB05C; // caseD_0
void* switchdataD_0061bee4 = (void*)0x004AB0EB; // caseD_0

