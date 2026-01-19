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

// CDemonActorType
extern CDemonActorType g_CWaterActorClassInfo;
extern CDemonActorType g_CWayPointClassInfo;
extern CDemonActorType g_CWeaponClassInfo;
extern CDemonActorType g_CWerewolfClassInfo;
extern CDemonActorType g_CZombieClassInfo;

// CRITICAL_SECTION[64]
extern CRITICAL_SECTION g_StaticCriticalSectionArray[64];

// CVector3f[200]
extern CVector3f DAT_03f95df8[200];

// CVector3i
extern CVector3i g_TempProjectedCoord;

// CWeather
extern CWeather g_CWeatherInstance;

// HMODULE
extern HMODULE g_WinmmDll;

// HWND
extern HWND g_MainWindowHandle;
extern HWND g_MovieWindowHandle;

// LARGE_INTEGER
extern LARGE_INTEGER g_PerformanceCounter;
extern LARGE_INTEGER g_PerformanceFrequency;

// LPCRITICAL_SECTION
extern LPCRITICAL_SECTION g_GlobalInitLock;

// PALETTEENTRY[256]
extern PALETTEENTRY g_DDPaletteBuffer[256];

// ReentrantCriticalSection
extern ReentrantCriticalSection g_GlobalSystemCriticalSection;
extern ReentrantCriticalSection g_GlobalThreadCriticalSection;
extern ReentrantCriticalSection g_GlobalMemoryCriticalSection;
extern ReentrantCriticalSection g_GlobalIoCriticalSection;
extern ReentrantCriticalSection g_GlobalRuntimeCriticalSection;

// SEdgeData[16]
extern SEdgeData g_RasterizerEdgeArray[16];

// SRenderVertex[32]
extern SRenderVertex g_ClipVertexBufferStage2[32];
extern SRenderVertex g_ClipVertexBufferStage1[32];
extern SRenderVertex g_ClipVertexBufferStage3[32];
extern SRenderVertex g_ClipVertexBufferStage4[32];

// WNDPROC[4]
extern WNDPROC g_WindowMessageHandlers[4];

// char*[128]
extern char* g_ArgVector[128];

// char[200]
extern char g_KeyNameBuffer[200];

// char[256]
extern char g_ModuleFileName[256];
extern char g_CurrentDirectory[256];
extern char g_LeadByteTable[256];

// char[260]
extern char g_ExeFileNameBuffer_A[260];
extern char g_DllFileNameBuffer_A[260];

// char[512]
extern char g_ErrorMessageBuffer_03f96c30[512];

// dword
extern dword DWORD_03f9d000;

// int[20]
extern int g_InputBuffer[20];

// int[513]
extern int g_MessageFlags[513];

// wchar_t[260]
extern wchar_t g_ExeFileNameBuffer_W[260];
extern wchar_t g_DllFileNameBuffer_W[260];

// word
extern word DAT_03F9D60E;
extern word DAT_03F9D88A;
extern word DAT_03F9DAF2;
extern word DAT_03F9DC92;
extern word DAT_03F9DEA2;
extern word DAT_03F9E2CE;
extern word DAT_03F9E532;
extern word DAT_03F9E772;
extern word DAT_03F9E926;
extern word DAT_03F9E9C2;
extern word DAT_03F9EC1E;
extern word DAT_03F9EC6E;
extern word DAT_03F9ED96;
extern word DAT_03F9EE36;
extern word DAT_03F9EEB2;
extern word DAT_03F9EF5E;
extern word DAT_03F9F09E;
extern word DAT_03F9F1AE;
extern word DAT_03F9F25A;
extern word DAT_03F9F2BA;
extern word DAT_03F9F35A;
extern word DAT_03F9F41A;
extern word DAT_03F9F47E;
extern word DAT_03F9F4DA;
extern word DAT_03F9F5A2;
extern word DAT_03F9F62E;
extern word DAT_03F9F712;
extern word DAT_03F9FB76;
extern word DAT_03F9FCF2;
extern word DAT_03F9FEC2;
extern word DAT_03F9FF1E;
extern word DAT_03F9FF42;
extern word DAT_03F9FFC2;

