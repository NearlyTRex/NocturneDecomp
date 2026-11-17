#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x1C70000
// =============================================================================

// CBloodParticle[256]
CBloodParticle g_BloodParticles[256] = {};

// CBloodSplat[2000]
CBloodSplat g_BloodSplats[2000] = {};

// CDemonActorType
CDemonActorType g_CFlameClassInfo = {};
CDemonActorType g_CFlameCanClassInfo = {};
CDemonActorType g_CFlameThrowerClassInfo = {};
CDemonActorType g_CFlashlightClassInfo = {};
CDemonActorType g_CFliesClassInfo = {};
CDemonActorType g_CFrankenstienMachineClassInfo = {};
CDemonActorType g_CGabriellaClassInfo = {};
CDemonActorType g_CGargoyleClassInfo = {};
CDemonActorType g_CGasMaskClassInfo = {};
CDemonActorType g_CGhoulClassInfo = {};
CDemonActorType g_CGlassClassInfo = {};

// CDemonLight
CDemonLight g_CDemonLightInstance = {};

// CForceFeedback
CForceFeedback g_CForceFeedback_01c70f74 = {};

// CGame
CGame g_CGameInstance = {};

// CGore
CGore g_CGoreInstance = {};

// CPickList
CPickList g_CPickList = {};

// CQuaternion4f
CQuaternion4f g_CQuaternion4f_01c71344 = {};

// CVector3f
CVector3f g_GabriellaWeaponEuler = {};
CVector3f g_GabriellaWeaponAttachEuler = {};
CVector3f g_GabriellaWeaponAttachOffset = {};
CVector3f CVector3f_01c71388 = {};
CVector3f g_GhoulOffsetMinusX = {};
CVector3f g_GhoulOffsetPlusX = {};

// CVector3i
CVector3i g_ParticleCameraRotation = {};
CVector3i g_BloodParticleViewDirection = {};

// SHardwareEdge[16]
SHardwareEdge g_HardwareEdgeTable[16] = {};

// SMRGLHeaderPrimitive
SMRGLHeaderPrimitive g_SMRGLHeaderPrimitive_01c78cc0 = {};

// SMRGLPrimitiveQuadIndex
SMRGLPrimitiveQuadIndex g_GoreQuadPrimitive = {};

// byte
byte g_BYTE_01c71354 = {};

// char
char g_CHAR_01c73240 = {};

// char[10][256]
char g_WrappedTextBuffer[10][256] = {};

// char[20]
char g_InputHistory[20] = {};

// char[256]
char g_ScreenshotFilename[256] = {};
char g_CurrentSaveFile[256] = {};
char g_ChapterDisplayName[256] = {};

// char[5120]
char g_ActStatsTextBuffer1[5120] = {};

// char[600]
char g_PrevKeyboardState[600] = {};

// double
double g_DOUBLE_01c71e30 = {};

// float
float g_FastSqrtMagicSeedOne = {};
float g_FLOAT_01c71340 = {};
float g_FLOAT_01c71358 = {};
float g_FLOAT_01c7135c = {};
float g_FLOAT_01c71360 = {};
float g_FLOAT_01c71394 = {};
float g_OverlayDisplayTimer = {};
float g_IrisFadeRadius = {};

// float[64][8]
float g_SplineBasisTable[64][8] = {};

// int
int g_FastSqrtMagic = {};
int g_FastInvSqrtMagic = {};
int g_FliesInitialized = {};
int g_ShadowColor32 = {};
int g_ShadowColorRed = {};
int g_ShadowColorGreen = {};
int g_ShadowColorBlue = {};
int g_DefaultTextColor = {};
int g_EdgeCount = {};
int g_EdgeListMinY = {};
int g_EdgeListMaxY = {};
int g_INT_01c71e38 = {};
int g_ScreenshotIndex = {};
int g_InputResetFlag = {};
int g_StoredCameraValue = {};
int g_ModalDialogActive = {};
int g_HasSavedLightState = {};
int g_ChapterDisplayYear = {};
int g_MovieRecordingArmed = {};
int g_MovieRecordingActive = {};
int g_MovieRecordingMaxFrames = {};
int g_MovieRecordingFrameCounter = {};
int g_SoundDebugEnabled = {};
int g_HelpCursorX = {};
int g_HelpCursorY = {};
int g_HelpLineHeight = {};
int g_HelpCharWidth = {};
int g_IrisFadeType = {};
int g_IrisFadeCenterX = {};
int g_IrisFadeCenterY = {};
int g_ProfileStartTime = {};
int g_INT_01c78b18 = {};
int g_INT_01c78b20 = {};
int g_INT_01c78b2c = {};
int g_INT_01c78b30 = {};
int g_INT_01c78b3c = {};
int g_INT_01c78b44 = {};
int g_INT_01c78c14 = {};
int g_INT_01c78c18 = {};
int g_INT_01c78c1c = {};
int g_INT_01c78c20 = {};
int g_INT_01c78c24 = {};
int g_INT_01c78c28 = {};
int g_INT_01c78c2c = {};
int g_INT_01c78c38 = {};
int g_INT_01c78c3c = {};
int g_BloodParticleIndex = {};
int g_BloodSplatIndex = {};
int g_BloodSplatCount = {};

// int[201]
int g_MasterLightStateSaveBuffer[201] = {};

// int[20]
int g_GabriellaIndices[20] = {};

// uchar
uchar g_ShadowColor8 = {};

// uint
uint g_FlyBlendColor = {};
uint g_FlyInvBlendColor = {};

// ushort
ushort g_ShadowColor16 = {};

