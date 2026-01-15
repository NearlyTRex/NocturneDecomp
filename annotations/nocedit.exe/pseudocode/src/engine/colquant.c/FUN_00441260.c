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
  double dVar3;
  uint extraout_ECX;
  uint extraout_ECX_00;
  uint extraout_ECX_01;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  ulonglong uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  int in_stack_00000004;
  int in_stack_00000008;
  double dStack_8c;
  uint local_70;
  uint uStack_6c;
  ulonglong uStack_64;
  double dStack_5c;
  uint uStack_54;
  uint local_50;
  uint uStack_4c;
  
  dVar10 = (double)CONCAT44 /* combine 2-byte values */(local_50,uStack_54);
  uStack_6c = 0;
  dVar13 = 0.0;
  dVar11 = 0.0;
  iVar6 = in_stack_00000008 * 0x40;
  dVar12 = 0.0;
  iVar7 = *(int *)(in_stack_00000004 + 0x4040 + iVar6);
  iVar6 = *(int *)(in_stack_00000004 + 0x4040 + iVar6) +
          *(int *)(in_stack_00000004 + 0x4044 + iVar6);
  if (iVar7 < iVar6) {
    dVar11 = 0.0;
    dVar12 = 0.0;
    pbVar8 = (byte *)(iVar7 * 4 + *(int *)(in_stack_00000004 + 0x2004));
    do {
      iVar7 = iVar7 + 1;
      dVar12 = (double)*pbVar8 + dVar12;
      dVar13 = (double)pbVar8[1] + dVar13;
      dVar11 = (double)pbVar8[2] + dVar11;
      uStack_6c = SUB84 /* extract 2-byte value */(dVar13,0);
      pbVar8 = pbVar8 + 4;
    } while (iVar7 < iVar6);
  }
  uStack_4c = SUB84 /* extract 2-byte value */(dVar11,0);
  local_70 = (uint)((ulonglong)dVar12 >> 0x20);
  iVar7 = in_stack_00000004 + in_stack_00000008 * 0x40;
  dVar11 = crt_math_c_round_FUN_005fe6b0(dVar12 / (double)*(uint *)(iVar7 + 0x4044));
  *(short *)(iVar7 + 0x4008) = (short)(int)ROUND(dVar11);
  dVar11 = crt_math_c_round_FUN_005fe6b0
                     ((double)CONCAT44 /* combine 2-byte values */(uStack_6c,local_70) / (double)*(uint *)(iVar7 + 0x4044));
  *(short *)(iVar7 + 0x400a) = (short)(int)ROUND(dVar11);
  dVar12 = crt_math_c_round_FUN_005fe6b0
                     ((double)CONCAT44 /* combine 2-byte values */(local_50,uStack_54) /
                      (double)CONCAT44 /* combine 2-byte values */(extraout_ECX,*(uint *)(iVar7 + 0x4044)));
  *(short *)(iVar7 + 0x400c) = (short)(int)ROUND(dVar12);
  *(uint *)(iVar7 + 0x4018) = extraout_ECX_00;
  *(uint *)(iVar7 + 0x401c) = extraout_ECX_00;
  *(uint *)(iVar7 + 0x4020) = extraout_ECX_00;
  *(uint *)(iVar7 + 0x4024) = extraout_ECX_00;
  dStack_5c = (double)CONCAT44 /* combine 2-byte values */(dStack_5c._4_4_,extraout_ECX_00);
  *(uint *)(iVar7 + 0x4028) = extraout_ECX_00;
  *(uint *)(iVar7 + 0x402c) = extraout_ECX_00;
  *(uint *)(iVar7 + 0x4030) = extraout_ECX_00;
  *(uint *)(iVar7 + 0x4034) = extraout_ECX_00;
  uStack_64 = (double)CONCAT44 /* combine 2-byte values */(extraout_ECX_00,extraout_ECX_00);
  *(uint *)(iVar7 + 0x4010) = extraout_ECX_00;
  dVar13 = crt_math_c_round_FUN_005fe6b0
                     ((double)CONCAT44 /* combine 2-byte values */(uStack_4c,local_50) /
                      (double)CONCAT44 /* combine 2-byte values */(extraout_ECX_00,*(uint *)(iVar7 + 0x4044)));
  *(short *)(iVar7 + 0x400e) = (short)(int)ROUND(dVar13);
  *(uint *)(iVar7 + 0x4014) = extraout_ECX_01;
  for (iVar7 = *(int *)(iVar7 + 0x4040) * 4; iVar6 = (int)ROUND(dVar12) + in_stack_00000004,
      iVar7 < (int)ROUND(dVar11); iVar7 = iVar7 + 4) {
    uVar4 = (*(int *)(iVar6 + 0x4006) >> 0x10) -
            (uint)*(byte *)(iVar7 + *(int *)(in_stack_00000004 + 0x2004));
    uVar5 = (int)uVar4 >> 0x1f;
    dVar13 = (double)(int)((uVar4 ^ uVar5) - uVar5);
    uVar4 = (*(int *)(iVar6 + 0x4008) >> 0x10) -
            (uint)*(byte *)(iVar7 + 1 + *(int *)(in_stack_00000004 + 0x2004));
    uVar5 = (int)uVar4 >> 0x1f;
    dVar1 = (double)(int)((uVar4 ^ uVar5) - uVar5);
    uVar4 = (*(int *)(iVar6 + 0x400a) >> 0x10) -
            (uint)*(byte *)(iVar7 + 2 + *(int *)(in_stack_00000004 + 0x2004));
    uVar5 = (int)uVar4 >> 0x1f;
    dVar2 = (double)(int)((uVar4 ^ uVar5) - uVar5);
    uVar4 = (*(int *)(iVar6 + 0x400c) >> 0x10) -
            (uint)*(byte *)(iVar7 + 3 + *(int *)(in_stack_00000004 + 0x2004));
    uVar5 = (int)uVar4 >> 0x1f;
    dVar3 = (double)(int)((uVar4 ^ uVar5) - uVar5);
    *(double *)(iVar6 + 0x4018) = *(double *)(iVar6 + 0x4018) + dVar13;
    *(double *)(iVar6 + 0x4020) = *(double *)(iVar6 + 0x4020) + dVar1;
    *(double *)(iVar6 + 0x4028) = *(double *)(iVar6 + 0x4028) + dVar2;
    *(double *)(iVar6 + 0x4030) = *(double *)(iVar6 + 0x4030) + dVar3;
    uStack_64 = (double)engine_colquant_c_FUN_00441790();
    dVar10 = (double)engine_colquant_c_FUN_00441790();
    dStack_8c = (double)engine_colquant_c_FUN_00441790();
    dStack_5c = (double)engine_colquant_c_FUN_00441790();
    *(double *)(iVar6 + 0x4010) =
         dVar2 * dVar2 * 0.11 +
         dVar1 * dVar1 * 0.58999999999999997 + dVar13 * dVar13 * 0.29999999999999999 +
         dVar3 * dVar3 * 0.69999999999999996 + *(double *)(iVar6 + 0x4010);
  }
  dVar11 = *(double *)(iVar6 + 0x4018) * 0.33000000000000002;
  dVar12 = *(double *)(iVar6 + 0x4028) * 0.11;
  dVar13 = *(double *)(iVar6 + 0x4030) * 0.69999999999999996;
  *(double *)(iVar6 + 0x4020) = *(double *)(iVar6 + 0x4020) * 0.58999999999999997 * dVar10;
  *(double *)(iVar6 + 0x4018) = dVar11 * uStack_64;
  *(double *)(iVar6 + 0x4028) = dVar12 * dStack_8c;
  *(double *)(iVar6 + 0x4030) = dVar13 * dStack_5c;
  uVar9 = engine_colquant_c_FUN_00441790();
  *(ulonglong *)(iVar6 + 0x4038) = uVar9;
  uVar9 = engine_colquant_c_FUN_00441790();
  *(ulonglong *)(iVar6 + 0x4038) = uVar9;
  uVar9 = engine_colquant_c_FUN_00441790();
  *(ulonglong *)(iVar6 + 0x4038) = uVar9;
  return;
}
