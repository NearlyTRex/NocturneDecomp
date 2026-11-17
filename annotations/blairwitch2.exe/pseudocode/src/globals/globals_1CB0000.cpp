#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x1CB0000
// =============================================================================

// CBloodParticle[256]
CBloodParticle g_BloodParticles[256] = {};

// CBloodSplat[2000]
CBloodSplat g_BloodSplats[2000] = {};

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
CQuaternion4f g_GabriellaWeaponAimRotation = {};

// CVector3f
CVector3f g_GhoulOffsetMinusX = {};
CVector3f g_GhoulOffsetPlusX = {};

// CVector3i
CVector3i g_ParticleCameraRotation = {};
CVector3i g_BloodParticleViewDirection = {};

// SHardwareEdge[16]
SHardwareEdge g_HardwareEdgeTable[16] = {};

// SMRGLPrimitiveQuadIndex
SMRGLPrimitiveQuadIndex g_GoreQuadPrimitive = {};
SMRGLPrimitiveQuadIndex g_FootstepPrimitive = {};

// UVector3
UVector3 g_GabriellaWeaponEuler = {};
UVector3 g_GabriellaWeaponAttachEuler = {};
UVector3 g_GabriellaWeaponAttachOffset = {};

// byte
byte g_BYTE_01cb394c = {};
byte g_BYTE_01cb80f8 = {};

// char
char g_CHAR_01cb1120 = {};

// char[10][256]
char g_WrappedTextBuffer[10][256] = {};

// char[256]
char g_ScreenshotFilename[256] = {};
char g_CurrentSaveFile[256] = {};
char g_ChapterDisplayName[256] = {};

// char[5120]
char g_ActStatsTextBuffer2[5120] = {};

// char[600]
char g_PrevKeyboardState[600] = {};

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
float g_OverlayDisplayTimer = {};
float g_IrisFadeRadius = {};

// int
int g_ShadowColor32 = {};
int g_ShadowColorRed = {};
int g_ShadowColorGreen = {};
int g_ShadowColorBlue = {};
int g_INT_01cb0254 = {};
int g_EdgeCount = {};
int g_EdgeListMinY = {};
int g_EdgeListMaxY = {};
int g_INT_01cb1118 = {};
int g_INT_01cb3920 = {};
int g_INT_01cb3944 = {};
int g_ScreenshotIndex = {};
int g_InputResetFlag = {};
int g_StoredCameraValue = {};
int g_INT_01cb7788 = {};
int g_HasSavedLightState = {};
int g_ChapterDisplayYear = {};
int g_INT_01cb80cc = {};
int g_MovieRecordingArmed = {};
int g_MovieRecordingActive = {};
int g_MovieRecordingMaxFrames = {};
int g_MovieRecordingFrameCounter = {};
int g_IrisFadeType = {};
int g_SoundDebugEnabled = {};
int g_HelpCursorX = {};
int g_HelpCursorY = {};
int g_HelpLineHeight = {};
int g_HelpCharWidth = {};
int g_IrisFadeCenterX = {};
int g_IrisFadeCenterY = {};
int g_ProfileStartTime = {};
int g_INT_01cb811c = {};
int g_BloodParticleIndex = {};
int g_BloodSplatIndex = {};
int g_BloodSplatCount = {};

// int[11]
int g_GhoulIndices[11] = {};

// int[12]
int g_GargoyleIndices[12] = {};

// int[201]
int g_MasterLightStateSaveBuffer[201] = {};

// int[20]
int g_GabriellaIndices[20] = {};

// uchar
uchar g_GabriellaWeaponAimRotationInitFlag = {};

// ushort
ushort g_USHORT_01cb0242 = {};

