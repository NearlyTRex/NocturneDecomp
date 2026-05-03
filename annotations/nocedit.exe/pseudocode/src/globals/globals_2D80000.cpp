#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x2D80000
// =============================================================================

// CBloodParticle[256]
CBloodParticle g_BloodParticles[256] = {};

// CBloodSplat[2000]
CBloodSplat g_BloodSplats[2000] = {};

// CDemonActorType
CDemonActorType g_CGargoyleClassInfo = {};
CDemonActorType g_CGasMaskClassInfo = {};
CDemonActorType g_CGhoulClassInfo = {};
CDemonActorType g_CGlassClassInfo = {};

// CGame
CGame g_CGameInstance = {};

// CGore
CGore g_CGoreInstance = {};

// CPickList
CPickList g_CPickList = {};

// CVector3f
CVector3f CVector3f_02d832a8 = {};
CVector3f CVector3f_02d832b4 = {};

// CVector3i
CVector3i g_ParticleCameraRotation = {};
CVector3i CVector3i_02d8339c = {};

// SMRGLPrimitiveQuadIndex
SMRGLPrimitiveQuadIndex g_GoreQuadPrimitive = {};
SMRGLPrimitiveQuadIndex g_FootstepPrimitive = {};

// char[20]
char g_InputHistory[20] = {};

// char[256]
char g_ScreenshotFilename[256] = {};
char g_CurrentSaveFile[256] = {};
char g_ChapterDisplayName[256] = {};

// char[600]
char g_PrevKeyboardState[600] = {};

// float
float g_OverlayDisplayTimer = {};
float g_IrisFadeRadius = {};

// int
int INT_02d82568 = {};
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
int g_BloodParticleIndex = {};
int g_BloodSplatIndex = {};
int g_BloodSplatCount = {};

// int[11]
int g_GhoulIndices[11] = {};

// int[12]
int g_GargoyleIndices[12] = {};

// int[201]
int g_MasterLightStateSaveBuffer[201] = {};

