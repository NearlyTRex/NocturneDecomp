#pragma once

// Type dependencies
#include "system/basetypes.h"
#include "types/classes/CBloodParticle.h"
#include "types/classes/CBloodSplat.h"
#include "types/classes/CDemonActorType.h"
#include "types/classes/CGame.h"
#include "types/classes/CGore.h"
#include "types/classes/CPickList.h"
#include "types/classes/CVector3f.h"
#include "types/classes/CVector3i.h"
#include "types/structs/SMRGLPrimitiveQuadIndex.h"

// =============================================================================
// GLOBAL VARIABLES - Range 0x2D80000
// =============================================================================

// CBloodParticle[256]
extern CBloodParticle g_BloodParticles[256];

// CBloodSplat[2000]
extern CBloodSplat g_BloodSplats[2000];

// CDemonActorType
extern CDemonActorType g_CGargoyleClassInfo;
extern CDemonActorType g_CGasMaskClassInfo;
extern CDemonActorType g_CGhoulClassInfo;
extern CDemonActorType g_CGlassClassInfo;

// CGame
extern CGame g_CGameInstance;

// CGore
extern CGore g_CGoreInstance;

// CPickList
extern CPickList g_CPickList;

// CVector3f
extern CVector3f CVector3f_02d832a8;
extern CVector3f CVector3f_02d832b4;

// CVector3i
extern CVector3i g_ParticleCameraRotation;
extern CVector3i CVector3i_02d8339c;

// SMRGLPrimitiveQuadIndex
extern SMRGLPrimitiveQuadIndex g_GoreQuadPrimitive;
extern SMRGLPrimitiveQuadIndex g_FootstepPrimitive;

// char[20]
extern char g_InputHistory[20];

// char[256]
extern char g_ScreenshotFilename[256];
extern char g_CurrentSaveFile[256];
extern char g_ChapterDisplayName[256];

// char[600]
extern char g_PrevKeyboardState[600];

// float
extern float g_OverlayDisplayTimer;
extern float g_IrisFadeRadius;

// int
extern int INT_02d82568;
extern int g_InputResetFlag;
extern int g_StoredCameraValue;
extern int g_ModalDialogActive;
extern int g_HasSavedLightState;
extern int g_ChapterDisplayYear;
extern int g_MovieRecordingArmed;
extern int g_MovieRecordingActive;
extern int g_MovieRecordingMaxFrames;
extern int g_MovieRecordingFrameCounter;
extern int g_SoundDebugEnabled;
extern int g_HelpCursorX;
extern int g_HelpCursorY;
extern int g_HelpLineHeight;
extern int g_HelpCharWidth;
extern int g_IrisFadeType;
extern int g_IrisFadeCenterX;
extern int g_IrisFadeCenterY;
extern int g_ProfileStartTime;
extern int g_BloodParticleIndex;
extern int g_BloodSplatIndex;
extern int g_BloodSplatCount;

// int[11]
extern int g_GhoulIndices[11];

// int[12]
extern int g_GargoyleIndices[12];

// int[201]
extern int g_MasterLightStateSaveBuffer[201];

