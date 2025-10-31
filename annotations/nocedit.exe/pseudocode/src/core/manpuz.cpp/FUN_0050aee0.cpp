// Name: core_manpuz.cpp_FUN_0050aee0
// Address: 0050aee0
// Address Range: [[0050aee0, 0050aeec]]
// Convention: unknown
// Signature: undefined core_manpuz.cpp_FUN_0050aee0()
// Cross-references:
//   core_manpuz.cpp_CMansionPuzzleCircle_processPanel_FUN_0050a290 (0050a290) at 0050a2ff [UNCONDITIONAL_CALL]
//   core_manpuz.cpp_CMansionPuzzleCircle_shiftPanelRight_FUN_0050ad40 (0050ad40) at 0050ad67 [UNCONDITIONAL_CALL]
//   core_manpuz.cpp_FUN_0050a610 (0050a610) at 0050a887 [UNCONDITIONAL_CALL]

#include "nocturne.h"

/* Signature: undefined1 actors_other_manpuz.cpp_FUN_0050aee0(undefined1 param_1, undefined4
   param_2) */

int core_manpuz_cpp_FUN_0050aee0(void)

{
  int in_stack_00000008;
  
  in_stack_00000008 = in_stack_00000008 + 1;
  if (0xb < in_stack_00000008) {
    in_stack_00000008 = 0;
  }
  return in_stack_00000008;
}


// Assembly code:
// 0050aee0: MOV EAX,dword ptr [ESP + 0x8]
//   Label: core_manpuz.cpp_FUN_0050aee0
//   XREF to: Stack[0x8] (READ)
// 0050aee4: INC EAX
// 0050aee5: CMP EAX,0xc
// 0050aee8: JL 0x0050aeec
//   XREF to: 0050aeec (CONDITIONAL_JUMP)
// 0050aeea: XOR EAX,EAX
// 0050aeec: RET
//   Label: LAB_0050aeec
