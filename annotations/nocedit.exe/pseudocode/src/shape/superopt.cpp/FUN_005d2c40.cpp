// Name: shape_superopt.cpp_FUN_005d2c40
// Address: 005d2c40
// Address Range: [[005d2c40, 005d2dc6]]
// Convention: unknown
// Signature: undefined shape_superopt.cpp_FUN_005d2c40()

#include "nocturne.h"

/* Signature: undefined1 shape_superopt.cpp_FUN_005d2c40(undefined4 param_1, undefined4 param_2,
   undefined4 param_3) */

uint * shape_superopt_cpp_FUN_005d2c40(void)

{
  uint *puVar1;
  int iVar2;
  double *pdVar3;
  BADSPACEBASE *in_ESP;
  double *pdVar4;
  double *pdVar5;
  undefined4 *puVar6;
  byte bVar7;
  uint *in_stack_00000004;
  double *in_stack_00000008;
  double *in_stack_0000000c;
  double dStack_a8;
  double dStack_a0;
  double dStack_98;
  double dStack_90;
  double dStack_88;
  double dStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  uint *puStack_64;
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
  
  bVar7 = 0;
  puVar1 = (uint *)(**(code **)(in_stack_00000004[6] + 4))();
  if (puVar1 != (uint *)0x0) {
    uStack_18 = 0;
    puVar1 = in_stack_00000004;
    pdVar3 = (double *)in_stack_00000004[1];
    if (*in_stack_00000004 != 0) {
      do {
        dStack_90 = *pdVar3 - *in_stack_0000000c;
        dStack_88 = pdVar3[1] - in_stack_0000000c[1];
        dStack_80 = pdVar3[2] - in_stack_0000000c[2];
        pdVar4 = &dStack_90;
        pdVar5 = &dStack_48;
        for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
          *(undefined4 *)pdVar5 = *(undefined4 *)pdVar4;
          pdVar4 = (double *)((int)pdVar4 + (uint)bVar7 * -8 + 4);
          pdVar5 = (double *)((int)pdVar5 + (uint)bVar7 * -8 + 4);
        }
        dStack_30 = in_stack_00000008[2] * dStack_38 +
                    *in_stack_00000008 * dStack_48 + in_stack_00000008[1] * dStack_40;
        dStack_28 = in_stack_00000008[5] * dStack_38 +
                    in_stack_00000008[3] * dStack_48 + in_stack_00000008[4] * dStack_40;
        dStack_20 = in_stack_00000008[8] * dStack_38 +
                    in_stack_00000008[6] * dStack_48 + in_stack_00000008[7] * dStack_40;
        pdVar4 = &dStack_30;
        pdVar5 = &dStack_a8;
        for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
          *(undefined4 *)pdVar5 = *(undefined4 *)pdVar4;
          pdVar4 = (double *)((int)pdVar4 + (uint)bVar7 * -8 + 4);
          pdVar5 = (double *)((int)pdVar5 + ((uint)bVar7 * -2 + 1) * 4);
        }
        dStack_60 = dStack_a8 + *in_stack_0000000c;
        dStack_58 = dStack_a0 + in_stack_0000000c[1];
        dStack_50 = dStack_98 + in_stack_0000000c[2];
        pdVar4 = &dStack_60;
        puVar6 = &uStack_78;
        for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar6 = *(undefined4 *)pdVar4;
          pdVar4 = (double *)((int)pdVar4 + (uint)bVar7 * -8 + 4);
          puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
        }
        *(undefined4 *)pdVar3 = uStack_78;
        *(undefined4 *)((int)pdVar3 + 4) = uStack_74;
        *(undefined4 *)(pdVar3 + 1) = uStack_70;
        *(undefined4 *)((int)pdVar3 + 0xc) = uStack_6c;
        *(undefined4 *)(pdVar3 + 2) = uStack_68;
        *(uint **)((int)pdVar3 + 0x14) = puStack_64;
        uStack_18 = uStack_18 + 1;
        puVar1 = puStack_64;
        pdVar3 = pdVar3 + 7;
      } while (uStack_18 < *in_stack_00000004);
    }
  }
  return puVar1;
}


// Assembly code:
// 005d2c40: PUSH EBX
//   Label: shape_superopt.cpp_FUN_005d2c40
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
