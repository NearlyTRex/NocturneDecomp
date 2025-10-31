// Name: core_event.cpp_FUN_004b1b1c
// Address: 004b1b1c
// Address Range: [[004b1b1c, 004b1b30]]
// Convention: unknown
// Signature: undefined core_event.cpp_FUN_004b1b1c()

#include "nocturne.h"

void core_event_cpp_FUN_004b1b1c
               (undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4)

{
  *(undefined1 *)((int)param_4 + 6) = *(undefined1 *)((int)param_2 + 6);
  *(undefined2 *)(param_4 + 1) = *(undefined2 *)(param_2 + 1);
  *param_4 = *param_2;
  return;
}


// Assembly code:
// 004b1b1c: MOV AL,byte ptr [EDX + 0x6]
//   Label: core_event.cpp_FUN_004b1b1c
// 004b1b1f: MOV byte ptr [ECX + 0x6],AL
// 004b1b22: MOV AX,word ptr [EDX + 0x4]
// 004b1b26: MOV word ptr [ECX + 0x4],AX
// 004b1b2a: MOV EAX,dword ptr [EDX]
// 004b1b2c: MOV dword ptr [ECX],EAX
// 004b1b2e: RET 0x4
