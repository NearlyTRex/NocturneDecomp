// Name: crt_unknown.c_FUN_00600bc2
// Address: 00600bc2
// Address Range: [[00600bc2, 00600c16]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_00600bc2()
// Cross-references:
//   core_dmodel.cpp_CDemonTriangle_copy_FUN_0047ef10 (0047ef10) at 0047ef49 [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_sortPolygonsByTexture_FUN_0047a820 (0047a820) at 0047a918 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_FUN_0051bd30 (0051bd30) at 0051beae [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_FUN_0051ef20 (0051ef20) at 0051ef8c [UNCONDITIONAL_CALL]

#include "nocturne.h"

undefined4 crt_unknown_c_FUN_00600bc2(void)

{
  code *pcVar1;
  undefined4 in_stack_00000004;
  int in_stack_0000000c;
  int in_stack_00000010;
  
  pcVar1 = *(code **)(in_stack_00000010 + 8);
  for (; in_stack_0000000c != 0; in_stack_0000000c = in_stack_0000000c + -1) {
    (*pcVar1)();
  }
  return in_stack_00000004;
}


// Assembly code:
// 00600bc2: PUSH EBX
//   Label: crt_unknown.c_FUN_00600bc2
// 00600bc3: PUSH ESI
// 00600bc4: PUSH EDI
// 00600bc5: PUSH EBP
// 00600bc6: SUB ESP,0x10
// 00600bc9: MOV EBX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x4] (READ)
// 00600bcd: MOV ESI,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x8] (READ)
// 00600bd1: MOV EDI,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0xc] (READ)
// 00600bd5: MOV EBP,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x10] (READ)
// 00600bd9: MOV dword ptr [ESP + 0x4],EBP
//   XREF to: Stack[-0x1c] (WRITE)
// 00600bdd: MOV dword ptr [ESP + 0x8],EBX
//   XREF to: Stack[-0x18] (WRITE)
// 00600be1: XOR EDX,EDX
// 00600be3: MOV EAX,dword ptr [EBP + 0x8]
// 00600be6: MOV dword ptr [ESP],EDX
//   XREF to: Stack[-0x20] (DATA)
// 00600be9: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00600bed: MOV EBP,dword ptr [EBP + 0x10]
// 00600bf0: TEST EDI,EDI
//   Label: LAB_00600bf0
// 00600bf2: JA 0x00600c00
//   XREF to: 00600c00 (CONDITIONAL_JUMP)
// 00600bf4: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x18] (READ)
// 00600bf8: ADD ESP,0x10
// 00600bfb: POP EBP
// 00600bfc: POP EDI
// 00600bfd: POP ESI
// 00600bfe: POP EBX
// 00600bff: RET
// 00600c00: PUSH ESI
//   Label: LAB_00600c00
// 00600c01: PUSH EBX
// 00600c02: CALL dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x14] (READ)
// 00600c06: ADD ESP,0x8
// 00600c09: DEC EDI
// 00600c0a: MOV ECX,dword ptr [ESP]
// 00600c0d: ADD ESI,EBP
// 00600c0f: INC ECX
// 00600c10: ADD EBX,EBP
// 00600c12: MOV dword ptr [ESP],ECX
// 00600c15: JMP 0x00600bf0
//   XREF to: 00600bf0 (UNCONDITIONAL_JUMP)
