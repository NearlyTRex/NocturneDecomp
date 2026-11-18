#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x1B60000
// =============================================================================

// CDemonActorType
CDemonActorType g_CDocClassInfo = {};
CDemonActorType g_CZombieDogClassInfo = {};
CDemonActorType g_CDoorClassInfo = {};

// CDoor*
CDoor* g_CDoor_PTR_01b687e0 = {};

// CLever*
CLever* g_CLever_PTR_01b687f0 = {};

// CVector3f
CVector3f g_CVector3f_01b687e4 = {};
CVector3f g_CVector3f_01b687f8 = {};
CVector3f g_CVector3f_01b68804 = {};

// FileSearchHandlerFunc*[5]
FileSearchHandlerFunc* g_SearchHandlers[5] = {};

// SMRGLPrimitiveQuad[5000]
SMRGLPrimitiveQuad g_FaceConversionBuffer[5000] = {};

// byte
byte g_BYTE_01b687f4 = {};

// float
float g_FLOAT_01b688ac = {};

// int
int g_INT_01b68814 = {};
int g_INT_01b68818 = {};
int g_INT_01b6881c = {};
int g_INT_01b68820 = {};
int g_INT_01b68824 = {};
int g_INT_01b68828 = {};
int g_INT_01b6882c = {};
int g_INT_01b68830 = {};
int g_INT_01b68834 = {};
int g_INT_01b68844 = {};
int g_INT_01b68848 = {};
int g_INT_01b6884c = {};
int g_INT_01b68854 = {};
int g_INT_01b68858 = {};
int g_INT_01b68864 = {};
int g_INT_01b68868 = {};
int g_INT_01b6886c = {};
int g_NumSearchHandlers = {};

// uint
uint g_DoorLockedSoundHandle = {};

