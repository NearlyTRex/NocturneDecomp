// Name: shape_superopt.cpp_CObj_transform_FUN_005d2c40
// Address: 005d2c40
// Address Range: [[005d2c40, 005d2dc6]]
// Convention: __cdecl
// Signature: void shape_superopt.cpp_CObj_transform_FUN_005d2c40(CObj * this_ptr, CMatrix3x3d * matrix, CVec * pivot)

#include "nocturne.h"

void __cdecl
shape_superopt_cpp_CObj_transform_FUN_005d2c40(CObj *this_ptr,CMatrix3x3d *matrix,CVec *pivot)

{
  int iVar1;
  CVert *pCVar2;
  BADSPACEBASE *in_ESP;
  double *pdVar3;
  double *pdVar4;
  undefined4 *puVar5;
  byte bVar6;
  double dStack_9c;
  double dStack_94;
  double dStack_8c;
  double dStack_84;
  double dStack_7c;
  double dStack_74;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  double dStack_54;
  double dStack_4c;
  double dStack_44;
  double dStack_3c;
  double dStack_34;
  double dStack_2c;
  double dStack_24;
  double dStack_1c;
  uint uVar7;
  
  bVar6 = 0;
  iVar1 = (*this_ptr->vtable->isValid)(this_ptr);
  if (iVar1 != 0) {
    uVar7 = 0;
    pCVar2 = this_ptr->vertex_data;
    if (this_ptr->vertex_count != 0) {
      do {
        dStack_84 = (pCVar2->position).impl.x - (pivot->impl).x;
        dStack_7c = (pCVar2->position).impl.y - (pivot->impl).y;
        dStack_74 = (pCVar2->position).impl.z - (pivot->impl).z;
        pdVar3 = &dStack_84;
        pdVar4 = &dStack_3c;
        for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
          *(undefined4 *)pdVar4 = *(undefined4 *)pdVar3;
          pdVar3 = (double *)((int)pdVar3 + (uint)bVar6 * -8 + 4);
          pdVar4 = (double *)((int)pdVar4 + (uint)bVar6 * -8 + 4);
        }
        dStack_24 = matrix->m[0].z * dStack_2c +
                    matrix->m[0].x * dStack_3c + matrix->m[0].y * dStack_34;
        dStack_1c = matrix->m[1].z * dStack_2c +
                    matrix->m[1].x * dStack_3c + matrix->m[1].y * dStack_34;
        pdVar3 = &dStack_24;
        pdVar4 = &dStack_9c;
        for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
          *(undefined4 *)pdVar4 = *(undefined4 *)pdVar3;
          pdVar3 = (double *)((int)pdVar3 + (uint)bVar6 * -8 + 4);
          pdVar4 = (double *)((int)pdVar4 + ((uint)bVar6 * -2 + 1) * 4);
        }
        dStack_54 = dStack_9c + (pivot->impl).x;
        dStack_4c = dStack_94 + (pivot->impl).y;
        dStack_44 = dStack_8c + (pivot->impl).z;
        pdVar3 = &dStack_54;
        puVar5 = &uStack_6c;
        for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar5 = *(undefined4 *)pdVar3;
          pdVar3 = (double *)((int)pdVar3 + (uint)bVar6 * -8 + 4);
          puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
        }
        *(undefined4 *)&(pCVar2->position).impl.x = uStack_6c;
        *(undefined4 *)((int)&(pCVar2->position).impl.x + 4) = uStack_68;
        *(undefined4 *)&(pCVar2->position).impl.y = uStack_64;
        *(undefined4 *)((int)&(pCVar2->position).impl.y + 4) = uStack_60;
        *(undefined4 *)&(pCVar2->position).impl.z = uStack_5c;
        *(undefined4 *)((int)&(pCVar2->position).impl.z + 4) = uStack_58;
        uVar7 = uVar7 + 1;
        pCVar2 = pCVar2 + 1;
      } while (uVar7 < (uint)this_ptr->vertex_count);
    }
  }
  return;
}


// Assembly code:
// 005d2c40: PUSH EBX
//   Label: shape_superopt.cpp_CObj_transform_FUN_005d2c40
// 005d2c41: PUSH ESI
// 005d2c42: PUSH EDI
// 005d2c43: PUSH EBP
// 005d2c44: MOV EBP,ESP
// 005d2c46: SUB ESP,0x94
// 005d2c4c: AND ESP,0xfffffff8
// 005d2c4f: MOV EBX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005d2c52: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005d2c55: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005d2c58: PUSH EDX
// 005d2c59: MOV EAX,dword ptr [EAX + 0x18]
// 005d2c5c: CALL dword ptr [EAX + 0x4]
// 005d2c5f: ADD ESP,0x4
// 005d2c62: TEST EAX,EAX
// 005d2c64: JZ 0x005d2dc0
//   XREF to: 005d2dc0 (CONDITIONAL_JUMP)
// 005d2c6a: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005d2c6d: XOR ECX,ECX
// 005d2c6f: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005d2c72: MOV dword ptr [ESP + 0x90],ECX
// 005d2c79: MOV ESI,dword ptr [EAX]
// 005d2c7b: MOV EDX,dword ptr [EDX + 0x4]
// 005d2c7e: TEST ESI,ESI
// 005d2c80: JBE 0x005d2dc0
//   XREF to: 005d2dc0 (CONDITIONAL_JUMP)
// 005d2c86: FLD double ptr [EDX]
//   Label: LAB_005d2c86
// 005d2c88: FLD double ptr [EDX + 0x8]
// 005d2c8b: FLD double ptr [EDX + 0x10]
// 005d2c8e: MOV EAX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 005d2c91: MOV ECX,0x6
// 005d2c96: LEA EDI,[ESP + 0x60]
// 005d2c9a: LEA ESI,[ESP + 0x18]
// 005d2c9e: FXCH ST2
// 005d2ca0: FSUB double ptr [EAX]
// 005d2ca2: FXCH
// 005d2ca4: FSUB double ptr [EAX + 0x8]
// 005d2ca7: FXCH ST2
// 005d2ca9: FSUB double ptr [EAX + 0x10]
// 005d2cac: FXCH
// 005d2cae: FSTP double ptr [ESP + 0x18]
// 005d2cb2: FXCH
// 005d2cb4: FSTP double ptr [ESP + 0x20]
// 005d2cb8: FSTP double ptr [ESP + 0x28]
// 005d2cbc: MOVSD.REP ES:EDI,ESI
// 005d2cbe: FLD double ptr [EBX + 0x8]
// 005d2cc1: FMUL double ptr [ESP + 0x68]
// 005d2cc5: FLD double ptr [EBX + 0x20]
// 005d2cc8: FMUL double ptr [ESP + 0x68]
// 005d2ccc: FLD double ptr [EBX + 0x38]
// 005d2ccf: FMUL double ptr [ESP + 0x68]
// 005d2cd3: FLD double ptr [EBX]
// 005d2cd5: FMUL double ptr [ESP + 0x60]
// 005d2cd9: FLD double ptr [EBX + 0x18]
// 005d2cdc: FMUL double ptr [ESP + 0x60]
// 005d2ce0: FLD double ptr [EBX + 0x30]
// 005d2ce3: FXCH ST2
// 005d2ce5: FADDP ST5,ST0
// 005d2ce7: FXCH
// 005d2ce9: FMUL double ptr [ESP + 0x60]
// 005d2ced: FLD double ptr [EBX + 0x10]
// 005d2cf0: FMUL double ptr [ESP + 0x70]
// 005d2cf4: FXCH ST2
// 005d2cf6: FADDP ST4,ST0
// 005d2cf8: FADDP ST2,ST0
// 005d2cfa: FLD double ptr [EBX + 0x28]
// 005d2cfd: FMUL double ptr [ESP + 0x70]
// 005d2d01: FLD double ptr [EBX + 0x40]
// 005d2d04: FMUL double ptr [ESP + 0x70]
// 005d2d08: MOV ECX,0x6
// 005d2d0d: MOV EDI,ESP
// 005d2d0f: LEA ESI,[ESP + 0x78]
// 005d2d13: FXCH ST2
// 005d2d15: FADDP ST5,ST0
// 005d2d17: FADDP ST3,ST0
// 005d2d19: FADDP
// 005d2d1b: FXCH ST2
// 005d2d1d: FSTP double ptr [ESP + 0x78]
// 005d2d21: FSTP double ptr [ESP + 0x80]
// 005d2d28: FSTP double ptr [ESP + 0x88]
// 005d2d2f: MOVSD.REP ES:EDI,ESI
// 005d2d31: FLD double ptr [ESP]
// 005d2d34: FLD double ptr [ESP + 0x8]
// 005d2d38: FLD double ptr [ESP + 0x10]
// 005d2d3c: MOV ECX,0x6
// 005d2d41: LEA EDI,[ESP + 0x30]
// 005d2d45: LEA ESI,[ESP + 0x48]
// 005d2d49: FXCH ST2
// 005d2d4b: FADD double ptr [EAX]
// 005d2d4d: FXCH
// 005d2d4f: FADD double ptr [EAX + 0x8]
// 005d2d52: FXCH ST2
// 005d2d54: FADD double ptr [EAX + 0x10]
// 005d2d57: FXCH
// 005d2d59: FSTP double ptr [ESP + 0x48]
// 005d2d5d: FXCH
// 005d2d5f: FSTP double ptr [ESP + 0x50]
// 005d2d63: FSTP double ptr [ESP + 0x58]
// 005d2d67: MOVSD.REP ES:EDI,ESI
// 005d2d69: ADD EDX,0x38
// 005d2d6c: MOV EAX,dword ptr [ESP + 0x30]
// 005d2d70: MOV dword ptr [EDX + -0x38],EAX
// 005d2d73: MOV EAX,dword ptr [ESP + 0x34]
// 005d2d77: MOV dword ptr [EDX + -0x34],EAX
// 005d2d7a: MOV EAX,dword ptr [ESP + 0x38]
// 005d2d7e: MOV dword ptr [EDX + -0x30],EAX
// 005d2d81: MOV EAX,dword ptr [ESP + 0x3c]
// 005d2d85: MOV dword ptr [EDX + -0x2c],EAX
// 005d2d88: MOV EAX,dword ptr [ESP + 0x40]
// 005d2d8c: MOV EDI,dword ptr [ESP + 0x90]
// 005d2d93: MOV dword ptr [EDX + -0x28],EAX
// 005d2d96: MOV EAX,dword ptr [ESP + 0x44]
// 005d2d9a: MOV ECX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005d2d9d: MOV dword ptr [EDX + -0x24],EAX
// 005d2da0: INC EDI
// 005d2da1: MOV ESI,dword ptr [ECX]
// 005d2da3: MOV dword ptr [ESP + 0x90],EDI
// 005d2daa: CMP EDI,ESI
// 005d2dac: JC 0x005d2c86
//   XREF to: 005d2c86 (CONDITIONAL_JUMP)
// 005d2db2: LEA EAX,[EAX]
// 005d2db8: LEA EDX,[EDX]
// 005d2dbe: MOV EAX,EAX
// 005d2dc0: MOV ESP,EBP
//   Label: LAB_005d2dc0
// 005d2dc2: POP EBP
// 005d2dc3: POP EDI
// 005d2dc4: POP ESI
// 005d2dc5: POP EBX
// 005d2dc6: RET
