// Name: engine_colquant.c_FUN_00441260
// Address: 00441260
// Address Range: [[00441260, 00441780]]
// Convention: unknown
// Signature: undefined engine_colquant.c_FUN_00441260()
// Cross-references:
//   engine_colquant.c_FUN_004406c0 (004406c0) at 004407e0 [UNCONDITIONAL_CALL]
//   engine_colquant.c_FUN_00440b40 (00440b40) at 00440c48 [UNCONDITIONAL_CALL]
//   engine_colquant.c_FUN_00440c80 (00440c80) at 00440d7c [UNCONDITIONAL_CALL]
//   engine_colquant.c_FUN_00440dc0 (00440dc0) at 00440ebc [UNCONDITIONAL_CALL]
//   engine_colquant.c_FUN_00440f00 (00440f00) at 00440ffc [UNCONDITIONAL_CALL]
//   engine_colquant.c_FUN_00441110 (00441110) at 00441248 [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_00618dc1
//   undefined4 DAT_00618dc9
//   undefined4 DAT_00618dd1
//   undefined4 DAT_00618dd9
//   undefined4 DAT_00618de1
// Function calls:
//   crt_math.c_round_FUN_005fe6b0
//   engine_colquant.c_FUN_00441790

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_colquant_c_FUN_00441260(void)

{
  double dVar1;
  double dVar2;
  undefined4 extraout_ECX;
  int extraout_ECX_00;
  undefined4 extraout_ECX_01;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  byte *pbVar11;
  float10 fVar12;
  double dVar13;
  undefined8 uVar14;
  longlong lVar15;
  int in_stack_00000004;
  int in_stack_00000008;
  int local_80;
  undefined4 uStack_7c;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_54;
  undefined4 local_50;
  double local_48;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 local_24;
  int iStack_14;
  
  dVar1 = 0.0;
  local_48 = 0.0;
  iVar9 = in_stack_00000008 * 0x40;
  dVar13 = 0.0;
  iVar10 = *(int *)(in_stack_00000004 + 0x4040 + iVar9);
  iVar9 = *(int *)(in_stack_00000004 + 0x4040 + iVar9) +
          *(int *)(in_stack_00000004 + 0x4044 + iVar9);
  dVar2 = 0.0;
  if (iVar10 < iVar9) {
    dVar13 = 0.0;
    pbVar11 = (byte *)(iVar10 * 4 + *(int *)(in_stack_00000004 + 0x2004));
    do {
      iVar10 = iVar10 + 1;
      dVar13 = (double)*pbVar11 + dVar13;
      dVar1 = (double)pbVar11[1] + dVar1;
      local_48 = (double)pbVar11[3] + local_48;
      pbVar11 = pbVar11 + 4;
      dVar2 = dVar1;
    } while (iVar10 < iVar9);
  }
  uStack_6c = (undefined4)((ulonglong)dVar2 >> 0x20);
  iVar10 = in_stack_00000004 + in_stack_00000008 * 0x40;
  fVar12 = (float10)dVar13 / (float10)*(uint *)(iVar10 + 0x4044);
  dVar13 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(iVar9,*(uint *)(iVar10 + 0x4044)));
  *(short *)(iVar10 + 0x4008) = (short)(int)ROUND(fVar12);
  fVar12 = (float10)(double)CONCAT44(local_68,uStack_6c) / (float10)*(uint *)(iVar10 + 0x4044);
  dVar13 = crt_math_c_round_FUN_005fe6b0
                     ((double)CONCAT44((int)((ulonglong)dVar13 >> 0x20),*(uint *)(iVar10 + 0x4044)))
  ;
  iStack_14 = (int)ROUND(fVar12);
  *(short *)(iVar10 + 0x400a) = (short)iStack_14;
  fVar12 = (float10)local_48 / (float10)CONCAT44(extraout_ECX,*(undefined4 *)(iVar10 + 0x4044));
  dVar13 = crt_math_c_round_FUN_005fe6b0
                     ((double)CONCAT44((int)((ulonglong)dVar13 >> 0x20),
                                       *(undefined4 *)(iVar10 + 0x4044)));
  *(short *)(iVar10 + 0x400c) = (short)(int)ROUND(fVar12);
  lVar15 = CONCAT44(extraout_ECX_00,*(undefined4 *)(iVar10 + 0x4044));
  fVar12 = (float10)(double)CONCAT44(local_38,uStack_3c) / (float10)lVar15;
  *(int *)(iVar10 + 0x4018) = extraout_ECX_00;
  *(int *)(iVar10 + 0x401c) = extraout_ECX_00;
  *(int *)(iVar10 + 0x4020) = extraout_ECX_00;
  *(int *)(iVar10 + 0x4024) = extraout_ECX_00;
  local_48 = (double)CONCAT44(local_48._4_4_,extraout_ECX_00);
  *(int *)(iVar10 + 0x4028) = extraout_ECX_00;
  *(int *)(iVar10 + 0x402c) = extraout_ECX_00;
  *(int *)(iVar10 + 0x4030) = extraout_ECX_00;
  *(int *)(iVar10 + 0x4034) = extraout_ECX_00;
  *(int *)(iVar10 + 0x4010) = extraout_ECX_00;
  crt_math_c_round_FUN_005fe6b0
            ((double)CONCAT44((int)((ulonglong)dVar13 >> 0x20) << 2,*(undefined4 *)(iVar10 + 0x4044)
                             ));
  *(short *)(iVar10 + 0x400e) = (short)(int)ROUND(fVar12);
  *(undefined4 *)(iVar10 + 0x4014) = extraout_ECX_01;
  iVar10 = *(int *)(iVar10 + 0x4040) * 4;
  local_80 = extraout_ECX_00;
  iVar9 = in_stack_00000008 * 0x40;
  while( true ) {
    local_50 = (undefined4)((ulonglong)lVar15 >> 0x20);
    uStack_54 = (undefined4)lVar15;
    iVar9 = iVar9 + in_stack_00000004;
    if (iStack_14 <= iVar10) break;
    uVar3 = (*(int *)(iVar9 + 0x4006) >> 0x10) -
            (uint)*(byte *)(iVar10 + *(int *)(in_stack_00000004 + 0x2004));
    uVar4 = (int)uVar3 >> 0x1f;
    dVar13 = (double)(int)((uVar3 ^ uVar4) - uVar4);
    local_24 = (undefined4)((ulonglong)dVar13 >> 0x20);
    uVar4 = (*(int *)(iVar9 + 0x4008) >> 0x10) -
            (uint)*(byte *)(iVar10 + 1 + *(int *)(in_stack_00000004 + 0x2004));
    uVar5 = (int)uVar4 >> 0x1f;
    uVar6 = (*(int *)(iVar9 + 0x400a) >> 0x10) -
            (uint)*(byte *)(iVar10 + 2 + *(int *)(in_stack_00000004 + 0x2004));
    uVar7 = (int)uVar6 >> 0x1f;
    uVar3 = (*(int *)(iVar9 + 0x400c) >> 0x10) -
            (uint)*(byte *)(iVar10 + 3 + *(int *)(in_stack_00000004 + 0x2004));
    uVar8 = (int)uVar3 >> 0x1f;
    *(double *)(iVar9 + 0x4018) = *(double *)(iVar9 + 0x4018) + dVar13;
    *(double *)(iVar9 + 0x4020) =
         *(double *)(iVar9 + 0x4020) + (double)(int)((uVar4 ^ uVar5) - uVar5);
    *(double *)(iVar9 + 0x4028) =
         *(double *)(iVar9 + 0x4028) + (double)(int)((uVar6 ^ uVar7) - uVar7);
    *(double *)(iVar9 + 0x4030) =
         *(double *)(iVar9 + 0x4030) + (double)(int)((uVar3 ^ uVar8) - uVar8);
    lVar15 = engine_colquant_c_FUN_00441790();
    local_80 = engine_colquant_c_FUN_00441790();
    iStack_14 = engine_colquant_c_FUN_00441790();
    uStack_7c = local_24;
    engine_colquant_c_FUN_00441790();
    dVar13 = (double)CONCAT44((int)lVar15,extraout_ECX_00);
    iVar10 = iVar10 + 4;
    *(double *)(iVar9 + 0x4010) =
         (double)CONCAT44(extraout_ECX_00,local_60) * (double)CONCAT44(extraout_ECX_00,local_60) *
         _DAT_00618dd1 +
         (double)CONCAT44(uStack_64,local_68) * (double)CONCAT44(uStack_64,local_68) * _DAT_00618dc9
         + (double)CONCAT44(iStack_14,local_80) * (double)CONCAT44(iStack_14,local_80) *
           _DAT_00618dc1 + dVar13 * dVar13 * _DAT_00618dd9 + *(double *)(iVar9 + 0x4010);
    iVar9 = local_80;
  }
  dVar13 = *(double *)(iVar9 + 0x4018) * _DAT_00618de1;
  dVar1 = *(double *)(iVar9 + 0x4028) * _DAT_00618dd1;
  dVar2 = *(double *)(iVar9 + 0x4030) * _DAT_00618dd9;
  *(double *)(iVar9 + 0x4020) = *(double *)(iVar9 + 0x4020) * _DAT_00618dc9 * local_48;
  *(double *)(iVar9 + 0x4018) = dVar13 * (double)CONCAT44(uStack_54,extraout_ECX_00);
  *(double *)(iVar9 + 0x4028) = dVar1 * (double)CONCAT44(uStack_7c,local_80);
  *(double *)(iVar9 + 0x4030) = dVar2 * (double)CONCAT44(extraout_ECX_00,local_50);
  uVar14 = engine_colquant_c_FUN_00441790();
  *(undefined8 *)(iVar9 + 0x4038) = uVar14;
  uVar14 = engine_colquant_c_FUN_00441790();
  *(undefined8 *)(iVar9 + 0x4038) = uVar14;
  uVar14 = engine_colquant_c_FUN_00441790();
  *(undefined8 *)(iVar9 + 0x4038) = uVar14;
  return;
}


// Assembly code:
// 00441260: PUSH EBX
//   Label: engine_colquant.c_FUN_00441260
// 00441261: PUSH ESI
// 00441262: PUSH EDI
// 00441263: PUSH EBP
// 00441264: MOV EBP,ESP
// 00441266: SUB ESP,0x7c
// 00441269: AND ESP,0xfffffff8
// 0044126c: MOV EDI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0044126f: MOV ECX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00441272: XOR EDX,EDX
// 00441274: MOV EBX,ECX
// 00441276: MOV dword ptr [ESP + 0x20],EDX
//   XREF to: Stack[-0x70] (WRITE)
// 0044127a: MOV dword ptr [ESP + 0x24],EDX
//   XREF to: Stack[-0x6c] (WRITE)
// 0044127e: MOV dword ptr [ESP + 0x40],EDX
//   XREF to: Stack[-0x50] (WRITE)
// 00441282: MOV dword ptr [ESP + 0x44],EDX
//   XREF to: Stack[-0x4c] (WRITE)
// 00441286: MOV dword ptr [ESP + 0x48],EDX
//   XREF to: Stack[-0x48] (WRITE)
// 0044128a: MOV dword ptr [ESP + 0x4c],EDX
//   XREF to: Stack[-0x44] (WRITE)
// 0044128e: SHL EBX,0x6
// 00441291: MOV dword ptr [ESP + 0x18],EDX
//   XREF to: Stack[-0x78] (WRITE)
// 00441295: MOV dword ptr [ESP + 0x1c],EDX
//   XREF to: Stack[-0x74] (WRITE)
// 00441299: MOV EDX,dword ptr [EDI + EBX*0x1 + 0x4040]
// 004412a0: MOV ESI,dword ptr [EDI + EBX*0x1 + 0x4044]
// 004412a7: MOV EBX,dword ptr [EDI + EBX*0x1 + 0x4040]
// 004412ae: ADD EDX,ESI
// 004412b0: CMP EBX,EDX
// 004412b2: JGE 0x00441332
//   XREF to: 00441332 (CONDITIONAL_JUMP)
// 004412b8: FLD double ptr [ESP + 0x48]
//   XREF to: Stack[-0x48] (READ)
// 004412bc: FLD double ptr [ESP + 0x40]
//   XREF to: Stack[-0x50] (READ)
// 004412c0: LEA ESI,[EBX*0x4 + 0x0]
// 004412c7: MOV EAX,dword ptr [EDI + 0x2004]
// 004412cd: FLD double ptr [ESP + 0x18]
//   XREF to: Stack[-0x78] (READ)
// 004412d1: ADD ESI,EAX
// 004412d3: XOR EAX,EAX
//   Label: LAB_004412d3
// 004412d5: MOV AL,byte ptr [ESI]
// 004412d7: ADD ESI,0x4
// 004412da: MOV dword ptr [ESP + 0x78],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 004412de: XOR EAX,EAX
// 004412e0: INC EBX
// 004412e1: MOV AL,byte ptr [ESI + -0x3]
// 004412e4: FILD word ptr [ESP + 0x78]
//   XREF to: Stack[-0x18] (READ)
// 004412e8: MOV dword ptr [ESP + 0x78],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 004412ec: XOR EAX,EAX
// 004412ee: FADD ST0,ST1
// 004412f0: MOV AL,byte ptr [ESI + -0x2]
// 004412f3: FILD word ptr [ESP + 0x78]
//   XREF to: Stack[-0x18] (READ)
// 004412f7: MOV dword ptr [ESP + 0x78],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 004412fb: XOR EAX,EAX
// 004412fd: FADD double ptr [ESP + 0x20]
//   XREF to: Stack[-0x70] (READ)
// 00441301: MOV AL,byte ptr [ESI + -0x1]
// 00441304: FILD word ptr [ESP + 0x78]
//   XREF to: Stack[-0x18] (READ)
// 00441308: MOV dword ptr [ESP + 0x78],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0044130c: FADD ST0,ST4
// 0044130e: FILD word ptr [ESP + 0x78]
//   XREF to: Stack[-0x18] (READ)
// 00441312: FADD ST0,ST6
// 00441314: FXCH ST3
// 00441316: FSTP ST4
// 00441318: FXCH
// 0044131a: FSTP double ptr [ESP + 0x20]
//   XREF to: Stack[-0x70] (WRITE)
// 0044131e: FSTP ST3
// 00441320: FSTP ST3
// 00441322: CMP EBX,EDX
// 00441324: JL 0x004412d3
//   XREF to: 004412d3 (CONDITIONAL_JUMP)
// 00441326: FSTP double ptr [ESP + 0x18]
//   XREF to: Stack[-0x78] (WRITE)
// 0044132a: FSTP double ptr [ESP + 0x40]
//   XREF to: Stack[-0x50] (WRITE)
// 0044132e: FSTP double ptr [ESP + 0x48]
//   XREF to: Stack[-0x48] (WRITE)
// 00441332: MOV ESI,ECX
//   Label: LAB_00441332
// 00441334: SHL ESI,0x6
// 00441337: XOR EAX,EAX
// 00441339: LEA EBX,[EDI + ESI*0x1]
// 0044133c: MOV dword ptr [ESP + 0x64],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 00441340: MOV EAX,dword ptr [EBX + 0x4044]
// 00441346: MOV dword ptr [ESP + 0x60],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 0044134a: FILD qword ptr [ESP + 0x60]
//   XREF to: Stack[-0x30] (READ)
// 0044134e: FDIVR double ptr [ESP + 0x18]
//   XREF to: Stack[-0x78] (READ)
// 00441352: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00441357: FISTP dword ptr [ESP + 0x74]
//   XREF to: Stack[-0x1c] (WRITE)
// 0044135b: MOV EAX,dword ptr [ESP + 0x74]
//   XREF to: Stack[-0x1c] (READ)
// 0044135f: XOR ECX,ECX
// 00441361: MOV word ptr [EBX + 0x4008],AX
// 00441368: MOV EAX,dword ptr [EBX + 0x4044]
// 0044136e: MOV dword ptr [ESP + 0x64],ECX
//   XREF to: Stack[-0x2c] (WRITE)
// 00441372: MOV dword ptr [ESP + 0x60],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 00441376: FILD qword ptr [ESP + 0x60]
//   XREF to: Stack[-0x30] (READ)
// 0044137a: FDIVR double ptr [ESP + 0x20]
//   XREF to: Stack[-0x70] (READ)
// 0044137e: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00441383: FISTP dword ptr [ESP + 0x74]
//   XREF to: Stack[-0x1c] (WRITE)
// 00441387: MOV EAX,dword ptr [ESP + 0x74]
//   XREF to: Stack[-0x1c] (READ)
// 0044138b: MOV word ptr [EBX + 0x400a],AX
// 00441392: MOV EAX,dword ptr [EBX + 0x4044]
// 00441398: MOV dword ptr [ESP + 0x64],ECX
//   XREF to: Stack[-0x2c] (WRITE)
// 0044139c: MOV dword ptr [ESP + 0x60],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 004413a0: FILD qword ptr [ESP + 0x60]
//   XREF to: Stack[-0x30] (READ)
// 004413a4: FDIVR double ptr [ESP + 0x40]
//   XREF to: Stack[-0x50] (READ)
// 004413a8: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 004413ad: FISTP dword ptr [ESP + 0x74]
//   XREF to: Stack[-0x1c] (WRITE)
// 004413b1: MOV EAX,dword ptr [ESP + 0x74]
//   XREF to: Stack[-0x1c] (READ)
// 004413b5: MOV word ptr [EBX + 0x400c],AX
// 004413bc: MOV EAX,dword ptr [EBX + 0x4044]
// 004413c2: MOV dword ptr [ESP + 0x64],ECX
//   XREF to: Stack[-0x2c] (WRITE)
// 004413c6: MOV dword ptr [ESP + 0x60],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 004413ca: FILD qword ptr [ESP + 0x60]
//   XREF to: Stack[-0x30] (READ)
// 004413ce: FDIVR double ptr [ESP + 0x48]
//   XREF to: Stack[-0x48] (READ)
// 004413d2: SHL EDX,0x2
// 004413d5: MOV dword ptr [ESP + 0x6c],EDX
//   XREF to: Stack[-0x24] (WRITE)
// 004413d9: MOV dword ptr [EBX + 0x4018],ECX
// 004413df: MOV dword ptr [ESP + 0x28],ECX
//   XREF to: Stack[-0x68] (WRITE)
// 004413e3: MOV dword ptr [EBX + 0x401c],ECX
// 004413e9: MOV dword ptr [ESP + 0x2c],ECX
//   XREF to: Stack[-0x64] (WRITE)
// 004413ed: MOV dword ptr [EBX + 0x4020],ECX
// 004413f3: MOV dword ptr [ESP + 0x38],ECX
//   XREF to: Stack[-0x58] (WRITE)
// 004413f7: MOV dword ptr [EBX + 0x4024],ECX
// 004413fd: MOV dword ptr [ESP + 0x3c],ECX
//   XREF to: Stack[-0x54] (WRITE)
// 00441401: MOV dword ptr [EBX + 0x4028],ECX
// 00441407: MOV dword ptr [ESP],ECX
//   XREF to: Stack[-0x90] (DATA)
// 0044140a: MOV dword ptr [EBX + 0x402c],ECX
// 00441410: MOV dword ptr [ESP + 0x4],ECX
//   XREF to: Stack[-0x8c] (WRITE)
// 00441414: MOV dword ptr [EBX + 0x4030],ECX
// 0044141a: MOV dword ptr [ESP + 0x30],ECX
//   XREF to: Stack[-0x60] (WRITE)
// 0044141e: MOV dword ptr [EBX + 0x4034],ECX
// 00441424: MOV dword ptr [ESP + 0x34],ECX
//   XREF to: Stack[-0x5c] (WRITE)
// 00441428: MOV dword ptr [EBX + 0x4010],ECX
// 0044142e: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00441433: FISTP dword ptr [ESP + 0x74]
//   XREF to: Stack[-0x1c] (WRITE)
// 00441437: MOV EAX,dword ptr [ESP + 0x74]
//   XREF to: Stack[-0x1c] (READ)
// 0044143b: MOV dword ptr [ESP + 0x68],ESI
//   XREF to: Stack[-0x28] (WRITE)
// 0044143f: MOV word ptr [EBX + 0x400e],AX
// 00441446: MOV EAX,dword ptr [EBX + 0x4040]
// 0044144c: MOV dword ptr [EBX + 0x4014],ECX
// 00441452: MOV dword ptr [ESP + 0x70],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 00441456: LEA ESI,[EAX*0x4 + 0x0]
// 0044145d: MOV EBX,dword ptr [ESP + 0x68]
//   Label: LAB_0044145d
//   XREF to: Stack[-0x28] (READ)
// 00441461: MOV EAX,dword ptr [ESP + 0x6c]
//   XREF to: Stack[-0x24] (READ)
// 00441465: ADD EBX,EDI
// 00441467: CMP ESI,EAX
// 00441469: JL 0x00441587
//   XREF to: 00441587 (CONDITIONAL_JUMP)
// 0044146f: FLD double ptr [EBX + 0x4018]
// 00441475: FMUL double ptr [0x00618de1]
//   XREF to: 00618de1 (READ)
// 0044147b: FLD double ptr [EBX + 0x4020]
// 00441481: FMUL double ptr [0x00618dc9]
//   XREF to: 00618dc9 (READ)
// 00441487: FLD double ptr [EBX + 0x4028]
// 0044148d: FMUL double ptr [0x00618dd1]
//   XREF to: 00618dd1 (READ)
// 00441493: FLD double ptr [EBX + 0x4030]
// 00441499: FMUL double ptr [0x00618dd9]
//   XREF to: 00618dd9 (READ)
// 0044149f: FXCH ST3
// 004414a1: FMUL double ptr [ESP + 0x28]
//   XREF to: Stack[-0x68] (READ)
// 004414a5: FXCH ST2
// 004414a7: FMUL double ptr [ESP + 0x38]
//   XREF to: Stack[-0x58] (READ)
// 004414ab: FXCH
// 004414ad: FMUL double ptr [ESP]
//   XREF to: Stack[-0x90] (DATA)
// 004414b0: FXCH ST3
// 004414b2: FMUL double ptr [ESP + 0x30]
//   XREF to: Stack[-0x60] (READ)
// 004414b6: FXCH
// 004414b8: FSTP double ptr [EBX + 0x4020]
// 004414be: MOV ESI,dword ptr [EBX + 0x4024]
// 004414c4: MOV EDI,dword ptr [EBX + 0x4020]
// 004414ca: PUSH ESI
// 004414cb: FXCH
// 004414cd: FSTP double ptr [EBX + 0x4018]
// 004414d3: PUSH EDI
// 004414d4: MOV EAX,dword ptr [EBX + 0x401c]
// 004414da: MOV EDX,dword ptr [EBX + 0x4018]
// 004414e0: PUSH EAX
// 004414e1: FXCH
// 004414e3: FSTP double ptr [EBX + 0x4028]
// 004414e9: PUSH EDX
// 004414ea: FSTP double ptr [EBX + 0x4030]
// 004414f0: CALL engine_colquant.c_FUN_00441790
//   XREF to: 00441790 (UNCONDITIONAL_CALL)
// 004414f5: MOV dword ptr [ESP + 0x70],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 004414f9: MOV dword ptr [ESP + 0x74],EDX
//   XREF to: Stack[-0x2c] (WRITE)
// 004414fd: FLD double ptr [ESP + 0x70]
//   XREF to: Stack[-0x30] (READ)
// 00441501: ADD ESP,0x10
// 00441504: MOV ECX,dword ptr [EBX + 0x402c]
// 0044150a: PUSH ECX
// 0044150b: MOV ESI,dword ptr [EBX + 0x4028]
// 00441511: PUSH ESI
// 00441512: FSTP double ptr [EBX + 0x4038]
// 00441518: MOV EDI,dword ptr [EBX + 0x403c]
// 0044151e: PUSH EDI
// 0044151f: MOV EAX,dword ptr [EBX + 0x4038]
// 00441525: PUSH EAX
// 00441526: CALL engine_colquant.c_FUN_00441790
//   XREF to: 00441790 (UNCONDITIONAL_CALL)
// 0044152b: MOV dword ptr [ESP + 0x70],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 0044152f: MOV dword ptr [ESP + 0x74],EDX
//   XREF to: Stack[-0x2c] (WRITE)
// 00441533: FLD double ptr [ESP + 0x70]
//   XREF to: Stack[-0x30] (READ)
// 00441537: ADD ESP,0x10
// 0044153a: MOV EDX,dword ptr [EBX + 0x4034]
// 00441540: PUSH EDX
// 00441541: MOV ECX,dword ptr [EBX + 0x4030]
// 00441547: PUSH ECX
// 00441548: FSTP double ptr [EBX + 0x4038]
// 0044154e: MOV ESI,dword ptr [EBX + 0x403c]
// 00441554: PUSH ESI
// 00441555: MOV EDI,dword ptr [EBX + 0x4038]
// 0044155b: PUSH EDI
// 0044155c: CALL engine_colquant.c_FUN_00441790
//   XREF to: 00441790 (UNCONDITIONAL_CALL)
// 00441561: MOV dword ptr [ESP + 0x70],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 00441565: MOV dword ptr [ESP + 0x74],EDX
//   XREF to: Stack[-0x2c] (WRITE)
// 00441569: MOV EAX,dword ptr [ESP + 0x70]
//   XREF to: Stack[-0x30] (READ)
// 0044156d: MOV dword ptr [EBX + 0x4038],EAX
// 00441573: MOV EAX,dword ptr [ESP + 0x74]
//   XREF to: Stack[-0x2c] (READ)
// 00441577: MOV dword ptr [EBX + 0x403c],EAX
// 0044157d: ADD ESP,0x10
// 00441580: MOV ESP,EBP
// 00441582: POP EBP
// 00441583: POP EDI
// 00441584: POP ESI
// 00441585: POP EBX
// 00441586: RET
// 00441587: MOV EAX,dword ptr [EDI + 0x2004]
//   Label: LAB_00441587
// 0044158d: MOV AL,byte ptr [ESI + EAX*0x1]
// 00441590: MOV EDX,dword ptr [EBX + 0x4006]
// 00441596: AND EAX,0xff
// 0044159b: SAR EDX,0x10
// 0044159e: SUB EDX,EAX
// 004415a0: MOV EAX,EDX
// 004415a2: CDQ
// 004415a3: XOR EAX,EDX
// 004415a5: SUB EAX,EDX
// 004415a7: MOV dword ptr [ESP + 0x74],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 004415ab: FILD dword ptr [ESP + 0x74]
//   XREF to: Stack[-0x1c] (READ)
// 004415af: MOV EAX,dword ptr [EDI + 0x2004]
// 004415b5: FSTP double ptr [ESP + 0x58]
//   XREF to: Stack[-0x38] (WRITE)
// 004415b9: MOV AL,byte ptr [ESI + EAX*0x1 + 0x1]
// 004415bd: MOV EDX,dword ptr [EBX + 0x4008]
// 004415c3: AND EAX,0xff
// 004415c8: SAR EDX,0x10
// 004415cb: SUB EDX,EAX
// 004415cd: MOV EAX,EDX
// 004415cf: CDQ
// 004415d0: XOR EAX,EDX
// 004415d2: SUB EAX,EDX
// 004415d4: MOV dword ptr [ESP + 0x74],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 004415d8: FILD dword ptr [ESP + 0x74]
//   XREF to: Stack[-0x1c] (READ)
// 004415dc: MOV EAX,dword ptr [EDI + 0x2004]
// 004415e2: FSTP double ptr [ESP + 0x8]
//   XREF to: Stack[-0x88] (WRITE)
// 004415e6: MOV AL,byte ptr [ESI + EAX*0x1 + 0x2]
// 004415ea: MOV EDX,dword ptr [EBX + 0x400a]
// 004415f0: AND EAX,0xff
// 004415f5: SAR EDX,0x10
// 004415f8: SUB EDX,EAX
// 004415fa: MOV EAX,EDX
// 004415fc: CDQ
// 004415fd: XOR EAX,EDX
// 004415ff: SUB EAX,EDX
// 00441601: MOV dword ptr [ESP + 0x74],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 00441605: MOV EAX,dword ptr [EDI + 0x2004]
// 0044160b: XOR EDX,EDX
// 0044160d: MOV DL,byte ptr [ESI + EAX*0x1 + 0x3]
// 00441611: MOV EAX,dword ptr [EBX + 0x400c]
// 00441617: MOV ECX,dword ptr [ESP + 0x58]
//   XREF to: Stack[-0x38] (READ)
// 0044161b: SAR EAX,0x10
// 0044161e: FILD dword ptr [ESP + 0x74]
//   XREF to: Stack[-0x1c] (READ)
// 00441622: SUB EAX,EDX
// 00441624: FSTP double ptr [ESP + 0x10]
//   XREF to: Stack[-0x80] (WRITE)
// 00441628: CDQ
// 00441629: XOR EAX,EDX
// 0044162b: SUB EAX,EDX
// 0044162d: FLD double ptr [EBX + 0x4018]
// 00441633: FLD double ptr [EBX + 0x4020]
// 00441639: FLD double ptr [EBX + 0x4028]
// 0044163f: FLD double ptr [EBX + 0x4030]
// 00441645: MOV dword ptr [ESP + 0x74],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 00441649: MOV EDX,dword ptr [ESP + 0x5c]
//   XREF to: Stack[-0x34] (READ)
// 0044164d: FILD dword ptr [ESP + 0x74]
//   XREF to: Stack[-0x1c] (READ)
// 00441651: MOV EAX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x64] (READ)
// 00441655: FSTP double ptr [ESP + 0x50]
//   XREF to: Stack[-0x40] (WRITE)
// 00441659: FXCH ST3
// 0044165b: FADD double ptr [ESP + 0x58]
//   XREF to: Stack[-0x38] (READ)
// 0044165f: FXCH ST2
// 00441661: FADD double ptr [ESP + 0x8]
//   XREF to: Stack[-0x88] (READ)
// 00441665: FXCH
// 00441667: FADD double ptr [ESP + 0x10]
//   XREF to: Stack[-0x80] (READ)
// 0044166b: PUSH EDX
// 0044166c: FXCH ST2
// 0044166e: FSTP double ptr [EBX + 0x4018]
// 00441674: FSTP double ptr [EBX + 0x4020]
// 0044167a: PUSH ECX
// 0044167b: FSTP double ptr [EBX + 0x4028]
// 00441681: MOV EDX,dword ptr [ESP + 0x30]
//   XREF to: Stack[-0x68] (READ)
// 00441685: PUSH EAX
// 00441686: FADD double ptr [ESP + 0x5c]
//   XREF to: Stack[-0x40] (READ)
// 0044168a: PUSH EDX
// 0044168b: FSTP double ptr [EBX + 0x4030]
// 00441691: CALL engine_colquant.c_FUN_00441790
//   XREF to: 00441790 (UNCONDITIONAL_CALL)
// 00441696: MOV dword ptr [ESP + 0x70],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 0044169a: MOV dword ptr [ESP + 0x74],EDX
//   XREF to: Stack[-0x2c] (WRITE)
// 0044169e: FLD double ptr [ESP + 0x70]
//   XREF to: Stack[-0x30] (READ)
// 004416a2: ADD ESP,0x10
// 004416a5: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x84] (READ)
// 004416a9: PUSH ECX
// 004416aa: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x88] (READ)
// 004416ae: PUSH EAX
// 004416af: MOV EDX,dword ptr [ESP + 0x44]
//   XREF to: Stack[-0x54] (READ)
// 004416b3: PUSH EDX
// 004416b4: MOV ECX,dword ptr [ESP + 0x44]
//   XREF to: Stack[-0x58] (READ)
// 004416b8: PUSH ECX
// 004416b9: FSTP double ptr [ESP + 0x38]
//   XREF to: Stack[-0x68] (WRITE)
// 004416bd: CALL engine_colquant.c_FUN_00441790
//   XREF to: 00441790 (UNCONDITIONAL_CALL)
// 004416c2: MOV dword ptr [ESP + 0x70],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 004416c6: MOV dword ptr [ESP + 0x74],EDX
//   XREF to: Stack[-0x2c] (WRITE)
// 004416ca: FLD double ptr [ESP + 0x70]
//   XREF to: Stack[-0x30] (READ)
// 004416ce: ADD ESP,0x10
// 004416d1: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x7c] (READ)
// 004416d5: PUSH EAX
// 004416d6: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x80] (READ)
// 004416da: PUSH EDX
// 004416db: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x8c] (READ)
// 004416df: PUSH ECX
// 004416e0: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x90] (READ)
// 004416e4: PUSH EAX
// 004416e5: FSTP double ptr [ESP + 0x48]
//   XREF to: Stack[-0x58] (WRITE)
// 004416e9: CALL engine_colquant.c_FUN_00441790
//   XREF to: 00441790 (UNCONDITIONAL_CALL)
// 004416ee: MOV dword ptr [ESP + 0x70],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 004416f2: MOV dword ptr [ESP + 0x74],EDX
//   XREF to: Stack[-0x2c] (WRITE)
// 004416f6: FLD double ptr [ESP + 0x70]
//   XREF to: Stack[-0x30] (READ)
// 004416fa: ADD ESP,0x10
// 004416fd: FSTP double ptr [ESP]
//   XREF to: Stack[-0x90] (DATA)
// 00441700: MOV EDX,dword ptr [ESP + 0x54]
//   XREF to: Stack[-0x3c] (READ)
// 00441704: PUSH EDX
// 00441705: MOV ECX,dword ptr [ESP + 0x54]
//   XREF to: Stack[-0x40] (READ)
// 00441709: PUSH ECX
// 0044170a: MOV EAX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[-0x5c] (READ)
// 0044170e: PUSH EAX
// 0044170f: MOV EDX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[-0x60] (READ)
// 00441713: PUSH EDX
// 00441714: CALL engine_colquant.c_FUN_00441790
//   XREF to: 00441790 (UNCONDITIONAL_CALL)
// 00441719: MOV dword ptr [ESP + 0x70],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 0044171d: MOV dword ptr [ESP + 0x74],EDX
//   XREF to: Stack[-0x2c] (WRITE)
// 00441721: FLD double ptr [ESP + 0x70]
//   XREF to: Stack[-0x30] (READ)
// 00441725: ADD ESP,0x10
// 00441728: FLD double ptr [ESP + 0x58]
//   XREF to: Stack[-0x38] (READ)
// 0044172c: FMUL ST0
// 0044172e: FMUL double ptr [0x00618dc1]
//   XREF to: 00618dc1 (READ)
// 00441734: FLD double ptr [ESP + 0x8]
//   XREF to: Stack[-0x88] (READ)
// 00441738: FMUL ST0
// 0044173a: FMUL double ptr [0x00618dc9]
//   XREF to: 00618dc9 (READ)
// 00441740: FADDP
// 00441742: FLD double ptr [ESP + 0x10]
//   XREF to: Stack[-0x80] (READ)
// 00441746: FMUL ST0
// 00441748: FMUL double ptr [0x00618dd1]
//   XREF to: 00618dd1 (READ)
// 0044174e: FADDP
// 00441750: FLD double ptr [ESP + 0x50]
//   XREF to: Stack[-0x40] (READ)
// 00441754: FMUL ST0
// 00441756: FMUL double ptr [0x00618dd9]
//   XREF to: 00618dd9 (READ)
// 0044175c: ADD ESI,0x4
// 0044175f: FXCH ST2
// 00441761: FSTP double ptr [ESP + 0x30]
//   XREF to: Stack[-0x60] (WRITE)
// 00441765: MOV ECX,dword ptr [ESP + 0x70]
//   XREF to: Stack[-0x20] (READ)
// 00441769: FADDP
// 0044176b: INC ECX
// 0044176c: FADD double ptr [EBX + 0x4010]
// 00441772: MOV dword ptr [ESP + 0x70],ECX
//   XREF to: Stack[-0x20] (WRITE)
// 00441776: FSTP double ptr [EBX + 0x4010]
// 0044177c: JMP 0x0044145d
//   XREF to: 0044145d (UNCONDITIONAL_JUMP)
