// Name: engine_colquant.c_FUN_00441260
// Address: 00441260
// Address Range: [[00441260, 00441780]]
// Convention: __cdecl
// Signature: void __cdecl engine_colquant_c_FUN_00441260(void)

#include "nocturne.h"

void __cdecl engine_colquant_c_FUN_00441260(void)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  uint extraout_EDX;
  uint extraout_EDX_00;
  uint extraout_EDX_01;
  uint uVar5;
  uint uVar6;
  uint extraout_EDX_02;
  uint extraout_EDX_03;
  uint extraout_EDX_04;
  uint extraout_EDX_05;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  double dVar10;
  int in_stack_00000004;
  int in_stack_00000008;
  double dStack_a0;
  int local_78;
  uint uStack_74;
  int local_70;
  uint uStack_6c;
  double local_68;
  uint local_58;
  uint uStack_54;
  uint local_50;
  
  local_70 = 0;
  dVar2 = 0.0;
  dVar10 = 0.0;
  iVar7 = in_stack_00000008 * 0x40;
  dVar1 = 0.0;
  iVar8 = *(int *)(in_stack_00000004 + 0x4040 + iVar7);
  iVar7 = *(int *)(in_stack_00000004 + 0x4040 + iVar7) +
          *(int *)(in_stack_00000004 + 0x4044 + iVar7);
  if (iVar8 < iVar7) {
    dVar10 = 0.0;
    dVar1 = 0.0;
    pbVar9 = (byte *)(iVar8 * 4 + *(int *)(in_stack_00000004 + 0x2004));
    do {
      iVar8 = iVar8 + 1;
      dVar1 = (double)*pbVar9 + dVar1;
      dVar2 = (double)pbVar9[1] + dVar2;
      dVar10 = (double)pbVar9[2] + dVar10;
      local_70 = SUB84(dVar2,0);
      pbVar9 = pbVar9 + 4;
    } while (iVar8 < iVar7);
  }
  local_50 = SUB84(dVar10,0);
  uStack_74 = (uint)((ulonglong)dVar1 >> 0x20);
  local_78 = SUB84(dVar1,0);
  iVar8 = in_stack_00000004 + in_stack_00000008 * 0x40;
  dVar10 = round(dVar1 / (double)*(uint *)(iVar8 + 0x4044));
  *(short *)(iVar8 + 0x4008) = (short)(int)ROUND(dVar10);
  dVar10 = round
                     ((double)CONCAT44(local_70,uStack_74) / (double)*(uint *)(iVar8 + 0x4044));
  *(short *)(iVar8 + 0x400a) = (short)(int)ROUND(dVar10);
  dVar10 = round
                     ((double)CONCAT44(uStack_54,local_58) / (double)*(uint *)(iVar8 + 0x4044));
  *(short *)(iVar8 + 0x400c) = (short)(int)ROUND(dVar10);
  *(uint *)(iVar8 + 0x4018) = 0;
  uStack_74 = 0;
  *(uint *)(iVar8 + 0x401c) = 0;
  local_70 = 0;
  *(uint *)(iVar8 + 0x4020) = 0;
  *(uint *)(iVar8 + 0x4024) = 0;
  *(uint *)(iVar8 + 0x4028) = 0;
  *(uint *)(iVar8 + 0x402c) = 0;
  *(uint *)(iVar8 + 0x4030) = 0;
  uStack_6c = 0;
  *(uint *)(iVar8 + 0x4034) = 0;
  local_68 = 0.0;
  *(uint *)(iVar8 + 0x4010) = 0;
  dStack_a0 = 2.20433267273258e-317;
  dVar10 = round
                     ((double)CONCAT44(local_50,uStack_54) / (double)*(uint *)(iVar8 + 0x4044));
  *(short *)(iVar8 + 0x400e) = (short)(int)ROUND(dVar10);
  *(uint *)(iVar8 + 0x4014) = 0;
  for (iVar8 = *(int *)(iVar8 + 0x4040) * 4; iVar7 = in_stack_00000008 * 0x40 + in_stack_00000004,
      iVar8 < 0; iVar8 = iVar8 + 4) {
    uVar5 = (*(int *)(iVar7 + 0x4006) >> 0x10) -
            (uint)*(byte *)(iVar8 + *(int *)(in_stack_00000004 + 0x2004));
    uVar6 = (int)uVar5 >> 0x1f;
    dVar10 = (double)(int)((uVar5 ^ uVar6) - uVar6);
    uVar5 = (*(int *)(iVar7 + 0x4008) >> 0x10) -
            (uint)*(byte *)(iVar8 + 1 + *(int *)(in_stack_00000004 + 0x2004));
    uVar6 = (int)uVar5 >> 0x1f;
    dVar1 = (double)(int)((uVar5 ^ uVar6) - uVar6);
    uVar5 = (*(int *)(iVar7 + 0x400a) >> 0x10) -
            (uint)*(byte *)(iVar8 + 2 + *(int *)(in_stack_00000004 + 0x2004));
    uVar6 = (int)uVar5 >> 0x1f;
    dVar2 = (double)(int)((uVar5 ^ uVar6) - uVar6);
    uVar5 = (*(int *)(iVar7 + 0x400c) >> 0x10) -
            (uint)*(byte *)(iVar8 + 3 + *(int *)(in_stack_00000004 + 0x2004));
    uVar6 = (int)uVar5 >> 0x1f;
    dVar3 = (double)(int)((uVar5 ^ uVar6) - uVar6);
    *(double *)(iVar7 + 0x4018) = *(double *)(iVar7 + 0x4018) + dVar10;
    *(double *)(iVar7 + 0x4020) = *(double *)(iVar7 + 0x4020) + dVar1;
    *(double *)(iVar7 + 0x4028) = *(double *)(iVar7 + 0x4028) + dVar2;
    *(double *)(iVar7 + 0x4030) = *(double *)(iVar7 + 0x4030) + dVar3;
    local_78 = engine_colquant_c_FUN_00441790();
    iVar4 = engine_colquant_c_FUN_00441790();
    local_68 = (double)CONCAT44(extraout_EDX_03,iVar4);
    iVar4 = engine_colquant_c_FUN_00441790();
    dStack_a0 = (double)CONCAT44(extraout_EDX_04,iVar4);
    local_70 = engine_colquant_c_FUN_00441790();
    *(double *)(iVar7 + 0x4010) =
         dVar2 * dVar2 * 0.11 +
         dVar1 * dVar1 * 0.58999999999999997 + dVar10 * dVar10 * 0.29999999999999999 +
         dVar3 * dVar3 * 0.69999999999999996 + *(double *)(iVar7 + 0x4010);
    uStack_74 = extraout_EDX_02;
    uStack_6c = extraout_EDX_05;
  }
  dVar10 = *(double *)(iVar7 + 0x4018) * 0.33000000000000002;
  dVar1 = *(double *)(iVar7 + 0x4028) * 0.11;
  dVar2 = *(double *)(iVar7 + 0x4030) * 0.69999999999999996;
  *(double *)(iVar7 + 0x4020) = *(double *)(iVar7 + 0x4020) * 0.58999999999999997 * local_68;
  *(double *)(iVar7 + 0x4018) = dVar10 * (double)CONCAT44(uStack_74,local_78);
  *(double *)(iVar7 + 0x4028) = dVar1 * dStack_a0;
  *(double *)(iVar7 + 0x4030) = dVar2 * (double)CONCAT44(uStack_6c,local_70);
  iVar8 = engine_colquant_c_FUN_00441790();
  *(ulonglong *)(iVar7 + 0x4038) = CONCAT44(extraout_EDX,iVar8);
  iVar8 = engine_colquant_c_FUN_00441790();
  *(ulonglong *)(iVar7 + 0x4038) = CONCAT44(extraout_EDX_00,iVar8);
  iVar8 = engine_colquant_c_FUN_00441790();
  *(int *)(iVar7 + 0x4038) = iVar8;
  *(uint *)(iVar7 + 0x403c) = extraout_EDX_01;
  return;
}
