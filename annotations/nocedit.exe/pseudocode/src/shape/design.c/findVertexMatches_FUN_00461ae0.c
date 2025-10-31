// Name: shape_design.c_findVertexMatches_FUN_00461ae0
// Address: 00461ae0
// Address Range: [[00461ae0, 00461b66]]
// Convention: __cdecl
// Signature: int shape_design.c_findVertexMatches_FUN_00461ae0(int * vertices1, int * vertices2, int count1, int count2)
// Cross-references:
//   shape_design.c_configureSinglePassPolygonReduction_FUN_00465560 (00465560) at 004656fb [UNCONDITIONAL_CALL]
//   shape_design.c_mergePolygonsWithValidation_FUN_00465b40 (00465b40) at 00465bcf [UNCONDITIONAL_CALL]
//   shape_design.c_optimizePolygonMesh_FUN_004658e0 (004658e0) at 00465a16 [UNCONDITIONAL_CALL]

#include "nocturne.h"

int __cdecl
shape_design_c_findVertexMatches_FUN_00461ae0(int *vertices1,int *vertices2,int count1,int count2)

{
  uint local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  local_14 = 0;
  for (local_1c = 0; local_1c < count1; local_1c = local_1c + 1) {
    for (local_18 = 0; local_18 < count2; local_18 = local_18 + 1) {
      if (vertices1[local_1c] == vertices2[local_18]) {
        local_14 = local_14 + 1;
      }
    }
  }
  local_20 = (uint)(local_14 == 2);
  return local_20;
}


// Assembly code:
// 00461ae0: PUSH EBX
//   Label: shape_design.c_findVertexMatches_FUN_00461ae0
// 00461ae1: PUSH ESI
// 00461ae2: PUSH EDI
// 00461ae3: PUSH EBP
// 00461ae4: MOV EBP,ESP
// 00461ae6: SUB ESP,0x10
// 00461aec: MOV dword ptr [EBP + -0x4],0x0
//   XREF to: Stack[-0x14] (WRITE)
// 00461af3: MOV dword ptr [EBP + -0xc],0x0
//   XREF to: Stack[-0x1c] (WRITE)
// 00461afa: JMP 0x00461b02
//   XREF to: 00461b02 (UNCONDITIONAL_JUMP)
// 00461afc: MOV EAX,dword ptr [EBP + -0xc]
//   Label: LAB_00461afc
//   XREF to: Stack[-0x1c] (READ)
// 00461aff: INC dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ_WRITE)
// 00461b02: MOV EAX,dword ptr [EBP + -0xc]
//   Label: LAB_00461b02
//   XREF to: Stack[-0x1c] (READ)
// 00461b05: CMP EAX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 00461b08: JGE 0x00461b47
//   XREF to: 00461b47 (CONDITIONAL_JUMP)
// 00461b0a: MOV dword ptr [EBP + -0x8],0x0
//   XREF to: Stack[-0x18] (WRITE)
// 00461b11: JMP 0x00461b19
//   XREF to: 00461b19 (UNCONDITIONAL_JUMP)
// 00461b13: MOV EAX,dword ptr [EBP + -0x8]
//   Label: LAB_00461b13
//   XREF to: Stack[-0x18] (READ)
// 00461b16: INC dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ_WRITE)
// 00461b19: MOV EAX,dword ptr [EBP + -0x8]
//   Label: LAB_00461b19
//   XREF to: Stack[-0x18] (READ)
// 00461b1c: CMP EAX,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 00461b1f: JGE 0x00461b45
//   XREF to: 00461b45 (CONDITIONAL_JUMP)
// 00461b21: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 00461b24: SHL EAX,0x2
// 00461b27: MOV ECX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00461b2a: ADD ECX,EAX
// 00461b2c: MOV EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 00461b2f: SHL EAX,0x2
// 00461b32: MOV EDX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00461b35: ADD EDX,EAX
// 00461b37: MOV EAX,dword ptr [ECX]
// 00461b39: CMP EAX,dword ptr [EDX]
// 00461b3b: JNZ 0x00461b43
//   XREF to: 00461b43 (CONDITIONAL_JUMP)
// 00461b3d: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 00461b40: INC dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ_WRITE)
// 00461b43: JMP 0x00461b13
//   Label: LAB_00461b43
//   XREF to: 00461b13 (UNCONDITIONAL_JUMP)
// 00461b45: JMP 0x00461afc
//   Label: LAB_00461b45
//   XREF to: 00461afc (UNCONDITIONAL_JUMP)
// 00461b47: CMP dword ptr [EBP + -0x4],0x2
//   Label: LAB_00461b47
//   XREF to: Stack[-0x14] (READ)
// 00461b4b: JNZ 0x00461b56
//   XREF to: 00461b56 (CONDITIONAL_JUMP)
// 00461b4d: MOV dword ptr [EBP + -0x10],0x1
//   XREF to: Stack[-0x20] (WRITE)
// 00461b54: JMP 0x00461b5d
//   XREF to: 00461b5d (UNCONDITIONAL_JUMP)
// 00461b56: MOV dword ptr [EBP + -0x10],0x0
//   Label: LAB_00461b56
//   XREF to: Stack[-0x20] (WRITE)
// 00461b5d: MOV EAX,dword ptr [EBP + -0x10]
//   Label: LAB_00461b5d
//   XREF to: Stack[-0x20] (READ)
// 00461b60: MOV ESP,EBP
// 00461b62: POP EBP
// 00461b63: POP EDI
// 00461b64: POP ESI
// 00461b65: POP EBX
// 00461b66: RET
