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
WatcomStaticDestructorNode DAT_00610A05 = {};
WatcomStaticDestructorNode DAT_00610A15 = {};
WatcomStaticDestructorNode DAT_00610A25 = {};
WatcomStaticDestructorNode DAT_00610A35 = {};
WatcomStaticDestructorNode DAT_00610B4C = {};
WatcomStaticDestructorNode g_ConsoleDestructorNode = {};
WatcomStaticDestructorNode g_CLZWDecompressDestructorNode = {};
WatcomStaticDestructorNode DAT_006112E8 = {};
WatcomStaticDestructorNode DAT_006112F8 = {};
WatcomStaticDestructorNode g_CFilterCacheDestructorNode = {};
WatcomStaticDestructorNode g_CFilterFXDestructorNode = {};
WatcomStaticDestructorNode g_CKeyFramedModelPoolDestructorNode = {};
WatcomStaticDestructorNode g_CEditorToolsDestructorNode = {};
WatcomStaticDestructorNode g_CFireEffectStakesDestructorNode = {};
WatcomStaticDestructorNode g_CFireEffectSparksDestructorNode = {};
WatcomStaticDestructorNode DAT_0061BF80 = {};
WatcomStaticDestructorNode g_CFireEffectGlassParticlesDestructorNode = {};
WatcomStaticDestructorNode g_CFireEffectFireballsDestructorNode = {};
WatcomStaticDestructorNode g_CFireEffectRocksDestructorNode = {};
WatcomStaticDestructorNode DAT_0061BFC0 = {};
WatcomStaticDestructorNode g_CFireEffectTossesDestructorNodes = {};
WatcomStaticDestructorNode g_CFireEffectShellsDestructorNode = {};
WatcomStaticDestructorNode g_CFireEffectPopcornsDestructorNode = {};
WatcomStaticDestructorNode g_CFireEffectRainDropsDestructorNode = {};
WatcomStaticDestructorNode DAT_0061D1F0 = {};
WatcomStaticDestructorNode DAT_0061D200 = {};
WatcomStaticDestructorNode DAT_0061D210 = {};
WatcomStaticDestructorNode DAT_0061D220 = {};
WatcomStaticDestructorNode DAT_0061D230 = {};
WatcomStaticDestructorNode DAT_0061D240 = {};
WatcomStaticDestructorNode DAT_0061D250 = {};
WatcomStaticDestructorNode DAT_0061D260 = {};
WatcomStaticDestructorNode DAT_0061D270 = {};
WatcomStaticDestructorNode DAT_0061D280 = {};
WatcomStaticDestructorNode DAT_0061D290 = {};
WatcomStaticDestructorNode DAT_0061D2A0 = {};
WatcomStaticDestructorNode DAT_0061D2B0 = {};
WatcomStaticDestructorNode DAT_0061D2C0 = {};
WatcomStaticDestructorNode DAT_0061D2D0 = {};
WatcomStaticDestructorNode g_CDemonLightDestructorNode = {};
WatcomStaticDestructorNode g_CGameDestructorNode = {};
WatcomStaticDestructorNode g_CPickListDestructorNode = {};
WatcomStaticDestructorNode DAT_0061D8D0 = {};
WatcomStaticDestructorNode DAT_0061D8E0 = {};
WatcomStaticDestructorNode g_CGoreDestructorNode = {};
WatcomStaticDestructorNode DAT_0061DC94 = {};
WatcomStaticDestructorNode g_CGroundDestructorNode = {};
WatcomStaticDestructorNode DAT_0061F090 = {};
WatcomStaticDestructorNode DAT_0061F0A0 = {};
WatcomStaticDestructorNode DAT_0061F0B0 = {};
WatcomStaticDestructorNode DAT_0061F0C0 = {};
WatcomStaticDestructorNode DAT_0061F0D0 = {};
WatcomStaticDestructorNode DAT_0061F0E0 = {};
WatcomStaticDestructorNode DAT_0061F0F0 = {};
WatcomStaticDestructorNode DAT_0061F100 = {};
WatcomStaticDestructorNode DAT_0061F110 = {};
WatcomStaticDestructorNode DAT_0061F120 = {};
WatcomStaticDestructorNode DAT_0061F130 = {};
WatcomStaticDestructorNode DAT_0061F140 = {};
WatcomStaticDestructorNode DAT_0061F150 = {};
WatcomStaticDestructorNode DAT_0061F160 = {};
WatcomStaticDestructorNode DAT_0061F170 = {};
WatcomStaticDestructorNode DAT_0061F180 = {};
WatcomStaticDestructorNode DAT_0061F190 = {};
WatcomStaticDestructorNode g_LoadingMoonModelDestructorNode = {};
WatcomStaticDestructorNode DAT_0061F366 = {};
WatcomStaticDestructorNode DAT_0061F376 = {};
WatcomStaticDestructorNode DAT_0061F386 = {};
WatcomStaticDestructorNode DAT_0061F396 = {};
WatcomStaticDestructorNode DAT_0061F450 = {};
WatcomStaticDestructorNode DAT_0061F460 = {};
WatcomStaticDestructorNode DAT_0061F470 = {};
WatcomStaticDestructorNode DAT_0061F480 = {};
WatcomStaticDestructorNode DAT_0061F490 = {};
WatcomStaticDestructorNode DAT_0061F4A0 = {};
WatcomStaticDestructorNode DAT_0061F5C8 = {};
WatcomStaticDestructorNode DAT_0061F800 = {};
WatcomStaticDestructorNode DAT_0061F810 = {};
WatcomStaticDestructorNode DAT_0061F820 = {};

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

