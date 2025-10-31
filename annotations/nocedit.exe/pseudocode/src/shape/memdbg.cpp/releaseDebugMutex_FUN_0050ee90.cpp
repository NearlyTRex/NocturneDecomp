// Name: shape_memdbg.cpp_releaseDebugMutex_FUN_0050ee90
// Address: 0050ee90
// Address Range: [[0050ee90, 0050ee9f]]
// Convention: __cdecl
// Signature: void shape_memdbg.cpp_releaseDebugMutex_FUN_0050ee90(void)
// Globals:
//   HANDLE g_FileMutex
// Function calls:
//   wincore_winrun.cpp_releaseMutex_FUN_005f4050

#include "nocturne.h"

void __cdecl shape_memdbg_cpp_releaseDebugMutex_FUN_0050ee90(void)

{
  wincore_winrun_cpp_releaseMutex_FUN_005f4050(g_FileMutex);
  return;
}


// Assembly code:
// 0050ee90: MOV EDX,dword ptr [0x02f0d93c]
//   Label: shape_memdbg.cpp_releaseDebugMutex_FUN_0050ee90
//   XREF to: 02f0d93c (READ)
// 0050ee96: PUSH EDX
// 0050ee97: CALL wincore_winrun.cpp_releaseMutex_FUN_005f4050
//   XREF to: 005f4050 (UNCONDITIONAL_CALL)
// 0050ee9c: ADD ESP,0x4
// 0050ee9f: RET
