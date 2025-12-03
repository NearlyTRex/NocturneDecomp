// Name: shape_superopt.cpp_CObj_transformMasked_FUN_005d2dd0
// Address: 005d2dd0
// Address Range: [[005d2dd0, 005d2f4a]]
// Convention: __cdecl
// Signature: void shape_superopt.cpp_CObj_transformMasked_FUN_005d2dd0(CObj * this_ptr, uint flag_mask, CMatrix3x3d * matrix, CVec * pivot)

#include "nocturne.h"

void __cdecl
shape_superopt_cpp_CObj_transformMasked_FUN_005d2dd0
          (CObj *this_ptr,uint flag_mask,CMatrix3x3d *matrix,CVec *pivot)

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
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  double dStack_6c;
  double dStack_64;
  double dStack_5c;
  double dStack_54;
  double dStack_4c;
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
        if ((pCVar2->state_flags & flag_mask) == flag_mask) {
          dStack_3c = (pCVar2->position).impl.x - (pivot->impl).x;
          dStack_34 = (pCVar2->position).impl.y - (pivot->impl).y;
          dStack_2c = (pCVar2->position).impl.z - (pivot->impl).z;
          pdVar3 = &dStack_3c;
          pdVar4 = &dStack_9c;
          for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
            *(undefined4 *)pdVar4 = *(undefined4 *)pdVar3;
            pdVar3 = (double *)((int)pdVar3 + (uint)bVar6 * -8 + 4);
            pdVar4 = (double *)((int)pdVar4 + ((uint)bVar6 * -2 + 1) * 4);
          }
          dStack_6c = matrix->m[0].z * dStack_8c +
                      matrix->m[0].x * dStack_9c + matrix->m[0].y * dStack_94;
          dStack_64 = matrix->m[1].z * dStack_8c +
                      matrix->m[1].x * dStack_9c + matrix->m[1].y * dStack_94;
          dStack_5c = matrix->m[2].z * dStack_8c +
                      matrix->m[2].x * dStack_9c + matrix->m[2].y * dStack_94;
          pdVar3 = &dStack_6c;
          pdVar4 = &dStack_54;
          for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
            *(undefined4 *)pdVar4 = *(undefined4 *)pdVar3;
            pdVar3 = (double *)((int)pdVar3 + (uint)bVar6 * -8 + 4);
            pdVar4 = (double *)((int)pdVar4 + (uint)bVar6 * -8 + 4);
          }
          dStack_24 = dStack_54 + (pivot->impl).x;
          dStack_1c = dStack_4c + (pivot->impl).y;
          pdVar3 = &dStack_24;
          puVar5 = &uStack_84;
          for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
            *puVar5 = *(undefined4 *)pdVar3;
            pdVar3 = (double *)((int)pdVar3 + (uint)bVar6 * -8 + 4);
            puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
          }
          *(undefined4 *)&(pCVar2->position).impl.x = uStack_84;
          *(undefined4 *)((int)&(pCVar2->position).impl.x + 4) = uStack_80;
          *(undefined4 *)&(pCVar2->position).impl.y = uStack_7c;
          *(undefined4 *)((int)&(pCVar2->position).impl.y + 4) = uStack_78;
          *(undefined4 *)&(pCVar2->position).impl.z = uStack_74;
          *(undefined4 *)((int)&(pCVar2->position).impl.z + 4) = uStack_70;
        }
        pCVar2 = pCVar2 + 1;
        uVar7 = uVar7 + 1;
      } while (uVar7 < (uint)this_ptr->vertex_count);
    }
  }
  return;
}


// Assembly code:
// 005d2dd0: PUSH EBX
//   Label: shape_superopt.cpp_CObj_transformMasked_FUN_005d2dd0
// 005d2dd1: PUSH ESI
// 005d2dd2: PUSH EDI
// 005d2dd3: PUSH EBP
// 005d2dd4: MOV EBP,ESP
// 005d2dd6: SUB ESP,0x94
// 005d2ddc: AND ESP,0xfffffff8
// 005d2ddf: MOV EBX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 005d2de2: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005d2de5: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005d2de8: PUSH EDX
// 005d2de9: MOV EAX,dword ptr [EAX + 0x18]
// 005d2dec: CALL dword ptr [EAX + 0x4]
// 005d2def: ADD ESP,0x4
// 005d2df2: TEST EAX,EAX
// 005d2df4: JZ 0x005d2e35
//   XREF to: 005d2e35 (CONDITIONAL_JUMP)
// 005d2df6: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005d2df9: XOR ECX,ECX
// 005d2dfb: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005d2dfe: MOV dword ptr [ESP + 0x90],ECX
// 005d2e05: MOV ESI,dword ptr [EAX]
// 005d2e07: MOV EDX,dword ptr [EDX + 0x4]
// 005d2e0a: TEST ESI,ESI
// 005d2e0c: JBE 0x005d2e35
//   XREF to: 005d2e35 (CONDITIONAL_JUMP)
// 005d2e0e: MOV EDI,dword ptr [EBP + 0x18]
//   Label: LAB_005d2e0e
//   XREF to: Stack[0x8] (READ)
// 005d2e11: MOV EAX,dword ptr [EDX + 0x34]
// 005d2e14: AND EAX,EDI
// 005d2e16: CMP EAX,EDI
// 005d2e18: JZ 0x005d2e3c
//   XREF to: 005d2e3c (CONDITIONAL_JUMP)
// 005d2e1a: MOV EDI,dword ptr [ESP + 0x90]
//   Label: LAB_005d2e1a
// 005d2e21: MOV ECX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005d2e24: ADD EDX,0x38
// 005d2e27: INC EDI
// 005d2e28: MOV ESI,dword ptr [ECX]
// 005d2e2a: MOV dword ptr [ESP + 0x90],EDI
// 005d2e31: CMP EDI,ESI
// 005d2e33: JC 0x005d2e0e
//   XREF to: 005d2e0e (CONDITIONAL_JUMP)
// 005d2e35: MOV ESP,EBP
//   Label: LAB_005d2e35
// 005d2e37: POP EBP
// 005d2e38: POP EDI
// 005d2e39: POP ESI
// 005d2e3a: POP EBX
// 005d2e3b: RET
// 005d2e3c: FLD double ptr [EDX]
//   Label: LAB_005d2e3c
// 005d2e3e: FLD double ptr [EDX + 0x8]
// 005d2e41: FLD double ptr [EDX + 0x10]
// 005d2e44: MOV EAX,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 005d2e47: MOV ECX,0x6
// 005d2e4c: MOV EDI,ESP
// 005d2e4e: LEA ESI,[ESP + 0x60]
// 005d2e52: FXCH ST2
// 005d2e54: FSUB double ptr [EAX]
// 005d2e56: FXCH
// 005d2e58: FSUB double ptr [EAX + 0x8]
// 005d2e5b: FXCH ST2
// 005d2e5d: FSUB double ptr [EAX + 0x10]
// 005d2e60: FXCH
// 005d2e62: FSTP double ptr [ESP + 0x60]
// 005d2e66: FXCH
// 005d2e68: FSTP double ptr [ESP + 0x68]
// 005d2e6c: FSTP double ptr [ESP + 0x70]
// 005d2e70: MOVSD.REP ES:EDI,ESI
// 005d2e72: FLD double ptr [EBX + 0x8]
// 005d2e75: FMUL double ptr [ESP + 0x8]
// 005d2e79: FLD double ptr [EBX + 0x20]
// 005d2e7c: FMUL double ptr [ESP + 0x8]
// 005d2e80: FLD double ptr [EBX + 0x38]
// 005d2e83: FMUL double ptr [ESP + 0x8]
// 005d2e87: FLD double ptr [EBX]
// 005d2e89: FMUL double ptr [ESP]
// 005d2e8c: FLD double ptr [EBX + 0x18]
// 005d2e8f: FMUL double ptr [ESP]
// 005d2e92: FLD double ptr [EBX + 0x30]
// 005d2e95: FXCH ST2
// 005d2e97: FADDP ST5,ST0
// 005d2e99: FXCH
// 005d2e9b: FMUL double ptr [ESP]
// 005d2e9e: FLD double ptr [EBX + 0x10]
// 005d2ea1: FMUL double ptr [ESP + 0x10]
// 005d2ea5: FXCH ST2
// 005d2ea7: FADDP ST4,ST0
// 005d2ea9: FADDP ST2,ST0
// 005d2eab: FLD double ptr [EBX + 0x28]
// 005d2eae: FMUL double ptr [ESP + 0x10]
// 005d2eb2: FLD double ptr [EBX + 0x40]
// 005d2eb5: FMUL double ptr [ESP + 0x10]
// 005d2eb9: MOV ECX,0x6
// 005d2ebe: LEA EDI,[ESP + 0x48]
// 005d2ec2: LEA ESI,[ESP + 0x30]
// 005d2ec6: FXCH ST2
// 005d2ec8: FADDP ST5,ST0
// 005d2eca: FADDP ST3,ST0
// 005d2ecc: FADDP
// 005d2ece: FXCH ST2
// 005d2ed0: FSTP double ptr [ESP + 0x30]
// 005d2ed4: FSTP double ptr [ESP + 0x38]
// 005d2ed8: FSTP double ptr [ESP + 0x40]
// 005d2edc: MOVSD.REP ES:EDI,ESI
// 005d2ede: FLD double ptr [ESP + 0x48]
// 005d2ee2: FLD double ptr [ESP + 0x50]
// 005d2ee6: FLD double ptr [ESP + 0x58]
// 005d2eea: MOV ECX,0x6
// 005d2eef: LEA EDI,[ESP + 0x18]
// 005d2ef3: LEA ESI,[ESP + 0x78]
// 005d2ef7: FXCH ST2
// 005d2ef9: FADD double ptr [EAX]
// 005d2efb: FXCH
// 005d2efd: FADD double ptr [EAX + 0x8]
// 005d2f00: FXCH ST2
// 005d2f02: FADD double ptr [EAX + 0x10]
// 005d2f05: FXCH
// 005d2f07: FSTP double ptr [ESP + 0x78]
// 005d2f0b: FXCH
// 005d2f0d: FSTP double ptr [ESP + 0x80]
// 005d2f14: FSTP double ptr [ESP + 0x88]
// 005d2f1b: MOVSD.REP ES:EDI,ESI
// 005d2f1d: MOV EAX,dword ptr [ESP + 0x18]
// 005d2f21: MOV dword ptr [EDX],EAX
// 005d2f23: MOV EAX,dword ptr [ESP + 0x1c]
// 005d2f27: MOV dword ptr [EDX + 0x4],EAX
// 005d2f2a: MOV EAX,dword ptr [ESP + 0x20]
// 005d2f2e: MOV dword ptr [EDX + 0x8],EAX
// 005d2f31: MOV EAX,dword ptr [ESP + 0x24]
// 005d2f35: MOV dword ptr [EDX + 0xc],EAX
// 005d2f38: MOV EAX,dword ptr [ESP + 0x28]
// 005d2f3c: MOV dword ptr [EDX + 0x10],EAX
// 005d2f3f: MOV EAX,dword ptr [ESP + 0x2c]
// 005d2f43: MOV dword ptr [EDX + 0x14],EAX
// 005d2f46: JMP 0x005d2e1a
//   XREF to: 005d2e1a (UNCONDITIONAL_JUMP)
