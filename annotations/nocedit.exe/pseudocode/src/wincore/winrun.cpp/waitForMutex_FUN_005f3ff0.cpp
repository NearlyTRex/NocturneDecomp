// Name: wincore_winrun.cpp_waitForMutex_FUN_005f3ff0
// Address: 005f3ff0
// Address Range: [[005f3ff0, 005f400d]]
// Convention: __cdecl
// Signature: int wincore_winrun.cpp_waitForMutex_FUN_005f3ff0(HANDLE mutex_handle)
// Cross-references:
//   shape_memdbg.cpp_acquireDebugMutex_FUN_0050ee5e (0050ee5e) at 0050ee84 [UNCONDITIONAL_CALL]
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0 (0050f9b0) at 0050fab2 [UNCONDITIONAL_CALL]
//   shape_memdbg.cpp_debugCalloc_FUN_0050f350 (0050f350) at 0050f383 [UNCONDITIONAL_CALL]
//   shape_memdbg.cpp_debugFree_FUN_0050f460 (0050f460) at 0050f493 [UNCONDITIONAL_CALL]
//   shape_memdbg.cpp_debugMalloc_FUN_0050f250 (0050f250) at 0050f27b [UNCONDITIONAL_CALL]
//   shape_memdbg.cpp_debugMemdump_FUN_0050f6c0 (0050f6c0) at 0050f6eb [UNCONDITIONAL_CALL]
//   shape_memdbg.cpp_debugRealloc_FUN_0050f540 (0050f540) at 0050f573 [UNCONDITIONAL_CALL]
//   shape_memdbg.cpp_openFile_FUN_0050f7a0 (0050f7a0) at 0050f8d9 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_lockSound_FUN_005abd30 (005abd30) at 005abd75 [UNCONDITIONAL_CALL]
// Globals:
//   WaitForSingleObject* WaitForSingleObject = 002122c4
// Function calls:
//   WaitForSingleObject

#include "nocturne.h"

int __cdecl wincore_winrun_cpp_waitForMutex_FUN_005f3ff0(HANDLE mutex_handle)

{
  DWORD DVar1;
  
  if (mutex_handle == (HANDLE)0x0) {
    return (int)mutex_handle;
  }
  DVar1 = (*WaitForSingleObject)(mutex_handle,0xffffffff);
  return (uint)(DVar1 == 0);
}


// Assembly code:
// 005f3ff0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: wincore_winrun.cpp_waitForMutex_FUN_005f3ff0
//   XREF to: Stack[0x4] (READ)
// 005f3ff4: TEST EAX,EAX
// 005f3ff6: JNZ 0x005f3ff9
//   XREF to: 005f3ff9 (CONDITIONAL_JUMP)
// 005f3ff8: RET
// 005f3ff9: PUSH -0x1
//   Label: LAB_005f3ff9
// 005f3ffb: PUSH EAX
// 005f3ffc: CALL dword ptr CS:[0x61166c]
//   XREF to: EXTERNAL:000000a6 (COMPUTED_CALL)
//   XREF to: 0061166c (READ)
// 005f4003: TEST EAX,EAX
// 005f4005: SETZ AL
// 005f4008: AND EAX,0xff
// 005f400d: RET
