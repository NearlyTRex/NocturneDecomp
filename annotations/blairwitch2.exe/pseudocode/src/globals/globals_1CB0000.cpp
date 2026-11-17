#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x1CB0000
// =============================================================================

// CBloodParticle[256]
CBloodParticle g_BloodParticles[256] = {};

// CBloodSplat[2000]
CBloodSplat g_CBloodSplat_ARRAY_01cbcafc[2000] = {};

// CDemonActor*
CDemonActor* g_CDemonActor_PTR_01cb3948 = {};

// CDemonActorType
CDemonActorType g_CFrankenstienMachineClassInfo = {};
CDemonActorType g_CGabriellaClassInfo = {};
CDemonActorType g_CGargoyleClassInfo = {};
CDemonActorType g_CGasMaskClassInfo = {};
CDemonActorType g_CGhoulClassInfo = {};
CDemonActorType g_CGlassClassInfo = {};

// CDemonFilter
CDemonFilter CDemonFilter_01cb8080 = {};

// CDemonLight
CDemonLight g_CDemonLightInstance = {};

// CGame
CGame g_CGameInstance = {};

// CGore
CGore g_CGoreInstance = {};

// CLocation
CLocation g_CLocation_01cb3924 = {};

// CPickList
CPickList g_CPickList = {};

// CQuaternion4f
CQuaternion4f g_CQuaternion4f_01cb0624 = {};

// CVector3f
CVector3f g_CVector3f_01cb81c8 = {};
CVector3f g_CVector3f_01cb81d4 = {};

// CVector3i
CVector3i g_CVector3i_01cb82b0 = {};
CVector3i g_CVector3i_01cb82bc = {};

// SHardwareEdge[16]
SHardwareEdge g_SHardwareEdge_ARRAY_01cb025c[16] = {};

// SMRGLPrimitiveQuadIndex
SMRGLPrimitiveQuadIndex g_SMRGLPrimitiveQuadIndex_01cb8288 = {};
SMRGLPrimitiveQuadIndex g_SMRGLPrimitiveQuadIndex_01cb82c8 = {};

// UVector3
UVector3 g_UVector3_01cb0644 = {};
UVector3 g_UVector3_01cb0650 = {};
UVector3 g_UVector3_01cb065c = {};

// byte
byte g_BYTE_01cb394c = {};
byte g_BYTE_01cb80f8 = {};

// char
char g_CHAR_01cb1120 = {};

// char[10][256]
char g_CHAR_ARRAY_ARRAY_01cb0710[10][256] = {};

// char[256]
char g_CHAR_ARRAY_01cb7428[256] = {};
char g_CHAR_ARRAY_01cb7b50[256] = {};
char g_CHAR_ARRAY_01cb7f78[256] = {};

// char[5120]
char g_CHAR_ARRAY_01cb2520[5120] = {};

// char[600]
char g_CHAR_ARRAY_01cb7528[600] = {};

// double
double g_DOUBLE_01cb1110 = {};

// float
float g_FLOAT_01cb0620 = {};
float g_FLOAT_01cb0638 = {};
float g_FLOAT_01cb063c = {};
float g_FLOAT_01cb0640 = {};
float g_FLOAT_01cb0668 = {};
float g_FLOAT_01cb066c = {};
float g_FLOAT_01cb0670 = {};
float g_FLOAT_01cb0674 = {};
float g_FLOAT_01cb3934 = {};
float g_FLOAT_01cb3938 = {};
float g_FLOAT_01cb393c = {};
float g_FLOAT_01cb3940 = {};
float g_FLOAT_01cb807c = {};
float g_FLOAT_01cb810c = {};

// int
int g_INT_01cb0244 = {};
int g_INT_01cb0248 = {};
int g_INT_01cb024c = {};
int g_INT_01cb0250 = {};
int g_INT_01cb0254 = {};
int g_INT_01cb0258 = {};
int g_INT_01cb05dc = {};
int g_INT_01cb05e0 = {};
int g_INT_01cb1118 = {};
int g_INT_01cb3920 = {};
int g_INT_01cb3944 = {};
int g_INT_01cb7420 = {};
int g_INT_01cb7780 = {};
int g_INT_01cb7784 = {};
int g_INT_01cb7788 = {};
int g_INT_01cb7c50 = {};
int g_INT_01cb8078 = {};
int g_INT_01cb80cc = {};
int g_INT_01cb80d0 = {};
int g_INT_01cb80d4 = {};
int g_INT_01cb80d8 = {};
int g_INT_01cb80dc = {};
int g_INT_01cb80e0 = {};
int g_INT_01cb80e4 = {};
int g_INT_01cb80e8 = {};
int g_INT_01cb80ec = {};
int g_INT_01cb80f0 = {};
int g_INT_01cb80f4 = {};
int g_INT_01cb8110 = {};
int g_INT_01cb8114 = {};
int g_INT_01cb8118 = {};
int g_INT_01cb811c = {};
int g_INT_01cb82f0 = {};
int g_INT_01cbcaf4 = {};
int g_INT_01cbcaf8 = {};

// int[11]
int g_INT_ARRAY_01cb821c[11] = {};

// int[12]
int g_INT_ARRAY_01cb8120[12] = {};

// int[201]
int g_INT_ARRAY_01cb7c54[201] = {};

// int[20]
int g_INT_ARRAY_01cb0678[20] = {};

// uchar
uchar g_UCHAR_01cb0634 = {};

// ushort
ushort g_USHORT_01cb0242 = {};

