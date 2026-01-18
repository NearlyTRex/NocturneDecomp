#pragma once

// Type dependencies
#include "system/basetypes.h"
#include "system/ddraw.h"
#include "system/watcom.h"
#include "system/windef.h"
#include "system/winnt.h"
#include "system/winuser.h"
#include "types/classes/CDemonActorType.h"
#include "types/classes/CVector3f.h"
#include "types/classes/CVector3i.h"
#include "types/classes/CWeather.h"
#include "types/structs/SEdgeData.h"
#include "types/structs/SRenderVertex.h"

// =============================================================================
// GLOBAL VARIABLES - Range 0x3F90000
// =============================================================================

extern CDemonActorType g_CWaterActorClassInfo;
extern CDemonActorType g_CWayPointClassInfo;
extern PALETTEENTRY g_DDPaletteBuffer[256];
extern CDemonActorType g_CWeaponClassInfo;
extern CWeather g_CWeatherInstance;
extern CVector3f DAT_03f95df8[200];
extern CDemonActorType g_CWerewolfClassInfo;
extern LARGE_INTEGER g_PerformanceCounter;
extern LARGE_INTEGER g_PerformanceFrequency;
extern int g_InputBuffer[20];
extern HWND g_MainWindowHandle;
extern int g_MessageFlags[513];
extern WNDPROC g_WindowMessageHandlers[4];
extern HMODULE g_WinmmDll;
extern HWND g_MovieWindowHandle;
extern SRenderVertex g_ClipVertexBufferStage2[32];
extern SRenderVertex g_ClipVertexBufferStage1[32];
extern SRenderVertex g_ClipVertexBufferStage3[32];
extern SRenderVertex g_ClipVertexBufferStage4[32];
extern CDemonActorType g_CZombieClassInfo;
extern SEdgeData g_RasterizerEdgeArray[16];
extern ReentrantCriticalSection g_GlobalSystemCriticalSection;
extern ReentrantCriticalSection g_GlobalThreadCriticalSection;
extern ReentrantCriticalSection g_GlobalMemoryCriticalSection;
extern CRITICAL_SECTION g_StaticCriticalSectionArray[64];
extern LPCRITICAL_SECTION g_GlobalInitLock;
extern ReentrantCriticalSection g_GlobalIoCriticalSection;
extern ReentrantCriticalSection g_GlobalRuntimeCriticalSection;
extern CVector3i g_TempProjectedCoord;
extern dword DWORD_03f9d000;

