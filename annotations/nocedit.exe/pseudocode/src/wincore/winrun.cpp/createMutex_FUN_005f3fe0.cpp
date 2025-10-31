// Name: wincore_winrun.cpp_createMutex_FUN_005f3fe0
// Address: 005f3fe0
// Address Range: [[005f3fe0, 005f3fed]]
// Convention: __cdecl
// Signature: HANDLE wincore_winrun.cpp_createMutex_FUN_005f3fe0(void)
// Cross-references:
//   shape_memdbg.cpp_acquireDebugMutex_FUN_0050ee5e (0050ee5e) at 0050ee72 [UNCONDITIONAL_CALL]
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0 (0050f9b0) at 0050faa1 [UNCONDITIONAL_CALL]
//   shape_memdbg.cpp_debugCalloc_FUN_0050f350 (0050f350) at 0050f372 [UNCONDITIONAL_CALL]
//   shape_memdbg.cpp_debugFree_FUN_0050f460 (0050f460) at 0050f482 [UNCONDITIONAL_CALL]
//   shape_memdbg.cpp_debugMalloc_FUN_0050f250 (0050f250) at 0050f26a [UNCONDITIONAL_CALL]
//   shape_memdbg.cpp_debugMemdump_FUN_0050f6c0 (0050f6c0) at 0050f6da [UNCONDITIONAL_CALL]
//   shape_memdbg.cpp_debugRealloc_FUN_0050f540 (0050f540) at 0050f562 [UNCONDITIONAL_CALL]
//   shape_memdbg.cpp_openFile_FUN_0050f7a0 (0050f7a0) at 0050f8c8 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_lockSound_FUN_005abd30 (005abd30) at 005abd3b [UNCONDITIONAL_CALL]
// Globals:
//   CreateMutexA* CreateMutexA = 00211c78
// Function calls:
//   CreateMutexA

#include "nocturne.h"

HANDLE __cdecl wincore_winrun_cpp_createMutex_FUN_005f3fe0(void)

{
  HANDLE pvVar1;
  
  pvVar1 = (*CreateMutexA)((LPSECURITY_ATTRIBUTES)0x0,0,(LPCSTR)0x0);
  return pvVar1;
}


// Assembly code:
// 005f3fe0: PUSH 0x0
//   Label: wincore_winrun.cpp_createMutex_FUN_005f3fe0
// 005f3fe2: PUSH 0x0
// 005f3fe4: PUSH 0x0
// 005f3fe6: CALL dword ptr CS:[0x611514]
//   XREF to: EXTERNAL:00000050 (COMPUTED_CALL)
//   XREF to: 00611514 (READ)
// 005f3fed: RET
