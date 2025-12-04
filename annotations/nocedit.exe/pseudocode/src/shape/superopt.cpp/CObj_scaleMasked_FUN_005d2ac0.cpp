// Name: shape_superopt.cpp_CObj_scaleMasked_FUN_005d2ac0
// Address: 005d2ac0
// Address Range: [[005d2ac0, 005d2c38]]
// Convention: __cdecl
// Signature: void shape_superopt.cpp_CObj_scaleMasked_FUN_005d2ac0(CObj * this_ptr, uint flag_mask, CVector3d * scale, CVector3d * pivot)

#include "nocturne.h"

void __cdecl
shape_superopt_cpp_CObj_scaleMasked_FUN_005d2ac0
          (CObj *this_ptr,uint flag_mask,CVector3d *scale,CVector3d *pivot)

{
  undefined4 uVar1;
  int iVar2;
  CVert *pCVar3;
  BADSPACEBASE *in_ESP;
  double *pdVar4;
  double *pdVar5;
  undefined4 *puVar6;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48 [4];
  undefined4 local_38;
  undefined4 local_34;
  double local_30;
  double local_28;
  double local_20;
  uint local_18;
  
  local_18 = 0;
  pCVar3 = this_ptr->vertex_data;
  if (this_ptr->vertex_count != 0) {
    do {
      if ((pCVar3->state_flags & flag_mask) == flag_mask) {
        local_60 = *(undefined4 *)&scale->x;
        uStack_5c = *(undefined4 *)((int)&scale->x + 4);
        local_58 = *(undefined4 *)&scale->y;
        uStack_54 = *(undefined4 *)((int)&scale->y + 4);
        local_c0 = (pCVar3->position).x - pivot->x;
        local_b8 = (pCVar3->position).y - pivot->y;
        local_50 = *(undefined4 *)&scale->z;
        local_b0 = (pCVar3->position).z - pivot->z;
        uVar1 = *(undefined4 *)((int)&scale->z + 4);
        pdVar4 = &local_c0;
        pdVar5 = &local_a8;
        for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
          *(undefined4 *)pdVar5 = *(undefined4 *)pdVar4;
          pdVar4 = (double *)((int)pdVar4 + 4);
          pdVar5 = (double *)((int)pdVar5 + 4);
        }
        uStack_4c = uVar1;
        local_90 = local_a8 * (double)CONCAT44(uStack_5c,local_60);
        local_88 = local_a0 * (double)CONCAT44(uStack_54,local_58);
        local_80 = local_98 * (double)CONCAT44(uVar1,local_50);
        pdVar4 = &local_90;
        pdVar5 = &local_78;
        for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
          *(undefined4 *)pdVar5 = *(undefined4 *)pdVar4;
          pdVar4 = (double *)((int)pdVar4 + 4);
          pdVar5 = (double *)((int)pdVar5 + 4);
        }
        local_30 = local_78 + pivot->x;
        local_28 = local_70 + pivot->y;
        local_20 = local_68 + pivot->z;
        pdVar4 = &local_30;
        puVar6 = local_48;
        for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar6 = *(undefined4 *)pdVar4;
          pdVar4 = (double *)((int)pdVar4 + 4);
          puVar6 = puVar6 + 1;
        }
        *(undefined4 *)&(pCVar3->position).x = local_48[0];
        *(undefined4 *)((int)&(pCVar3->position).x + 4) = local_48[1];
        *(undefined4 *)&(pCVar3->position).y = local_48[2];
        *(undefined4 *)((int)&(pCVar3->position).y + 4) = local_48[3];
        *(undefined4 *)&(pCVar3->position).z = local_38;
        *(undefined4 *)((int)&(pCVar3->position).z + 4) = local_34;
      }
      pCVar3 = pCVar3 + 1;
      local_18 = local_18 + 1;
    } while (local_18 < (uint)this_ptr->vertex_count);
  }
  return;
}


// Assembly code:
// 005d2ac0: PUSH EBX
//   Label: shape_superopt.cpp_CObj_scaleMasked_FUN_005d2ac0
// 005d2ac1: PUSH ESI
// 005d2ac2: PUSH EDI
// 005d2ac3: PUSH EBP
// 005d2ac4: MOV EBP,ESP
// 005d2ac6: SUB ESP,0xac
// 005d2acc: AND ESP,0xfffffff8
// 005d2acf: MOV EBX,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 005d2ad2: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005d2ad5: XOR ECX,ECX
// 005d2ad7: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005d2ada: MOV dword ptr [ESP + 0xa8],ECX
//   XREF to: Stack[-0x18] (WRITE)
// 005d2ae1: MOV ESI,dword ptr [EAX]
// 005d2ae3: MOV EDX,dword ptr [EDX + 0x4]
// 005d2ae6: TEST ESI,ESI
// 005d2ae8: JBE 0x005d2b11
//   XREF to: 005d2b11 (CONDITIONAL_JUMP)
// 005d2aea: MOV EDI,dword ptr [EBP + 0x18]
//   Label: LAB_005d2aea
//   XREF to: Stack[0x8] (READ)
// 005d2aed: MOV EAX,dword ptr [EDX + 0x34]
// 005d2af0: AND EAX,EDI
// 005d2af2: CMP EAX,EDI
// 005d2af4: JZ 0x005d2b18
//   XREF to: 005d2b18 (CONDITIONAL_JUMP)
// 005d2af6: MOV EDI,dword ptr [ESP + 0xa8]
//   Label: LAB_005d2af6
//   XREF to: Stack[-0x18] (READ)
// 005d2afd: MOV ECX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005d2b00: ADD EDX,0x38
// 005d2b03: INC EDI
// 005d2b04: MOV ESI,dword ptr [ECX]
// 005d2b06: MOV dword ptr [ESP + 0xa8],EDI
//   XREF to: Stack[-0x18] (WRITE)
// 005d2b0d: CMP EDI,ESI
// 005d2b0f: JC 0x005d2aea
//   XREF to: 005d2aea (CONDITIONAL_JUMP)
// 005d2b11: MOV ESP,EBP
//   Label: LAB_005d2b11
// 005d2b13: POP EBP
// 005d2b14: POP EDI
// 005d2b15: POP ESI
// 005d2b16: POP EBX
// 005d2b17: RET
// 005d2b18: MOV EAX,dword ptr [EBP + 0x1c]
//   Label: LAB_005d2b18
//   XREF to: Stack[0xc] (READ)
// 005d2b1b: FLD double ptr [EDX]
// 005d2b1d: MOV EAX,dword ptr [EAX]
// 005d2b1f: FLD double ptr [EDX + 0x8]
// 005d2b22: MOV dword ptr [ESP + 0x60],EAX
//   XREF to: Stack[-0x60] (WRITE)
// 005d2b26: MOV EAX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 005d2b29: FLD double ptr [EDX + 0x10]
// 005d2b2c: MOV EAX,dword ptr [EAX + 0x4]
// 005d2b2f: MOV ECX,0x6
// 005d2b34: MOV dword ptr [ESP + 0x64],EAX
//   XREF to: Stack[-0x5c] (WRITE)
// 005d2b38: MOV EAX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 005d2b3b: LEA EDI,[ESP + 0x18]
//   XREF to: Stack[-0xa8] (DATA)
// 005d2b3f: MOV ESI,ESP
// 005d2b41: MOV EAX,dword ptr [EAX + 0x8]
// 005d2b44: FXCH ST2
// 005d2b46: FSUB double ptr [EBX]
// 005d2b48: MOV dword ptr [ESP + 0x68],EAX
//   XREF to: Stack[-0x58] (WRITE)
// 005d2b4c: MOV EAX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 005d2b4f: FXCH
// 005d2b51: FSUB double ptr [EBX + 0x8]
// 005d2b54: MOV EAX,dword ptr [EAX + 0xc]
// 005d2b57: FXCH ST2
// 005d2b59: FSUB double ptr [EBX + 0x10]
// 005d2b5c: MOV dword ptr [ESP + 0x6c],EAX
//   XREF to: Stack[-0x54] (WRITE)
// 005d2b60: MOV EAX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 005d2b63: FXCH
// 005d2b65: FSTP double ptr [ESP]
//   XREF to: Stack[-0xc0] (DATA)
// 005d2b68: MOV EAX,dword ptr [EAX + 0x10]
// 005d2b6b: FXCH
// 005d2b6d: FSTP double ptr [ESP + 0x8]
//   XREF to: Stack[-0xb8] (WRITE)
// 005d2b71: MOV dword ptr [ESP + 0x70],EAX
//   XREF to: Stack[-0x50] (WRITE)
// 005d2b75: MOV EAX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 005d2b78: FSTP double ptr [ESP + 0x10]
//   XREF to: Stack[-0xb0] (WRITE)
// 005d2b7c: MOV EAX,dword ptr [EAX + 0x14]
// 005d2b7f: MOVSD.REP ES:EDI,ESI
// 005d2b81: FLD double ptr [ESP + 0x18]
//   XREF to: Stack[-0xa8] (READ)
// 005d2b85: FMUL double ptr [ESP + 0x60]
//   XREF to: Stack[-0x60] (READ)
// 005d2b89: FLD double ptr [ESP + 0x20]
//   XREF to: Stack[-0xa0] (READ)
// 005d2b8d: FMUL double ptr [ESP + 0x68]
//   XREF to: Stack[-0x58] (READ)
// 005d2b91: MOV dword ptr [ESP + 0x74],EAX
//   XREF to: Stack[-0x4c] (WRITE)
// 005d2b95: FLD double ptr [ESP + 0x28]
//   XREF to: Stack[-0x98] (READ)
// 005d2b99: FMUL double ptr [ESP + 0x70]
//   XREF to: Stack[-0x50] (READ)
// 005d2b9d: MOV ECX,0x6
// 005d2ba2: LEA EDI,[ESP + 0x48]
//   XREF to: Stack[-0x78] (DATA)
// 005d2ba6: LEA ESI,[ESP + 0x30]
//   XREF to: Stack[-0x90] (DATA)
// 005d2baa: FXCH ST2
// 005d2bac: FSTP double ptr [ESP + 0x30]
//   XREF to: Stack[-0x90] (WRITE)
// 005d2bb0: FSTP double ptr [ESP + 0x38]
//   XREF to: Stack[-0x88] (WRITE)
// 005d2bb4: FSTP double ptr [ESP + 0x40]
//   XREF to: Stack[-0x80] (WRITE)
// 005d2bb8: MOVSD.REP ES:EDI,ESI
// 005d2bba: FLD double ptr [ESP + 0x48]
//   XREF to: Stack[-0x78] (READ)
// 005d2bbe: FLD double ptr [ESP + 0x50]
//   XREF to: Stack[-0x70] (READ)
// 005d2bc2: FLD double ptr [ESP + 0x58]
//   XREF to: Stack[-0x68] (READ)
// 005d2bc6: MOV ECX,0x6
// 005d2bcb: LEA EDI,[ESP + 0x78]
//   XREF to: Stack[-0x48] (DATA)
// 005d2bcf: LEA ESI,[ESP + 0x90]
//   XREF to: Stack[-0x30] (DATA)
// 005d2bd6: FXCH ST2
// 005d2bd8: FADD double ptr [EBX]
// 005d2bda: FXCH
// 005d2bdc: FADD double ptr [EBX + 0x8]
// 005d2bdf: FXCH ST2
// 005d2be1: FADD double ptr [EBX + 0x10]
// 005d2be4: FXCH
// 005d2be6: FSTP double ptr [ESP + 0x90]
//   XREF to: Stack[-0x30] (WRITE)
// 005d2bed: FXCH
// 005d2bef: FSTP double ptr [ESP + 0x98]
//   XREF to: Stack[-0x28] (WRITE)
// 005d2bf6: FSTP double ptr [ESP + 0xa0]
//   XREF to: Stack[-0x20] (WRITE)
// 005d2bfd: MOVSD.REP ES:EDI,ESI
// 005d2bff: MOV EAX,dword ptr [ESP + 0x78]
//   XREF to: Stack[-0x48] (READ)
// 005d2c03: MOV dword ptr [EDX],EAX
// 005d2c05: MOV EAX,dword ptr [ESP + 0x7c]
//   XREF to: Stack[-0x44] (READ)
// 005d2c09: MOV dword ptr [EDX + 0x4],EAX
// 005d2c0c: MOV EAX,dword ptr [ESP + 0x80]
//   XREF to: Stack[-0x40] (READ)
// 005d2c13: MOV dword ptr [EDX + 0x8],EAX
// 005d2c16: MOV EAX,dword ptr [ESP + 0x84]
//   XREF to: Stack[-0x3c] (READ)
// 005d2c1d: MOV dword ptr [EDX + 0xc],EAX
// 005d2c20: MOV EAX,dword ptr [ESP + 0x88]
//   XREF to: Stack[-0x38] (READ)
// 005d2c27: MOV dword ptr [EDX + 0x10],EAX
// 005d2c2a: MOV EAX,dword ptr [ESP + 0x8c]
//   XREF to: Stack[-0x34] (READ)
// 005d2c31: MOV dword ptr [EDX + 0x14],EAX
// 005d2c34: JMP 0x005d2af6
//   XREF to: 005d2af6 (UNCONDITIONAL_JUMP)
