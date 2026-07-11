// Name: FUN_00488580
// Address: 00488580
// Address Range: [[00488580, 00488ac9]]
// Convention: unknown
// Signature: void FUN_00488580(float *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00488580(float *param_1)

{
  float fVar1;
  float10 fVar2;
  int *piVar3;
  float *pfVar4;
  int iVar5;
  int *extraout_EDX;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float local_d0;
  byte local_c4 [4];
  uint local_c0;
  uint local_bc;
  uint local_b8;
  uint local_b4;
  uint local_b0;
  uint local_ac;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  float local_9c;
  float local_98;
  float local_94;
  byte local_90 [12];
  byte local_84 [12];
  float local_78;
  float local_74;
  float local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  float local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  if (*param_1 <= 0.0) {
    return;
  }
  fVar6 = (float10)param_1[7];
  FUN_00563a30();
  local_28 = (float)(int)ROUND(fVar6);
  FUN_00461eb0(DAT_005ae704,(int)local_28 * 0x18 + 0x1c09c28);
  FUN_00460a00(DAT_005ae704,param_1 + 1);
  FUN_00460db0(DAT_005ae704,local_84);
  FUN_00460aa0(DAT_005ae704,local_84,0);
  fVar6 = ((float10)_DAT_0059d214 - (float10)*param_1) / (float10)_DAT_0059d214;
  fVar1 = (float)(fVar6 * (float10)_DAT_005813cc + (float10)_DAT_005813d4);
  local_d0 = fVar1;
  if ((float10)(double)fVar6 < (float10)_DAT_005813d4) {
    pfVar4 = (float *)FUN_00460d30(DAT_005ae704,local_90);
    local_9c = *pfVar4 - param_1[1];
    local_98 = (float)((float10)pfVar4[1] - (float10)param_1[2]);
    local_94 = (float)((float10)pfVar4[2] - (float10)param_1[3]);
    fVar7 = (float10)param_1[4];
    local_d0 = (float)(((float10)1 +
                       ((float10)1 -
                       ABS((float10)local_94 * (float10)param_1[6] +
                           (float10)local_9c * (float10)param_1[4] +
                           (float10)local_98 * (float10)param_1[5]) /
                       (SQRT((float10)param_1[6] * (float10)param_1[6] +
                             fVar7 * fVar7 + (float10)param_1[5] * (float10)param_1[5]) *
                       SQRT(((float10)pfVar4[2] - (float10)param_1[3]) * (float10)local_94 +
                            (float10)local_9c * (float10)local_9c +
                            ((float10)pfVar4[1] - (float10)param_1[2]) * (float10)local_98))) *
                       ((float10)1 - (float10)(double)fVar6 * (float10)_DAT_005813dc) *
                       (float10)_DAT_005813e4) * (float10)fVar1);
  }
  local_74 = fVar1 * _DAT_005813ec * (float)_DAT_005813f4;
  local_78 = -local_d0 * _DAT_005813ec * (float)_DAT_005813f4;
  local_70 = 0.0;
  local_48 = (int)ROUND(local_78 * _DAT_0059d1f8);
  local_44 = (int)ROUND(local_74 * _DAT_0059d1f8);
  local_40 = (int)ROUND(_DAT_0059d1f8 * 0.0);
  local_28 = local_78;
  FUN_0053075c(*DAT_005ae704,&local_48);
  local_78 = local_d0 * (float)_DAT_005813fc * (float)_DAT_005813f4;
  local_54 = (int)ROUND(local_78 * _DAT_0059d1f8);
  local_50 = (int)ROUND(local_74 * _DAT_0059d1f8);
  local_4c = (int)ROUND(local_70 * _DAT_0059d1f8);
  FUN_0053075c(*DAT_005ae704 + 0x30,&local_54);
  local_74 = -fVar1 * (float)_DAT_005813fc * (float)_DAT_005813f4;
  local_60 = (int)ROUND(local_78 * _DAT_0059d1f8);
  local_5c = (int)ROUND(local_74 * _DAT_0059d1f8);
  local_58 = (int)ROUND(local_70 * _DAT_0059d1f8);
  FUN_0053075c(*DAT_005ae704 + 0x60,&local_60);
  local_78 = local_28;
  local_6c = (int)ROUND(local_28 * _DAT_0059d1f8);
  local_68 = (int)ROUND(local_74 * _DAT_0059d1f8);
  local_64 = (int)ROUND(local_70 * _DAT_0059d1f8);
  FUN_0053075c(*DAT_005ae704 + 0x90,&local_6c);
  piVar3 = DAT_005ae704;
  fVar6 = (float10)(float)fVar6;
  fVar11 = ((float10)_DAT_00581408 - fVar6) * fVar6;
  fVar8 = ((float10)1 - fVar6) * (float10)_DAT_00581404;
  fVar6 = (float10)_DAT_00581410;
  fVar7 = (float10)_DAT_00581418;
  fVar2 = (float10)_DAT_0058141c;
  *(uint *)(*DAT_005ae704 + 0x18) = 0x20000;
  fVar9 = ((float10)1 - fVar11) * (float10)_DAT_0058140c;
  *(uint *)(*piVar3 + 0x1c) = 0x20000;
  fVar10 = (float10)_DAT_00581414;
  fVar6 = (fVar11 * fVar6 + fVar9) * fVar10;
  *(uint *)(*piVar3 + 0x48) = 0xfe0000;
  fVar7 = (fVar11 * fVar7 + fVar9) * fVar10;
  *(uint *)(*piVar3 + 0x4c) = 0x20000;
  fVar10 = fVar10 * (fVar11 * fVar2 + fVar9);
  *(uint *)(*piVar3 + 0x78) = 0xfe0000;
  iVar5 = FUN_00563a30();
  *(uint *)(iVar5 + 0x7c) = 0xfe0000;
  FUN_00563a30();
  iVar5 = FUN_00563a30();
  *(uint *)(iVar5 + 0xa8) = 0x20000;
  FUN_00563a30();
  local_20 = (int)ROUND(fVar6);
  *(uint *)(*extraout_EDX + 0xac) = 0xfe0000;
  local_24 = (int)ROUND(fVar7);
  *(int *)(*extraout_EDX + 0x20) = local_20;
  local_18 = (int)ROUND(fVar10);
  *(int *)(*extraout_EDX + 0x24) = local_24;
  local_1c = (int)ROUND(fVar8);
  *(int *)(*extraout_EDX + 0x28) = local_18;
  *(int *)(*extraout_EDX + 0x2c) = local_1c;
  *(int *)(*extraout_EDX + 0x50) = local_20;
  *(int *)(*extraout_EDX + 0x54) = local_24;
  *(int *)(*extraout_EDX + 0x58) = local_18;
  *(int *)(*extraout_EDX + 0x5c) = local_1c;
  *(int *)(*extraout_EDX + 0x80) = local_20;
  *(int *)(*extraout_EDX + 0x84) = local_24;
  *(int *)(*extraout_EDX + 0x88) = local_18;
  *(int *)(*extraout_EDX + 0x8c) = local_1c;
  *(int *)(*extraout_EDX + 0xb0) = local_20;
  *(int *)(*extraout_EDX + 0xb4) = local_24;
  *(int *)(*extraout_EDX + 0xb8) = local_18;
  *(int *)(*extraout_EDX + 0xbc) = local_1c;
  local_b0 = 0;
  local_b4 = 0;
  local_b8 = 0;
  local_bc = 0;
  local_ac = 0;
  local_a4 = 2;
  local_c0 = 4;
  local_a0 = 3;
  local_a8 = 1;
  FUN_00461000(extraout_EDX,1);
  FUN_00460080(DAT_005ae704,local_c4);
  FUN_00461000(DAT_005ae704,0);
  thunk_FUN_004cdbc0(DAT_005ae704);
  return;
}
