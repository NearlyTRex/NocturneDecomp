// Name: core_lever.cpp_FUN_00504c90
// Address: 00504c90
// Address Range: [[00504c90, 00504ced]]
// Convention: unknown
// Signature: undefined core_lever.cpp_FUN_00504c90()
// Cross-references:
//   core_hero.cpp_FUN_004f30f0 (004f30f0) at 004f3104 [UNCONDITIONAL_CALL]
//   core_lever.cpp_FUN_00505210 (00505210) at 00505225 [UNCONDITIONAL_CALL]
// Globals:
//   double DOUBLE_006310b8 = 0.5

#include "nocturne.h"

/* Signature: undefined1 actors_other_lever.cpp_FUN_00504c90(undefined4 param_1) */

void core_lever_cpp_FUN_00504c90(void)

{
  int in_stack_00000004;
  
  *(undefined4 *)(in_stack_00000004 + 0x418) = 1;
  if (*(float *)(in_stack_00000004 + 0x2dc) < (float)DOUBLE_006310b8) {
    *(undefined4 *)(in_stack_00000004 + 0x41c) = 0x3f800000;
    return;
  }
  *(undefined4 *)(in_stack_00000004 + 0x41c) = 0;
  return;
}


// Assembly code:
// 00504c90: PUSH ESI
//   Label: core_lever.cpp_FUN_00504c90
// 00504c91: PUSH EDI
// 00504c92: PUSH EBP
// 00504c93: MOV EBP,ESP
// 00504c95: SUB ESP,0x8
// 00504c98: AND ESP,0xfffffff8
// 00504c9b: MOV EDX,dword ptr [EBP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00504c9e: FLD float ptr [EDX + 0x2dc]
// 00504ca4: MOV dword ptr [EDX + 0x418],0x1
// 00504cae: FCOMP double ptr [0x006310b8]
//   XREF to: 006310b8 (READ)
// 00504cb4: FNSTSW AX
// 00504cb6: SAHF
// 00504cb7: JNC 0x00504cd6
//   XREF to: 00504cd6 (CONDITIONAL_JUMP)
// 00504cb9: XOR ESI,ESI
// 00504cbb: MOV EDI,0x3ff00000
// 00504cc0: MOV dword ptr [ESP],ESI
//   XREF to: Stack[-0x18] (DATA)
// 00504cc3: MOV dword ptr [ESP + 0x4],EDI
//   XREF to: Stack[-0x14] (WRITE)
// 00504cc7: FLD double ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 00504cca: FSTP float ptr [EDX + 0x41c]
// 00504cd0: MOV ESP,EBP
// 00504cd2: POP EBP
// 00504cd3: POP EDI
// 00504cd4: POP ESI
// 00504cd5: RET
// 00504cd6: XOR ECX,ECX
//   Label: LAB_00504cd6
// 00504cd8: MOV dword ptr [ESP],ECX
//   XREF to: Stack[-0x18] (DATA)
// 00504cdb: MOV dword ptr [ESP + 0x4],ECX
//   XREF to: Stack[-0x14] (WRITE)
// 00504cdf: FLD double ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 00504ce2: FSTP float ptr [EDX + 0x41c]
// 00504ce8: MOV ESP,EBP
// 00504cea: POP EBP
// 00504ceb: POP EDI
// 00504cec: POP ESI
// 00504ced: RET
