// Name: shape_superopt.cpp_CObj_FUN_005d3960
// Address: 005d3960
// Address Range: [[005d3960, 005d3da1]]
// Convention: __cdecl
// Signature: void shape_superopt.cpp_CObj_FUN_005d3960(CObj * this_ptr)
// Function calls:
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1d0
//   shape_memdbg.cpp_debugFree_FUN_0050f210

#include "nocturne.h"

void __cdecl shape_superopt_cpp_CObj_FUN_005d3960(CObj *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte bVar11;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  CPoly *pCVar12;
  uint *puVar13;
  uint uVar14;
  int *piVar15;
  uint uVar16;
  int in_stack_00000008;
  void *local_68;
  int local_64;
  CVector3d *pCStack_60;
  uint local_5c;
  int *local_58;
  CPoly *local_54;
  uint uStack_2c;
  double *pdStack_1c;
  
  local_68 = (void *)0x0;
  pCVar12 = this_ptr->poly_array;
  if (2000 < (uint)this_ptr->count) {
    local_68 = shape_memdbg_cpp_debugAlloc_FUN_0050f1d0(4);
  }
  uVar14 = 0;
  if (this_ptr->count != 0) {
    do {
      (**(code **)((int)pCVar12->vtable + 0x44))();
      if (in_stack_00000008 != 0) {
        pCVar12->field6_0x58 = 7;
      }
      uVar14 = uVar14 + 1;
      pCVar12 = pCVar12 + 1;
    } while (uVar14 < (uint)this_ptr->count);
  }
  if (in_stack_00000008 != 0) {
    local_54 = this_ptr->poly_array;
    local_5c = 0;
    if (this_ptr->count != 0) {
      local_64 = 0x68;
      pCStack_60 = &local_54->normal;
      local_58 = &local_54->field6_0x58;
      do {
        if ((*local_58 & 0x38U) != 0x38) {
          pCVar12 = this_ptr->poly_array;
          iVar1 = local_54->vertex_idx_0;
          iVar2 = local_54->vertex_idx_1;
          iVar3 = local_54->vertex_idx_2;
          uStack_2c = local_5c + 1;
          if (uStack_2c < (uint)this_ptr->count) {
            puVar13 = (uint *)((int)(pCVar12->uv_coords + 4) + local_64 + 8);
            pdStack_1c = (double *)((int)&((CVector3d *)(pCVar12->uv_coords + 3))->x + local_64);
            piVar15 = (int *)((int)pCVar12->uv_coords + local_64 + -0xc);
            do {
              if (((*puVar13 & 0x38) != 0x38) &&
                 (0.9999 <= pCStack_60->z * pdStack_1c[2] +
                            pCStack_60->x * *pdStack_1c + pCStack_60->y * pdStack_1c[1])) {
                uVar14 = (uint)(iVar1 == *piVar15) * 2;
                uVar4 = (uint)(iVar2 == *piVar15) << 2;
                uVar5 = (uint)(iVar3 == *piVar15) << 3;
                uVar6 = (uint)(iVar1 == piVar15[1]) << 4;
                uVar7 = (uint)(iVar2 == piVar15[1]) << 5;
                uVar8 = (uint)(iVar3 == piVar15[1]) << 6;
                uVar16 = (uint)(iVar1 == piVar15[2]) << 7;
                uVar9 = (uint)(iVar2 == piVar15[2]) << 8;
                uVar10 = (uint)(iVar3 == piVar15[2]) << 9;
                if ((uVar4 | uVar6) == 0x14) {
                  *(byte *)local_58 = (byte)*local_58 & 0xf6;
                  *(byte *)local_58 = (byte)*local_58 | 8;
                  *(byte *)puVar13 = (byte)*puVar13 & 0xf6;
                  *(byte *)puVar13 = (byte)*puVar13 | 8;
                }
                else if ((uVar16 | uVar7) == 0xa0) {
                  *(byte *)local_58 = (byte)*local_58 & 0xf6;
                  *(byte *)local_58 = (byte)*local_58 | 8;
                  *(byte *)puVar13 = (byte)*puVar13 & 0xed;
                  *(byte *)puVar13 = (byte)*puVar13 | 0x10;
                }
                else if ((uVar14 | uVar9) == 0x102) {
                  *(byte *)local_58 = (byte)*local_58 & 0xf6;
                  *(byte *)local_58 = (byte)*local_58 | 8;
                  *(byte *)puVar13 = (byte)*puVar13 & 0xdb;
                  *(byte *)puVar13 = (byte)*puVar13 | 0x20;
                }
                if ((uVar8 | uVar9) == 0x140) {
                  *(byte *)local_58 = (byte)*local_58 & 0xed;
                  *(byte *)local_58 = (byte)*local_58 | 0x10;
                  *(byte *)puVar13 = (byte)*puVar13 & 0xed;
                  *(byte *)puVar13 = (byte)*puVar13 | 0x10;
                }
                else if ((uVar10 | uVar4) == 0x204) {
                  *(byte *)local_58 = (byte)*local_58 & 0xed;
                  *(byte *)local_58 = (byte)*local_58 | 0x10;
                  *(byte *)puVar13 = (byte)*puVar13 & 0xdb;
                  *(byte *)puVar13 = (byte)*puVar13 | 0x20;
                }
                else if ((uVar5 | uVar7) == 0x28) {
                  *(byte *)local_58 = (byte)*local_58 & 0xed;
                  *(byte *)local_58 = (byte)*local_58 | 0x10;
                  *(byte *)puVar13 = (byte)*puVar13 & 0xf6;
                  *(byte *)puVar13 = (byte)*puVar13 | 8;
                }
                if ((uVar16 | uVar5) == 0x88) {
                  bVar11 = (byte)*local_58 & 0xdb;
                  *(byte *)local_58 = bVar11;
                  *(byte *)local_58 = bVar11 | 0x20;
                  bVar11 = (byte)*puVar13 & 0xdb;
                  *(byte *)puVar13 = bVar11;
                  *(byte *)puVar13 = bVar11 | 0x20;
                }
                else if ((uVar8 | uVar14) == 0x42) {
                  bVar11 = (byte)*local_58 & 0xdb;
                  *(byte *)local_58 = bVar11;
                  *(byte *)local_58 = bVar11 | 0x20;
                  bVar11 = (byte)*puVar13 & 0xf6;
                  *(byte *)puVar13 = bVar11;
                  *(byte *)puVar13 = bVar11 | 8;
                }
                else if ((uVar10 | uVar6) == 0x210) {
                  bVar11 = (byte)*local_58 & 0xdb;
                  *(byte *)local_58 = bVar11;
                  *(byte *)local_58 = bVar11 | 0x20;
                  bVar11 = (byte)*puVar13 & 0xed;
                  *(byte *)puVar13 = bVar11;
                  *(byte *)puVar13 = bVar11 | 0x10;
                }
              }
              puVar13 = puVar13 + 0x1a;
              uStack_2c = uStack_2c + 1;
              pdStack_1c = pdStack_1c + 0xd;
              piVar15 = piVar15 + 0x1a;
            } while (uStack_2c < (uint)this_ptr->count);
          }
        }
        local_64 = local_64 + 0x68;
        pCStack_60 = (CVector3d *)((int)(pCStack_60 + 4) + 8);
        *local_58 = *local_58 & 7;
        local_54 = local_54 + 1;
        local_5c = local_5c + 1;
        local_58 = local_58 + 0x1a;
      } while (local_5c < (uint)this_ptr->count);
    }
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(local_68);
  return;
}


// Assembly code:
// 005d3960: PUSH EBX
//   Label: shape_superopt.cpp_CObj_FUN_005d3960
// 005d3961: PUSH ESI
// 005d3962: PUSH EDI
// 005d3963: PUSH EBP
// 005d3964: MOV EBP,ESP
// 005d3966: SUB ESP,0x5c
// 005d3969: AND ESP,0xfffffff8
// 005d396c: MOV EDI,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005d396f: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005d3972: XOR EDX,EDX
// 005d3974: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005d3977: MOV dword ptr [ESP + 0x8],EDX
//   XREF to: Stack[-0x68] (WRITE)
// 005d397b: MOV ECX,dword ptr [EAX + 0x8]
// 005d397e: MOV EBX,dword ptr [EBX + 0xc]
// 005d3981: CMP ECX,0x7d0
// 005d3987: JA 0x005d3b29
//   XREF to: 005d3b29 (CONDITIONAL_JUMP)
// 005d398d: MOV EAX,0x3fefff2e
//   Label: LAB_005d398d
// 005d3992: MOV ESI,0x48e8a71e
// 005d3997: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x6c] (WRITE)
// 005d399b: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005d399e: MOV dword ptr [ESP],ESI
//   XREF to: Stack[-0x70] (DATA)
// 005d39a1: MOV EDX,dword ptr [EAX + 0x8]
// 005d39a4: XOR ESI,ESI
// 005d39a6: TEST EDX,EDX
// 005d39a8: JBE 0x005d39cd
//   XREF to: 005d39cd (CONDITIONAL_JUMP)
// 005d39aa: PUSH EBX
//   Label: LAB_005d39aa
// 005d39ab: MOV EAX,dword ptr [EBX + 0x64]
// 005d39ae: CALL dword ptr [EAX + 0x44]
// 005d39b1: ADD ESP,0x4
// 005d39b4: TEST EDI,EDI
// 005d39b6: JZ 0x005d39bf
//   XREF to: 005d39bf (CONDITIONAL_JUMP)
// 005d39b8: MOV dword ptr [EBX + 0x58],0x7
// 005d39bf: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_005d39bf
//   XREF to: Stack[0x4] (READ)
// 005d39c2: INC ESI
// 005d39c3: MOV ECX,dword ptr [EAX + 0x8]
// 005d39c6: ADD EBX,0x68
// 005d39c9: CMP ESI,ECX
// 005d39cb: JC 0x005d39aa
//   XREF to: 005d39aa (CONDITIONAL_JUMP)
// 005d39cd: TEST EDI,EDI
//   Label: LAB_005d39cd
// 005d39cf: JZ 0x005d3b15
//   XREF to: 005d3b15 (CONDITIONAL_JUMP)
// 005d39d5: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005d39d8: MOV EAX,dword ptr [EAX + 0xc]
// 005d39db: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x54] (WRITE)
// 005d39df: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005d39e2: XOR EBX,EBX
// 005d39e4: MOV ESI,dword ptr [EAX + 0x8]
// 005d39e7: MOV dword ptr [ESP + 0x14],EBX
//   XREF to: Stack[-0x5c] (WRITE)
// 005d39eb: TEST ESI,ESI
// 005d39ed: JBE 0x005d3b15
//   XREF to: 005d3b15 (CONDITIONAL_JUMP)
// 005d39f3: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x54] (READ)
// 005d39f7: ADD EAX,0x58
// 005d39fa: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x58] (WRITE)
// 005d39fe: MOV dword ptr [ESP + 0xc],0x68
//   XREF to: Stack[-0x64] (WRITE)
// 005d3a06: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x54] (READ)
// 005d3a0a: ADD EAX,0x40
// 005d3a0d: MOV dword ptr [ESP + 0x10],EAX
// 005d3a11: MOV EDX,dword ptr [ESP + 0x18]
//   Label: LAB_005d3a11
// 005d3a15: MOV EAX,dword ptr [EDX]
// 005d3a17: AND EAX,0x38
// 005d3a1a: CMP EAX,0x38
// 005d3a1d: JZ 0x005d3ac9
//   XREF to: 005d3ac9 (CONDITIONAL_JUMP)
// 005d3a23: MOV ECX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005d3a26: MOV EBX,dword ptr [ESP + 0xc]
// 005d3a2a: MOV ECX,dword ptr [ECX + 0xc]
// 005d3a2d: ADD EBX,ECX
// 005d3a2f: MOV ECX,dword ptr [ESP + 0x1c]
// 005d3a33: MOV ECX,dword ptr [ECX + 0x4]
// 005d3a36: MOV dword ptr [ESP + 0x48],ECX
// 005d3a3a: MOV ECX,dword ptr [ESP + 0x1c]
// 005d3a3e: MOV ECX,dword ptr [ECX + 0x8]
// 005d3a41: MOV dword ptr [ESP + 0x4c],ECX
// 005d3a45: MOV ECX,dword ptr [ESP + 0x1c]
// 005d3a49: MOV ECX,dword ptr [ECX + 0xc]
// 005d3a4c: MOV EAX,dword ptr [ESP + 0x14]
// 005d3a50: MOV dword ptr [ESP + 0x50],ECX
// 005d3a54: MOV ECX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005d3a57: INC EAX
// 005d3a58: MOV dword ptr [ESP + 0x3c],EBX
// 005d3a5c: MOV EBX,dword ptr [ECX + 0x8]
// 005d3a5f: MOV dword ptr [ESP + 0x44],EAX
// 005d3a63: CMP EAX,EBX
// 005d3a65: JNC 0x005d3ac9
//   XREF to: 005d3ac9 (CONDITIONAL_JUMP)
// 005d3a67: MOV EAX,dword ptr [ESP + 0x10]
// 005d3a6b: MOV EBX,dword ptr [ESP + 0x3c]
// 005d3a6f: MOV ESI,dword ptr [ESP + 0x3c]
// 005d3a73: MOV dword ptr [ESP + 0x40],EAX
// 005d3a77: MOV EAX,dword ptr [ESP + 0x3c]
// 005d3a7b: ADD EBX,0x58
// 005d3a7e: ADD EAX,0x40
// 005d3a81: ADD ESI,0x4
// 005d3a84: MOV dword ptr [ESP + 0x54],EAX
// 005d3a88: MOV EAX,dword ptr [EBX]
//   Label: LAB_005d3a88
// 005d3a8a: AND EAX,0x38
// 005d3a8d: MOV ECX,EBX
// 005d3a8f: CMP EAX,0x38
// 005d3a92: JNZ 0x005d3b3c
//   XREF to: 005d3b3c (CONDITIONAL_JUMP)
// 005d3a98: MOV EDI,dword ptr [ESP + 0x44]
//   Label: LAB_005d3a98
// 005d3a9c: MOV EAX,dword ptr [ESP + 0x54]
// 005d3aa0: MOV ECX,dword ptr [ESP + 0x3c]
// 005d3aa4: ADD EBX,0x68
// 005d3aa7: INC EDI
// 005d3aa8: ADD EAX,0x68
// 005d3aab: ADD ECX,0x68
// 005d3aae: MOV dword ptr [ESP + 0x44],EDI
// 005d3ab2: MOV dword ptr [ESP + 0x3c],ECX
// 005d3ab6: MOV ECX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005d3ab9: MOV dword ptr [ESP + 0x54],EAX
// 005d3abd: MOV EAX,EDI
// 005d3abf: MOV EDI,dword ptr [ECX + 0x8]
// 005d3ac2: ADD ESI,0x68
// 005d3ac5: CMP EAX,EDI
// 005d3ac7: JC 0x005d3a88
//   XREF to: 005d3a88 (CONDITIONAL_JUMP)
// 005d3ac9: MOV EAX,dword ptr [ESP + 0xc]
//   Label: LAB_005d3ac9
// 005d3acd: MOV ECX,dword ptr [ESP + 0x18]
// 005d3ad1: MOV EBX,dword ptr [ESP + 0x10]
// 005d3ad5: MOV EDI,dword ptr [EDX]
// 005d3ad7: MOV ESI,dword ptr [ESP + 0x1c]
// 005d3adb: AND EDI,0x7
// 005d3ade: ADD EAX,0x68
// 005d3ae1: ADD ECX,0x68
// 005d3ae4: ADD EBX,0x68
// 005d3ae7: MOV dword ptr [EDX],EDI
// 005d3ae9: MOV EDX,dword ptr [ESP + 0x14]
// 005d3aed: ADD ESI,0x68
// 005d3af0: INC EDX
// 005d3af1: MOV dword ptr [ESP + 0xc],EAX
// 005d3af5: MOV dword ptr [ESP + 0x14],EDX
// 005d3af9: MOV EAX,EDX
// 005d3afb: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005d3afe: MOV dword ptr [ESP + 0x18],ECX
// 005d3b02: MOV dword ptr [ESP + 0x10],EBX
// 005d3b06: MOV EDI,dword ptr [EDX + 0x8]
// 005d3b09: MOV dword ptr [ESP + 0x1c],ESI
// 005d3b0d: CMP EAX,EDI
// 005d3b0f: JC 0x005d3a11
//   XREF to: 005d3a11 (CONDITIONAL_JUMP)
// 005d3b15: MOV EAX,dword ptr [ESP + 0x8]
//   Label: LAB_005d3b15
// 005d3b19: PUSH EAX
// 005d3b1a: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 005d3b1f: ADD ESP,0x4
// 005d3b22: MOV ESP,EBP
// 005d3b24: POP EBP
// 005d3b25: POP EDI
// 005d3b26: POP ESI
// 005d3b27: POP EBX
// 005d3b28: RET
// 005d3b29: PUSH 0x4
//   Label: LAB_005d3b29
// 005d3b2b: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1d0
//   XREF to: 0050f1d0 (UNCONDITIONAL_CALL)
// 005d3b30: ADD ESP,0x4
// 005d3b33: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x68] (WRITE)
// 005d3b37: JMP 0x005d398d
//   XREF to: 005d398d (UNCONDITIONAL_JUMP)
// 005d3b3c: MOV EAX,dword ptr [ESP + 0x40]
//   Label: LAB_005d3b3c
// 005d3b40: FLD double ptr [EAX + 0x8]
// 005d3b43: MOV EAX,dword ptr [ESP + 0x54]
// 005d3b47: FMUL double ptr [EAX + 0x8]
// 005d3b4a: MOV EAX,dword ptr [ESP + 0x40]
// 005d3b4e: FLD double ptr [EAX]
// 005d3b50: MOV EAX,dword ptr [ESP + 0x54]
// 005d3b54: FMUL double ptr [EAX]
// 005d3b56: FADDP
// 005d3b58: MOV EAX,dword ptr [ESP + 0x40]
// 005d3b5c: FLD double ptr [EAX + 0x10]
// 005d3b5f: MOV EAX,dword ptr [ESP + 0x54]
// 005d3b63: FMUL double ptr [EAX + 0x10]
// 005d3b66: FADDP
// 005d3b68: FCOMP double ptr [ESP]
// 005d3b6b: FNSTSW AX
// 005d3b6d: SAHF
// 005d3b6e: JC 0x005d3a98
//   XREF to: 005d3a98 (CONDITIONAL_JUMP)
// 005d3b74: MOV EAX,dword ptr [ESP + 0x48]
// 005d3b78: MOV EDI,dword ptr [ESI]
// 005d3b7a: CMP EAX,EDI
// 005d3b7c: SETZ AL
// 005d3b7f: AND EAX,0xff
// 005d3b84: ADD EAX,EAX
// 005d3b86: MOV dword ptr [ESP + 0x38],EAX
// 005d3b8a: MOV EAX,dword ptr [ESP + 0x4c]
// 005d3b8e: CMP EAX,EDI
// 005d3b90: SETZ AL
// 005d3b93: AND EAX,0xff
// 005d3b98: MOV EDI,dword ptr [ESP + 0x38]
// 005d3b9c: SHL EAX,0x2
// 005d3b9f: OR EDI,EAX
// 005d3ba1: MOV EAX,dword ptr [ESP + 0x50]
// 005d3ba5: MOV dword ptr [ESP + 0x20],EDI
// 005d3ba9: CMP EAX,dword ptr [ESI]
// 005d3bab: SETZ AL
// 005d3bae: AND EAX,0xff
// 005d3bb3: MOV EDI,dword ptr [ESP + 0x20]
// 005d3bb7: SHL EAX,0x3
// 005d3bba: OR EDI,EAX
// 005d3bbc: MOV EAX,dword ptr [ESP + 0x48]
// 005d3bc0: MOV dword ptr [ESP + 0x28],EDI
// 005d3bc4: CMP EAX,dword ptr [ESI + 0x4]
// 005d3bc7: SETZ AL
// 005d3bca: AND EAX,0xff
// 005d3bcf: MOV EDI,dword ptr [ESP + 0x28]
// 005d3bd3: SHL EAX,0x4
// 005d3bd6: OR EDI,EAX
// 005d3bd8: MOV EAX,dword ptr [ESP + 0x4c]
// 005d3bdc: MOV dword ptr [ESP + 0x34],EDI
// 005d3be0: CMP EAX,dword ptr [ESI + 0x4]
// 005d3be3: SETZ AL
// 005d3be6: AND EAX,0xff
// 005d3beb: MOV EDI,dword ptr [ESP + 0x34]
// 005d3bef: SHL EAX,0x5
// 005d3bf2: OR EDI,EAX
// 005d3bf4: MOV EAX,dword ptr [ESP + 0x50]
// 005d3bf8: MOV dword ptr [ESP + 0x24],EDI
// 005d3bfc: CMP EAX,dword ptr [ESI + 0x4]
// 005d3bff: SETZ AL
// 005d3c02: AND EAX,0xff
// 005d3c07: MOV EDI,dword ptr [ESP + 0x24]
// 005d3c0b: SHL EAX,0x6
// 005d3c0e: OR EAX,EDI
// 005d3c10: MOV EDI,dword ptr [ESP + 0x48]
// 005d3c14: CMP EDI,dword ptr [ESI + 0x8]
// 005d3c17: SETZ byte ptr [ESP + 0x58]
// 005d3c1c: MOVZX EDI,byte ptr [ESP + 0x58]
// 005d3c21: SHL EDI,0x7
// 005d3c24: OR EDI,EAX
// 005d3c26: MOV EAX,dword ptr [ESP + 0x4c]
// 005d3c2a: MOV dword ptr [ESP + 0x30],EDI
// 005d3c2e: CMP EAX,dword ptr [ESI + 0x8]
// 005d3c31: SETZ AL
// 005d3c34: AND EAX,0xff
// 005d3c39: MOV EDI,dword ptr [ESP + 0x30]
// 005d3c3d: SHL EAX,0x8
// 005d3c40: OR EDI,EAX
// 005d3c42: MOV EAX,dword ptr [ESP + 0x50]
// 005d3c46: MOV dword ptr [ESP + 0x2c],EDI
// 005d3c4a: CMP EAX,dword ptr [ESI + 0x8]
// 005d3c4d: SETZ AL
// 005d3c50: AND EAX,0xff
// 005d3c55: MOV EDI,dword ptr [ESP + 0x2c]
// 005d3c59: SHL EAX,0x9
// 005d3c5c: OR EAX,EDI
// 005d3c5e: MOV EDI,EAX
// 005d3c60: AND EDI,0x14
// 005d3c63: CMP EDI,0x14
// 005d3c66: JNZ 0x005d3cc7
//   XREF to: 005d3cc7 (CONDITIONAL_JUMP)
// 005d3c68: AND byte ptr [EDX],0xf6
// 005d3c6b: OR byte ptr [EDX],0x8
// 005d3c6e: AND byte ptr [EBX],0xf6
// 005d3c71: OR byte ptr [EBX],0x8
// 005d3c74: MOV EDI,EAX
//   Label: LAB_005d3c74
// 005d3c76: AND EDI,0x140
// 005d3c7c: CMP EDI,0x140
// 005d3c82: JNZ 0x005d3d0a
//   XREF to: 005d3d0a (CONDITIONAL_JUMP)
// 005d3c88: AND byte ptr [EDX],0xed
// 005d3c8b: OR byte ptr [EDX],0x10
// 005d3c8e: AND byte ptr [ECX],0xed
// 005d3c91: OR byte ptr [ECX],0x10
// 005d3c94: MOV EDI,EAX
//   Label: LAB_005d3c94
// 005d3c96: AND EDI,0x88
// 005d3c9c: CMP EDI,0x88
// 005d3ca2: JNZ 0x005d3d4a
//   XREF to: 005d3d4a (CONDITIONAL_JUMP)
// 005d3ca8: MOV AH,byte ptr [EDX]
// 005d3caa: AND AH,0xdb
// 005d3cad: MOV byte ptr [EDX],AH
// 005d3caf: MOV AL,AH
// 005d3cb1: OR AL,0x20
// 005d3cb3: MOV byte ptr [EDX],AL
// 005d3cb5: MOV AH,byte ptr [ECX]
// 005d3cb7: AND AH,0xdb
// 005d3cba: MOV byte ptr [ECX],AH
// 005d3cbc: MOV AL,AH
// 005d3cbe: OR AL,0x20
// 005d3cc0: MOV byte ptr [ECX],AL
// 005d3cc2: JMP 0x005d3a98
//   XREF to: 005d3a98 (UNCONDITIONAL_JUMP)
// 005d3cc7: MOV EDI,EAX
//   Label: LAB_005d3cc7
// 005d3cc9: AND EDI,0xa0
// 005d3ccf: CMP EDI,0xa0
// 005d3cd5: JNZ 0x005d3ce5
//   XREF to: 005d3ce5 (CONDITIONAL_JUMP)
// 005d3cd7: AND byte ptr [EDX],0xf6
// 005d3cda: OR byte ptr [EDX],0x8
// 005d3cdd: AND byte ptr [EBX],0xed
// 005d3ce0: OR byte ptr [EBX],0x10
// 005d3ce3: JMP 0x005d3c74
//   XREF to: 005d3c74 (UNCONDITIONAL_JUMP)
// 005d3ce5: MOV EDI,EAX
//   Label: LAB_005d3ce5
// 005d3ce7: AND EDI,0x102
// 005d3ced: CMP EDI,0x102
// 005d3cf3: JNZ 0x005d3c74
//   XREF to: 005d3c74 (CONDITIONAL_JUMP)
// 005d3cf9: AND byte ptr [EDX],0xf6
// 005d3cfc: OR byte ptr [EDX],0x8
// 005d3cff: AND byte ptr [EBX],0xdb
// 005d3d02: OR byte ptr [EBX],0x20
// 005d3d05: JMP 0x005d3c74
//   XREF to: 005d3c74 (UNCONDITIONAL_JUMP)
// 005d3d0a: MOV EDI,EAX
//   Label: LAB_005d3d0a
// 005d3d0c: AND EDI,0x204
// 005d3d12: CMP EDI,0x204
// 005d3d18: JNZ 0x005d3d2b
//   XREF to: 005d3d2b (CONDITIONAL_JUMP)
// 005d3d1a: AND byte ptr [EDX],0xed
// 005d3d1d: OR byte ptr [EDX],0x10
// 005d3d20: AND byte ptr [ECX],0xdb
// 005d3d23: OR byte ptr [ECX],0x20
// 005d3d26: JMP 0x005d3c94
//   XREF to: 005d3c94 (UNCONDITIONAL_JUMP)
// 005d3d2b: MOV EDI,EAX
//   Label: LAB_005d3d2b
// 005d3d2d: AND EDI,0x28
// 005d3d30: CMP EDI,0x28
// 005d3d33: JNZ 0x005d3c94
//   XREF to: 005d3c94 (CONDITIONAL_JUMP)
// 005d3d39: AND byte ptr [EDX],0xed
// 005d3d3c: OR byte ptr [EDX],0x10
// 005d3d3f: AND byte ptr [ECX],0xf6
// 005d3d42: OR byte ptr [ECX],0x8
// 005d3d45: JMP 0x005d3c94
//   XREF to: 005d3c94 (UNCONDITIONAL_JUMP)
// 005d3d4a: MOV EDI,EAX
//   Label: LAB_005d3d4a
// 005d3d4c: AND EDI,0x42
// 005d3d4f: CMP EDI,0x42
// 005d3d52: JNZ 0x005d3d73
//   XREF to: 005d3d73 (CONDITIONAL_JUMP)
// 005d3d54: MOV AH,byte ptr [EDX]
// 005d3d56: AND AH,0xdb
// 005d3d59: MOV byte ptr [EDX],AH
// 005d3d5b: MOV AL,AH
// 005d3d5d: OR AL,0x20
// 005d3d5f: MOV byte ptr [EDX],AL
// 005d3d61: MOV AH,byte ptr [ECX]
// 005d3d63: AND AH,0xf6
// 005d3d66: MOV byte ptr [ECX],AH
// 005d3d68: MOV AL,AH
// 005d3d6a: OR AL,0x8
// 005d3d6c: MOV byte ptr [ECX],AL
// 005d3d6e: JMP 0x005d3a98
//   XREF to: 005d3a98 (UNCONDITIONAL_JUMP)
// 005d3d73: AND EAX,0x210
//   Label: LAB_005d3d73
// 005d3d78: CMP EAX,0x210
// 005d3d7d: JNZ 0x005d3a98
//   XREF to: 005d3a98 (CONDITIONAL_JUMP)
// 005d3d83: MOV AH,byte ptr [EDX]
// 005d3d85: AND AH,0xdb
// 005d3d88: MOV byte ptr [EDX],AH
// 005d3d8a: MOV AL,AH
// 005d3d8c: OR AL,0x20
// 005d3d8e: MOV byte ptr [EDX],AL
// 005d3d90: MOV AH,byte ptr [ECX]
// 005d3d92: AND AH,0xed
// 005d3d95: MOV byte ptr [ECX],AH
// 005d3d97: MOV AL,AH
// 005d3d99: OR AL,0x10
// 005d3d9b: MOV byte ptr [ECX],AL
// 005d3d9d: JMP 0x005d3a98
//   XREF to: 005d3a98 (UNCONDITIONAL_JUMP)
