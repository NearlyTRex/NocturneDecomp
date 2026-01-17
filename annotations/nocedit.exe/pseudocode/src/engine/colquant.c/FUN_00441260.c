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
  double dVar4;
  int extraout_ECX;
  uint extraout_ECX_00;
  uint extraout_ECX_01;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  ulonglong uVar10;
  double dVar11;
  double dVar12;
  int in_stack_00000004;
  int in_stack_00000008;
  ulonglong uStack_a0;
  uint local_78;
  uint uStack_74;
  uint local_70;
  ulonglong local_68;
  uint local_58;
  uint uStack_54;
  uint local_50;
  
  local_70 = 0;
  dVar1 = 0.0;
  dVar11 = 0.0;
  iVar7 = in_stack_00000008 * 0x40;
  dVar12 = 0.0;
  iVar8 = *(int *)(in_stack_00000004 + 0x4040 + iVar7);
  iVar7 = *(int *)(in_stack_00000004 + 0x4040 + iVar7) +
          *(int *)(in_stack_00000004 + 0x4044 + iVar7);
  if (iVar8 < iVar7) {
    dVar11 = 0.0;
    dVar12 = 0.0;
    pbVar9 = (byte *)(iVar8 * 4 + *(int *)(in_stack_00000004 + 0x2004));
    do {
      iVar8 = iVar8 + 1;
      dVar12 = (double)*pbVar9 + dVar12;
      dVar1 = (double)pbVar9[1] + dVar1;
      dVar11 = (double)pbVar9[2] + dVar11;
      local_70 = SUB84 /* extract 2-byte value */(dVar1,0);
      pbVar9 = pbVar9 + 4;
    } while (iVar8 < iVar7);
  }
  local_50 = SUB84 /* extract 2-byte value */(dVar11,0);
  uStack_74 = (uint)((ulonglong)dVar12 >> 0x20);
  local_78 = SUB84 /* extract 2-byte value */(dVar12,0);
  iVar8 = in_stack_00000004 + in_stack_00000008 * 0x40;
  dVar11 = crt_math_c_round_FUN_005fe6b0(dVar12 / (double)*(uint *)(iVar8 + 0x4044));
  *(short *)(iVar8 + 0x4008) = (short)(int)ROUND(dVar11);
  dVar11 = crt_math_c_round_FUN_005fe6b0
                     ((double)CONCAT44 /* combine 2-byte values */(local_70,uStack_74) / (double)*(uint *)(iVar8 + 0x4044));
  *(short *)(iVar8 + 0x400a) = (short)(int)ROUND(dVar11);
  dVar12 = crt_math_c_round_FUN_005fe6b0
                     ((double)CONCAT44 /* combine 2-byte values */(uStack_54,local_58) /
                      (double)CONCAT44 /* combine 2-byte values */(extraout_ECX,*(uint *)(iVar8 + 0x4044)));
  dVar11 = (double)CONCAT44 /* combine 2-byte values */(extraout_ECX_00,local_78);
  *(short *)(iVar8 + 0x400c) = (short)(int)ROUND(dVar12);
  *(uint *)(iVar8 + 0x4018) = extraout_ECX_00;
  *(uint *)(iVar8 + 0x401c) = extraout_ECX_00;
  *(uint *)(iVar8 + 0x4020) = extraout_ECX_00;
  *(uint *)(iVar8 + 0x4024) = extraout_ECX_00;
  *(uint *)(iVar8 + 0x4028) = extraout_ECX_00;
  *(uint *)(iVar8 + 0x402c) = extraout_ECX_00;
  *(uint *)(iVar8 + 0x4030) = extraout_ECX_00;
  *(uint *)(iVar8 + 0x4034) = extraout_ECX_00;
  local_68 = (double)CONCAT44 /* combine 2-byte values */(extraout_ECX_00,extraout_ECX_00);
  *(uint *)(iVar8 + 0x4010) = extraout_ECX_00;
  uStack_a0 = (double)CONCAT44 /* combine 2-byte values */(extraout_ECX_00,0x441433);
  dVar12 = crt_math_c_round_FUN_005fe6b0
                     ((double)CONCAT44 /* combine 2-byte values */(local_50,uStack_54) /
                      (double)CONCAT44 /* combine 2-byte values */(extraout_ECX_00,*(uint *)(iVar8 + 0x4044)));
  *(short *)(iVar8 + 0x400e) = (short)(int)ROUND(dVar12);
  *(uint *)(iVar8 + 0x4014) = extraout_ECX_01;
  dVar12 = dVar11;
  for (iVar8 = *(int *)(iVar8 + 0x4040) * 4; iVar7 = in_stack_00000008 * 0x40 + in_stack_00000004,
      iVar8 < extraout_ECX; iVar8 = iVar8 + 4) {
    uVar5 = (*(int *)(iVar7 + 0x4006) >> 0x10) -
            (uint)*(byte *)(iVar8 + *(int *)(in_stack_00000004 + 0x2004));
    uVar6 = (int)uVar5 >> 0x1f;
    dVar1 = (double)(int)((uVar5 ^ uVar6) - uVar6);
    uVar5 = (*(int *)(iVar7 + 0x4008) >> 0x10) -
            (uint)*(byte *)(iVar8 + 1 + *(int *)(in_stack_00000004 + 0x2004));
    uVar6 = (int)uVar5 >> 0x1f;
    dVar2 = (double)(int)((uVar5 ^ uVar6) - uVar6);
    uVar5 = (*(int *)(iVar7 + 0x400a) >> 0x10) -
            (uint)*(byte *)(iVar8 + 2 + *(int *)(in_stack_00000004 + 0x2004));
    uVar6 = (int)uVar5 >> 0x1f;
    dVar3 = (double)(int)((uVar5 ^ uVar6) - uVar6);
    uVar5 = (*(int *)(iVar7 + 0x400c) >> 0x10) -
            (uint)*(byte *)(iVar8 + 3 + *(int *)(in_stack_00000004 + 0x2004));
    uVar6 = (int)uVar5 >> 0x1f;
    dVar4 = (double)(int)((uVar5 ^ uVar6) - uVar6);
    *(double *)(iVar7 + 0x4018) = *(double *)(iVar7 + 0x4018) + dVar1;
    *(double *)(iVar7 + 0x4020) = *(double *)(iVar7 + 0x4020) + dVar2;
    *(double *)(iVar7 + 0x4028) = *(double *)(iVar7 + 0x4028) + dVar3;
    *(double *)(iVar7 + 0x4030) = *(double *)(iVar7 + 0x4030) + dVar4;
    dVar11 = (double)engine_colquant_c_FUN_00441790();
    local_68 = (double)engine_colquant_c_FUN_00441790();
    uStack_a0 = (double)engine_colquant_c_FUN_00441790();
    dVar12 = (double)engine_colquant_c_FUN_00441790();
    *(double *)(iVar7 + 0x4010) =
         dVar3 * dVar3 * 0.11 +
         dVar2 * dVar2 * 0.58999999999999997 + dVar1 * dVar1 * 0.29999999999999999 +
         dVar4 * dVar4 * 0.69999999999999996 + *(double *)(iVar7 + 0x4010);
  }
  dVar1 = *(double *)(iVar7 + 0x4018) * 0.33000000000000002;
  dVar2 = *(double *)(iVar7 + 0x4028) * 0.11;
  dVar3 = *(double *)(iVar7 + 0x4030) * 0.69999999999999996;
  *(double *)(iVar7 + 0x4020) = *(double *)(iVar7 + 0x4020) * 0.58999999999999997 * local_68;
  *(double *)(iVar7 + 0x4018) = dVar1 * dVar11;
  *(double *)(iVar7 + 0x4028) = dVar2 * uStack_a0;
  *(double *)(iVar7 + 0x4030) = dVar3 * dVar12;
  uVar10 = engine_colquant_c_FUN_00441790();
  *(ulonglong *)(iVar7 + 0x4038) = uVar10;
  uVar10 = engine_colquant_c_FUN_00441790();
  *(ulonglong *)(iVar7 + 0x4038) = uVar10;
  uVar10 = engine_colquant_c_FUN_00441790();
  *(ulonglong *)(iVar7 + 0x4038) = uVar10;
  return;
}
