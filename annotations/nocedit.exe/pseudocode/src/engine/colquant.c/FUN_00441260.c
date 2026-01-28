// Name: engine_colquant.c_FUN_00441260
// Address: 00441260
// Address Range: [[00441260, 00441780]]
// Convention: unknown
// Signature: void engine_colquant_c_FUN_00441260(void)

#include "nocturne.h"

void engine_colquant_c_FUN_00441260(void)

{
  double dVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  ulonglong uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  int in_stack_00000004;
  int in_stack_00000008;
  double dStack_a0;
  uint uStack_74;
  uint local_70;
  double local_68;
  uint local_58;
  uint uStack_54;
  uint local_50;
  
  local_70 = 0;
  dVar12 = 0.0;
  dVar11 = 0.0;
  iVar6 = in_stack_00000008 * 0x40;
  dVar10 = 0.0;
  iVar7 = *(int *)(in_stack_00000004 + 0x4040 + iVar6);
  iVar6 = *(int *)(in_stack_00000004 + 0x4040 + iVar6) +
          *(int *)(in_stack_00000004 + 0x4044 + iVar6);
  if (iVar7 < iVar6) {
    dVar11 = 0.0;
    dVar10 = 0.0;
    pbVar8 = (byte *)(iVar7 * 4 + *(int *)(in_stack_00000004 + 0x2004));
    do {
      iVar7 = iVar7 + 1;
      dVar10 = (double)*pbVar8 + dVar10;
      dVar12 = (double)pbVar8[1] + dVar12;
      dVar11 = (double)pbVar8[2] + dVar11;
      local_70 = SUB84(dVar12,0);
      pbVar8 = pbVar8 + 4;
    } while (iVar7 < iVar6);
  }
  local_50 = SUB84(dVar11,0);
  uStack_74 = (uint)((ulonglong)dVar10 >> 0x20);
  iVar7 = in_stack_00000004 + in_stack_00000008 * 0x40;
  dVar11 = crt_math_c_round_FUN_005fe6b0(dVar10 / (double)*(uint *)(iVar7 + 0x4044));
  *(short *)(iVar7 + 0x4008) = (short)(int)ROUND(dVar11);
  dVar11 = crt_math_c_round_FUN_005fe6b0
                     ((double)CONCAT44(local_70,uStack_74) / (double)*(uint *)(iVar7 + 0x4044));
  *(short *)(iVar7 + 0x400a) = (short)(int)ROUND(dVar11);
  dVar11 = crt_math_c_round_FUN_005fe6b0
                     ((double)CONCAT44(uStack_54,local_58) / (double)*(uint *)(iVar7 + 0x4044));
  *(short *)(iVar7 + 0x400c) = (short)(int)ROUND(dVar11);
  *(uint *)(iVar7 + 0x4018) = 0;
  dVar10 = (double)((ulonglong)dVar10 & 0xffffffff);
  *(uint *)(iVar7 + 0x401c) = 0;
  *(uint *)(iVar7 + 0x4020) = 0;
  *(uint *)(iVar7 + 0x4024) = 0;
  *(uint *)(iVar7 + 0x4028) = 0;
  *(uint *)(iVar7 + 0x402c) = 0;
  *(uint *)(iVar7 + 0x4030) = 0;
  dVar11 = 0.0;
  *(uint *)(iVar7 + 0x4034) = 0;
  local_68 = 0.0;
  *(uint *)(iVar7 + 0x4010) = 0;
  dStack_a0 = 2.20433267273258e-317;
  dVar12 = crt_math_c_round_FUN_005fe6b0
                     ((double)CONCAT44(local_50,uStack_54) / (double)*(uint *)(iVar7 + 0x4044));
  *(short *)(iVar7 + 0x400e) = (short)(int)ROUND(dVar12);
  *(uint *)(iVar7 + 0x4014) = 0;
  for (iVar7 = *(int *)(iVar7 + 0x4040) * 4; iVar6 = in_stack_00000008 * 0x40 + in_stack_00000004,
      iVar7 < 0; iVar7 = iVar7 + 4) {
    uVar4 = (*(int *)(iVar6 + 0x4006) >> 0x10) -
            (uint)*(byte *)(iVar7 + *(int *)(in_stack_00000004 + 0x2004));
    uVar5 = (int)uVar4 >> 0x1f;
    dVar12 = (double)(int)((uVar4 ^ uVar5) - uVar5);
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
    *(double *)(iVar6 + 0x4018) = *(double *)(iVar6 + 0x4018) + dVar12;
    *(double *)(iVar6 + 0x4020) = *(double *)(iVar6 + 0x4020) + dVar1;
    *(double *)(iVar6 + 0x4028) = *(double *)(iVar6 + 0x4028) + dVar2;
    *(double *)(iVar6 + 0x4030) = *(double *)(iVar6 + 0x4030) + dVar3;
    dVar10 = (double)engine_colquant_c_FUN_00441790();
    local_68 = (double)engine_colquant_c_FUN_00441790();
    dStack_a0 = (double)engine_colquant_c_FUN_00441790();
    dVar11 = (double)engine_colquant_c_FUN_00441790();
    *(double *)(iVar6 + 0x4010) =
         dVar2 * dVar2 * 0.11 +
         dVar1 * dVar1 * 0.58999999999999997 + dVar12 * dVar12 * 0.29999999999999999 +
         dVar3 * dVar3 * 0.69999999999999996 + *(double *)(iVar6 + 0x4010);
  }
  dVar12 = *(double *)(iVar6 + 0x4018) * 0.33000000000000002;
  dVar1 = *(double *)(iVar6 + 0x4028) * 0.11;
  dVar2 = *(double *)(iVar6 + 0x4030) * 0.69999999999999996;
  *(double *)(iVar6 + 0x4020) = *(double *)(iVar6 + 0x4020) * 0.58999999999999997 * local_68;
  *(double *)(iVar6 + 0x4018) = dVar12 * dVar10;
  *(double *)(iVar6 + 0x4028) = dVar1 * dStack_a0;
  *(double *)(iVar6 + 0x4030) = dVar2 * dVar11;
  uVar9 = engine_colquant_c_FUN_00441790();
  *(ulonglong *)(iVar6 + 0x4038) = uVar9;
  uVar9 = engine_colquant_c_FUN_00441790();
  *(ulonglong *)(iVar6 + 0x4038) = uVar9;
  uVar9 = engine_colquant_c_FUN_00441790();
  *(ulonglong *)(iVar6 + 0x4038) = uVar9;
  return;
}
