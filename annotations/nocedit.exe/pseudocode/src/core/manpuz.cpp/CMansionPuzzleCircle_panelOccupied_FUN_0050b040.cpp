// Name: core_manpuz.cpp_CMansionPuzzleCircle_panelOccupied_FUN_0050b040
// Address: 0050b040
// Address Range: [[0050b040, 0050b0cf]]
// Convention: unknown
// Signature: undefined core_manpuz.cpp_CMansionPuzzleCircle_panelOccupied_FUN_0050b040()

#include "nocturne.h"

/* Signature: byte actors_other_manpuz.cpp_CMansionPuzzleCircle_panelOccupied(uint
   param_1, uint param_2) */

uint core_manpuz_cpp_CMansionPuzzleCircle_panelOccupied_FUN_0050b040(void)

{
  int iVar1;
  int in_stack_00000004;
  int in_stack_00000008;
  
  if ((in_stack_00000008 < 0) || (0xb < in_stack_00000008)) {
    g_CurrentFilename = "..\\core\\manpuz.cpp";
    g_CurrentLineNumber = 0x5e6;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("CMansionPuzzleCircle::panelOccupied - invalid index: %d",in_stack_00000008);
  }
  if (*(int *)(in_stack_00000004 + 0x5f0 + in_stack_00000008 * 100) == 0) {
    iVar1 = core_manpuz_cpp_FUN_0050aef0();
    in_stack_00000004 = iVar1 * 100 + in_stack_00000004;
    if ((*(int *)(in_stack_00000004 + 0x5f0) == 0) ||
       ((*(uint *)(in_stack_00000004 + 0x5f8) & 0x7fffffff) == 0)) {
      return 0;
    }
  }
  return 1;
}
