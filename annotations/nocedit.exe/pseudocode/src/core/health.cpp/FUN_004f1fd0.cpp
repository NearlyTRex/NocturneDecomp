// Name: core_health.cpp_FUN_004f1fd0
// Address: 004f1fd0
// Address Range: [[004f1fd0, 004f2014]]
// Convention: unknown
// Signature: undefined core_health.cpp_FUN_004f1fd0()
// Cross-references:
//   core_inv.cpp_CInventory_select_FUN_004ff800 (004ff800) at 004ff9ea [UNCONDITIONAL_CALL]
// Globals:
//   double DOUBLE_0062ea31 = 100

#include "nocturne.h"

/* Signature: undefined1 actors_other_health.cpp_FUN_004f1fd0(undefined4 param_1, undefined4
   param_2) */

undefined4 core_health_cpp_FUN_004f1fd0(void)

{
  float fVar1;
  int in_stack_00000004;
  int in_stack_00000008;
  
  if (0 < *(int *)(in_stack_00000004 + 0x2d4)) {
    fVar1 = *(float *)(in_stack_00000004 + 0x2d8) + *(float *)(in_stack_00000008 + 0x243c);
    *(float *)(in_stack_00000008 + 0x243c) = fVar1;
    if ((float)DOUBLE_0062ea31 < fVar1) {
      *(undefined4 *)(in_stack_00000008 + 0x243c) = 0x42c80000;
    }
    *(int *)(in_stack_00000004 + 0x2d4) = *(int *)(in_stack_00000004 + 0x2d4) + -1;
  }
  return *(undefined4 *)(in_stack_00000004 + 0x2d4);
}


// Assembly code:
// 004f1fd0: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_health.cpp_FUN_004f1fd0
//   XREF to: Stack[0x4] (READ)
// 004f1fd4: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 004f1fd8: CMP dword ptr [EDX + 0x2d4],0x0
// 004f1fdf: JLE 0x004f200e
//   XREF to: 004f200e (CONDITIONAL_JUMP)
// 004f1fe1: FLD float ptr [EDX + 0x2d8]
// 004f1fe7: FADD float ptr [ECX + 0x243c]
// 004f1fed: FST float ptr [ECX + 0x243c]
// 004f1ff3: FCOMP double ptr [0x0062ea31]
//   XREF to: 0062ea31 (READ)
// 004f1ff9: FNSTSW AX
// 004f1ffb: SAHF
// 004f1ffc: JBE 0x004f2008
//   XREF to: 004f2008 (CONDITIONAL_JUMP)
// 004f1ffe: MOV dword ptr [ECX + 0x243c],0x42c80000
// 004f2008: DEC dword ptr [EDX + 0x2d4]
//   Label: LAB_004f2008
// 004f200e: MOV EAX,dword ptr [EDX + 0x2d4]
//   Label: LAB_004f200e
// 004f2014: RET
