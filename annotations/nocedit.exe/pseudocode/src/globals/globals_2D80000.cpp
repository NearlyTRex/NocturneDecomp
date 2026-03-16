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

// SMRGLPrimitiveQuadIndex
SMRGLPrimitiveQuadIndex g_GoreQuadPrimitive = {};
SMRGLPrimitiveQuadIndex g_FootstepPrimitive = {};

// char*
char* g_CurrentDisplayText = {};

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
int g_CheatSystemEnabled = {};
int g_HasSavedLightState = {};
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
int INT_02d83200 = {};
int INT_02d83204 = {};
int INT_02d83208 = {};
int INT_02d8320c = {};
int INT_02d83210 = {};
int INT_02d83214 = {};
int INT_02d83218 = {};
int INT_02d8321c = {};
int INT_02d83220 = {};
int INT_02d83224 = {};
int INT_02d83228 = {};
int INT_02d8322c = {};
int INT_02d832a8 = {};
int INT_02d832ac = {};
int INT_02d832b0 = {};
int INT_02d832b4 = {};
int INT_02d832b8 = {};
int INT_02d832bc = {};
int INT_02d832fc = {};
int INT_02d83300 = {};
int INT_02d83304 = {};
int INT_02d83308 = {};
int INT_02d8330c = {};
int INT_02d83310 = {};
int INT_02d83314 = {};
int INT_02d83318 = {};
int INT_02d8331c = {};
int INT_02d83320 = {};
int INT_02d83324 = {};
int g_ParticleCameraRotation = {};
int INT_02d83394 = {};
int INT_02d83398 = {};
int INT_02d8339c = {};
int INT_02d833a0 = {};
int INT_02d833a4 = {};
int g_BloodParticleIndex = {};
int g_BloodSplatIndex = {};
int g_BloodSplatCount = {};

// int[201]
int g_MasterLightStateSaveBuffer[201] = {};

// undefined1
undefined1 DAT_02d831d6 = {};
undefined1 DAT_02d831eb = {};

