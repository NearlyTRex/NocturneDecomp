// Name: sound_sndmain.cpp_setMemoryBudget_FUN_005aa340
// Address: 005aa340
// Address Range: [[005aa340, 005aa35c]]
// Convention: __cdecl
// Signature: void sound_sndmain.cpp_setMemoryBudget_FUN_005aa340(int min_bytes, int max_bytes)
// Globals:
//   int g_MinimumSoundMemoryBudget = 0x200000
//   int g_MaximumSoundMemoryBudget = 0x400000
// Function calls:
//   sound_sndmain.cpp_ensureSoundMemoryAvailable_FUN_005a4450

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_setMemoryBudget_FUN_005aa340(int min_bytes,int max_bytes)

{
  g_MinimumSoundMemoryBudget = min_bytes;
  g_MaximumSoundMemoryBudget = max_bytes;
  sound_sndmain_cpp_ensureSoundMemoryAvailable_FUN_005a4450(0);
  return;
}


// Assembly code:
// 005aa340: MOV EAX,dword ptr [ESP + 0x4]
//   Label: sound_sndmain.cpp_setMemoryBudget_FUN_005aa340
//   XREF to: Stack[0x4] (READ)
// 005aa344: MOV [0x00681b40],EAX
//   XREF to: 00681b40 (WRITE)
// 005aa349: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 005aa34d: PUSH 0x0
// 005aa34f: MOV [0x00681b44],EAX
//   XREF to: 00681b44 (WRITE)
// 005aa354: CALL sound_sndmain.cpp_ensureSoundMemoryAvailable_FUN_005a4450
//   XREF to: 005a4450 (UNCONDITIONAL_CALL)
// 005aa359: ADD ESP,0x4
// 005aa35c: RET
