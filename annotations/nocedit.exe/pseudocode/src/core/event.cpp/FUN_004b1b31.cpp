// Name: core_event.cpp_FUN_004b1b31
// Address: 004b1b31
// Address Range: [[004b1b31, 004b1b40]]
// Convention: unknown
// Signature: undefined core_event.cpp_FUN_004b1b31()

#include "nocturne.h"

void core_event_cpp_FUN_004b1b31
               (undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4)

{
  *(undefined1 *)(param_4 + 1) = *(undefined1 *)(param_2 + 1);
  *param_4 = *param_2;
  return;
}


// Assembly code:
// 004b1b31: MOV EAX,EAX
//   Label: core_event.cpp_FUN_004b1b31
// 004b1b34: MOV AL,byte ptr [EDX + 0x4]
// 004b1b37: MOV byte ptr [ECX + 0x4],AL
// 004b1b3a: MOV EAX,dword ptr [EDX]
// 004b1b3c: MOV dword ptr [ECX],EAX
// 004b1b3e: RET 0x4
