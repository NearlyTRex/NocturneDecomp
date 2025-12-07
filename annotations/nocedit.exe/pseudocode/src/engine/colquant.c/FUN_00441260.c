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
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  byte *pbVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  double dVar14;
  int in_stack_00000004;
  int in_stack_00000008;
  int iStack_a0;
  uint uStack_9c;
  uint local_88;
  uint uStack_84;
  double local_80;
  uint local_78;
  uint uStack_74;
  uint local_70;
  uint local_58;
  uint uStack_54;
  uint local_50;
  uint uStack_44;
  uint local_40;
  int local_38;
  int iStack_34;
  
  local_70 = 0;
  dVar2 = 0.0;
  dVar14 = 0.0;
  iVar9 = in_stack_00000008 * 0x40;
  dVar1 = 0.0;
  iVar10 = *(int *)(in_stack_00000004 + 0x4040 + iVar9);
  iVar9 = *(int *)(in_stack_00000004 + 0x4040 + iVar9) +
          *(int *)(in_stack_00000004 + 0x4044 + iVar9);
  if (iVar10 < iVar9) {
    dVar14 = 0.0;
    dVar1 = 0.0;
    pbVar11 = (byte *)(iVar10 * 4 + *(int *)(in_stack_00000004 + 0x2004));
    do {
      iVar10 = iVar10 + 1;
      dVar1 = (double)*pbVar11 + dVar1;
      dVar2 = (double)pbVar11[1] + dVar2;
      dVar14 = (double)pbVar11[2] + dVar14;
      local_70 = SUB84 /* extract 2-byte value */(dVar2,0);
      pbVar11 = pbVar11 + 4;
    } while (iVar10 < iVar9);
  }
  local_50 = SUB84 /* extract 2-byte value */(dVar14,0);
  uStack_74 = (uint)((ulonglong)dVar1 >> 0x20);
  local_78 = SUB84 /* extract 2-byte value */(dVar1,0);
  local_38 = in_stack_00000008 * 0x40;
  iVar10 = in_stack_00000004 + local_38;
  dVar14 = crt_math_c_round_FUN_005fe6b0(dVar1 / (double)*(uint *)(iVar10 + 0x4044));
  *(short *)(iVar10 + 0x4008) = (short)(int)ROUND(dVar14);
  dVar14 = crt_math_c_round_FUN_005fe6b0
                     ((double)CONCAT44 /* combine 2-byte values */(local_70,uStack_74) / (double)*(uint *)(iVar10 + 0x4044));
  *(short *)(iVar10 + 0x400a) = (short)(int)ROUND(dVar14);
  iStack_34 = 0;
  dVar14 = crt_math_c_round_FUN_005fe6b0
                     ((double)CONCAT44 /* combine 2-byte values */(uStack_54,local_58) / (double)*(uint *)(iVar10 + 0x4044));
  *(short *)(iVar10 + 0x400c) = (short)(int)ROUND(dVar14);
  *(uint *)(iVar10 + 0x4018) = 0;
  *(uint *)(iVar10 + 0x401c) = 0;
  uVar13 = 0;
  *(uint *)(iVar10 + 0x4020) = 0;
  *(uint *)(iVar10 + 0x4024) = 0;
  *(uint *)(iVar10 + 0x4028) = 0;
  uStack_9c = 0;
  *(uint *)(iVar10 + 0x402c) = 0;
  *(uint *)(iVar10 + 0x4030) = 0;
  *(uint *)(iVar10 + 0x4034) = 0;
  *(uint *)(iVar10 + 0x4010) = 0;
  iStack_a0 = 0x441433;
  dVar14 = crt_math_c_round_FUN_005fe6b0
                     ((double)CONCAT44 /* combine 2-byte values */(local_50,uStack_54) / (double)*(uint *)(iVar10 + 0x4044));
  *(short *)(iVar10 + 0x400e) = (short)(int)ROUND(dVar14);
  *(uint *)(iVar10 + 0x4014) = 0;
  iVar10 = *(int *)(iVar10 + 0x4040) * 4;
  while( true ) {
    uStack_74 = (uint)uVar13;
    local_38 = local_38 + in_stack_00000004;
    if (iStack_34 <= iVar10) break;
    uVar3 = (*(int *)(local_38 + 0x4006) >> 0x10) -
            (uint)*(byte *)(iVar10 + *(int *)(in_stack_00000004 + 0x2004));
    uVar4 = (int)uVar3 >> 0x1f;
    dVar14 = (double)(int)((uVar3 ^ uVar4) - uVar4);
    uVar4 = (*(int *)(local_38 + 0x4008) >> 0x10) -
            (uint)*(byte *)(iVar10 + 1 + *(int *)(in_stack_00000004 + 0x2004));
    uVar5 = (int)uVar4 >> 0x1f;
    uVar6 = (*(int *)(local_38 + 0x400a) >> 0x10) -
            (uint)*(byte *)(iVar10 + 2 + *(int *)(in_stack_00000004 + 0x2004));
    uVar7 = (int)uVar6 >> 0x1f;
    uVar3 = (*(int *)(local_38 + 0x400c) >> 0x10) -
            (uint)*(byte *)(iVar10 + 3 + *(int *)(in_stack_00000004 + 0x2004));
    uVar8 = (int)uVar3 >> 0x1f;
    uStack_44 = (uint)((ulonglong)dVar14 >> 0x20);
    *(double *)(local_38 + 0x4018) = *(double *)(local_38 + 0x4018) + dVar14;
    *(double *)(local_38 + 0x4020) =
         *(double *)(local_38 + 0x4020) + (double)(int)((uVar4 ^ uVar5) - uVar5);
    *(double *)(local_38 + 0x4028) =
         *(double *)(local_38 + 0x4028) + (double)(int)((uVar6 ^ uVar7) - uVar7);
    *(double *)(local_38 + 0x4030) =
         *(double *)(local_38 + 0x4030) + (double)(int)((uVar3 ^ uVar8) - uVar8);
    uVar13 = engine_colquant_c_FUN_00441790();
    iStack_a0 = engine_colquant_c_FUN_00441790();
    iStack_34 = engine_colquant_c_FUN_00441790();
    uStack_9c = uStack_44;
    engine_colquant_c_FUN_00441790();
    dVar14 = (double)CONCAT44 /* combine 2-byte values */((int)uVar13,local_40);
    iVar10 = iVar10 + 4;
    *(double *)(local_38 + 0x4010) =
         local_80 * local_80 * 0.11 +
         (double)CONCAT44 /* combine 2-byte values */(uStack_84,local_88) * (double)CONCAT44 /* combine 2-byte values */(uStack_84,local_88) *
         0.58999999999999997 +
         (double)CONCAT44 /* combine 2-byte values */(iStack_34,iStack_a0) * (double)CONCAT44 /* combine 2-byte values */(iStack_34,iStack_a0) *
         0.29999999999999999 + dVar14 * dVar14 * 0.69999999999999996 + *(double *)(local_38 + 0x4010);
    local_38 = iStack_a0;
  }
  dVar14 = *(double *)(local_38 + 0x4018) * 0.33000000000000002;
  dVar1 = *(double *)(local_38 + 0x4028) * 0.11;
  dVar2 = *(double *)(local_38 + 0x4030) * 0.69999999999999996;
  *(double *)(local_38 + 0x4020) = *(double *)(local_38 + 0x4020) * 0.58999999999999997 * 0.0;
  *(double *)(local_38 + 0x4018) = dVar14 * (double)CONCAT44 /* combine 2-byte values */(uStack_74,local_78);
  *(double *)(local_38 + 0x4028) = dVar1 * (double)CONCAT44 /* combine 2-byte values */(uStack_9c,iStack_a0);
  *(double *)(local_38 + 0x4030) = dVar2 * (double)(uVar13 >> 0x20);
  uVar12 = engine_colquant_c_FUN_00441790();
  *(ulonglong *)(local_38 + 0x4038) = uVar12;
  uVar12 = engine_colquant_c_FUN_00441790();
  *(ulonglong *)(local_38 + 0x4038) = uVar12;
  uVar12 = engine_colquant_c_FUN_00441790();
  *(ulonglong *)(local_38 + 0x4038) = uVar12;
  return;
}
