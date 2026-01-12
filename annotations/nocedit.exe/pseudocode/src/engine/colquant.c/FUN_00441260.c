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
  int extraout_ECX;
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
  int in_stack_00000004;
  int in_stack_00000008;
  ulonglong uStack_8c;
  double dStack_74;
  uint uStack_64;
  uint local_60;
  uint uStack_5c;
  ulonglong uStack_54;
  uint local_40;
  uint uStack_3c;
  int local_24;
  
  dVar11 = 0.0;
  iVar6 = in_stack_00000008 * 0x40;
  dStack_74 = 0.0;
  iVar7 = *(int *)(in_stack_00000004 + 0x4040 + iVar6);
  iVar6 = *(int *)(in_stack_00000004 + 0x4040 + iVar6) +
          *(int *)(in_stack_00000004 + 0x4044 + iVar6);
  if (iVar7 < iVar6) {
    dVar11 = 0.0;
    pbVar8 = (byte *)(iVar7 * 4 + *(int *)(in_stack_00000004 + 0x2004));
    do {
      iVar7 = iVar7 + 1;
      dStack_74 = (double)*pbVar8 + dStack_74;
      dVar11 = (double)pbVar8[3] + dVar11;
      pbVar8 = pbVar8 + 4;
    } while (iVar7 < iVar6);
  }
  local_40 = (uint)((ulonglong)dVar11 >> 0x20);
  local_24 = in_stack_00000008 * 0x40;
  iVar7 = in_stack_00000004 + local_24;
  dVar10 = crt_math_c_round_FUN_005fe6b0(dStack_74 / (double)*(uint *)(iVar7 + 0x4044));
  *(short *)(iVar7 + 0x4008) = (short)(int)ROUND(dVar10);
  dVar10 = crt_math_c_round_FUN_005fe6b0
                     ((double)CONCAT44 /* combine 2-byte values */(uStack_5c,local_60) / (double)*(uint *)(iVar7 + 0x4044));
  *(short *)(iVar7 + 0x400a) = (short)(int)ROUND(dVar10);
  dVar11 = crt_math_c_round_FUN_005fe6b0
                     (dVar11 / (double)CONCAT44 /* combine 2-byte values */(extraout_ECX,*(uint *)(iVar7 + 0x4044)));
  *(short *)(iVar7 + 0x400c) = (short)(int)ROUND(dVar11);
  dVar11 = (double)CONCAT44 /* combine 2-byte values */(extraout_ECX_00,*(uint *)(iVar7 + 0x4044));
  *(uint *)(iVar7 + 0x4018) = extraout_ECX_00;
  *(uint *)(iVar7 + 0x401c) = extraout_ECX_00;
  *(uint *)(iVar7 + 0x4020) = extraout_ECX_00;
  *(uint *)(iVar7 + 0x4024) = extraout_ECX_00;
  *(uint *)(iVar7 + 0x4028) = extraout_ECX_00;
  *(uint *)(iVar7 + 0x402c) = extraout_ECX_00;
  *(uint *)(iVar7 + 0x4030) = extraout_ECX_00;
  *(uint *)(iVar7 + 0x4034) = extraout_ECX_00;
  uStack_54 = (double)CONCAT44 /* combine 2-byte values */(extraout_ECX_00,extraout_ECX_00);
  *(uint *)(iVar7 + 0x4010) = extraout_ECX_00;
  uStack_8c = (double)CONCAT44 /* combine 2-byte values */(extraout_ECX_00,0x441433);
  dVar10 = crt_math_c_round_FUN_005fe6b0
                     ((double)CONCAT44 /* combine 2-byte values */(uStack_3c,local_40) / (double)(longlong)dVar11);
  *(short *)(iVar7 + 0x400e) = (short)(int)ROUND(dVar10);
  *(uint *)(iVar7 + 0x4014) = extraout_ECX_01;
  local_60 = extraout_ECX_00;
  for (iVar7 = *(int *)(iVar7 + 0x4040) * 4; iVar6 = local_24 + in_stack_00000004,
      iVar7 < extraout_ECX; iVar7 = iVar7 + 4) {
    uVar4 = (*(int *)(iVar6 + 0x4006) >> 0x10) -
            (uint)*(byte *)(iVar7 + *(int *)(in_stack_00000004 + 0x2004));
    uVar5 = (int)uVar4 >> 0x1f;
    dVar10 = (double)(int)((uVar4 ^ uVar5) - uVar5);
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
    *(double *)(iVar6 + 0x4018) = *(double *)(iVar6 + 0x4018) + dVar10;
    *(double *)(iVar6 + 0x4020) = *(double *)(iVar6 + 0x4020) + dVar1;
    *(double *)(iVar6 + 0x4028) = *(double *)(iVar6 + 0x4028) + dVar2;
    *(double *)(iVar6 + 0x4030) = *(double *)(iVar6 + 0x4030) + dVar3;
    uVar9 = engine_colquant_c_FUN_00441790();
    local_60 = (uint)((ulonglong)uVar9 >> 0x20);
    uStack_64 = (uint)uVar9;
    uStack_54 = (double)engine_colquant_c_FUN_00441790();
    uStack_8c = (double)engine_colquant_c_FUN_00441790();
    dVar11 = (double)engine_colquant_c_FUN_00441790();
    local_24 = (int)((ulonglong)dVar11 >> 0x20);
    *(double *)(iVar6 + 0x4010) =
         dVar2 * dVar2 * 0.11 +
         dVar1 * dVar1 * 0.58999999999999997 + dVar10 * dVar10 * 0.29999999999999999 +
         dVar3 * dVar3 * 0.69999999999999996 + *(double *)(iVar6 + 0x4010);
  }
  dVar10 = *(double *)(iVar6 + 0x4018) * 0.33000000000000002;
  dVar1 = *(double *)(iVar6 + 0x4028) * 0.11;
  dVar2 = *(double *)(iVar6 + 0x4030) * 0.69999999999999996;
  *(double *)(iVar6 + 0x4020) = *(double *)(iVar6 + 0x4020) * 0.58999999999999997 * uStack_54;
  *(double *)(iVar6 + 0x4018) = dVar10 * (double)CONCAT44 /* combine 2-byte values */(local_60,uStack_64);
  *(double *)(iVar6 + 0x4028) = dVar1 * uStack_8c;
  *(double *)(iVar6 + 0x4030) = dVar2 * dVar11;
  uVar9 = engine_colquant_c_FUN_00441790();
  *(ulonglong *)(iVar6 + 0x4038) = uVar9;
  uVar9 = engine_colquant_c_FUN_00441790();
  *(ulonglong *)(iVar6 + 0x4038) = uVar9;
  uVar9 = engine_colquant_c_FUN_00441790();
  *(ulonglong *)(iVar6 + 0x4038) = uVar9;
  return;
}
