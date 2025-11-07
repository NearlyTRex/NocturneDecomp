// Name: shape_meshlod.cpp_CLodMesh_buildEdges_FUN_00515ba0
// Address: 00515ba0
// Address Range: [[00515ba0, 00515c98]]
// Convention: __cdecl
// Signature: int shape_meshlod.cpp_CLodMesh_buildEdges_FUN_00515ba0(CLodMesh * this_ptr)
// Cross-references:
//   shape_meshlod.cpp_CLodMesh_FUN_00516d50 (00516d50) at 00516dc2 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_CLodMesh_FUN_0051b8a0 (0051b8a0) at 0051b8e4 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_CLodMesh_getLOD_FUN_0051b920 (0051b920) at 0051b94d [UNCONDITIONAL_CALL]
// Function calls:
//   shape_meshlod.cpp_CLodMesh_FUN_00515ec0
//   shape_meshlod.cpp_FUN_00515ca0

#include "nocturne.h"

int __cdecl shape_meshlod_cpp_CLodMesh_buildEdges_FUN_00515ba0(CLodMesh *this_ptr)

{
  SLodTriangle *pSVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_1c;
  int local_18;
  
  local_1c = 0;
  if (0 < this_ptr->vertex_count) {
    iVar4 = 0;
    do {
      *(undefined4 *)((int)this_ptr->vertex_data->adjacent_edge_indices + iVar4 + -4) = 0;
      local_1c = local_1c + 1;
      iVar4 = iVar4 + 0x4c4;
    } while (local_1c < this_ptr->vertex_count);
  }
  this_ptr->edge_count = 0;
  local_18 = 0;
  if (0 < this_ptr->tri_count) {
    local_1c = 0;
    do {
      iVar4 = local_1c;
      pSVar1 = this_ptr->triangle_data;
      if (*(int *)(pSVar1->field9_0x44 + local_1c + -4) == 0) {
        iVar5 = 0;
        do {
          iVar2 = shape_meshlod_cpp_CLodMesh_FUN_00515ec0(this_ptr);
          iVar3 = iVar5 + -1;
          if (iVar3 < 0) {
            iVar3 = 2;
          }
          *(int *)(pSVar1->field9_0x44 + iVar3 * 4 + iVar4 + -0x10) = iVar2;
          local_1c = local_18;
          iVar5 = iVar5 + 1;
          shape_meshlod_cpp_FUN_00515ca0();
        } while (iVar5 < 3);
      }
      local_1c = local_1c + 0x8c;
      local_18 = local_18 + 1;
    } while (local_18 < this_ptr->tri_count);
  }
  return local_1c;
}


// Assembly code:
// 00515ba0: PUSH EBX
//   Label: shape_meshlod.cpp_CLodMesh_buildEdges_FUN_00515ba0
// 00515ba1: PUSH ESI
// 00515ba2: PUSH EDI
// 00515ba3: PUSH EBP
// 00515ba4: MOV EBP,ESP
// 00515ba6: SUB ESP,0xc
// 00515ba9: MOV EDI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00515bac: MOV EDX,dword ptr [EDI]
// 00515bae: XOR EAX,EAX
// 00515bb0: TEST EDX,EDX
// 00515bb2: JLE 0x00515be0
//   XREF to: 00515be0 (CONDITIONAL_JUMP)
// 00515bb4: XOR EDX,EDX
// 00515bb6: MOV EBX,dword ptr [EDI + 0x4]
//   Label: LAB_00515bb6
// 00515bb9: MOV dword ptr [EDX + EBX*0x1 + 0x3f8],0x0
// 00515bc4: INC EAX
// 00515bc5: MOV ECX,dword ptr [EDI]
// 00515bc7: ADD EDX,0x4c4
// 00515bcd: CMP EAX,ECX
// 00515bcf: JL 0x00515bb6
//   XREF to: 00515bb6 (CONDITIONAL_JUMP)
// 00515bd1: LEA EAX,[EAX]
// 00515bd7: LEA EDX,[EDX]
// 00515bdd: LEA EAX,[EAX]
// 00515be0: MOV ESI,dword ptr [EDI + 0x8]
//   Label: LAB_00515be0
// 00515be3: XOR EBX,EBX
// 00515be5: MOV dword ptr [EDI + 0x44],0x0
// 00515bec: MOV dword ptr [EBP + -0x8],EBX
//   XREF to: Stack[-0x18] (WRITE)
// 00515bef: TEST ESI,ESI
// 00515bf1: JLE 0x00515c87
//   XREF to: 00515c87 (CONDITIONAL_JUMP)
// 00515bf7: MOV dword ptr [EBP + -0xc],EBX
//   XREF to: Stack[-0x1c] (WRITE)
// 00515bfa: MOV EDX,dword ptr [EBP + -0xc]
//   Label: LAB_00515bfa
//   XREF to: Stack[-0x1c] (READ)
// 00515bfd: MOV EAX,dword ptr [EDI + 0xc]
// 00515c00: ADD EDX,EAX
// 00515c02: MOV ESI,dword ptr [EDX + 0x40]
// 00515c05: MOV dword ptr [EBP + -0x4],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 00515c08: TEST ESI,ESI
// 00515c0a: JNZ 0x00515c6a
//   XREF to: 00515c6a (CONDITIONAL_JUMP)
// 00515c0c: MOV ESI,EDX
// 00515c0e: XOR EBX,EBX
// 00515c10: LEA EAX,[EBX + 0x1]
//   Label: LAB_00515c10
// 00515c13: PUSH 0x1
// 00515c15: CMP EAX,0x3
// 00515c18: JL 0x00515c1c
//   XREF to: 00515c1c (CONDITIONAL_JUMP)
// 00515c1a: XOR EAX,EAX
// 00515c1c: MOV EDX,dword ptr [EBP + -0x4]
//   Label: LAB_00515c1c
//   XREF to: Stack[-0x14] (READ)
// 00515c1f: SHL EAX,0x2
// 00515c22: ADD EAX,EDX
// 00515c24: MOV ECX,dword ptr [EAX + 0x10]
// 00515c27: PUSH ECX
// 00515c28: MOV EAX,dword ptr [ESI + 0x10]
// 00515c2b: PUSH EAX
// 00515c2c: PUSH EDI
// 00515c2d: CALL shape_meshlod.cpp_CLodMesh_FUN_00515ec0
//   XREF to: 00515ec0 (UNCONDITIONAL_CALL)
// 00515c32: MOV EDX,EAX
// 00515c34: LEA EAX,[EBX + -0x1]
// 00515c37: ADD ESP,0x10
// 00515c3a: TEST EAX,EAX
// 00515c3c: JL 0x00515c92
//   XREF to: 00515c92 (CONDITIONAL_JUMP)
// 00515c3e: MOV ECX,dword ptr [EBP + -0x4]
//   Label: LAB_00515c3e
//   XREF to: Stack[-0x14] (READ)
// 00515c41: SHL EAX,0x2
// 00515c44: ADD EAX,ECX
// 00515c46: MOV dword ptr [EAX + 0x34],EDX
// 00515c49: IMUL EDX,EDX,0xf0
// 00515c4f: MOV EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 00515c52: PUSH EAX
// 00515c53: MOV EAX,dword ptr [EDI + 0x48]
// 00515c56: ADD EAX,EDX
// 00515c58: PUSH EAX
// 00515c59: ADD ESI,0x4
// 00515c5c: INC EBX
// 00515c5d: CALL shape_meshlod.cpp_FUN_00515ca0
//   XREF to: 00515ca0 (UNCONDITIONAL_CALL)
// 00515c62: ADD ESP,0x8
// 00515c65: CMP EBX,0x3
// 00515c68: JL 0x00515c10
//   XREF to: 00515c10 (CONDITIONAL_JUMP)
// 00515c6a: MOV EAX,dword ptr [EBP + -0xc]
//   Label: LAB_00515c6a
//   XREF to: Stack[-0x1c] (READ)
// 00515c6d: MOV EDX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 00515c70: MOV ECX,dword ptr [EDI + 0x8]
// 00515c73: ADD EAX,0x8c
// 00515c78: INC EDX
// 00515c79: MOV dword ptr [EBP + -0xc],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 00515c7c: MOV dword ptr [EBP + -0x8],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 00515c7f: CMP EDX,ECX
// 00515c81: JL 0x00515bfa
//   XREF to: 00515bfa (CONDITIONAL_JUMP)
// 00515c87: PUSH EDI
//   Label: LAB_00515c87
// 00515c88: ADD ESP,0x4
// 00515c8b: MOV ESP,EBP
// 00515c8d: POP EBP
// 00515c8e: POP EDI
// 00515c8f: POP ESI
// 00515c90: POP EBX
// 00515c91: RET
// 00515c92: MOV EAX,0x2
//   Label: LAB_00515c92
// 00515c97: JMP 0x00515c3e
//   XREF to: 00515c3e (UNCONDITIONAL_JUMP)
