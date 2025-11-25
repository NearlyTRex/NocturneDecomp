// Name: shape_superopt.cpp_CObj_FUN_005d5800
// Address: 005d5800
// Address Range: [[005d5800, 005d5baf]]
// Convention: __cdecl
// Signature: int shape_superopt.cpp_CObj_FUN_005d5800(CObj * this_ptr)
// Function calls:
//   shape_superopt.cpp_FUN_005d63d0

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x005d5b52) */

int __cdecl shape_superopt_cpp_CObj_FUN_005d5800(CObj *this_ptr)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  CPoly *pCVar4;
  CPoly *pCVar5;
  BADSPACEBASE *in_ESP;
  CVector3d *pCVar6;
  uint uVar7;
  undefined4 *puVar8;
  int *piVar9;
  undefined4 *puVar10;
  byte bVar11;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  int in_stack_00000010;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40 [6];
  int local_28;
  double *local_24;
  uint local_20;
  uint local_1c;
  CPoly *local_18;
  double *local_14;
  
  bVar11 = 0;
  if (in_stack_00000010 == 0) {
    if (this_ptr->count == 0) {
      iVar2 = 0;
    }
    else {
      (**(code **)((int)this_ptr->vtable + 0x84))();
      iVar2 = (**(code **)((int)this_ptr->vtable + 0xd8))();
    }
    return iVar2;
  }
  *(byte *)(in_stack_00000010 + 0x61) = *(byte *)(in_stack_00000010 + 0x61) | 0x20;
  local_18 = this_ptr->poly_array;
  local_20 = 0;
  if (this_ptr->count != 0) {
    local_24 = (double *)(in_stack_00000010 + 0x40);
    pCVar6 = &local_18->normal;
    piVar9 = &local_18->vertex_idx_0;
    piVar3 = (int *)(in_stack_00000010 + 4);
    do {
      if (((local_18->field8_0x60 & 0x2000) == 0) &&
         (1.0 - (double)CONCAT44(in_stack_0000000c,in_stack_00000008) <=
          pCVar6->z * *(double *)(in_stack_00000010 + 0x50) +
          pCVar6->x * *local_24 + pCVar6->y * *(double *)(in_stack_00000010 + 0x48))) {
        local_28 = 0xffffffff;
        if ((((*piVar9 == *(int *)(in_stack_00000010 + 8)) && (piVar9[1] == *piVar3)) ||
            ((*piVar9 == *(int *)(in_stack_00000010 + 0xc) &&
             (piVar9[1] == *(int *)(in_stack_00000010 + 8))))) ||
           ((*piVar9 == *piVar3 && (piVar9[1] == *(int *)(in_stack_00000010 + 0xc))))) {
          local_28 = 2;
LAB_005d59af:
          puVar1 = (undefined4 *)
                   ((int)this_ptr->vertex_data +
                   *(int *)((int)local_18->uv_coords + local_28 * 4 + -0xc) * 0x38);
          local_14 = (double *)(in_stack_00000010 + 0x40);
          shape_superopt_cpp_FUN_005d63d0();
          puVar8 = local_40;
          puVar10 = &local_58;
          for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar10 = *puVar8;
            puVar8 = puVar8 + (uint)bVar11 * -2 + 1;
            puVar10 = puVar10 + (uint)bVar11 * -2 + 1;
          }
          *puVar1 = local_58;
          puVar1[1] = local_54;
          puVar1[2] = local_50;
          puVar1[3] = local_4c;
          puVar1[4] = local_48;
          puVar1[5] = local_44;
          (local_18->normal).x = *local_14;
          *(undefined4 *)&(local_18->normal).y = *(undefined4 *)(local_14 + 1);
          *(undefined4 *)((int)&(local_18->normal).y + 4) = *(undefined4 *)((int)local_14 + 0xc);
          *(undefined4 *)&(local_18->normal).z = *(undefined4 *)(local_14 + 2);
          *(undefined4 *)((int)&(local_18->normal).z + 4) = *(undefined4 *)((int)local_14 + 0x14);
          iVar2 = (**(code **)((int)this_ptr->vtable + 0xd8))();
          return iVar2;
        }
        if ((piVar9[1] == *(int *)(in_stack_00000010 + 0xc)) &&
           (piVar9[2] == *(int *)(in_stack_00000010 + 8))) {
          local_28 = 0;
          goto LAB_005d59af;
        }
        if ((piVar9[1] == *piVar3) && (piVar9[2] == *(int *)(in_stack_00000010 + 0xc))) {
          local_28 = 0;
          goto LAB_005d59af;
        }
        if ((piVar9[1] == *(int *)(in_stack_00000010 + 8)) && (piVar9[2] == *piVar3)) {
          local_28 = 0;
          goto LAB_005d59af;
        }
        if ((piVar9[2] == *piVar3) && (*piVar9 == *(int *)(in_stack_00000010 + 0xc))) {
          local_28 = 1;
          goto LAB_005d59af;
        }
        if ((piVar9[2] == *(int *)(in_stack_00000010 + 8)) && (*piVar9 == *piVar3)) {
          local_28 = 1;
          goto LAB_005d59af;
        }
        if ((piVar9[2] == *(int *)(in_stack_00000010 + 0xc)) &&
           (*(int *)(in_stack_00000010 + 8) == *piVar9)) {
          local_28 = 1;
          goto LAB_005d59af;
        }
      }
      local_18 = local_18 + 1;
      pCVar6 = (CVector3d *)((int)(pCVar6 + 4) + 8);
      piVar9 = piVar9 + 0x1a;
      local_20 = local_20 + 1;
    } while (local_20 < (uint)this_ptr->count);
  }
  local_1c = 0;
  pCVar5 = this_ptr->poly_array;
  if (this_ptr->count != 0) {
    do {
      if ((pCVar5->field8_0x60 & 0x2000) != 0) {
        uVar7 = 0;
        pCVar4 = this_ptr->poly_array;
        if (this_ptr->count != 0) {
          do {
            if (((pCVar4->field8_0x60 & 0x2000) == 0) &&
               (iVar2 = (**(code **)((int)pCVar5->vtable + 0x70))(), iVar2 != 0)) {
              iVar2 = (**(code **)((int)this_ptr->vtable + 0xd8))();
              return iVar2;
            }
            uVar7 = uVar7 + 1;
            pCVar4 = pCVar4 + 1;
          } while (uVar7 < (uint)this_ptr->count);
        }
      }
      pCVar5 = pCVar5 + 1;
      local_1c = local_1c + 1;
    } while (local_1c < (uint)this_ptr->count);
  }
  uVar7 = 0;
  pCVar5 = this_ptr->poly_array;
  if (this_ptr->count != 0) {
    do {
      if ((pCVar5->field8_0x60 & 0x2000) == 0) {
        iVar2 = (**(code **)((int)this_ptr->vtable + 0xd8))();
        return iVar2;
      }
      uVar7 = uVar7 + 1;
      pCVar5 = pCVar5 + 1;
    } while (uVar7 < (uint)this_ptr->count);
  }
  return 1;
}


// Assembly code:
// 005d5800: PUSH EBX
//   Label: shape_superopt.cpp_CObj_FUN_005d5800
// 005d5801: PUSH ESI
// 005d5802: PUSH EDI
// 005d5803: PUSH EBP
// 005d5804: MOV EBP,ESP
// 005d5806: SUB ESP,0x50
// 005d5809: AND ESP,0xfffffff8
// 005d580c: MOV EDX,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 005d580f: TEST EDX,EDX
// 005d5811: JNZ 0x005d5855
//   XREF to: 005d5855 (CONDITIONAL_JUMP)
// 005d5813: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005d5816: CMP dword ptr [EAX + 0x8],0x0
// 005d581a: JNZ 0x005d5825
//   XREF to: 005d5825 (CONDITIONAL_JUMP)
// 005d581c: XOR EAX,EAX
// 005d581e: MOV ESP,EBP
//   Label: LAB_005d581e
// 005d5820: POP EBP
// 005d5821: POP EDI
// 005d5822: POP ESI
// 005d5823: POP EBX
// 005d5824: RET
// 005d5825: PUSH 0x2000
//   Label: LAB_005d5825
// 005d582a: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005d582d: MOV EAX,dword ptr [EAX + 0x18]
// 005d5830: PUSH EBX
// 005d5831: CALL dword ptr [EAX + 0x84]
// 005d5837: ADD ESP,0x8
// 005d583a: MOV ESI,dword ptr [EBX + 0xc]
// 005d583d: PUSH ESI
// 005d583e: MOV EDI,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 005d5841: PUSH EDI
// 005d5842: MOV EDX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005d5845: PUSH EDX
// 005d5846: MOV EAX,dword ptr [EBX + 0x18]
// 005d5849: PUSH EBX
// 005d584a: CALL dword ptr [EAX + 0xd8]
// 005d5850: ADD ESP,0x10
// 005d5853: JMP 0x005d581e
//   XREF to: 005d581e (UNCONDITIONAL_JUMP)
// 005d5855: MOV EAX,EDX
//   Label: LAB_005d5855
// 005d5857: MOV DL,byte ptr [EDX + 0x61]
// 005d585a: OR DL,0x20
// 005d585d: MOV byte ptr [EAX + 0x61],DL
// 005d5860: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005d5863: FLD1
// 005d5865: MOV EAX,dword ptr [EAX + 0xc]
// 005d5868: XOR EBX,EBX
// 005d586a: MOV dword ptr [ESP + 0x48],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 005d586e: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005d5871: FSUB double ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005d5874: MOV dword ptr [ESP + 0x40],EBX
//   XREF to: Stack[-0x20] (WRITE)
// 005d5878: MOV ESI,dword ptr [EAX + 0x8]
// 005d587b: FSTP double ptr [ESP]
//   XREF to: Stack[-0x60] (DATA)
// 005d587e: TEST ESI,ESI
// 005d5880: JBE 0x005d58f2
//   XREF to: 005d58f2 (CONDITIONAL_JUMP)
// 005d5882: MOV EAX,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 005d5885: MOV ESI,dword ptr [ESP + 0x48]
//   XREF to: Stack[-0x18] (READ)
// 005d5889: MOV EDI,dword ptr [ESP + 0x48]
//   XREF to: Stack[-0x18] (READ)
// 005d588d: MOV EDX,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 005d5890: ADD EAX,0x40
// 005d5893: ADD ESI,0x40
// 005d5896: ADD EDI,0x4
// 005d5899: ADD EDX,0x4
// 005d589c: MOV dword ptr [ESP + 0x3c],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 005d58a0: MOV EAX,dword ptr [ESP + 0x48]
//   Label: LAB_005d58a0
//   XREF to: Stack[-0x18] (READ)
// 005d58a4: TEST byte ptr [EAX + 0x61],0x20
// 005d58a8: JNZ 0x005d58ce
//   XREF to: 005d58ce (CONDITIONAL_JUMP)
// 005d58aa: MOV EAX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[-0x24] (READ)
// 005d58ae: FLD double ptr [ESI + 0x8]
// 005d58b1: FMUL double ptr [EAX + 0x8]
// 005d58b4: FLD double ptr [ESI]
// 005d58b6: FMUL double ptr [EAX]
// 005d58b8: FADDP
// 005d58ba: FLD double ptr [ESI + 0x10]
// 005d58bd: FMUL double ptr [EAX + 0x10]
// 005d58c0: FADDP
// 005d58c2: FCOMP double ptr [ESP]
//   XREF to: Stack[-0x60] (DATA)
// 005d58c5: FNSTSW AX
// 005d58c7: SAHF
// 005d58c8: JNC 0x005d5984
//   XREF to: 005d5984 (CONDITIONAL_JUMP)
// 005d58ce: MOV ECX,dword ptr [ESP + 0x48]
//   Label: LAB_005d58ce
//   XREF to: Stack[-0x18] (READ)
// 005d58d2: MOV EAX,dword ptr [ESP + 0x40]
//   XREF to: Stack[-0x20] (READ)
// 005d58d6: ADD ECX,0x68
// 005d58d9: ADD ESI,0x68
// 005d58dc: MOV dword ptr [ESP + 0x48],ECX
//   XREF to: Stack[-0x18] (WRITE)
// 005d58e0: MOV ECX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005d58e3: ADD EDI,0x68
// 005d58e6: INC EAX
// 005d58e7: MOV EBX,dword ptr [ECX + 0x8]
// 005d58ea: MOV dword ptr [ESP + 0x40],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 005d58ee: CMP EAX,EBX
// 005d58f0: JC 0x005d58a0
//   XREF to: 005d58a0 (CONDITIONAL_JUMP)
// 005d58f2: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_005d58f2
//   XREF to: Stack[0x4] (READ)
// 005d58f5: XOR ESI,ESI
// 005d58f7: MOV EDI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005d58fa: MOV dword ptr [ESP + 0x44],ESI
//   XREF to: Stack[-0x1c] (WRITE)
// 005d58fe: MOV EDX,dword ptr [EAX + 0x8]
// 005d5901: MOV EDI,dword ptr [EDI + 0xc]
// 005d5904: TEST EDX,EDX
// 005d5906: JBE 0x005d594e
//   XREF to: 005d594e (CONDITIONAL_JUMP)
// 005d5908: TEST byte ptr [EDI + 0x61],0x20
//   Label: LAB_005d5908
// 005d590c: JZ 0x005d5938
//   XREF to: 005d5938 (CONDITIONAL_JUMP)
// 005d590e: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005d5911: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005d5914: XOR ESI,ESI
// 005d5916: MOV EDX,dword ptr [EAX + 0x8]
// 005d5919: MOV EBX,dword ptr [EBX + 0xc]
// 005d591c: TEST EDX,EDX
// 005d591e: JBE 0x005d5938
//   XREF to: 005d5938 (CONDITIONAL_JUMP)
// 005d5920: TEST byte ptr [EBX + 0x61],0x20
//   Label: LAB_005d5920
// 005d5924: JZ 0x005d5b57
//   XREF to: 005d5b57 (CONDITIONAL_JUMP)
// 005d592a: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_005d592a
//   XREF to: Stack[0x4] (READ)
// 005d592d: INC ESI
// 005d592e: MOV EDX,dword ptr [EAX + 0x8]
// 005d5931: ADD EBX,0x68
// 005d5934: CMP ESI,EDX
// 005d5936: JC 0x005d5920
//   XREF to: 005d5920 (CONDITIONAL_JUMP)
// 005d5938: MOV ECX,dword ptr [ESP + 0x44]
//   Label: LAB_005d5938
//   XREF to: Stack[-0x1c] (READ)
// 005d593c: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005d593f: ADD EDI,0x68
// 005d5942: INC ECX
// 005d5943: MOV EBX,dword ptr [EDX + 0x8]
// 005d5946: MOV dword ptr [ESP + 0x44],ECX
//   XREF to: Stack[-0x1c] (WRITE)
// 005d594a: CMP ECX,EBX
// 005d594c: JC 0x005d5908
//   XREF to: 005d5908 (CONDITIONAL_JUMP)
// 005d594e: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_005d594e
//   XREF to: Stack[0x4] (READ)
// 005d5951: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005d5954: XOR ESI,ESI
// 005d5956: MOV EDI,dword ptr [EAX + 0x8]
// 005d5959: MOV EBX,dword ptr [EBX + 0xc]
// 005d595c: TEST EDI,EDI
// 005d595e: JBE 0x005d5978
//   XREF to: 005d5978 (CONDITIONAL_JUMP)
// 005d5960: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005d5963: TEST byte ptr [EBX + 0x61],0x20
//   Label: LAB_005d5963
// 005d5967: JZ 0x005d5b8d
//   XREF to: 005d5b8d (CONDITIONAL_JUMP)
// 005d596d: INC ESI
// 005d596e: MOV ECX,dword ptr [EAX + 0x8]
// 005d5971: ADD EBX,0x68
// 005d5974: CMP ESI,ECX
// 005d5976: JC 0x005d5963
//   XREF to: 005d5963 (CONDITIONAL_JUMP)
// 005d5978: MOV EAX,0x1
//   Label: LAB_005d5978
// 005d597d: MOV ESP,EBP
// 005d597f: POP EBP
// 005d5980: POP EDI
// 005d5981: POP ESI
// 005d5982: POP EBX
// 005d5983: RET
// 005d5984: MOV ECX,0xffffffff
//   Label: LAB_005d5984
// 005d5989: MOV EBX,EDI
// 005d598b: MOV dword ptr [ESP + 0x38],ECX
//   XREF to: Stack[-0x28] (WRITE)
// 005d598f: MOV ECX,dword ptr [EDI]
// 005d5991: MOV EAX,EDX
// 005d5993: CMP ECX,dword ptr [EDX + 0x4]
// 005d5996: JNZ 0x005d5a81
//   XREF to: 005d5a81 (CONDITIONAL_JUMP)
// 005d599c: MOV ECX,dword ptr [EDI + 0x4]
// 005d599f: CMP ECX,dword ptr [EDX]
// 005d59a1: JNZ 0x005d5a81
//   XREF to: 005d5a81 (CONDITIONAL_JUMP)
// 005d59a7: MOV dword ptr [ESP + 0x38],0x2
//   Label: LAB_005d59a7
//   XREF to: Stack[-0x28] (WRITE)
// 005d59af: MOV EAX,dword ptr [ESP + 0x38]
//   Label: LAB_005d59af
//   XREF to: Stack[-0x28] (READ)
// 005d59b3: MOV EDX,dword ptr [ESP + 0x48]
//   XREF to: Stack[-0x18] (READ)
// 005d59b7: SHL EAX,0x2
// 005d59ba: ADD EAX,EDX
// 005d59bc: MOV EAX,dword ptr [EAX + 0x4]
// 005d59bf: SHL EAX,0x3
// 005d59c2: MOV ESI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005d59c5: MOV EDX,EAX
// 005d59c7: SHL EAX,0x3
// 005d59ca: MOV ESI,dword ptr [ESI + 0x4]
// 005d59cd: SUB EAX,EDX
// 005d59cf: LEA EBX,[ESI + EAX*0x1]
// 005d59d2: MOV EAX,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 005d59d5: ADD EAX,0x40
// 005d59d8: MOV dword ptr [ESP + 0x4c],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005d59dc: PUSH EAX
// 005d59dd: MOV EAX,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 005d59e0: MOV EAX,dword ptr [EAX + 0x4]
// 005d59e3: SHL EAX,0x3
// 005d59e6: MOV EDX,EAX
// 005d59e8: SHL EAX,0x3
// 005d59eb: SUB EAX,EDX
// 005d59ed: ADD ESI,EAX
// 005d59ef: PUSH ESI
// 005d59f0: PUSH EBX
// 005d59f1: LEA ESI,[ESP + 0x2c]
//   XREF to: Stack[-0x40] (DATA)
// 005d59f5: LEA EDI,[ESP + 0x14]
//   XREF to: Stack[-0x58] (DATA)
// 005d59f9: CALL shape_superopt.cpp_FUN_005d63d0
//   XREF to: 005d63d0 (UNCONDITIONAL_CALL)
// 005d59fe: MOV ECX,0x6
// 005d5a03: LEA ESI,[ESP + 0x2c]
//   XREF to: Stack[-0x40] (DATA)
// 005d5a07: ADD ESP,0xc
// 005d5a0a: MOVSD.REP ES:EDI,ESI
// 005d5a0c: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x58] (READ)
// 005d5a10: MOV dword ptr [EBX],EAX
// 005d5a12: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x54] (READ)
// 005d5a16: MOV dword ptr [EBX + 0x4],EAX
// 005d5a19: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x50] (READ)
// 005d5a1d: MOV dword ptr [EBX + 0x8],EAX
// 005d5a20: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x4c] (READ)
// 005d5a24: MOV EDX,dword ptr [ESP + 0x4c]
//   XREF to: Stack[-0x14] (READ)
// 005d5a28: MOV dword ptr [EBX + 0xc],EAX
// 005d5a2b: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x48] (READ)
// 005d5a2f: MOV ESI,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 005d5a32: MOV dword ptr [EBX + 0x10],EAX
// 005d5a35: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x44] (READ)
// 005d5a39: MOV EDI,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005d5a3c: MOV dword ptr [EBX + 0x14],EAX
// 005d5a3f: MOV EAX,dword ptr [ESP + 0x48]
//   XREF to: Stack[-0x18] (READ)
// 005d5a43: FLD double ptr [EDX]
// 005d5a45: MOV EBX,dword ptr [ESP + 0x48]
//   XREF to: Stack[-0x18] (READ)
// 005d5a49: FSTP double ptr [EAX + 0x40]
// 005d5a4c: PUSH EBX
// 005d5a4d: MOV ECX,dword ptr [EDX + 0x8]
// 005d5a50: MOV dword ptr [EAX + 0x48],ECX
// 005d5a53: MOV ECX,dword ptr [EDX + 0xc]
// 005d5a56: MOV dword ptr [EAX + 0x4c],ECX
// 005d5a59: PUSH ESI
// 005d5a5a: MOV ECX,dword ptr [EDX + 0x10]
// 005d5a5d: MOV dword ptr [EAX + 0x50],ECX
// 005d5a60: MOV ECX,dword ptr [EDX + 0x14]
// 005d5a63: MOV dword ptr [EAX + 0x54],ECX
// 005d5a66: PUSH EDI
// 005d5a67: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005d5a6a: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005d5a6d: PUSH EDX
// 005d5a6e: MOV EAX,dword ptr [EAX + 0x18]
// 005d5a71: CALL dword ptr [EAX + 0xd8]
// 005d5a77: ADD ESP,0x10
// 005d5a7a: MOV ESP,EBP
// 005d5a7c: POP EBP
// 005d5a7d: POP EDI
// 005d5a7e: POP ESI
// 005d5a7f: POP EBX
// 005d5a80: RET
// 005d5a81: MOV ECX,dword ptr [EBX]
//   Label: LAB_005d5a81
// 005d5a83: CMP ECX,dword ptr [EAX + 0x8]
// 005d5a86: JNZ 0x005d5a94
//   XREF to: 005d5a94 (CONDITIONAL_JUMP)
// 005d5a88: MOV ECX,dword ptr [EBX + 0x4]
// 005d5a8b: CMP ECX,dword ptr [EAX + 0x4]
// 005d5a8e: JZ 0x005d59a7
//   XREF to: 005d59a7 (CONDITIONAL_JUMP)
// 005d5a94: MOV ECX,dword ptr [EBX]
//   Label: LAB_005d5a94
// 005d5a96: CMP ECX,dword ptr [EAX]
// 005d5a98: JNZ 0x005d5aa6
//   XREF to: 005d5aa6 (CONDITIONAL_JUMP)
// 005d5a9a: MOV ECX,dword ptr [EBX + 0x4]
// 005d5a9d: CMP ECX,dword ptr [EAX + 0x8]
// 005d5aa0: JZ 0x005d59a7
//   XREF to: 005d59a7 (CONDITIONAL_JUMP)
// 005d5aa6: MOV ECX,dword ptr [EBX + 0x4]
//   Label: LAB_005d5aa6
// 005d5aa9: CMP ECX,dword ptr [EAX + 0x8]
// 005d5aac: JNZ 0x005d5ac1
//   XREF to: 005d5ac1 (CONDITIONAL_JUMP)
// 005d5aae: MOV ECX,dword ptr [EBX + 0x8]
// 005d5ab1: CMP ECX,dword ptr [EAX + 0x4]
// 005d5ab4: JNZ 0x005d5ac1
//   XREF to: 005d5ac1 (CONDITIONAL_JUMP)
// 005d5ab6: XOR EBX,EBX
// 005d5ab8: MOV dword ptr [ESP + 0x38],EBX
//   XREF to: Stack[-0x28] (WRITE)
// 005d5abc: JMP 0x005d59af
//   XREF to: 005d59af (UNCONDITIONAL_JUMP)
// 005d5ac1: MOV ECX,dword ptr [EBX + 0x4]
//   Label: LAB_005d5ac1
// 005d5ac4: CMP ECX,dword ptr [EAX]
// 005d5ac6: JNZ 0x005d5adb
//   XREF to: 005d5adb (CONDITIONAL_JUMP)
// 005d5ac8: MOV ECX,dword ptr [EBX + 0x8]
// 005d5acb: CMP ECX,dword ptr [EAX + 0x8]
// 005d5ace: JNZ 0x005d5adb
//   XREF to: 005d5adb (CONDITIONAL_JUMP)
// 005d5ad0: XOR ECX,ECX
// 005d5ad2: MOV dword ptr [ESP + 0x38],ECX
//   XREF to: Stack[-0x28] (WRITE)
// 005d5ad6: JMP 0x005d59af
//   XREF to: 005d59af (UNCONDITIONAL_JUMP)
// 005d5adb: MOV ECX,dword ptr [EBX + 0x4]
//   Label: LAB_005d5adb
// 005d5ade: CMP ECX,dword ptr [EAX + 0x4]
// 005d5ae1: JNZ 0x005d5af5
//   XREF to: 005d5af5 (CONDITIONAL_JUMP)
// 005d5ae3: MOV ECX,dword ptr [EBX + 0x8]
// 005d5ae6: CMP ECX,dword ptr [EAX]
// 005d5ae8: JNZ 0x005d5af5
//   XREF to: 005d5af5 (CONDITIONAL_JUMP)
// 005d5aea: XOR EDX,EDX
// 005d5aec: MOV dword ptr [ESP + 0x38],EDX
//   XREF to: Stack[-0x28] (WRITE)
// 005d5af0: JMP 0x005d59af
//   XREF to: 005d59af (UNCONDITIONAL_JUMP)
// 005d5af5: MOV ECX,dword ptr [EBX + 0x8]
//   Label: LAB_005d5af5
// 005d5af8: CMP ECX,dword ptr [EAX]
// 005d5afa: JNZ 0x005d5b10
//   XREF to: 005d5b10 (CONDITIONAL_JUMP)
// 005d5afc: MOV ECX,dword ptr [EBX]
// 005d5afe: CMP ECX,dword ptr [EAX + 0x8]
// 005d5b01: JNZ 0x005d5b10
//   XREF to: 005d5b10 (CONDITIONAL_JUMP)
// 005d5b03: MOV dword ptr [ESP + 0x38],0x1
//   XREF to: Stack[-0x28] (WRITE)
// 005d5b0b: JMP 0x005d59af
//   XREF to: 005d59af (UNCONDITIONAL_JUMP)
// 005d5b10: MOV ECX,dword ptr [EBX + 0x8]
//   Label: LAB_005d5b10
// 005d5b13: CMP ECX,dword ptr [EAX + 0x4]
// 005d5b16: JNZ 0x005d5b2b
//   XREF to: 005d5b2b (CONDITIONAL_JUMP)
// 005d5b18: MOV ECX,dword ptr [EBX]
// 005d5b1a: CMP ECX,dword ptr [EAX]
// 005d5b1c: JNZ 0x005d5b2b
//   XREF to: 005d5b2b (CONDITIONAL_JUMP)
// 005d5b1e: MOV dword ptr [ESP + 0x38],0x1
//   XREF to: Stack[-0x28] (WRITE)
// 005d5b26: JMP 0x005d59af
//   XREF to: 005d59af (UNCONDITIONAL_JUMP)
// 005d5b2b: MOV ECX,dword ptr [EBX + 0x8]
//   Label: LAB_005d5b2b
// 005d5b2e: CMP ECX,dword ptr [EAX + 0x8]
// 005d5b31: JNZ 0x005d5b47
//   XREF to: 005d5b47 (CONDITIONAL_JUMP)
// 005d5b33: MOV ECX,dword ptr [EAX + 0x4]
// 005d5b36: CMP ECX,dword ptr [EBX]
// 005d5b38: JNZ 0x005d5b47
//   XREF to: 005d5b47 (CONDITIONAL_JUMP)
// 005d5b3a: MOV dword ptr [ESP + 0x38],0x1
//   XREF to: Stack[-0x28] (WRITE)
// 005d5b42: JMP 0x005d59af
//   XREF to: 005d59af (UNCONDITIONAL_JUMP)
// 005d5b47: CMP dword ptr [ESP + 0x38],-0x1
//   Label: LAB_005d5b47
//   XREF to: Stack[-0x28] (READ)
// 005d5b4c: JZ 0x005d58ce
//   XREF to: 005d58ce (CONDITIONAL_JUMP)
// 005d5b52: JMP 0x005d59af
//   XREF to: 005d59af (UNCONDITIONAL_JUMP)
// 005d5b57: PUSH EBX
//   Label: LAB_005d5b57
// 005d5b58: MOV EAX,dword ptr [EDI + 0x64]
// 005d5b5b: PUSH EDI
// 005d5b5c: CALL dword ptr [EAX + 0x70]
// 005d5b5f: ADD ESP,0x8
// 005d5b62: TEST EAX,EAX
// 005d5b64: JZ 0x005d592a
//   XREF to: 005d592a (CONDITIONAL_JUMP)
// 005d5b6a: PUSH EBX
// 005d5b6b: MOV ECX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 005d5b6e: PUSH ECX
// 005d5b6f: MOV EBX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005d5b72: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005d5b75: PUSH EBX
// 005d5b76: MOV ESI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005d5b79: MOV EAX,dword ptr [EAX + 0x18]
// 005d5b7c: PUSH ESI
// 005d5b7d: CALL dword ptr [EAX + 0xd8]
// 005d5b83: ADD ESP,0x10
// 005d5b86: MOV ESP,EBP
// 005d5b88: POP EBP
// 005d5b89: POP EDI
// 005d5b8a: POP ESI
// 005d5b8b: POP EBX
// 005d5b8c: RET
// 005d5b8d: PUSH EBX
//   Label: LAB_005d5b8d
// 005d5b8e: MOV EBX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 005d5b91: PUSH EBX
// 005d5b92: MOV ESI,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005d5b95: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005d5b98: PUSH ESI
// 005d5b99: MOV EDI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005d5b9c: MOV EAX,dword ptr [EAX + 0x18]
// 005d5b9f: PUSH EDI
// 005d5ba0: CALL dword ptr [EAX + 0xd8]
// 005d5ba6: ADD ESP,0x10
// 005d5ba9: MOV ESP,EBP
// 005d5bab: POP EBP
// 005d5bac: POP EDI
// 005d5bad: POP ESI
// 005d5bae: POP EBX
// 005d5baf: RET
