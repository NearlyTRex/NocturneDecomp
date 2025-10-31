// Name: shape_memdbg.cpp_acquireDebugMutex_FUN_0050ee5e
// Address: 0050ee5e
// Address Range: [[0050ee5e, 0050ee8d]]
// Convention: __cdecl
// Signature: void shape_memdbg.cpp_acquireDebugMutex_FUN_0050ee5e(void)
// Globals:
//   BOOL g_RecursiveCallFlag
//   HANDLE g_FileMutex
// Function calls:
//   wincore_winrun.cpp_createMutex_FUN_005f3fe0
//   wincore_winrun.cpp_waitForMutex_FUN_005f3ff0

#include "nocturne.h"

void __cdecl shape_memdbg_cpp_acquireDebugMutex_FUN_0050ee5e(void)

{
  if (g_RecursiveCallFlag == 0) {
    if (g_FileMutex == (HANDLE)0x0) {
      g_FileMutex = wincore_winrun_cpp_createMutex_FUN_005f3fe0();
    }
    wincore_winrun_cpp_waitForMutex_FUN_005f3ff0(g_FileMutex);
  }
  return;
}


// Assembly code:
// 0050ee5e: MOV ECX,ECX
//   Label: shape_memdbg.cpp_acquireDebugMutex_FUN_0050ee5e
// 0050ee60: CMP dword ptr [0x02f0ca50],0x0
//   XREF to: 02f0ca50 (READ)
// 0050ee67: JNZ 0x0050ee8d
//   XREF to: 0050ee8d (CONDITIONAL_JUMP)
// 0050ee69: CMP dword ptr [0x02f0d93c],0x0
//   XREF to: 02f0d93c (READ)
// 0050ee70: JNZ 0x0050ee7c
//   XREF to: 0050ee7c (CONDITIONAL_JUMP)
// 0050ee72: CALL wincore_winrun.cpp_createMutex_FUN_005f3fe0
//   XREF to: 005f3fe0 (UNCONDITIONAL_CALL)
// 0050ee77: MOV [0x02f0d93c],EAX
//   XREF to: 02f0d93c (WRITE)
// 0050ee7c: PUSH EBX
//   Label: LAB_0050ee7c
// 0050ee7d: MOV EBX,dword ptr [0x02f0d93c]
//   XREF to: 02f0d93c (READ)
// 0050ee83: PUSH EBX
// 0050ee84: CALL wincore_winrun.cpp_waitForMutex_FUN_005f3ff0
//   XREF to: 005f3ff0 (UNCONDITIONAL_CALL)
// 0050ee89: ADD ESP,0x4
// 0050ee8c: POP EBX
// 0050ee8d: RET
//   Label: LAB_0050ee8d
