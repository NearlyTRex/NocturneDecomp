// Name: shape_meshlod.cpp_CLodMesh_FUN_00519680
// Address: 00519680
// Address Range: [[00519680, 0051970e]]
// Convention: __cdecl
// Signature: int shape_meshlod.cpp_CLodMesh_FUN_00519680(CLodMesh * this_ptr)
// Cross-references:
//   shape_meshlod.cpp_CLodMesh_FUN_00516ba0 (00516ba0) at 00516bdd [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_00661388
//   undefined4 DAT_0066138c
// Function calls:
//   shape_meshlod.cpp_CLodMesh_FUN_00518910

#include "nocturne.h"

int __cdecl shape_meshlod_cpp_CLodMesh_FUN_00519680(CLodMesh *this_ptr)

{
  SLodEdge *pSVar1;
  int iVar2;
  int iVar3;
  undefined4 local_20;
  undefined4 uStack_1c;
  int local_18;
  
  iVar2 = 0;
  local_20 = DAT_00661388;
  local_18 = -1;
  uStack_1c = DAT_0066138c;
  if (0 < this_ptr->edge_count) {
    iVar3 = 0;
    do {
      if (*(int *)(this_ptr->edges_ptr->field2_0x8 + iVar3 + 0xc) == 0) {
        if (*(int *)((int)this_ptr->edges_ptr->adjacent_tri_indices + iVar3 + -8) != 0) {
          shape_meshlod_cpp_CLodMesh_FUN_00518910(this_ptr);
        }
        pSVar1 = this_ptr->edges_ptr;
        if (*(double *)(pSVar1->field2_0x8 + iVar3) < (double)CONCAT44(uStack_1c,local_20)) {
          local_20 = *(undefined4 *)(pSVar1->field2_0x8 + iVar3);
          uStack_1c = *(undefined4 *)(pSVar1->field2_0x8 + iVar3 + 4);
          local_18 = iVar2;
        }
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0xf0;
    } while (iVar2 < this_ptr->edge_count);
  }
  return local_18;
}


// Assembly code:
// 00519680: PUSH EBX
//   Label: shape_meshlod.cpp_CLodMesh_FUN_00519680
// 00519681: PUSH ESI
// 00519682: PUSH EDI
// 00519683: PUSH EBP
// 00519684: MOV EBP,ESP
// 00519686: SUB ESP,0xc
// 00519689: AND ESP,0xfffffff8
// 0051968c: MOV ESI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0051968f: PUSH ESI
// 00519690: XOR EBX,EBX
// 00519692: MOV EDX,0xffffffff
// 00519697: MOV EAX,[0x00661388]
//   XREF to: 00661388 (READ)
// 0051969c: ADD ESP,0x4
// 0051969f: MOV ECX,dword ptr [ESI + 0x44]
// 005196a2: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x20] (DATA)
// 005196a5: MOV EAX,[0x0066138c]
//   XREF to: 0066138c (READ)
// 005196aa: MOV dword ptr [ESP + 0x8],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 005196ae: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 005196b2: TEST ECX,ECX
// 005196b4: JLE 0x005196d1
//   XREF to: 005196d1 (CONDITIONAL_JUMP)
// 005196b6: XOR EDI,EDI
// 005196b8: MOV EDX,dword ptr [ESI + 0x48]
//   Label: LAB_005196b8
// 005196bb: ADD EDX,EDI
// 005196bd: CMP dword ptr [EDX + 0x14],0x0
// 005196c1: JZ 0x005196dc
//   XREF to: 005196dc (CONDITIONAL_JUMP)
// 005196c3: INC EBX
//   Label: LAB_005196c3
// 005196c4: MOV EAX,dword ptr [ESI + 0x44]
// 005196c7: ADD EDI,0xf0
// 005196cd: CMP EBX,EAX
// 005196cf: JL 0x005196b8
//   XREF to: 005196b8 (CONDITIONAL_JUMP)
// 005196d1: MOV EAX,dword ptr [ESP + 0x8]
//   Label: LAB_005196d1
//   XREF to: Stack[-0x18] (READ)
// 005196d5: MOV ESP,EBP
// 005196d7: POP EBP
// 005196d8: POP EDI
// 005196d9: POP ESI
// 005196da: POP EBX
// 005196db: RET
// 005196dc: CMP dword ptr [EDX + 0x20],0x0
//   Label: LAB_005196dc
// 005196e0: JZ 0x005196ec
//   XREF to: 005196ec (CONDITIONAL_JUMP)
// 005196e2: PUSH EBX
// 005196e3: PUSH ESI
// 005196e4: CALL shape_meshlod.cpp_CLodMesh_FUN_00518910
//   XREF to: 00518910 (UNCONDITIONAL_CALL)
// 005196e9: ADD ESP,0x8
// 005196ec: MOV EDX,dword ptr [ESI + 0x48]
//   Label: LAB_005196ec
// 005196ef: ADD EDX,EDI
// 005196f1: FLD double ptr [EDX + 0x8]
// 005196f4: FCOMP double ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 005196f7: FNSTSW AX
// 005196f9: SAHF
// 005196fa: JNC 0x005196c3
//   XREF to: 005196c3 (CONDITIONAL_JUMP)
// 005196fc: MOV EAX,dword ptr [EDX + 0x8]
// 005196ff: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x20] (DATA)
// 00519702: MOV EAX,dword ptr [EDX + 0xc]
// 00519705: MOV dword ptr [ESP + 0x8],EBX
//   XREF to: Stack[-0x18] (WRITE)
// 00519709: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0051970d: JMP 0x005196c3
//   XREF to: 005196c3 (UNCONDITIONAL_JUMP)
