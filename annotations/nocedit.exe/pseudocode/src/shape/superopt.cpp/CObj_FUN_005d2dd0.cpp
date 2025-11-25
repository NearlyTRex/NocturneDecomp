// Name: shape_superopt.cpp_CObj_FUN_005d2dd0
// Address: 005d2dd0
// Address Range: [[005d2dd0, 005d2f4a]]
// Convention: __cdecl
// Signature: void shape_superopt.cpp_CObj_FUN_005d2dd0(CObj * this_ptr)

#include "nocturne.h"

void __cdecl shape_superopt_cpp_CObj_FUN_005d2dd0(CObj *this_ptr)

{
  int iVar1;
  double *pdVar2;
  BADSPACEBASE *in_ESP;
  double *pdVar3;
  double *pdVar4;
  undefined4 *puVar5;
  byte bVar6;
  uint in_stack_00000008;
  double *in_stack_0000000c;
  double *in_stack_00000010;
  double dStack_a8;
  double dStack_a0;
  double dStack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  double dStack_78;
  double dStack_70;
  double dStack_68;
  double dStack_60;
  double dStack_58;
  double dStack_50;
  double dStack_48;
  double dStack_40;
  double dStack_38;
  double dStack_30;
  double dStack_28;
  double dStack_20;
  uint uStack_18;
  
  bVar6 = 0;
  iVar1 = (**(code **)((int)this_ptr->vtable + 4))();
  if (iVar1 != 0) {
    uStack_18 = 0;
    pdVar2 = (double *)this_ptr->vertex_data;
    if (this_ptr->field0_0x0 != 0) {
      do {
        if ((*(uint *)((int)pdVar2 + 0x34) & in_stack_00000008) == in_stack_00000008) {
          dStack_48 = *pdVar2 - *in_stack_00000010;
          dStack_40 = pdVar2[1] - in_stack_00000010[1];
          dStack_38 = pdVar2[2] - in_stack_00000010[2];
          pdVar3 = &dStack_48;
          pdVar4 = &dStack_a8;
          for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
            *(undefined4 *)pdVar4 = *(undefined4 *)pdVar3;
            pdVar3 = (double *)((int)pdVar3 + (uint)bVar6 * -8 + 4);
            pdVar4 = (double *)((int)pdVar4 + ((uint)bVar6 * -2 + 1) * 4);
          }
          dStack_78 = in_stack_0000000c[2] * dStack_98 +
                      *in_stack_0000000c * dStack_a8 + in_stack_0000000c[1] * dStack_a0;
          dStack_70 = in_stack_0000000c[5] * dStack_98 +
                      in_stack_0000000c[3] * dStack_a8 + in_stack_0000000c[4] * dStack_a0;
          dStack_68 = in_stack_0000000c[8] * dStack_98 +
                      in_stack_0000000c[6] * dStack_a8 + in_stack_0000000c[7] * dStack_a0;
          pdVar3 = &dStack_78;
          pdVar4 = &dStack_60;
          for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
            *(undefined4 *)pdVar4 = *(undefined4 *)pdVar3;
            pdVar3 = (double *)((int)pdVar3 + (uint)bVar6 * -8 + 4);
            pdVar4 = (double *)((int)pdVar4 + (uint)bVar6 * -8 + 4);
          }
          dStack_30 = dStack_60 + *in_stack_00000010;
          dStack_28 = dStack_58 + in_stack_00000010[1];
          dStack_20 = dStack_50 + in_stack_00000010[2];
          pdVar3 = &dStack_30;
          puVar5 = &uStack_90;
          for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
            *puVar5 = *(undefined4 *)pdVar3;
            pdVar3 = (double *)((int)pdVar3 + (uint)bVar6 * -8 + 4);
            puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
          }
          *(undefined4 *)pdVar2 = uStack_90;
          *(undefined4 *)((int)pdVar2 + 4) = uStack_8c;
          *(undefined4 *)(pdVar2 + 1) = uStack_88;
          *(undefined4 *)((int)pdVar2 + 0xc) = uStack_84;
          *(undefined4 *)(pdVar2 + 2) = uStack_80;
          *(undefined4 *)((int)pdVar2 + 0x14) = uStack_7c;
        }
        pdVar2 = pdVar2 + 7;
        uStack_18 = uStack_18 + 1;
      } while (uStack_18 < (uint)this_ptr->field0_0x0);
    }
  }
  return;
}


// Assembly code:
// 005d2dd0: PUSH EBX
//   Label: shape_superopt.cpp_CObj_FUN_005d2dd0
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
