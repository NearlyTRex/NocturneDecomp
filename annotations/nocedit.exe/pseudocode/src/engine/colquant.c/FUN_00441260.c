// Name: engine_colquant.c_FUN_00441260
// Address: 00441260
// Address Range: [[00441260, 00441780]]
// Convention: __cdecl
// Signature: void __cdecl engine_colquant_c_FUN_00441260(void)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl engine_colquant_c_FUN_00441260(void)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  uint extraout_EDX;
  uint extraout_EDX_00;
  uint extraout_EDX_01;
  uint uVar6;
  uint uVar7;
  uint extraout_EDX_02;
  uint extraout_EDX_03;
  uint extraout_EDX_04;
  uint extraout_EDX_05;
  int iVar8;
  int iVar9;
  int iVar10;
  byte *pbVar11;
  int in_stack_00000004;
  int in_stack_00000008;
  double local_90;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  
  local_70 = 0.0;
  local_50 = 0.0;
  local_48 = 0.0;
  iVar8 = in_stack_00000008 * 0x40;
  local_78 = 0.0;
  iVar9 = *(int *)(in_stack_00000004 + 0x4040 + iVar8);
  iVar8 = *(int *)(in_stack_00000004 + 0x4040 + iVar8) +
          *(int *)(in_stack_00000004 + 0x4044 + iVar8);
  if (iVar9 < iVar8) {
    pbVar11 = (byte *)(iVar9 * 4 + *(int *)(in_stack_00000004 + 0x2004));
    do {
      iVar9 = iVar9 + 1;
      local_78 = (double)*pbVar11 + local_78;
      local_70 = (double)pbVar11[1] + local_70;
      local_50 = (double)pbVar11[2] + local_50;
      local_48 = (double)pbVar11[3] + local_48;
      pbVar11 = pbVar11 + 4;
    } while (iVar9 < iVar8);
  }
  iVar9 = in_stack_00000004 + in_stack_00000008 * 0x40;
  *(short *)(iVar9 + 0x4008) =
       (short)(int)ROUND(ROUND(local_78 / (double)*(uint *)(iVar9 + 0x4044)));
  *(short *)(iVar9 + 0x400a) =
       (short)(int)ROUND(ROUND(local_70 / (double)*(uint *)(iVar9 + 0x4044)));
  *(short *)(iVar9 + 0x400c) =
       (short)(int)ROUND(ROUND(local_50 / (double)*(uint *)(iVar9 + 0x4044)));
  *(uint *)(iVar9 + 0x4018) = 0;
  *(uint *)(iVar9 + 0x401c) = 0;
  local_68 = 0.0;
  *(uint *)(iVar9 + 0x4020) = 0;
  *(uint *)(iVar9 + 0x4024) = 0;
  local_58 = 0.0;
  *(uint *)(iVar9 + 0x4028) = 0;
  *(uint *)(iVar9 + 0x402c) = 0;
  local_90 = 0.0;
  *(uint *)(iVar9 + 0x4030) = 0;
  *(uint *)(iVar9 + 0x4034) = 0;
  local_60 = 0.0;
  *(uint *)(iVar9 + 0x4010) = 0;
  *(short *)(iVar9 + 0x400e) =
       (short)(int)ROUND(ROUND(local_48 / (double)*(uint *)(iVar9 + 0x4044)));
  *(uint *)(iVar9 + 0x4014) = 0;
  for (iVar9 = *(int *)(iVar9 + 0x4040) * 4; iVar10 = in_stack_00000008 * 0x40 + in_stack_00000004,
      iVar9 < iVar8 * 4; iVar9 = iVar9 + 4) {
    uVar6 = (*(int *)(iVar10 + 0x4006) >> 0x10) -
            (uint)*(byte *)(iVar9 + *(int *)(in_stack_00000004 + 0x2004));
    uVar7 = (int)uVar6 >> 0x1f;
    dVar1 = (double)(int)((uVar6 ^ uVar7) - uVar7);
    uVar6 = (*(int *)(iVar10 + 0x4008) >> 0x10) -
            (uint)*(byte *)(iVar9 + 1 + *(int *)(in_stack_00000004 + 0x2004));
    uVar7 = (int)uVar6 >> 0x1f;
    dVar2 = (double)(int)((uVar6 ^ uVar7) - uVar7);
    uVar6 = (*(int *)(iVar10 + 0x400a) >> 0x10) -
            (uint)*(byte *)(iVar9 + 2 + *(int *)(in_stack_00000004 + 0x2004));
    uVar7 = (int)uVar6 >> 0x1f;
    dVar3 = (double)(int)((uVar6 ^ uVar7) - uVar7);
    uVar6 = (*(int *)(iVar10 + 0x400c) >> 0x10) -
            (uint)*(byte *)(iVar9 + 3 + *(int *)(in_stack_00000004 + 0x2004));
    uVar7 = (int)uVar6 >> 0x1f;
    dVar4 = (double)(int)((uVar6 ^ uVar7) - uVar7);
    *(double *)(iVar10 + 0x4018) = *(double *)(iVar10 + 0x4018) + dVar1;
    *(double *)(iVar10 + 0x4020) = *(double *)(iVar10 + 0x4020) + dVar2;
    *(double *)(iVar10 + 0x4028) = *(double *)(iVar10 + 0x4028) + dVar3;
    *(double *)(iVar10 + 0x4030) = *(double *)(iVar10 + 0x4030) + dVar4;
    iVar5 = engine_colquant_c_FUN_00441790();
    local_68 = (double)CONCAT44(extraout_EDX_02,iVar5);
    iVar5 = engine_colquant_c_FUN_00441790();
    local_58 = (double)CONCAT44(extraout_EDX_03,iVar5);
    iVar5 = engine_colquant_c_FUN_00441790();
    local_90 = (double)CONCAT44(extraout_EDX_04,iVar5);
    iVar5 = engine_colquant_c_FUN_00441790();
    local_60 = (double)CONCAT44(extraout_EDX_05,iVar5);
    *(double *)(iVar10 + 0x4010) =
         dVar3 * dVar3 * 0.11 +
         dVar2 * dVar2 * 0.58999999999999997 + dVar1 * dVar1 * 0.29999999999999999 +
         dVar4 * dVar4 * 0.69999999999999996 + *(double *)(iVar10 + 0x4010);
  }
  dVar1 = *(double *)(iVar10 + 0x4018) * 0.33000000000000002;
  dVar2 = *(double *)(iVar10 + 0x4028) * 0.11;
  dVar3 = *(double *)(iVar10 + 0x4030) * 0.69999999999999996;
  *(double *)(iVar10 + 0x4020) = *(double *)(iVar10 + 0x4020) * 0.58999999999999997 * local_58;
  *(double *)(iVar10 + 0x4018) = dVar1 * local_68;
  *(double *)(iVar10 + 0x4028) = dVar2 * local_90;
  *(double *)(iVar10 + 0x4030) = dVar3 * local_60;
  iVar9 = engine_colquant_c_FUN_00441790();
  *(ulonglong *)(iVar10 + 0x4038) = CONCAT44(extraout_EDX,iVar9);
  iVar9 = engine_colquant_c_FUN_00441790();
  *(ulonglong *)(iVar10 + 0x4038) = CONCAT44(extraout_EDX_00,iVar9);
  iVar9 = engine_colquant_c_FUN_00441790();
  *(int *)(iVar10 + 0x4038) = iVar9;
  *(uint *)(iVar10 + 0x403c) = extraout_EDX_01;
  return;
}
