// Name: core_event.cpp_FUN_004b1b41
// Address: 004b1b41
// Address Range: [[004b1b41, 004b1b52]]
// Convention: unknown
// Signature: undefined core_event.cpp_FUN_004b1b41()

#include "nocturne.h"

void core_event_cpp_FUN_004b1b41
               (undefined4 param_1,undefined2 *param_2,undefined4 param_3,undefined2 *param_4)

{
  *(undefined1 *)(param_4 + 1) = *(undefined1 *)(param_2 + 1);
  *param_4 = *param_2;
  return;
}


// Assembly code:
// 004b1b41: MOV EAX,EAX
//   Label: core_event.cpp_FUN_004b1b41
// 004b1b44: MOV AL,byte ptr [EDX + 0x2]
// 004b1b47: MOV byte ptr [ECX + 0x2],AL
// 004b1b4a: MOV AX,word ptr [EDX]
// 004b1b4d: MOV word ptr [ECX],AX
// 004b1b50: RET 0x4
