#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x5B0000
// =============================================================================

// CDemonMission*
CDemonMission* g_CDemonMission_PTR_005baf90 = (CDemonMission*)0x01CC9450; // DAT_01cc9450

// CDemonSet*
CDemonSet* g_CDemonSet_PTR_005be368 = (CDemonSet*)&g_CDemonSet_01e57284;

// CEditorTools*
CEditorTools* g_CEditorTools_PTR_005b6d50 = (CEditorTools*)&g_CEditorTools_01bcd074;

// CFireEffect*
CFireEffect* g_CFireEffect_PTR_005b80f0 = (CFireEffect*)&g_CFireEffect_01c08d04;

// CGame*
CGame* g_CGame_PTR_005b9354 = (CGame*)&g_CGame_01c775ec;

// CGore*
CGore* g_CGore_PTR_005b96c4 = (CGore*)&g_CGore_01c78c7c;

// CKeys*
CKeys* g_CKeys_PTR_005bac64 = (CKeys*)&g_CKeys_01cc30e4;

// CLevelLoader*
CLevelLoader* g_CLevelLoader_PTR_005baca0 = (CLevelLoader*)&g_CLevelLoader_01cc3160;

// CMouse*
CMouse* g_CMouse_PTR_005be060 = (CMouse*)&g_CMouse_01d465c0;

// CNetGame*
CNetGame* g_CNetGame_PTR_005bdee0 = (CNetGame*)&g_CNetGame_01cea280;

// CPod*
CPod* g_CPod_PTR_005be1cc = (CPod*)&g_CDemonPod_01e528d0;

// CSound*
CSound* g_CSound_PTR_005bed68 = (CSound*)&g_CSound_02dc9450;

// WatcomStaticDestructorNode
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005b6d40 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_0059ca40,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CEditorTools_01bcd074
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005b8050 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_0059d180,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CStake_ARRAY_01c23d50
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005b8060 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_0059d18c,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CSpark_ARRAY_01c49d54
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005b8070 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_0059d198,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CGlassParticle_ARRAY_01c4f08c
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005b8080 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_0059d1a4,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CFireball_ARRAY_01c58dfc
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005b8090 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_0059d1b0,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CRock_ARRAY_01c5b500
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005b80a0 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_0059d1bc,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CToss_ARRAY_01c5d824
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005b80b0 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_0059d1c8,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CCrater_ARRAY_01c625f8
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005b80c0 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_0059d1d4,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CShell_ARRAY_01c684e0
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005b80d0 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_0059d1e0,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CPopcorn_ARRAY_01c69614
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005b80e0 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_0059d1ec,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CRainDrop_ARRAY_01c6ce18
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005b92c0 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_0059de60,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CDemonLight_01c74640
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005b92d0 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_0059de6c,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CGame_01c775ec
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005b92e0 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_0059de78,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CPickList_01c78424
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005b9694 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_0059e4b0,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CGore_01c78c7c
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005b96a4 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_0059e4bc,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CBloodParticle_ARRAY_01c78cec
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005b96b4 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_0059e4c8,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CFootstep_ARRAY_01c9e544
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005ba8dc = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_0059e6d0,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CGround_01cadf80
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005baa80 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_0059f730,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CAlphaBitmap_01cb0380
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005baa90 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_0059f73c,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CAlphaBitmap_01cb0394
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005baaa0 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_0059f748,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CAlphaBitmap_01cb03a8
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005baab0 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_0059f754,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CAlphaBitmap_01cb03bc
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005baac0 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_0059f760,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CAlphaBitmap_01cc2fd8
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005baad0 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_0059f76c,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CAlphaBitmap_01cc2fec
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005baae0 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_0059f778,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CAlphaBitmap_01cc3000
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005baaf0 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_0059f784,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CAlphaBitmap_01cc3014
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005bab00 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_0059f790,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CAlphaBitmap_01cc3028
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005bab10 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_0059f79c,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CAlphaBitmap_01cc303c
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005bab20 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_0059f7a8,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CAlphaBitmap_01cc3050
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005bab30 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_0059f7b4,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CAlphaBitmap_01cc3064
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005bab40 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_0059f7c0,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CAlphaBitmap_01cc3078
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005bab50 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_0059f7cc,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CAlphaBitmap_01cc308c
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005bac90 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_0059fbf0,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CKeyFramedModel_01cc3290
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005bad0e = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_0059ffd0,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CAlphaBitmap_01cc480c
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005bad1e = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_0059ffdc,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CAlphaBitmap_01cc4820
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005bad2e = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_0059ffe8,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CAlphaBitmap_01cc4834
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005bad3e = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_0059fff4,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CAlphaBitmap_01cc4848
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005badf8 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_005a0510,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CAlphaBitmap_ARRAY_01cc56e0
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005bae08 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_005a051c,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CMoon_01cc5780
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005bae18 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_005a0528,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CAlphaBitmap_01cc5b20
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005bae28 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_005a0534,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CAlphaBitmap_01cc5b34
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005bae38 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_005a0540,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CAlphaBitmap_01cc5b48
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005bae48 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_005a054c,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CAlphaBitmap_01cc5b6c
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005bb158 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_005a0c30,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CAlphaBitmap_01ccdc50
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005bb168 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_005a0c3c,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CAlphaBitmap_ARRAY_01ccdc64
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005bb178 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_005a0c48,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CCourse_ARRAY_01ccdec8
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005bb188 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_005a0c54,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CKeyFramedModel_01cce1bc
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005bded0 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_005a0d90,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CNetGame_01cea280
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005be050 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_005a0e40,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CMouse_01d465c0
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005be0a8 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_005a11d0,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CPathMap_ARRAY_01d468a0
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005be1bc = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_005a14e0,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CDemonPod_01e528d0
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005be200 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_005a16c0,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CPickList_01e56c30
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005be210 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_005a16cc,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CScript_01e56da0
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005be328 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_005a18c0,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CDemonSet_01e57284
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005be338 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_005a18cc,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CDemonCamera_01fb8508
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005be348 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_005a18d8,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CDemonRaytrace_01fba938
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005be358 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_005a18e4,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CKeyFramedModel_01fbacc8
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005be980 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_005a1e90,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CDeformableModel_ARRAY_0268cef4
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005be990 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_005a1e9c,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CSkeleton_ARRAY_02737ef8
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005bea20 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_005a2120,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CSfxSample_ARRAY_02dc1edc
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005bea30 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_005a212c,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CMP3Decoder_02da8ae0
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005bea44 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_005a2138,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CMP3Decoder_02db4d18
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005bed50 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_005a22c0,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CStrList_02dc9610
};

// int
int g_INT_005b064c = 0x6;
int g_INT_005b0660 = 0x2;
int INT_005b75dc = 0x7;
int INT_005b7604 = 0xA;
int g_WindowWidth = 0x140;
int g_WindowHeight = 0xC8;
int INT_005b8018 = 0x2;
int INT_005b801c = 0x2;
int g_INT_005b91c0 = 0x7;
int g_INT_005b91c4 = 0x1;
int g_INT_005b91dc = 0x1;
int g_INT_005b91f8 = 0x1;
int g_INT_005b9210 = 0x3;
int g_INT_005b9288 = 0x1;
int INT_005b92a8 = 0x3;
int INT_005b9624 = 0x2;
int INT_005b9650 = 0x7;
int INT_005b9668 = 0x6;
int INT_005ba8c8 = 0x4;
int INT_005ba8ec = 0x1CADF80;
int INT_005ba928 = 0x3;
int g_INT_005ba940 = 0xC;
int g_INT_005ba944 = 0x1;
int g_INT_005ba960 = 0x1;
int g_INT_005ba980 = 0xC;
int g_INT_005ba994 = 0x1;
int g_INT_005ba9ac = 0x1;
int g_INT_005ba9cc = 0x1;
int g_INT_005ba9e0 = 0x1;
int INT_005bab60 = 0xD0;
int INT_005bab64 = 0x60;
int INT_005bab68 = 0;
int INT_005bab6c = 0;
int INT_005babd0 = 0;
int INT_005babd4 = 0;
int INT_005bac4c = 0x3;
int INT_005bac68 = 0x2;
int INT_005bac7c = 0x2;
int INT_005bacbc = 0x8;
int INT_005bacf8 = 0x2;
int g_INT_005bad50 = 0x3;
int g_INT_005bad54 = 0x1;
int INT_005bade4 = 0x7;
int INT_005baf48 = 0x3;
int g_INT_005bb124 = 0x7;
int g_INT_005bb144 = 0x1;
int g_INT_005bdee4 = 0x1;
int INT_005be074 = 0x4;
int INT_005be078 = 0x6;
int INT_005be164 = 0x8;
int INT_005be19c = 0xB;
int INT_005be1e4 = 0x4B0;
int INT_005be310 = 0x2;
int g_INT_005be950 = 0x1;
int g_INT_005be964 = 0x3;
int g_INT_005bea0c = 0x1;
int g_INT_005bea40 = 0x1;

// undefined1
undefined1 DAT_005b9258 = 0x00;
undefined1 DAT_005b9259 = 0x00;
undefined1 DAT_005b925a = 0x00;
undefined1 DAT_005b925b = 0x00;
undefined1 DAT_005bb118 = 0x00;
undefined1 DAT_005bb11c = 0x00;
undefined1 DAT_005bb121 = 0x00;
undefined1 DAT_005be184 = 0x00;
undefined1 DAT_005bf550 = 0x10;
undefined1 DAT_005bf570 = 0x08;

// undefined2
undefined2 DAT_005b8bdc = 0x0000;

// undefined4
undefined4 DAT_005b0680 = 0x00000000;
undefined4 DAT_005b0684 = 0x00000000;
undefined4 DAT_005b0688 = 0x00000000;
undefined4 DAT_005b068c = 0x00000000;
undefined4 DAT_005b0690 = 0x00000000;
undefined4 DAT_005b0694 = 0x00000000;
undefined4 DAT_005b0698 = 0x00000000;
undefined4 DAT_005b069c = 0x00000000;
undefined4 DAT_005b06a0 = 0x00000000;
undefined4 DAT_005b06ac = 0x00000000;
undefined4 DAT_005b06b0 = 0x00000000;
undefined4 DAT_005b06b4 = 0x00000000;
undefined4 DAT_005b06b8 = 0x00000000;
undefined4 DAT_005b06bc = 0x00000000;
undefined4 DAT_005b06c4 = 0x00000000;
undefined4 DAT_005b06e0 = 0x00000000;
undefined4 DAT_005b06e4 = 0x00000000;
undefined4 DAT_005b06e8 = 0x00000000;
undefined4 DAT_005b06ec = 0x00000000;
undefined4 DAT_005b06f0 = 0x00000000;
undefined4 DAT_005b06f4 = 0x00000000;
undefined4 DAT_005b06f8 = 0x00000000;
undefined4 DAT_005b06fc = 0x00000000;
undefined4 DAT_005b0700 = 0x00000000;
undefined4 DAT_005b0704 = 0x00000000;
undefined4 DAT_005b0708 = 0x00000000;
undefined4 DAT_005b070c = 0x00000000;
undefined4 DAT_005b0710 = 0x00000000;
undefined4 DAT_005b0714 = 0x00000000;
undefined4 DAT_005b0718 = 0x00000000;
undefined4 DAT_005b071c = 0x00000000;
undefined4 DAT_005b0720 = 0x00000000;
undefined4 DAT_005b0724 = 0x00000000;
undefined4 DAT_005b0728 = 0x00000000;
undefined4 DAT_005b072c = 0x00000000;
undefined4 DAT_005b0730 = 0x00000000;
undefined4 DAT_005b0734 = 0x00000000;
undefined4 DAT_005b0738 = 0x00000000;
undefined4 DAT_005b073c = 0x00000000;
undefined4 DAT_005b0740 = 0x00000000;
undefined4 DAT_005b0744 = 0x00000000;
undefined4 DAT_005b0748 = 0x00000000;
undefined4 DAT_005b074c = 0x00000000;
undefined4 DAT_005b0750 = 0x00000000;
undefined4 DAT_005b0754 = 0x00000000;
undefined4 DAT_005b0758 = 0x00000000;
undefined4 DAT_005b075c = 0x00000000;
undefined4 DAT_005b0760 = 0x00000000;
undefined4 DAT_005b0764 = 0x00000000;
undefined4 DAT_005b0768 = 0x00000000;
undefined4 DAT_005b5d00 = 0x00000000;
undefined4 DAT_005b6d54 = 0x00000009;
undefined4 DAT_005b6d58 = 0x00000009;
undefined4 DAT_005b6d60 = 0x00000000;
undefined4 DAT_005b6d64 = 0x00000000;
undefined4 DAT_005b6f70 = 0x00000000;
undefined4 DAT_005b6f74 = 0x00000000;
undefined4 DAT_005b7078 = 0x00000000;
undefined4 DAT_005b707c = 0x00000000;
undefined4 DAT_005b7278 = 0x00000000;
undefined4 DAT_005b727c = 0x00000000;
undefined4 DAT_005b7478 = 0x00000000;
undefined4 DAT_005b747c = 0x00000000;
undefined4 DAT_005b7624 = 0x00000008;
undefined4 DAT_005b762c = 0x00000100;
undefined4 DAT_005b7630 = 0x0000007F;
undefined4 DAT_005b7638 = 0x00000005;
undefined4 DAT_005b763c = 0x000000FF;
undefined4 DAT_005b7644 = 0x00000001;
undefined4 DAT_005b7648 = 0x00010000;
undefined4 DAT_005b7658 = 0x00000000;
undefined4 DAT_005b765c = 0x00000000;
undefined4 DAT_005b7720 = 0x00000000;
undefined4 DAT_005b7724 = 0x00000000;
undefined4 DAT_005b8bd8 = 0x00000000;
undefined4 DAT_005b9418 = 0x00000000;
undefined4 DAT_005bacd0 = 0x00008000;
undefined4 DAT_005bacd4 = 0x00000001;
undefined4 DAT_005bacd8 = 0x00010000;
undefined4 DAT_005bacdc = 0x00010000;
undefined4 DAT_005bb000 = 0x00000000;
undefined4 DAT_005bb004 = 0x00000000;
undefined4 DAT_005bb068 = 0x00000000;
undefined4 DAT_005bb06c = 0x00000000;
undefined4 DAT_005bb11d = 0x00000000;
undefined4 DAT_005bb210 = 0x00000001;
undefined4 DAT_005bbba0 = 0x00000001;
undefined4 DAT_005bbbb4 = 0x00000000;
undefined4 DAT_005bbbfc = 0x00000001;
undefined4 DAT_005bbc40 = 0x00000001;
undefined4 DAT_005be0b8 = 0xFFFFFFFF;
undefined4 DAT_005be0bc = 0x00000000;
undefined4 DAT_005be230 = 0x00000000;
undefined4 DAT_005be234 = 0x00000000;
undefined4 DAT_005be378 = 0x00000001;
undefined4 DAT_005be4fc = 0x00000000;
undefined4 DAT_005be500 = 0x00000000;
undefined4 DAT_005be780 = 0x00000000;
undefined4 DAT_005be784 = 0x00000000;
undefined4 DAT_005be788 = 0x00000000;
undefined4 DAT_005be78c = 0x00000000;
undefined4 DAT_005be7c8 = 0x00000000;
undefined4 DAT_005be7cc = 0x00000000;
undefined4 DAT_005be7d0 = 0x00000000;
undefined4 DAT_005bea60 = 0x00000020;
undefined4 DAT_005bea64 = 0x00000010;
undefined4 DAT_005bea68 = 0x00000002;
undefined4 DAT_005bea6c = 0x00005622;
undefined4 DAT_005bea70 = 0xFFFFFFFF;
undefined4 DAT_005bea74 = 0xFFFFFFFF;
undefined4 DAT_005bea78 = 0x00000001;
undefined4 DAT_005bea80 = 0x00000000;
undefined4 DAT_005bea84 = 0x3FF00000;
undefined4 DAT_005bea94 = 0x00400000;
undefined4 DAT_005bea98 = 0x3F000000;
undefined4 DAT_005beaa0 = 0x00000000;
undefined4 DAT_005beaa4 = 0x00000000;
undefined4 DAT_005beba0 = 0x00000000;
undefined4 DAT_005beba4 = 0x00000000;
undefined4 DAT_005bed40 = 0xFFFFFFFF;
undefined4 DAT_005bed44 = 0xFFFFFFFF;
undefined4 DAT_005bef20 = 0x00000000;
undefined4 DAT_005bef24 = 0x00000000;
undefined4 DAT_005bef88 = 0x00000000;
undefined4 DAT_005bef8c = 0x00000000;
undefined4 DAT_005bf014 = 0x00000000;
undefined4 DAT_005bf050 = 0x00000000;
undefined4 DAT_005bf054 = 0x00000000;
undefined4 DAT_005bf05c = 0x00000000;
undefined4 DAT_005bf078 = 0x00000000;
undefined4 DAT_005bf07c = 0x00000000;
undefined4 DAT_005bf488 = 0x00000000;
undefined4 DAT_005bf4d8 = 0x00000000;
undefined4 DAT_005bf4dc = 0x00000000;
undefined4 DAT_005bf4e0 = 0x00000000;
undefined4 DAT_005bf4e8 = 0x00000000;
undefined4 DAT_005bf4ec = 0x00000000;
undefined4 DAT_005bf4f0 = 0x00000000;
undefined4 DAT_005bf540 = 0x00000000;
undefined4 DAT_005bf5b8 = 0x0000F800;
undefined4 DAT_005bf5c0 = 0x000007E0;
undefined4 DAT_005bf5c8 = 0x0000001F;

// undefined8
undefined8 DAT_005b4748 = 0x0000000000000000;
undefined8 DAT_005b4788 = 0x0000000000000000;
undefined8 DAT_005b47a8 = 0x0000000000000000;
undefined8 DAT_005bf48c = 0x0000000000000000;
undefined8 DAT_005bf500 = 0x0000000000000000;
undefined8 DAT_005bf520 = 0x0000000000000000;
undefined8 DAT_005bfe70 = 0x0000000000000000;

// void*
void* switchdataD_005b7f90 = (void*)0x004819BC; // caseD_0
void* switchdataD_005b7fd4 = (void*)0x00481A4B; // caseD_0

