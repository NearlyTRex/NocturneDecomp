// Name: wincore_winrun.cpp_releaseMutex_FUN_005f4050
// Address: 005f4050
// Address Range: [[005f4050, 005f4061]]
// Convention: __cdecl
// Signature: void wincore_winrun.cpp_releaseMutex_FUN_005f4050(HANDLE mutex_handle)
// Cross-references:
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0 (0050f9b0) at 0050fb23 [UNCONDITIONAL_CALL]
//   shape_memdbg.cpp_debugCalloc_FUN_0050f350 (0050f350) at 0050f3cd [UNCONDITIONAL_CALL]
//   shape_memdbg.cpp_debugFree_FUN_0050f460 (0050f460) at 0050f500 [UNCONDITIONAL_CALL]
//   shape_memdbg.cpp_debugMalloc_FUN_0050f250 (0050f250) at 0050f2c5 [UNCONDITIONAL_CALL]
//   shape_memdbg.cpp_debugMemdump_FUN_0050f6c0 (0050f6c0) at 0050f785 [UNCONDITIONAL_CALL]
//   shape_memdbg.cpp_debugRealloc_FUN_0050f540 (0050f540) at 0050f6a2 [UNCONDITIONAL_CALL]
//   shape_memdbg.cpp_openFile_FUN_0050f7a0 (0050f7a0) at 0050f8ac [UNCONDITIONAL_CALL]
//   shape_memdbg.cpp_releaseDebugMutex_FUN_0050ee90 (0050ee90) at 0050ee97 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_DoSomethingRoundWait_OnSoundMutex_FUN_005abe20 (005abe20) at 005abe8b [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_unlockSound_FUN_005abdc0 (005abdc0) at 005abddf [UNCONDITIONAL_CALL]
// Globals:
//   ReleaseMutex* ReleaseMutex = 002120fe
// Function calls:
//   ReleaseMutex

#include "nocturne.h"

void __cdecl wincore_winrun_cpp_releaseMutex_FUN_005f4050(HANDLE mutex_handle)

{
  if (mutex_handle == (HANDLE)0x0) {
    return;
  }
  (*ReleaseMutex)(mutex_handle);
  return;
}


// Assembly code:
// 005f4050: MOV EAX,dword ptr [ESP + 0x4]
//   Label: wincore_winrun.cpp_releaseMutex_FUN_005f4050
//   XREF to: Stack[0x4] (READ)
// 005f4054: TEST EAX,EAX
// 005f4056: JNZ 0x005f4059
//   XREF to: 005f4059 (CONDITIONAL_JUMP)
// 005f4058: RET
// 005f4059: PUSH EAX
//   Label: LAB_005f4059
// 005f405a: CALL dword ptr CS:[0x611608]
//   XREF to: EXTERNAL:0000008d (COMPUTED_CALL)
//   XREF to: 00611608 (READ)
// 005f4061: RET
