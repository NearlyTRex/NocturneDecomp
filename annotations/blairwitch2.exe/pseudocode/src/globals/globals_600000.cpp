#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x600000
// =============================================================================

// CConsole*
CConsole* g_CConsolePtr = (CConsole*)&g_CConsoleInstance;

// CDemonFilter*
CDemonFilter* g_GlobalFilters = (CDemonFilter*)&CDemonFilter_ARRAY_01510e18;
CDemonFilter* g_PlayerFilters = (CDemonFilter*)&CDemonFilter_ARRAY_01510e18;

// CFilterCache*
CFilterCache* g_CFilterCachePtr = (CFilterCache*)&g_CFilterCacheInstance;

// CFilterFX*
CFilterFX* g_CFilterFXPtr = (CFilterFX*)&g_CFilterFXInstance;

// WatcomDestructorCall
WatcomDestructorCall DAT_006002B0 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)unkclass_simppart_cpp_CSimpleParticleSystem_dtor_FUN_005a8000,
    .object_instance = (void *)&g_CSimpleParticleSystemInstance
};

// WatcomStaticDestructorNode
WatcomStaticDestructorNode DAT_0060994C = {};
WatcomStaticDestructorNode g_ConsoleDestructorNode = {};
WatcomStaticDestructorNode g_CLZWDecompressDestructorNode = {};
WatcomStaticDestructorNode DAT_0060A044 = {};
WatcomStaticDestructorNode DAT_0060A054 = {};
WatcomStaticDestructorNode g_CFilterCacheDestructorNode = {};
WatcomStaticDestructorNode g_CFilterFXDestructorNode = {};
WatcomStaticDestructorNode g_CKeyFramedModelPoolDestructorNode = {};

// WatcomTypeInfo
WatcomTypeInfo g_CCrossTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)unkafter_cross_cpp_CCross_ctor_FUN_005a69f0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)unkafter_cross_cpp_CCross_dtor_FUN_005a6b30,
    .instance_size = (int)sizeof(CCross),
    .class_name = (char *)s_CCross_0061ebcc
};
WatcomTypeInfo g_CSimpleCrossTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)unkafter_cross_cpp_CSimpleCross_ctor_FUN_005a7980,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)unkafter_cross_cpp_CSimpleCross_dtor_FUN_005a7a60,
    .instance_size = (int)sizeof(CSimpleCross),
    .class_name = (char *)s_CSimpleCross_0061ebb8
};
WatcomTypeInfo g_CGrandmaTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_grandma_cpp_CGrandma_ctor_FUN_005a7b10,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_grandma_cpp_CGrandma_dtor_FUN_005a7e10,
    .instance_size = (int)sizeof(CGrandma),
    .class_name = (char *)s_CGrandma_0061ebe0
};
WatcomTypeInfo g_CSearchPartyTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_searpart_cpp_CSearchParty_ctor_FUN_005a8cf0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_searpart_cpp_CSearchParty_dtor_FUN_005a8e80,
    .instance_size = (int)sizeof(CSearchParty),
    .class_name = (char *)s_CSearchParty_0061ec6c
};
WatcomTypeInfo g_CBellingTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_belling_cpp_CBelling_ctor_FUN_005a8f80,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_belling_cpp_CBelling_dtor_FUN_005a9130,
    .instance_size = (int)sizeof(CBelling),
    .class_name = (char *)s_CBelling_0061ec84
};
WatcomTypeInfo g_CGhostChildTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_ghostchi_cpp_CGhostChild_ctor_FUN_005a9230,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_ghostchi_cpp_CGhostChild_dtor_FUN_005a9370,
    .instance_size = (int)sizeof(CGhostChild),
    .class_name = (char *)s_CGhostChild_0061ec98
};
WatcomTypeInfo g_CHandTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_hand_cpp_CHand_ctor_FUN_005a9c00,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_hand_cpp_CHand_dtor_FUN_005a9d30,
    .instance_size = (int)sizeof(CHand),
    .class_name = (char *)s_CHand_0061ecb0
};
WatcomTypeInfo g_CHagTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_hag_cpp_CHag_ctor_FUN_005aa600,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_hag_cpp_CHag_dtor_FUN_005aa7e0,
    .instance_size = (int)sizeof(CHag),
    .class_name = (char *)s_CHag_0061ecc4
};
WatcomTypeInfo g_CDogTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_dog1_cpp_CDog_ctor_FUN_005aba40,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_dog1_cpp_CDog_dtor_FUN_005abd30,
    .instance_size = (int)sizeof(CDog),
    .class_name = (char *)s_CDog_0061ecd4
};
WatcomTypeInfo g_CParticleBoxTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_partibox_cpp_CParticleBox_ctor_FUN_005ac7a0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_partibox_cpp_CParticleBox_dtor_FUN_005ac7f0,
    .instance_size = (int)sizeof(CParticleBox),
    .class_name = (char *)s_CParticleBox_0061ece4
};
WatcomTypeInfo g_CSpiritMineTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_spirmine_cpp_CSpiritMine_ctor_FUN_005ad3c0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_spirmine_cpp_CSpiritMine_dtor_FUN_005ad460,
    .instance_size = (int)sizeof(CSpiritMine),
    .class_name = (char *)s_CSpiritMine_0061ecfc
};
WatcomTypeInfo g_CNecklaceTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_necklace_cpp_CNecklace_ctor_FUN_005adab0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_necklace_cpp_CNecklace_dtor_FUN_005add30,
    .instance_size = (int)sizeof(CNecklace),
    .class_name = (char *)s_CNecklace_0061ed14
};
WatcomTypeInfo g_SClothVertexTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_cloth_cpp_SClothVertex_ctor_FUN_005b1ba0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .instance_size = (int)sizeof(SClothVertex),
    .class_name = (char *)s_SClothVertex_0061ed37
};
WatcomTypeInfo g_SClothBoneTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_cloth_cpp_SClothBone_ctor_FUN_005b1b90,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .instance_size = (int)sizeof(SClothBone),
    .class_name = (char *)s_SClothBone_0061ed25
};
WatcomTypeInfo g_SScrapeTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_box_cpp_SScrape_ctor_FUN_005b46b0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .instance_size = (int)sizeof(SScrape),
    .class_name = (char *)s_SScrape_0061ed4b
};
WatcomTypeInfo g_SChainVertexTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_chain_cpp_SChainVertex_ctor_FUN_005b5fa0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .instance_size = (int)sizeof(SChainVertex),
    .class_name = (char *)s_SChainVertex_0061ed70
};
WatcomTypeInfo g_CChainTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_chain_cpp_CChain_ctor_FUN_005b4720,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_chain_cpp_CChain_dtor_FUN_005b5f50,
    .instance_size = (int)sizeof(CChain),
    .class_name = (char *)s_CChain_0061ed60
};
WatcomTypeInfo g_CMorphModelTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_morph_cpp_CMorphModel_ctor_FUN_005b5fe0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_morph_cpp_CMorphModel_dtor_FUN_005b6010,
    .instance_size = (int)sizeof(CMorphModel),
    .class_name = (char *)s_CMorphModel_0061ed84
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
int g_CBodyPartClassVersion = 0x5;
int g_CBoneGuyClassVersion = 0x5;
int g_CBoxActorClassVersion = 0x10;
int g_CBrideClassVersion = 0x4;
int g_CBugsClassVersion = 0x1;
int g_CCharacterClassVersion = 0x9;
int g_CColonelClassVersion = 0x1;
int g_CConstructClassVersion = 0x3;
int g_CConveyorClassVersion = 0x2;
int g_CZombieCowClassVersion = 0x2;
int g_CCrateClassVersion = 0x2;
int g_CCrossbowClassVersion = 0x1;
int g_CActorDestinationClassVersion = 0x4;
int g_CDocClassVersion = 0xB;
int g_CZombieDogClassVersion = 0x2;
int g_CDoorClassVersion = 0xD;
int g_CDraculaBrideClassVersion = 0x9;
int g_CDripClassVersion = 0x6;
int g_CDroneClassVersion = 0x2;

// undefined1
undefined1 DAT_0060958f = 0x00;
undefined1 DAT_00609590 = 0x00;
undefined1 DAT_00609591 = 0x00;

// undefined4
undefined4 DAT_00601430 = 0x00000000;
undefined4 DAT_0060936c = 0x00000001;
undefined4 DAT_00609370 = 0x000000F8;
undefined4 DAT_006093c0 = 0x00FFFFFF;
undefined4 DAT_006095f8 = 0x00000000;
undefined4 DAT_006095fc = 0x00000000;
undefined4 DAT_00609b34 = 0x7FFFFFFF;
undefined4 DAT_00609f98 = 0x00010000;
undefined4 DAT_00609f9c = 0x00C80000;
undefined4 DAT_00609fa0 = 0x00000003;
undefined4 DAT_00609fa4 = 0x00000040;
undefined4 DAT_00609fa8 = 0x00000040;
undefined4 DAT_00609fac = 0x00000040;
undefined4 DAT_00609fb0 = 0x00000000;
undefined4 DAT_0060a0fc = 0x00000000;
undefined4 DAT_0060a104 = 0x00000000;
undefined4 DAT_0060a400 = 0x00000000;
undefined4 DAT_0060a404 = 0x00000000;
undefined4 DAT_0060a424 = 0x00000000;
undefined4 DAT_0060b280 = 0x01BA5C50;
undefined4 DAT_0060b284 = 0x00000001;
undefined4 DAT_0060d238 = 0x00000000;
undefined4 DAT_0060d23c = 0x00000000;
undefined4 DAT_0060d244 = 0x00000000;
undefined4 DAT_0060d260 = 0x00000000;
undefined4 DAT_0060d264 = 0x00000000;
undefined4 DAT_0060d268 = 0x00000000;

