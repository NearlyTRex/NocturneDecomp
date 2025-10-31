// Name: shape_superopt.cpp_FUN_005d0010
// Address: 005d0010
// Address Range: [[005d0010, 005d033c]]
// Convention: unknown
// Signature: undefined shape_superopt.cpp_FUN_005d0010()
// Globals:
//   undefined4 DAT_006542f2
//   undefined4 DAT_006542fa
//   undefined4 DAT_00654302

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 shape_superopt.cpp_FUN_005d0010(undefined4 param_1, undefined4 param_2,
   undefined4 param_3, undefined4 param_4) */

undefined4 shape_superopt_cpp_FUN_005d0010(void)

{
  double dVar1;
  double *pdVar2;
  undefined4 uVar3;
  double *pdVar4;
  int iVar5;
  double *pdVar6;
  BADSPACEBASE *in_ESP;
  undefined4 *puVar7;
  int *in_stack_00000004;
  double *in_stack_00000008;
  double *in_stack_0000000c;
  undefined4 *in_stack_00000010;
  double local_d8;
  undefined4 local_c8 [4];
  undefined4 local_b8;
  undefined4 local_b4;
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
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  int local_18;
  int local_14;
  
  local_14 = *(int *)(*in_stack_00000004 + 4);
  pdVar6 = (double *)(local_14 + in_stack_00000004[1] * 0x38);
  pdVar4 = (double *)(local_14 + in_stack_00000004[2] * 0x38);
  local_18 = in_stack_00000004[3] * 8;
  pdVar2 = (double *)(in_stack_00000004[3] * 0x38 + local_14);
  local_38 = (pdVar2[2] - pdVar6[2]) * (pdVar4[1] - pdVar6[1]) -
             (pdVar4[2] - pdVar6[2]) * (pdVar2[1] - pdVar6[1]);
  local_30 = (*pdVar2 - *pdVar6) * (pdVar4[2] - pdVar6[2]) -
             (*pdVar4 - *pdVar6) * (pdVar2[2] - pdVar6[2]);
  local_28 = (*pdVar4 - *pdVar6) * (pdVar2[1] - pdVar6[1]) -
             (*pdVar2 - *pdVar6) * (pdVar4[1] - pdVar6[1]);
  dVar1 = 1.0 / SQRT(local_28 * local_28 + local_30 * local_30 + local_38 * local_38);
  local_38 = local_38 * dVar1;
  local_30 = local_30 * dVar1;
  local_28 = local_28 * dVar1;
  dVar1 = (in_stack_0000000c[2] - in_stack_00000008[2]) * local_28 +
          (*in_stack_0000000c - *in_stack_00000008) * local_38 +
          (in_stack_0000000c[1] - in_stack_00000008[1]) * local_30;
  local_d8 = dVar1;
  if (dVar1 < 0.0) {
    local_d8 = -dVar1;
  }
  if (((_DAT_006542f2 <= local_d8) &&
      (dVar1 = -(local_28 * in_stack_00000008[2] +
                local_38 * *in_stack_00000008 +
                ((-local_38 * *pdVar6 - local_30 * pdVar6[1]) - local_28 * pdVar6[2]) +
                local_30 * in_stack_00000008[1]) / dVar1, _DAT_006542fa <= dVar1)) &&
     (dVar1 <= _DAT_00654302)) {
    local_b0 = *in_stack_0000000c - *in_stack_00000008;
    local_a8 = in_stack_0000000c[1] - in_stack_00000008[1];
    local_a0 = in_stack_0000000c[2] - in_stack_00000008[2];
    pdVar2 = &local_b0;
    pdVar4 = &local_98;
    for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(undefined4 *)pdVar4 = *(undefined4 *)pdVar2;
      pdVar2 = (double *)((int)pdVar2 + 4);
      pdVar4 = (double *)((int)pdVar4 + 4);
    }
    local_50 = local_98 * dVar1;
    local_48 = local_90 * dVar1;
    local_40 = local_88 * dVar1;
    pdVar2 = &local_50;
    pdVar4 = &local_80;
    for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(undefined4 *)pdVar4 = *(undefined4 *)pdVar2;
      pdVar2 = (double *)((int)pdVar2 + 4);
      pdVar4 = (double *)((int)pdVar4 + 4);
    }
    local_68 = *in_stack_00000008 + local_80;
    local_60 = in_stack_00000008[1] + local_78;
    local_58 = in_stack_00000008[2] + local_70;
    pdVar2 = &local_68;
    puVar7 = local_c8;
    for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar7 = *(undefined4 *)pdVar2;
      pdVar2 = (double *)((int)pdVar2 + 4);
      puVar7 = puVar7 + 1;
    }
    *in_stack_00000010 = local_c8[0];
    in_stack_00000010[1] = local_c8[1];
    in_stack_00000010[2] = local_c8[2];
    in_stack_00000010[3] = local_c8[3];
    in_stack_00000010[4] = local_b8;
    in_stack_00000010[5] = local_b4;
    uVar3 = (**(code **)(in_stack_00000004[0x19] + 100))();
    return uVar3;
  }
  return 0;
}


// Assembly code:
// 005d0010: PUSH EBX
//   Label: shape_superopt.cpp_FUN_005d0010
// 005d0011: PUSH ESI
// 005d0012: PUSH EDI
// 005d0013: PUSH EBP
// 005d0014: MOV EBP,ESP
// 005d0016: SUB ESP,0xd8
// 005d001c: AND ESP,0xfffffff8
// 005d001f: MOV EBX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005d0022: MOV ESI,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 005d0025: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005d0028: MOV EAX,dword ptr [EAX]
// 005d002a: MOV EAX,dword ptr [EAX + 0x4]
// 005d002d: MOV dword ptr [ESP + 0xd4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005d0034: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005d0037: MOV EAX,dword ptr [EAX + 0x4]
// 005d003a: SHL EAX,0x3
// 005d003d: MOV EDX,EAX
// 005d003f: SHL EAX,0x3
// 005d0042: SUB EAX,EDX
// 005d0044: MOV EDX,dword ptr [ESP + 0xd4]
//   XREF to: Stack[-0x14] (READ)
// 005d004b: ADD EDX,EAX
// 005d004d: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005d0050: MOV EAX,dword ptr [EAX + 0x8]
// 005d0053: SHL EAX,0x3
// 005d0056: MOV ECX,EAX
// 005d0058: SHL EAX,0x3
// 005d005b: SUB EAX,ECX
// 005d005d: MOV ECX,dword ptr [ESP + 0xd4]
//   XREF to: Stack[-0x14] (READ)
// 005d0064: ADD ECX,EAX
// 005d0066: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005d0069: MOV EAX,dword ptr [EAX + 0xc]
// 005d006c: MOV dword ptr [ESP + 0xd0],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 005d0073: SHL EAX,0x3
// 005d0076: MOV dword ptr [ESP + 0xd0],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 005d007d: MOV EDI,dword ptr [ESP + 0xd0]
//   XREF to: Stack[-0x18] (READ)
// 005d0084: SHL EAX,0x3
// 005d0087: FLD double ptr [ECX + 0x8]
// 005d008a: SUB EAX,EDI
// 005d008c: MOV EDI,dword ptr [ESP + 0xd4]
//   XREF to: Stack[-0x14] (READ)
// 005d0093: FSUB double ptr [EDX + 0x8]
// 005d0096: ADD EAX,EDI
// 005d0098: FLD double ptr [EAX + 0x10]
// 005d009b: FSUB double ptr [EDX + 0x10]
// 005d009e: FMULP
// 005d00a0: FLD double ptr [EAX + 0x8]
// 005d00a3: FSUB double ptr [EDX + 0x8]
// 005d00a6: FLD double ptr [ECX + 0x10]
// 005d00a9: FSUB double ptr [EDX + 0x10]
// 005d00ac: FMULP
// 005d00ae: FSUBP
// 005d00b0: FSTP double ptr [ESP + 0xb0]
//   XREF to: Stack[-0x38] (WRITE)
// 005d00b7: FLD double ptr [ECX + 0x10]
// 005d00ba: FSUB double ptr [EDX + 0x10]
// 005d00bd: FLD double ptr [EAX]
// 005d00bf: FSUB double ptr [EDX]
// 005d00c1: FMULP
// 005d00c3: FLD double ptr [EAX + 0x10]
// 005d00c6: FSUB double ptr [EDX + 0x10]
// 005d00c9: FLD double ptr [ECX]
// 005d00cb: FSUB double ptr [EDX]
// 005d00cd: FMULP
// 005d00cf: FSUBP
// 005d00d1: FSTP double ptr [ESP + 0xb8]
//   XREF to: Stack[-0x30] (WRITE)
// 005d00d8: FLD double ptr [EAX + 0x8]
// 005d00db: FSUB double ptr [EDX + 0x8]
// 005d00de: FLD double ptr [ECX]
// 005d00e0: FSUB double ptr [EDX]
// 005d00e2: FMULP
// 005d00e4: FLD double ptr [ECX + 0x8]
// 005d00e7: FSUB double ptr [EDX + 0x8]
// 005d00ea: FLD double ptr [ESP + 0xb8]
//   XREF to: Stack[-0x30] (READ)
// 005d00f1: FLD double ptr [EAX]
// 005d00f3: FSUB double ptr [EDX]
// 005d00f5: FXCH
// 005d00f7: FMUL double ptr [ESP + 0xb8]
//   XREF to: Stack[-0x30] (READ)
// 005d00fe: FXCH
// 005d0100: FMULP ST2
// 005d0102: FLD double ptr [ESP + 0xb0]
//   XREF to: Stack[-0x38] (READ)
// 005d0109: FMUL ST0
// 005d010b: FXCH ST2
// 005d010d: FSUBP ST3,ST0
// 005d010f: FADDP
// 005d0111: FXCH
// 005d0113: FST double ptr [ESP + 0xc0]
//   XREF to: Stack[-0x28] (WRITE)
// 005d011a: FMUL double ptr [ESP + 0xc0]
//   XREF to: Stack[-0x28] (READ)
// 005d0121: FADDP
// 005d0123: FSQRT
// 005d0125: FLD double ptr [ESP + 0xb0]
//   XREF to: Stack[-0x38] (READ)
// 005d012c: FLD1
// 005d012e: FDIVRP ST2,ST0
// 005d0130: FMUL ST1
// 005d0132: FLD double ptr [ESP + 0xb8]
//   XREF to: Stack[-0x30] (READ)
// 005d0139: FMUL ST2
// 005d013b: FLD double ptr [ESP + 0xc0]
//   XREF to: Stack[-0x28] (READ)
// 005d0142: FMULP ST3
// 005d0144: FXCH
// 005d0146: FSTP double ptr [ESP + 0xb0]
//   XREF to: Stack[-0x38] (WRITE)
// 005d014d: FSTP double ptr [ESP + 0xb8]
//   XREF to: Stack[-0x30] (WRITE)
// 005d0154: FSTP double ptr [ESP + 0xc0]
//   XREF to: Stack[-0x28] (WRITE)
// 005d015b: FLD double ptr [ESP + 0xb8]
//   XREF to: Stack[-0x30] (READ)
// 005d0162: FLD double ptr [ESI + 0x8]
// 005d0165: FSUB double ptr [EBX + 0x8]
// 005d0168: FXCH
// 005d016a: FMUL double ptr [EDX + 0x8]
// 005d016d: FXCH
// 005d016f: FMUL double ptr [ESP + 0xb8]
//   XREF to: Stack[-0x30] (READ)
// 005d0176: FLD double ptr [ESP + 0xb0]
//   XREF to: Stack[-0x38] (READ)
// 005d017d: FCHS
// 005d017f: FLD double ptr [ESI]
// 005d0181: FSUB double ptr [EBX]
// 005d0183: FXCH
// 005d0185: FMUL double ptr [EDX]
// 005d0187: FXCH
// 005d0189: FMUL double ptr [ESP + 0xb0]
//   XREF to: Stack[-0x38] (READ)
// 005d0190: FXCH
// 005d0192: FSUBRP ST3,ST0
// 005d0194: FADDP
// 005d0196: FLD double ptr [ESP + 0xc0]
//   XREF to: Stack[-0x28] (READ)
// 005d019d: FLD double ptr [ESI + 0x10]
// 005d01a0: FSUB double ptr [EBX + 0x10]
// 005d01a3: FXCH
// 005d01a5: FMUL double ptr [EDX + 0x10]
// 005d01a8: FXCH
// 005d01aa: FMUL double ptr [ESP + 0xc0]
//   XREF to: Stack[-0x28] (READ)
// 005d01b1: FLDZ
// 005d01b3: FXCH ST2
// 005d01b5: FSUBP ST4,ST0
// 005d01b7: FADDP ST2,ST0
// 005d01b9: FXCH ST2
// 005d01bb: FSTP double ptr [ESP + 0x18]
//   XREF to: Stack[-0xd0] (WRITE)
// 005d01bf: FSTP double ptr [ESP]
//   XREF to: Stack[-0xe8] (DATA)
// 005d01c2: FCOMP double ptr [ESP]
//   XREF to: Stack[-0xe8] (DATA)
// 005d01c5: FNSTSW AX
// 005d01c7: SAHF
// 005d01c8: JBE 0x005d0233
//   XREF to: 005d0233 (CONDITIONAL_JUMP)
// 005d01ca: FLD double ptr [ESP]
//   XREF to: Stack[-0xe8] (DATA)
// 005d01cd: FCHS
// 005d01cf: FSTP double ptr [ESP + 0x10]
//   XREF to: Stack[-0xd8] (WRITE)
// 005d01d3: FLD double ptr [ESP + 0x10]
//   Label: LAB_005d01d3
//   XREF to: Stack[-0xd8] (READ)
// 005d01d7: FCOMP double ptr [0x006542f2]
//   XREF to: 006542f2 (READ)
// 005d01dd: FNSTSW AX
// 005d01df: SAHF
// 005d01e0: JC 0x005d022a
//   XREF to: 005d022a (CONDITIONAL_JUMP)
// 005d01e2: FLD double ptr [ESP + 0xb8]
//   XREF to: Stack[-0x30] (READ)
// 005d01e9: FMUL double ptr [EBX + 0x8]
// 005d01ec: FLD double ptr [ESP + 0xb0]
//   XREF to: Stack[-0x38] (READ)
// 005d01f3: FMUL double ptr [EBX]
// 005d01f5: FADD double ptr [ESP + 0x18]
//   XREF to: Stack[-0xd0] (READ)
// 005d01f9: FADDP
// 005d01fb: FLD double ptr [ESP + 0xc0]
//   XREF to: Stack[-0x28] (READ)
// 005d0202: FMUL double ptr [EBX + 0x10]
// 005d0205: FADDP
// 005d0207: FCHS
// 005d0209: FDIV double ptr [ESP]
//   XREF to: Stack[-0xe8] (DATA)
// 005d020c: FST double ptr [ESP + 0x8]
//   XREF to: Stack[-0xe0] (WRITE)
// 005d0210: FCOMP double ptr [0x006542fa]
//   XREF to: 006542fa (READ)
// 005d0216: FNSTSW AX
// 005d0218: SAHF
// 005d0219: JC 0x005d022a
//   XREF to: 005d022a (CONDITIONAL_JUMP)
// 005d021b: FLD double ptr [ESP + 0x8]
//   XREF to: Stack[-0xe0] (READ)
// 005d021f: FCOMP double ptr [0x00654302]
//   XREF to: 00654302 (READ)
// 005d0225: FNSTSW AX
// 005d0227: SAHF
// 005d0228: JBE 0x005d0244
//   XREF to: 005d0244 (CONDITIONAL_JUMP)
// 005d022a: XOR EAX,EAX
//   Label: LAB_005d022a
// 005d022c: MOV ESP,EBP
// 005d022e: POP EBP
// 005d022f: POP EDI
// 005d0230: POP ESI
// 005d0231: POP EBX
// 005d0232: RET
// 005d0233: MOV EAX,dword ptr [ESP]
//   Label: LAB_005d0233
//   XREF to: Stack[-0xe8] (DATA)
// 005d0236: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0xd8] (WRITE)
// 005d023a: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0xe4] (READ)
// 005d023e: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0xd4] (WRITE)
// 005d0242: JMP 0x005d01d3
//   XREF to: 005d01d3 (UNCONDITIONAL_JUMP)
// 005d0244: FLD double ptr [ESI + 0x8]
//   Label: LAB_005d0244
// 005d0247: FLD double ptr [ESI + 0x10]
// 005d024a: FLD double ptr [ESI]
// 005d024c: MOV ECX,0x6
// 005d0251: LEA EDI,[ESP + 0x50]
//   XREF to: Stack[-0x98] (DATA)
// 005d0255: LEA ESI,[ESP + 0x38]
//   XREF to: Stack[-0xb0] (DATA)
// 005d0259: FSUB double ptr [EBX]
// 005d025b: FXCH ST2
// 005d025d: FSUB double ptr [EBX + 0x8]
// 005d0260: FXCH
// 005d0262: FSUB double ptr [EBX + 0x10]
// 005d0265: FXCH ST2
// 005d0267: FSTP double ptr [ESP + 0x38]
//   XREF to: Stack[-0xb0] (WRITE)
// 005d026b: FSTP double ptr [ESP + 0x40]
//   XREF to: Stack[-0xa8] (WRITE)
// 005d026f: FSTP double ptr [ESP + 0x48]
//   XREF to: Stack[-0xa0] (WRITE)
// 005d0273: MOVSD.REP ES:EDI,ESI
// 005d0275: FLD double ptr [ESP + 0x8]
//   XREF to: Stack[-0xe0] (READ)
// 005d0279: FLD double ptr [ESP + 0x50]
//   XREF to: Stack[-0x98] (READ)
// 005d027d: FMUL ST1
// 005d027f: FLD double ptr [ESP + 0x58]
//   XREF to: Stack[-0x90] (READ)
// 005d0283: FMUL ST2
// 005d0285: FLD double ptr [ESP + 0x60]
//   XREF to: Stack[-0x88] (READ)
// 005d0289: FMULP ST3
// 005d028b: MOV ECX,0x6
// 005d0290: LEA EDI,[ESP + 0x68]
//   XREF to: Stack[-0x80] (DATA)
// 005d0294: LEA ESI,[ESP + 0x98]
//   XREF to: Stack[-0x50] (DATA)
// 005d029b: FXCH
// 005d029d: FSTP double ptr [ESP + 0x98]
//   XREF to: Stack[-0x50] (WRITE)
// 005d02a4: FSTP double ptr [ESP + 0xa0]
//   XREF to: Stack[-0x48] (WRITE)
// 005d02ab: FSTP double ptr [ESP + 0xa8]
//   XREF to: Stack[-0x40] (WRITE)
// 005d02b2: MOVSD.REP ES:EDI,ESI
// 005d02b4: FLD double ptr [EBX]
// 005d02b6: FLD double ptr [EBX + 0x8]
// 005d02b9: FLD double ptr [EBX + 0x10]
// 005d02bc: MOV ECX,0x6
// 005d02c1: LEA EDI,[ESP + 0x20]
//   XREF to: Stack[-0xc8] (DATA)
// 005d02c5: LEA ESI,[ESP + 0x80]
//   XREF to: Stack[-0x68] (DATA)
// 005d02cc: FXCH ST2
// 005d02ce: FADD double ptr [ESP + 0x68]
//   XREF to: Stack[-0x80] (READ)
// 005d02d2: FXCH
// 005d02d4: FADD double ptr [ESP + 0x70]
//   XREF to: Stack[-0x78] (READ)
// 005d02d8: FXCH ST2
// 005d02da: FADD double ptr [ESP + 0x78]
//   XREF to: Stack[-0x70] (READ)
// 005d02de: FXCH
// 005d02e0: FSTP double ptr [ESP + 0x80]
//   XREF to: Stack[-0x68] (WRITE)
// 005d02e7: FXCH
// 005d02e9: FSTP double ptr [ESP + 0x88]
//   XREF to: Stack[-0x60] (WRITE)
// 005d02f0: FSTP double ptr [ESP + 0x90]
//   XREF to: Stack[-0x58] (WRITE)
// 005d02f7: MOVSD.REP ES:EDI,ESI
// 005d02f9: MOV EDX,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 005d02fc: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0xc8] (READ)
// 005d0300: MOV dword ptr [EDX],EAX
// 005d0302: MOV EAX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0xc4] (READ)
// 005d0306: MOV dword ptr [EDX + 0x4],EAX
// 005d0309: MOV EAX,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0xc0] (READ)
// 005d030d: MOV dword ptr [EDX + 0x8],EAX
// 005d0310: MOV EAX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0xbc] (READ)
// 005d0314: MOV dword ptr [EDX + 0xc],EAX
// 005d0317: MOV EAX,dword ptr [ESP + 0x30]
//   XREF to: Stack[-0xb8] (READ)
// 005d031b: PUSH EDX
// 005d031c: MOV dword ptr [EDX + 0x10],EAX
// 005d031f: MOV EAX,dword ptr [ESP + 0x38]
//   XREF to: Stack[-0xb4] (READ)
// 005d0323: MOV ECX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005d0326: MOV dword ptr [EDX + 0x14],EAX
// 005d0329: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005d032c: PUSH ECX
// 005d032d: MOV EAX,dword ptr [EAX + 0x64]
// 005d0330: CALL dword ptr [EAX + 0x64]
// 005d0333: ADD ESP,0x8
// 005d0336: MOV ESP,EBP
// 005d0338: POP EBP
// 005d0339: POP EDI
// 005d033a: POP ESI
// 005d033b: POP EBX
// 005d033c: RET
