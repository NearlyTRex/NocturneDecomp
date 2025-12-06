// Name: engine_colquant.c_FUN_00441260
// Address: 00441260
// Address Range: [[00441260, 00441780]]
// Convention: unknown
// Signature: undefined engine_colquant.c_FUN_00441260()

#include "nocturne.h"

void engine_colquant_c_FUN_00441260(void)

{
  double dVar1;
  double dVar2;
  uint extraout_ECX;
  int extraout_ECX_00;
  uint extraout_ECX_01;
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
  ulonglong uVar14;
  longlong lVar15;
  int in_stack_00000004;
  int in_stack_00000008;
  int local_80;
  uint uStack_7c;
  uint uStack_6c;
  uint local_68;
  uint uStack_64;
  uint local_60;
  uint uStack_54;
  uint local_50;
  double local_48;
  uint uStack_3c;
  uint local_38;
  uint local_24;
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
  uStack_6c = (uint)((ulonglong)dVar2 >> 0x20);
  iVar10 = in_stack_00000004 + in_stack_00000008 * 0x40;
  fVar12 = (float10)dVar13 / (float10)*(uint *)(iVar10 + 0x4044);
  dVar13 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(iVar9,*(uint *)(iVar10 + 0x4044)));
  *(short *)(iVar10 + 0x4008) = (short)(int)ROUND(fVar12);
  fVar12 = (float10)(double)CONCAT44 /* combine 2-byte values */(local_68,uStack_6c) / (float10)*(uint *)(iVar10 + 0x4044);
  dVar13 = crt_math_c_round_FUN_005fe6b0
                     ((double)CONCAT44 /* combine 2-byte values */((int)((ulonglong)dVar13 >> 0x20),*(uint *)(iVar10 + 0x4044)))
  ;
  iStack_14 = (int)ROUND(fVar12);
  *(short *)(iVar10 + 0x400a) = (short)iStack_14;
  fVar12 = (float10)local_48 / (float10)CONCAT44 /* combine 2-byte values */(extraout_ECX,*(uint *)(iVar10 + 0x4044));
  dVar13 = crt_math_c_round_FUN_005fe6b0
                     ((double)CONCAT44 /* combine 2-byte values */((int)((ulonglong)dVar13 >> 0x20),
                                       *(uint *)(iVar10 + 0x4044)));
  *(short *)(iVar10 + 0x400c) = (short)(int)ROUND(fVar12);
  lVar15 = CONCAT44 /* combine 2-byte values */(extraout_ECX_00,*(uint *)(iVar10 + 0x4044));
  fVar12 = (float10)(double)CONCAT44 /* combine 2-byte values */(local_38,uStack_3c) / (float10)lVar15;
  *(int *)(iVar10 + 0x4018) = extraout_ECX_00;
  *(int *)(iVar10 + 0x401c) = extraout_ECX_00;
  *(int *)(iVar10 + 0x4020) = extraout_ECX_00;
  *(int *)(iVar10 + 0x4024) = extraout_ECX_00;
  local_48 = (double)CONCAT44 /* combine 2-byte values */(local_48._4_4_,extraout_ECX_00);
  *(int *)(iVar10 + 0x4028) = extraout_ECX_00;
  *(int *)(iVar10 + 0x402c) = extraout_ECX_00;
  *(int *)(iVar10 + 0x4030) = extraout_ECX_00;
  *(int *)(iVar10 + 0x4034) = extraout_ECX_00;
  *(int *)(iVar10 + 0x4010) = extraout_ECX_00;
  crt_math_c_round_FUN_005fe6b0
            ((double)CONCAT44 /* combine 2-byte values */((int)((ulonglong)dVar13 >> 0x20) << 2,*(uint *)(iVar10 + 0x4044)
                             ));
  *(short *)(iVar10 + 0x400e) = (short)(int)ROUND(fVar12);
  *(uint *)(iVar10 + 0x4014) = extraout_ECX_01;
  iVar10 = *(int *)(iVar10 + 0x4040) * 4;
  local_80 = extraout_ECX_00;
  iVar9 = in_stack_00000008 * 0x40;
  while( true ) {
    local_50 = (uint)((ulonglong)lVar15 >> 0x20);
    uStack_54 = (uint)lVar15;
    iVar9 = iVar9 + in_stack_00000004;
    if (iStack_14 <= iVar10) break;
    uVar3 = (*(int *)(iVar9 + 0x4006) >> 0x10) -
            (uint)*(byte *)(iVar10 + *(int *)(in_stack_00000004 + 0x2004));
    uVar4 = (int)uVar3 >> 0x1f;
    dVar13 = (double)(int)((uVar3 ^ uVar4) - uVar4);
    local_24 = (uint)((ulonglong)dVar13 >> 0x20);
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
    dVar13 = (double)CONCAT44 /* combine 2-byte values */((int)lVar15,extraout_ECX_00);
    iVar10 = iVar10 + 4;
    *(double *)(iVar9 + 0x4010) =
         (double)CONCAT44 /* combine 2-byte values */(extraout_ECX_00,local_60) * (double)CONCAT44 /* combine 2-byte values */(extraout_ECX_00,local_60) *
         0.11 +
         (double)CONCAT44 /* combine 2-byte values */(uStack_64,local_68) * (double)CONCAT44 /* combine 2-byte values */(uStack_64,local_68) *
         0.58999999999999997 +
         (double)CONCAT44 /* combine 2-byte values */(iStack_14,local_80) * (double)CONCAT44 /* combine 2-byte values */(iStack_14,local_80) *
         0.29999999999999999 + dVar13 * dVar13 * 0.69999999999999996 + *(double *)(iVar9 + 0x4010);
    iVar9 = local_80;
  }
  dVar13 = *(double *)(iVar9 + 0x4018) * 0.33000000000000002;
  dVar1 = *(double *)(iVar9 + 0x4028) * 0.11;
  dVar2 = *(double *)(iVar9 + 0x4030) * 0.69999999999999996;
  *(double *)(iVar9 + 0x4020) = *(double *)(iVar9 + 0x4020) * 0.58999999999999997 * local_48;
  *(double *)(iVar9 + 0x4018) = dVar13 * (double)CONCAT44 /* combine 2-byte values */(uStack_54,extraout_ECX_00);
  *(double *)(iVar9 + 0x4028) = dVar1 * (double)CONCAT44 /* combine 2-byte values */(uStack_7c,local_80);
  *(double *)(iVar9 + 0x4030) = dVar2 * (double)CONCAT44 /* combine 2-byte values */(extraout_ECX_00,local_50);
  uVar14 = engine_colquant_c_FUN_00441790();
  *(ulonglong *)(iVar9 + 0x4038) = uVar14;
  uVar14 = engine_colquant_c_FUN_00441790();
  *(ulonglong *)(iVar9 + 0x4038) = uVar14;
  uVar14 = engine_colquant_c_FUN_00441790();
  *(ulonglong *)(iVar9 + 0x4038) = uVar14;
  return;
}
