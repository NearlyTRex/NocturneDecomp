#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x5F0000
// =============================================================================

// CConsole*
CConsole* g_CConsolePtr = (CConsole*)&g_CConsoleInstance;

// CDemonFilter*
CDemonFilter* g_GlobalFilters = (CDemonFilter*)&CDemonFilter_ARRAY_01548c00;
CDemonFilter* g_PlayerFilters = (CDemonFilter*)&CDemonFilter_ARRAY_01548c00;

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

// WatcomStaticDestructorNode
WatcomStaticDestructorNode DAT_005F0C67 = {};
WatcomStaticDestructorNode DAT_005F0C77 = {};
WatcomStaticDestructorNode DAT_005F0C87 = {};
WatcomStaticDestructorNode DAT_005F0C97 = {};
WatcomStaticDestructorNode DAT_005F0E28 = {};
WatcomStaticDestructorNode g_ConsoleDestructorNode = {};
WatcomStaticDestructorNode g_CLZWDecompressDestructorNode = {};
WatcomStaticDestructorNode DAT_005F189C = {};
WatcomStaticDestructorNode DAT_005F18AC = {};
WatcomStaticDestructorNode g_CFilterCacheDestructorNode = {};
WatcomStaticDestructorNode g_CFilterFXDestructorNode = {};
WatcomStaticDestructorNode g_CKeyFramedModelPoolDestructorNode = {};
WatcomStaticDestructorNode g_CEditorToolsDestructorNode = {};
WatcomStaticDestructorNode g_CFireEffectStakesDestructorNode = {};
WatcomStaticDestructorNode g_CFireEffectSparksDestructorNode = {};
WatcomStaticDestructorNode DAT_005FC510 = {};
WatcomStaticDestructorNode DAT_005FC520 = {};
WatcomStaticDestructorNode g_CFireEffectFireballsDestructorNode = {};
WatcomStaticDestructorNode g_CFireEffectRocksDestructorNode = {};
WatcomStaticDestructorNode DAT_005FC550 = {};
WatcomStaticDestructorNode g_CFireEffectTossesDestructorNodes = {};
WatcomStaticDestructorNode g_CFireEffectShellsDestructorNode = {};
WatcomStaticDestructorNode g_CFireEffectPopcornsDestructorNode = {};
WatcomStaticDestructorNode g_CFireEffectRainDropsDestructorNode = {};
WatcomStaticDestructorNode DAT_005FE280 = {};
WatcomStaticDestructorNode DAT_005FE290 = {};
WatcomStaticDestructorNode DAT_005FE2A0 = {};
WatcomStaticDestructorNode DAT_005FE2B0 = {};
WatcomStaticDestructorNode DAT_005FE2C0 = {};
WatcomStaticDestructorNode DAT_005FE2D0 = {};
WatcomStaticDestructorNode DAT_005FE2E0 = {};
WatcomStaticDestructorNode DAT_005FE2F0 = {};
WatcomStaticDestructorNode DAT_005FE300 = {};
WatcomStaticDestructorNode DAT_005FE310 = {};
WatcomStaticDestructorNode DAT_005FE320 = {};
WatcomStaticDestructorNode DAT_005FE330 = {};
WatcomStaticDestructorNode DAT_005FE340 = {};
WatcomStaticDestructorNode DAT_005FE350 = {};
WatcomStaticDestructorNode DAT_005FE360 = {};
WatcomStaticDestructorNode g_CDemonLightDestructorNode = {};
WatcomStaticDestructorNode g_CGameDestructorNode = {};
WatcomStaticDestructorNode g_CPickListDestructorNode = {};
WatcomStaticDestructorNode DAT_005FE950 = {};
WatcomStaticDestructorNode DAT_005FE960 = {};
WatcomStaticDestructorNode g_CGoreDestructorNode = {};
WatcomStaticDestructorNode DAT_005FED14 = {};
WatcomStaticDestructorNode g_CGroundDestructorNode = {};

// int
int g_CDemonActorClassVersion = 0x7;
int g_CAmmoClassVersion = 0x1;
int g_CAmmoBoxClassVersion = 0x4;
int g_CBarrierClassVersion = 0x2;
int g_CBatClassVersion = 0x4;
int g_CBatteryClassVersion = 0x1;
int g_CBindEvilClassVersion = 0x1;
int g_CBirdClassVersion = 0x1;
int g_CBlunderbusClassVersion = 0x1;
int g_CBodyPartClassVersion = 0x6;
int g_CBoneGuyClassVersion = 0x5;
int g_CBoxActorClassVersion = 0x12;
int g_CBugsClassVersion = 0x2;
int g_CBurncrossClassVersion = 0x1;
int g_CCarvedClassVersion = 0x1;
int g_CChainClassVersion = 0x4;
int g_CCharacterClassVersion = 0xE;
int g_CConstructClassVersion = 0x3;
int g_CZombieCowClassVersion = 0x2;
int g_CCrateClassVersion = 0x2;
int g_CCurtainClassVersion = 0x6;
int g_CDemnfolkClassVersion = 0xC;
int g_CActorDestinationClassVersion = 0x4;
int g_CDiseaseClassVersion = 0x1;
int g_CZombieDogClassVersion = 0x2;
int g_CDoorClassVersion = 0xD;
int g_CDripClassVersion = 0x6;
int g_CDynamiteClassVersion = 0x1;
int g_CElephantGunClassVersion = 0x1;
int g_CEmitterClassVersion = 0xE;
int g_CEnemyClassVersion = 0xE;
int g_CExorcismClassVersion = 0x1;
int g_CFilmReelClassVersion = 0x2;
int g_CFirestaffClassVersion = 0x1;
int g_CFlameClassVersion = 0x7;
int g_CFlameCanClassVersion = 0x1;
int g_CFlashlightClassVersion = 0x1;
int g_CFliesClassVersion = 0x3;
int g_CFlintlockClassVersion = 0x2;
int g_CGargoyleClassVersion = 0x2;
int g_CGasMaskClassVersion = 0x1;
int g_CGhoulClassVersion = 0x7;
int g_CGlassClassVersion = 0x6;
int g_CGogglesClassVersion = 0x1;
int g_CGraveClassVersion = 0x4;
int g_CGunClassVersion = 0x1;
int g_CHealClassVersion = 0x1;
int g_CHealthItemClassVersion = 0x4;
int g_CHeroClassVersion = 0xF;

// undefined1
undefined1 DAT_005f098f = 0x00;
undefined1 DAT_005f0990 = 0x00;
undefined1 DAT_005f0991 = 0x00;

// undefined2
undefined2 DAT_005fdbfc = 0x0000;

// undefined4
undefined4 DAT_005f076c = 0x00000001;
undefined4 DAT_005f0770 = 0x000000F8;
undefined4 DAT_005f07c0 = 0x00FFFFFF;
undefined4 DAT_005f09f8 = 0x00000000;
undefined4 DAT_005f09fc = 0x00000000;
undefined4 DAT_005f12f4 = 0x7FFFFFFF;
undefined4 DAT_005f17d8 = 0x00010000;
undefined4 DAT_005f17dc = 0x00C80000;
undefined4 DAT_005f17e0 = 0x00000003;
undefined4 DAT_005f17e4 = 0x00000040;
undefined4 DAT_005f17e8 = 0x00000040;
undefined4 DAT_005f17ec = 0x00000040;
undefined4 DAT_005f17f0 = 0x00000000;
undefined4 DAT_005f1954 = 0x00000000;
undefined4 DAT_005f195c = 0x00000000;
undefined4 DAT_005f1c58 = 0x00000000;
undefined4 DAT_005f1c5c = 0x00000000;
undefined4 DAT_005f1c7c = 0x00000000;
undefined4 DAT_005f2afc = 0x01BDD7E4;
undefined4 DAT_005f2b00 = 0x00000001;
undefined4 DAT_005f4a98 = 0x00000000;
undefined4 DAT_005f4a9c = 0x00000000;
undefined4 DAT_005f4aa4 = 0x00000000;
undefined4 DAT_005f4ac0 = 0x00000000;
undefined4 DAT_005f4ac4 = 0x00000000;
undefined4 DAT_005f4ac8 = 0x00000000;
undefined4 DAT_005fa0e0 = 0x00000000;
undefined4 DAT_005fb144 = 0x00000009;
undefined4 DAT_005fb148 = 0x00000009;
undefined4 DAT_005fb468 = 0x00000000;
undefined4 DAT_005fb46c = 0x00000000;
undefined4 DAT_005fb668 = 0x00000000;
undefined4 DAT_005fb66c = 0x00000000;
undefined4 DAT_005fb868 = 0x00000000;
undefined4 DAT_005fb86c = 0x00000000;
undefined4 DAT_005fba18 = 0x00000140;
undefined4 DAT_005fba1c = 0x000000C8;
undefined4 DAT_005fba20 = 0x00000008;
undefined4 DAT_005fba28 = 0x00000100;
undefined4 DAT_005fba2c = 0x0000007F;
undefined4 DAT_005fba38 = 0x000000FF;
undefined4 DAT_005fba40 = 0x00000001;
undefined4 DAT_005fba44 = 0x00010000;
undefined4 DAT_005fba64 = 0x00000000;
undefined4 DAT_005fbaa4 = 0x00000000;
undefined4 DAT_005fbaa8 = 0x00000000;
undefined4 DAT_005fbaac = 0x00000000;
undefined4 DAT_005fbaf8 = 0x00000000;
undefined4 DAT_005fbafc = 0x00000000;
undefined4 DAT_005fbbc0 = 0x00000000;
undefined4 DAT_005fbbc4 = 0x00000000;
undefined4 DAT_005fdbf8 = 0x00000000;
undefined4 DAT_005fe370 = 0x00000001;
undefined4 DAT_005fe374 = 0x00000001;
undefined4 DAT_005fe3a8 = 0xFFFFFFFF;
undefined4 DAT_005fe4b8 = 0x00000000;
undefined4 DAT_005fe4bc = 0x00000000;

// undefined8
undefined8 DAT_005f8b28 = 0x0000000000000000;
undefined8 DAT_005f8b68 = 0x0000000000000000;
undefined8 DAT_005f8b88 = 0x0000000000000000;

// void*
void* switchdataD_005fc430 = (void*)0x00495EFC; // caseD_0
void* switchdataD_005fc474 = (void*)0x00495F8B; // caseD_0

