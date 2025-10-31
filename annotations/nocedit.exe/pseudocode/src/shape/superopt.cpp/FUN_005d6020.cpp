// Name: shape_superopt.cpp_FUN_005d6020
// Address: 005d6020
// Address Range: [[005d6020, 005d63cb]]
// Convention: unknown
// Signature: undefined shape_superopt.cpp_FUN_005d6020()
// Cross-references:
//   shape_superopt.cpp_FUN_005d64a0 (005d64a0) at 005d64c0 [UNCONDITIONAL_CALL]

#include "nocturne.h"

/* Signature: undefined1 shape_superopt.cpp_FUN_005d6020(undefined4 param_1, undefined4 param_2,
   undefined4 param_3) */

void shape_superopt_cpp_FUN_005d6020(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  BADSPACEBASE *in_ESP;
  undefined4 *unaff_ESI;
  double *pdVar6;
  undefined4 *puVar7;
  double *in_stack_00000004;
  double *in_stack_00000008;
  undefined4 *in_stack_0000000c;
  undefined4 local_168;
  undefined4 uStack_164;
  int local_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined8 local_148;
  double local_140;
  double local_138;
  double local_130;
  undefined4 local_128 [4];
  undefined4 local_118;
  undefined4 uStack_114;
  double local_110;
  double local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  double local_e0;
  double local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  double local_c8;
  double local_c0;
  double local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98 [6];
  undefined4 local_80 [4];
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  
  local_18 = *(undefined4 *)in_stack_00000004;
  uStack_14 = *(undefined4 *)((int)in_stack_00000004 + 4);
  uVar1 = *(undefined4 *)(in_stack_00000004 + 1);
  uStack_34 = *(undefined4 *)((int)in_stack_00000004 + 0xc);
  local_68 = *(undefined4 *)in_stack_00000004;
  uStack_64 = *(undefined4 *)((int)in_stack_00000004 + 4);
  uStack_5c = *(undefined4 *)((int)in_stack_00000004 + 0xc);
  local_58 = 0;
  uStack_54 = 0;
  local_20 = *(undefined4 *)in_stack_00000008;
  local_38 = uVar1;
  uStack_1c = *(undefined4 *)((int)in_stack_00000008 + 4);
  local_30 = *(undefined4 *)(in_stack_00000008 + 1);
  local_e0 = *in_stack_00000008 - *in_stack_00000004;
  uStack_2c = *(undefined4 *)((int)in_stack_00000008 + 0xc);
  local_d0 = 0;
  local_cc = 0;
  local_28 = *in_stack_0000000c;
  uStack_24 = in_stack_0000000c[1];
  local_40 = in_stack_0000000c[2];
  local_d8 = in_stack_00000008[1] - in_stack_00000004[1];
  uVar2 = in_stack_0000000c[3];
  pdVar6 = &local_e0;
  puVar7 = local_80;
  for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = *(undefined4 *)pdVar6;
    pdVar6 = (double *)((int)pdVar6 + 4);
    puVar7 = puVar7 + 1;
  }
  dVar4 = (double)CONCAT44(local_80[3],local_80[2]);
  dVar3 = (double)CONCAT44(local_80[1],local_80[0]);
  uStack_3c = uVar2;
  local_f8 = local_80[0];
  local_110 = (double)CONCAT44(uStack_24,local_28) - (double)CONCAT44(uStack_14,local_18);
  uStack_f4 = local_80[1];
  local_f0 = local_80[2];
  uStack_ec = local_80[3];
  local_e8 = local_70;
  uStack_e4 = uStack_6c;
  local_100 = 0;
  local_fc = 0;
  local_108 = (double)CONCAT44(uVar2,local_40) - (double)CONCAT44(uStack_34,local_38);
  pdVar6 = &local_110;
  puVar7 = local_128;
  for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = *(undefined4 *)pdVar6;
    pdVar6 = (double *)((int)pdVar6 + 4);
    puVar7 = puVar7 + 1;
  }
  local_60 = uVar1;
  dVar3 = (double)CONCAT44(uStack_6c,local_70) * (double)CONCAT44(uStack_6c,local_70) +
          dVar3 * dVar3 + dVar4 * dVar4;
  local_b0 = local_128[0];
  local_ac = local_128[1];
  local_a8 = local_128[2];
  local_148 = 0.0;
  local_a4 = local_128[3];
  local_a0 = local_118;
  local_9c = uStack_114;
  local_158 = SUB84(dVar3,0);
  if ((((ulonglong)dVar3 & 0x7fffffff00000000) != 0) || (local_158 != 0)) {
    local_148 = ((double)CONCAT44(local_128[1],local_128[0]) *
                 (double)CONCAT44(local_80[1],local_80[0]) +
                 (double)CONCAT44(local_128[3],local_128[2]) *
                 (double)CONCAT44(local_80[3],local_80[2]) +
                (double)CONCAT44(uStack_114,local_118) * (double)CONCAT44(uStack_6c,local_70)) /
                dVar3;
  }
  if ((local_148 < 0.0) || (local_148 < 1.0)) {
    if (0.0 <= local_148) {
      local_150 = (undefined4)local_148;
      local_14c = local_148._4_4_;
    }
    else {
      local_150 = 0;
      local_14c = 0;
    }
    local_168 = local_150;
    uStack_164 = local_14c;
  }
  else {
    local_168 = 0;
    uStack_164 = 0x3ff00000;
  }
  local_b8 = (double)CONCAT44(uStack_164,local_168);
  local_c8 = (double)CONCAT44(uStack_f4,local_f8) * local_b8;
  local_c0 = (double)CONCAT44(uStack_ec,local_f0) * local_b8;
  local_b8 = (double)CONCAT44(uStack_e4,local_e8) * local_b8;
  local_140 = (double)CONCAT44(uStack_64,local_68) + local_c8;
  local_138 = (double)CONCAT44(uStack_5c,uVar1) + local_c0;
  local_130 = (double)CONCAT44(uStack_54,local_58) + local_b8;
  pdVar6 = &local_140;
  puVar7 = local_98;
  for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = *(undefined4 *)pdVar6;
    pdVar6 = (double *)((int)pdVar6 + 4);
    puVar7 = puVar7 + 1;
  }
  *unaff_ESI = local_98[0];
  unaff_ESI[1] = local_98[1];
  unaff_ESI[2] = local_98[2];
  unaff_ESI[3] = local_98[3];
  return;
}


// Assembly code:
// 005d6020: PUSH EBX
//   Label: shape_superopt.cpp_FUN_005d6020
// 005d6021: PUSH EDI
// 005d6022: PUSH EBP
// 005d6023: MOV EBP,ESP
// 005d6025: SUB ESP,0x158
// 005d602b: AND ESP,0xfffffff8
// 005d602e: MOV ECX,dword ptr [EBP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 005d6031: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0xc] (READ)
// 005d6034: MOV EDX,ESI
// 005d6036: MOV ESI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 005d6039: MOV EBX,dword ptr [ECX]
// 005d603b: MOV dword ptr [ESP + 0x150],EBX
//   XREF to: Stack[-0x18] (WRITE)
// 005d6042: MOV EBX,dword ptr [ECX + 0x4]
// 005d6045: MOV dword ptr [ESP + 0x154],EBX
//   XREF to: Stack[-0x14] (WRITE)
// 005d604c: MOV EBX,dword ptr [ECX + 0x8]
// 005d604f: MOV ECX,dword ptr [ECX + 0xc]
// 005d6052: MOV dword ptr [ESP + 0x134],ECX
//   XREF to: Stack[-0x34] (WRITE)
// 005d6059: MOV ECX,dword ptr [ESP + 0x150]
//   XREF to: Stack[-0x18] (READ)
// 005d6060: MOV dword ptr [ESP + 0x100],ECX
//   XREF to: Stack[-0x68] (WRITE)
// 005d6067: MOV ECX,dword ptr [ESP + 0x154]
//   XREF to: Stack[-0x14] (READ)
// 005d606e: MOV dword ptr [ESP + 0x104],ECX
//   XREF to: Stack[-0x64] (WRITE)
// 005d6075: MOV ECX,dword ptr [ESP + 0x134]
//   XREF to: Stack[-0x34] (READ)
// 005d607c: MOV dword ptr [ESP + 0x10c],ECX
//   XREF to: Stack[-0x5c] (WRITE)
// 005d6083: XOR ECX,ECX
// 005d6085: MOV dword ptr [ESP + 0x110],ECX
//   XREF to: Stack[-0x58] (WRITE)
// 005d608c: MOV dword ptr [ESP + 0x114],ECX
//   XREF to: Stack[-0x54] (WRITE)
// 005d6093: MOV ECX,dword ptr [ESI]
// 005d6095: LEA EDI,[ESP + 0xe8]
//   XREF to: Stack[-0x80] (DATA)
// 005d609c: MOV dword ptr [ESP + 0x148],ECX
//   XREF to: Stack[-0x20] (WRITE)
// 005d60a3: MOV ECX,dword ptr [ESI + 0x4]
// 005d60a6: MOV dword ptr [ESP + 0x130],EBX
//   XREF to: Stack[-0x38] (WRITE)
// 005d60ad: MOV dword ptr [ESP + 0x14c],ECX
//   XREF to: Stack[-0x1c] (WRITE)
// 005d60b4: MOV ECX,dword ptr [ESI + 0x8]
// 005d60b7: FLD double ptr [ESP + 0x148]
//   XREF to: Stack[-0x20] (READ)
// 005d60be: MOV dword ptr [ESP + 0x138],ECX
//   XREF to: Stack[-0x30] (WRITE)
// 005d60c5: FSUB double ptr [ESP + 0x150]
//   XREF to: Stack[-0x18] (READ)
// 005d60cc: MOV ECX,dword ptr [ESI + 0xc]
// 005d60cf: FSTP double ptr [ESP + 0x88]
//   XREF to: Stack[-0xe0] (WRITE)
// 005d60d6: MOV dword ptr [ESP + 0x13c],ECX
//   XREF to: Stack[-0x2c] (WRITE)
// 005d60dd: XOR ESI,ESI
// 005d60df: FLD double ptr [ESP + 0x138]
//   XREF to: Stack[-0x30] (READ)
// 005d60e6: MOV dword ptr [ESP + 0x98],ESI
//   XREF to: Stack[-0xd0] (WRITE)
// 005d60ed: MOV ECX,dword ptr [EAX]
// 005d60ef: MOV dword ptr [ESP + 0x9c],ESI
//   XREF to: Stack[-0xcc] (WRITE)
// 005d60f6: MOV dword ptr [ESP + 0x140],ECX
//   XREF to: Stack[-0x28] (WRITE)
// 005d60fd: MOV ECX,dword ptr [EAX + 0x4]
// 005d6100: LEA ESI,[ESP + 0x88]
//   XREF to: Stack[-0xe0] (DATA)
// 005d6107: MOV dword ptr [ESP + 0x144],ECX
//   XREF to: Stack[-0x24] (WRITE)
// 005d610e: MOV ECX,dword ptr [EAX + 0x8]
// 005d6111: FSUB double ptr [ESP + 0x130]
//   XREF to: Stack[-0x38] (READ)
// 005d6118: MOV dword ptr [ESP + 0x128],ECX
//   XREF to: Stack[-0x40] (WRITE)
// 005d611f: MOV ECX,0x6
// 005d6124: FSTP double ptr [ESP + 0x90]
//   XREF to: Stack[-0xd8] (WRITE)
// 005d612b: MOV EAX,dword ptr [EAX + 0xc]
// 005d612e: MOVSD.REP ES:EDI,ESI
// 005d6130: FLD double ptr [ESP + 0xf0]
//   XREF to: Stack[-0x78] (READ)
// 005d6137: FMUL ST0
// 005d6139: FLD double ptr [ESP + 0xe8]
//   XREF to: Stack[-0x80] (READ)
// 005d6140: FMUL ST0
// 005d6142: FLD double ptr [ESP + 0x140]
//   XREF to: Stack[-0x28] (READ)
// 005d6149: MOV dword ptr [ESP + 0x12c],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 005d6150: MOV EAX,dword ptr [ESP + 0xe8]
//   XREF to: Stack[-0x80] (READ)
// 005d6157: FSUB double ptr [ESP + 0x150]
//   XREF to: Stack[-0x18] (READ)
// 005d615e: MOV dword ptr [ESP + 0x70],EAX
//   XREF to: Stack[-0xf8] (WRITE)
// 005d6162: MOV EAX,dword ptr [ESP + 0xec]
//   XREF to: Stack[-0x7c] (READ)
// 005d6169: FSTP double ptr [ESP + 0x58]
//   XREF to: Stack[-0x110] (WRITE)
// 005d616d: MOV dword ptr [ESP + 0x74],EAX
//   XREF to: Stack[-0xf4] (WRITE)
// 005d6171: MOV EAX,dword ptr [ESP + 0xf0]
//   XREF to: Stack[-0x78] (READ)
// 005d6178: FLD double ptr [ESP + 0x128]
//   XREF to: Stack[-0x40] (READ)
// 005d617f: MOV dword ptr [ESP + 0x78],EAX
//   XREF to: Stack[-0xf0] (WRITE)
// 005d6183: MOV EAX,dword ptr [ESP + 0xf4]
//   XREF to: Stack[-0x74] (READ)
// 005d618a: MOV ECX,0x6
// 005d618f: MOV dword ptr [ESP + 0x7c],EAX
//   XREF to: Stack[-0xec] (WRITE)
// 005d6193: MOV EAX,dword ptr [ESP + 0xf8]
//   XREF to: Stack[-0x70] (READ)
// 005d619a: LEA EDI,[ESP + 0x40]
//   XREF to: Stack[-0x128] (DATA)
// 005d619e: MOV dword ptr [ESP + 0x80],EAX
//   XREF to: Stack[-0xe8] (WRITE)
// 005d61a5: MOV EAX,dword ptr [ESP + 0xfc]
//   XREF to: Stack[-0x6c] (READ)
// 005d61ac: LEA ESI,[ESP + 0x58]
//   XREF to: Stack[-0x110] (DATA)
// 005d61b0: MOV dword ptr [ESP + 0x84],EAX
//   XREF to: Stack[-0xe4] (WRITE)
// 005d61b7: XOR EAX,EAX
// 005d61b9: FSUB double ptr [ESP + 0x130]
//   XREF to: Stack[-0x38] (READ)
// 005d61c0: MOV dword ptr [ESP + 0x68],EAX
//   XREF to: Stack[-0x100] (WRITE)
// 005d61c4: MOV dword ptr [ESP + 0x6c],EAX
//   XREF to: Stack[-0xfc] (WRITE)
// 005d61c8: FSTP double ptr [ESP + 0x60]
//   XREF to: Stack[-0x108] (WRITE)
// 005d61cc: MOVSD.REP ES:EDI,ESI
// 005d61ce: FADDP
// 005d61d0: FLD double ptr [ESP + 0x48]
//   XREF to: Stack[-0x120] (READ)
// 005d61d4: FMUL double ptr [ESP + 0xf0]
//   XREF to: Stack[-0x78] (READ)
// 005d61db: FLD double ptr [ESP + 0xf8]
//   XREF to: Stack[-0x70] (READ)
// 005d61e2: FMUL ST0
// 005d61e4: FLD double ptr [ESP + 0x40]
//   XREF to: Stack[-0x128] (READ)
// 005d61e8: FMUL double ptr [ESP + 0xe8]
//   XREF to: Stack[-0x80] (READ)
// 005d61ef: MOV dword ptr [ESP + 0x108],EBX
//   XREF to: Stack[-0x60] (WRITE)
// 005d61f6: FADDP ST2,ST0
// 005d61f8: XOR EBX,EBX
// 005d61fa: FLD double ptr [ESP + 0x50]
//   XREF to: Stack[-0x118] (READ)
// 005d61fe: FMUL double ptr [ESP + 0xf8]
//   XREF to: Stack[-0x70] (READ)
// 005d6205: MOV dword ptr [ESP + 0x20],EBX
//   XREF to: Stack[-0x148] (WRITE)
// 005d6209: FXCH
// 005d620b: FADDP ST3,ST0
// 005d620d: MOV EAX,dword ptr [ESP + 0x40]
//   XREF to: Stack[-0x128] (READ)
// 005d6211: FXCH ST2
// 005d6213: FSTP double ptr [ESP + 0x10]
//   XREF to: Stack[-0x158] (WRITE)
// 005d6217: MOV dword ptr [ESP + 0xb8],EAX
//   XREF to: Stack[-0xb0] (WRITE)
// 005d621e: MOV EAX,dword ptr [ESP + 0x44]
//   XREF to: Stack[-0x124] (READ)
// 005d6222: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x154] (READ)
// 005d6226: MOV dword ptr [ESP + 0xbc],EAX
//   XREF to: Stack[-0xac] (WRITE)
// 005d622d: MOV EAX,dword ptr [ESP + 0x48]
//   XREF to: Stack[-0x120] (READ)
// 005d6231: XOR ESI,ESI
// 005d6233: MOV dword ptr [ESP + 0xc0],EAX
//   XREF to: Stack[-0xa8] (WRITE)
// 005d623a: MOV EAX,dword ptr [ESP + 0x4c]
//   XREF to: Stack[-0x11c] (READ)
// 005d623e: MOV dword ptr [ESP + 0x24],ESI
//   XREF to: Stack[-0x144] (WRITE)
// 005d6242: MOV dword ptr [ESP + 0xc4],EAX
//   XREF to: Stack[-0xa4] (WRITE)
// 005d6249: MOV EAX,dword ptr [ESP + 0x50]
//   XREF to: Stack[-0x118] (READ)
// 005d624d: FADDP
// 005d624f: MOV dword ptr [ESP + 0xc8],EAX
//   XREF to: Stack[-0xa0] (WRITE)
// 005d6256: MOV EAX,dword ptr [ESP + 0x54]
//   XREF to: Stack[-0x114] (READ)
// 005d625a: FSTP double ptr [ESP + 0x8]
//   XREF to: Stack[-0x160] (WRITE)
// 005d625e: MOV dword ptr [ESP + 0xcc],EAX
//   XREF to: Stack[-0x9c] (WRITE)
// 005d6265: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x158] (READ)
// 005d6269: TEST EDI,0x7fffffff
// 005d626f: JNZ 0x005d6384
//   XREF to: 005d6384 (CONDITIONAL_JUMP)
// 005d6275: TEST EAX,EAX
// 005d6277: JNZ 0x005d6384
//   XREF to: 005d6384 (CONDITIONAL_JUMP)
// 005d627d: FLDZ
//   Label: LAB_005d627d
// 005d627f: FCOMP double ptr [ESP + 0x20]
//   XREF to: Stack[-0x148] (READ)
// 005d6283: FNSTSW AX
// 005d6285: SAHF
// 005d6286: JBE 0x005d6395
//   XREF to: 005d6395 (CONDITIONAL_JUMP)
// 005d628c: FLDZ
//   Label: LAB_005d628c
// 005d628e: FCOMP double ptr [ESP + 0x20]
//   XREF to: Stack[-0x148] (READ)
// 005d6292: FNSTSW AX
// 005d6294: SAHF
// 005d6295: JBE 0x005d63b7
//   XREF to: 005d63b7 (CONDITIONAL_JUMP)
// 005d629b: XOR ESI,ESI
// 005d629d: MOV dword ptr [ESP + 0x18],ESI
//   XREF to: Stack[-0x150] (WRITE)
// 005d62a1: MOV dword ptr [ESP + 0x1c],ESI
//   XREF to: Stack[-0x14c] (WRITE)
// 005d62a5: MOV EAX,dword ptr [ESP + 0x18]
//   Label: LAB_005d62a5
//   XREF to: Stack[-0x150] (READ)
// 005d62a9: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x168] (DATA)
// 005d62ac: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x14c] (READ)
// 005d62b0: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x164] (WRITE)
// 005d62b4: FLD double ptr [ESP]
//   Label: LAB_005d62b4
//   XREF to: Stack[-0x168] (DATA)
// 005d62b7: FLD double ptr [ESP + 0x70]
//   XREF to: Stack[-0xf8] (READ)
// 005d62bb: FMUL ST1
// 005d62bd: FLD double ptr [ESP + 0x78]
//   XREF to: Stack[-0xf0] (READ)
// 005d62c1: FMUL ST2
// 005d62c3: FLD double ptr [ESP + 0x80]
//   XREF to: Stack[-0xe8] (READ)
// 005d62ca: FMULP ST3
// 005d62cc: FLD double ptr [ESP + 0x100]
//   XREF to: Stack[-0x68] (READ)
// 005d62d3: FLD double ptr [ESP + 0x108]
//   XREF to: Stack[-0x60] (READ)
// 005d62da: FLD double ptr [ESP + 0x110]
//   XREF to: Stack[-0x58] (READ)
// 005d62e1: MOV ECX,0x6
// 005d62e6: LEA EDI,[ESP + 0xd0]
//   XREF to: Stack[-0x98] (DATA)
// 005d62ed: LEA ESI,[ESP + 0x28]
//   XREF to: Stack[-0x140] (DATA)
// 005d62f1: FXCH ST4
// 005d62f3: FSTP double ptr [ESP + 0xa0]
//   XREF to: Stack[-0xc8] (WRITE)
// 005d62fa: FXCH ST2
// 005d62fc: FSTP double ptr [ESP + 0xa8]
//   XREF to: Stack[-0xc0] (WRITE)
// 005d6303: FXCH ST3
// 005d6305: FSTP double ptr [ESP + 0xb0]
//   XREF to: Stack[-0xb8] (WRITE)
// 005d630c: FXCH ST2
// 005d630e: FADD double ptr [ESP + 0xa0]
//   XREF to: Stack[-0xc8] (READ)
// 005d6315: FXCH ST2
// 005d6317: FADD double ptr [ESP + 0xa8]
//   XREF to: Stack[-0xc0] (READ)
// 005d631e: FXCH
// 005d6320: FADD double ptr [ESP + 0xb0]
//   XREF to: Stack[-0xb8] (READ)
// 005d6327: FXCH ST2
// 005d6329: FSTP double ptr [ESP + 0x28]
//   XREF to: Stack[-0x140] (WRITE)
// 005d632d: FSTP double ptr [ESP + 0x30]
//   XREF to: Stack[-0x138] (WRITE)
// 005d6331: FSTP double ptr [ESP + 0x38]
//   XREF to: Stack[-0x130] (WRITE)
// 005d6335: MOVSD.REP ES:EDI,ESI
// 005d6337: MOV EAX,dword ptr [ESP + 0xd0]
//   XREF to: Stack[-0x98] (READ)
// 005d633e: MOV dword ptr [ESP + 0x118],EAX
//   XREF to: Stack[-0x50] (WRITE)
// 005d6345: MOV EAX,dword ptr [ESP + 0xd4]
//   XREF to: Stack[-0x94] (READ)
// 005d634c: MOV dword ptr [ESP + 0x11c],EAX
//   XREF to: Stack[-0x4c] (WRITE)
// 005d6353: MOV EAX,dword ptr [ESP + 0xd8]
//   XREF to: Stack[-0x90] (READ)
// 005d635a: LEA ESI,[ESP + 0x118]
//   XREF to: Stack[-0x50] (DATA)
// 005d6361: MOV dword ptr [ESP + 0x120],EAX
//   XREF to: Stack[-0x48] (WRITE)
// 005d6368: MOV EAX,dword ptr [ESP + 0xdc]
//   XREF to: Stack[-0x8c] (READ)
// 005d636f: MOV EDI,EDX
// 005d6371: MOV dword ptr [ESP + 0x124],EAX
//   XREF to: Stack[-0x44] (WRITE)
// 005d6378: MOVSD ES:EDI,ESI
// 005d6379: MOVSD ES:EDI,ESI
// 005d637a: MOVSD ES:EDI,ESI
// 005d637b: MOVSD ES:EDI,ESI
// 005d637c: MOV EAX,EDX
// 005d637e: MOV ESP,EBP
// 005d6380: POP EBP
// 005d6381: POP EDI
// 005d6382: POP EBX
// 005d6383: RET
// 005d6384: FLD double ptr [ESP + 0x8]
//   Label: LAB_005d6384
//   XREF to: Stack[-0x160] (READ)
// 005d6388: FDIV double ptr [ESP + 0x10]
//   XREF to: Stack[-0x158] (READ)
// 005d638c: FSTP double ptr [ESP + 0x20]
//   XREF to: Stack[-0x148] (WRITE)
// 005d6390: JMP 0x005d627d
//   XREF to: 005d627d (UNCONDITIONAL_JUMP)
// 005d6395: FLD1
//   Label: LAB_005d6395
// 005d6397: FCOMP double ptr [ESP + 0x20]
//   XREF to: Stack[-0x148] (READ)
// 005d639b: FNSTSW AX
// 005d639d: SAHF
// 005d639e: JA 0x005d628c
//   XREF to: 005d628c (CONDITIONAL_JUMP)
// 005d63a4: XOR ECX,ECX
// 005d63a6: MOV EBX,0x3ff00000
// 005d63ab: MOV dword ptr [ESP],ECX
//   XREF to: Stack[-0x168] (DATA)
// 005d63ae: MOV dword ptr [ESP + 0x4],EBX
//   XREF to: Stack[-0x164] (WRITE)
// 005d63b2: JMP 0x005d62b4
//   XREF to: 005d62b4 (UNCONDITIONAL_JUMP)
// 005d63b7: MOV EAX,dword ptr [ESP + 0x20]
//   Label: LAB_005d63b7
//   XREF to: Stack[-0x148] (READ)
// 005d63bb: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x150] (WRITE)
// 005d63bf: MOV EAX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x144] (READ)
// 005d63c3: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x14c] (WRITE)
// 005d63c7: JMP 0x005d62a5
//   XREF to: 005d62a5 (UNCONDITIONAL_JUMP)
