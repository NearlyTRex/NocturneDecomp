// Name: core_larva.cpp_FUN_005039d0
// Address: 005039d0
// Address Range: [[005039d0, 00503a12]]
// Convention: unknown
// Signature: undefined core_larva.cpp_FUN_005039d0()
// Globals:
//   TerminatedCString s_sml_00630fbe
//   TerminatedCString s_med_00630fc2
//   TerminatedCString s_big_00630fc6
//   double DOUBLE_00630fcb = 0.300000000000000
//   double DOUBLE_00630fd3 = 0.700000000000000

#include "nocturne.h"

char * core_larva_cpp_FUN_005039d0(void)

{
  float in_stack_00000004;
  
  if (in_stack_00000004 < (float)DOUBLE_00630fcb) {
    return "sml";
  }
  if (in_stack_00000004 < (float)DOUBLE_00630fd3) {
    return "med";
  }
  return "big";
}


// Assembly code:
// 005039d0: PUSH EBP
//   Label: core_larva.cpp_FUN_005039d0
// 005039d1: MOV EBP,ESP
// 005039d3: SUB ESP,0x8
// 005039d6: AND ESP,0xfffffff8
// 005039d9: FLD float ptr [EBP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005039dc: FST double ptr [ESP]
//   XREF to: Stack[-0x10] (DATA)
// 005039df: FCOMP double ptr [0x00630fcb]
//   XREF to: 00630fcb (READ)
// 005039e5: FNSTSW AX
// 005039e7: SAHF
// 005039e8: JC 0x00503a01
//   XREF to: 00503a01 (CONDITIONAL_JUMP)
// 005039ea: FLD double ptr [ESP]
//   XREF to: Stack[-0x10] (DATA)
// 005039ed: FCOMP double ptr [0x00630fd3]
//   XREF to: 00630fd3 (READ)
// 005039f3: FNSTSW AX
// 005039f5: SAHF
// 005039f6: JNC 0x00503a0a
//   XREF to: 00503a0a (CONDITIONAL_JUMP)
// 005039f8: MOV EAX,0x630fc2
//   XREF to: 00630fc2 (DATA)
// 005039fd: MOV ESP,EBP
// 005039ff: POP EBP
// 00503a00: RET
// 00503a01: MOV EAX,0x630fbe
//   Label: LAB_00503a01
//   XREF to: 00630fbe (DATA)
// 00503a06: MOV ESP,EBP
// 00503a08: POP EBP
// 00503a09: RET
// 00503a0a: MOV EAX,0x630fc6
//   Label: LAB_00503a0a
//   XREF to: 00630fc6 (DATA)
// 00503a0f: MOV ESP,EBP
// 00503a11: POP EBP
// 00503a12: RET
