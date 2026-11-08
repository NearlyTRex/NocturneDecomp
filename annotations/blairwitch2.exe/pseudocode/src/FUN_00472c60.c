// Name: FUN_00472c60
// Address: 00472c60
// Address Range: [[00472c60, 00473386]]
// Convention: unknown
// Signature: float FUN_00472c60(int param_1,float *param_2,float *param_3,undefined4 *param_4,undefined4 *param_5 )

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_00472c60(int param_1,float *param_2,float *param_3,uint *param_4,uint *param_5 )

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  double dVar11;
  float afStackY_107c [1002];
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  uint local_a0;
  uint local_9c;
  uint local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  double local_7c;
  uint local_74;
  float local_68;
  float local_64;
  int local_60;
  int local_5c;
  int local_54;
  int local_50;
  float local_4c;
  float local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  float local_1c;
  float local_18;
  
  bVar5 = 0;
  local_b4 = (*param_2 - *(float *)(param_1 + 0x10)) / *(float *)(param_1 + 0x28);
  local_b0 = (param_2[1] - *(float *)(param_1 + 0x14)) / *(float *)(param_1 + 0x2c);
  local_b8 = (param_2[2] - *(float *)(param_1 + 0x18)) / *(float *)(param_1 + 0x30);
  local_7c = (double)FUN_005b84d0((double)local_b4);
  fVar6 = (float10)local_7c;
  FUN_005b7ff0();
  local_38 = (int)ROUND(fVar6);
  dVar11 = (double)FUN_005b84d0((double)local_b0);
  fVar6 = (float10)dVar11;
  local_7c = dVar11;
  FUN_005b7ff0();
  local_3c = (int)ROUND(fVar6);
  dVar11 = (double)FUN_005b84d0((double)local_b8);
  fVar7 = (float10)dVar11;
  fVar6 = ((float10)*param_3 - (float10)*(float *)(param_1 + 0x10)) /
          (float10)*(float *)(param_1 + 0x28);
  fVar8 = ((float10)param_3[1] - (float10)*(float *)(param_1 + 0x14)) /
          (float10)*(float *)(param_1 + 0x2c);
  fVar9 = ((float10)param_3[2] - (float10)*(float *)(param_1 + 0x18)) /
          (float10)*(float *)(param_1 + 0x30);
  local_7c = dVar11;
  FUN_005b7ff0();
  local_34 = (int)ROUND(fVar7);
  local_bc = (float)fVar6;
  local_a4 = (float)fVar8;
  local_ac = (float)fVar9;
  dVar11 = (double)FUN_005b84d0((double)local_bc);
  fVar6 = (float10)dVar11;
  local_7c = dVar11;
  FUN_005b7ff0();
  local_5c = (int)ROUND(fVar6);
  dVar11 = (double)FUN_005b84d0((double)local_a4);
  fVar6 = (float10)dVar11;
  local_7c = dVar11;
  FUN_005b7ff0();
  local_24 = (int)ROUND(fVar6);
  dVar11 = (double)FUN_005b84d0((double)local_ac);
  fVar6 = (float10)dVar11;
  local_7c = dVar11;
  FUN_005b7ff0();
  local_60 = (int)ROUND(fVar6);
  if ((-1 < local_38) || (-1 < local_5c)) {
    if ((local_3c < 0) && (local_24 < 0)) {
      return -1.0;
    }
    if ((local_34 < 0) && (local_60 < 0)) {
      return -1.0;
    }
    if ((((local_38 < *(int *)(param_1 + 0x40)) || (local_5c < *(int *)(param_1 + 0x40))) &&
        ((local_3c < *(int *)(param_1 + 0x44) || (local_24 < *(int *)(param_1 + 0x44))))) &&
       ((local_34 < *(int *)(param_1 + 0x48) || (local_60 < *(int *)(param_1 + 0x48))))) {
      local_90 = param_3[1] - param_2[1];
      local_8c = param_3[2] - param_2[2];
      local_94 = *param_3 - *param_2;
      local_88 = *param_3 - *param_2;
      (&stack0xffffff7c)[(uint)bVar5 * 0xfffffffe] =
           (float)*(uint *)((int)&stack0xffffff70 + (uint)bVar5 * -8);
      *(uint *)((int)&stack0xffffff80 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
           *(uint *)((int)&stack0xffffff74 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
      iVar4 = 1;
      if ((local_38 != local_5c) || ((local_3c != local_24 || (local_34 != local_60)))) {
        local_c0 = SQRT(local_80 * local_80 + local_88 * local_88 + local_84 * local_84);
        if (local_c0 <= 0.0) {
          return -1.0;
        }
        fVar7 = (float10)_DAT_005d1b53 / (float10)local_c0;
        fVar6 = ABS((float10)local_bc - (float10)local_b4) * fVar7;
        fVar9 = ABS((float10)local_a4 - (float10)local_b0) * fVar7;
        fVar7 = ABS((float10)local_ac - (float10)local_b8) * fVar7;
        FUN_005b7ff0();
        local_44 = (int)ROUND(fVar6);
        fVar8 = (float10)local_88;
        FUN_005b7ff0();
        local_40 = (int)ROUND(fVar9);
        fVar6 = (float10)0;
        FUN_005b7ff0();
        local_48 = (float)(int)ROUND(fVar7);
        if (fVar8 < fVar6) {
          iVar2 = local_38 - local_5c;
          local_68 = local_b4 - (float)local_38;
          local_54 = -1;
        }
        else {
          iVar2 = local_5c - local_38;
          local_68 = (float)(local_38 + 1) - local_b4;
          local_54 = 1;
        }
        if (local_84 < 0.0) {
          local_50 = -1;
          iVar3 = local_3c - local_24;
          local_64 = local_b0 - (float)local_3c;
        }
        else {
          iVar3 = local_24 - local_3c;
          local_64 = (float)(local_3c + 1) - local_b0;
          local_50 = 1;
        }
        if (local_80 < 0.0) {
          local_20 = -1;
          iVar4 = local_34 - local_60;
          local_4c = local_b8 - (float)local_34;
        }
        else {
          iVar4 = local_60 - local_34;
          local_4c = (float)(local_34 + 1) - local_b8;
          local_20 = 1;
        }
        iVar4 = iVar2 + 1 + iVar3 + iVar4;
        fVar9 = (float10)local_40 * (float10)local_4c;
        fVar7 = (float10)(int)local_48 * (float10)local_68;
        fVar6 = (float10)(int)local_48 * (float10)local_64;
        fVar8 = (float10)local_40 * (float10)local_68 - (float10)local_44 * (float10)local_64;
        fVar10 = (float10)local_44 * (float10)local_4c;
        local_18 = local_48;
        FUN_005b7ff0();
        fVar9 = fVar9 - fVar6;
        local_30 = (int)ROUND(fVar8);
        FUN_005b7ff0();
        fVar7 = fVar7 - fVar10;
        local_28 = (int)ROUND(fVar9);
        FUN_005b7ff0();
        local_2c = (int)ROUND(fVar7);
      }
      local_a8 = 1.0001;
      iVar2 = local_34;
      iVar3 = local_2c;
      iVar1 = local_28;
      while( true ) {
        local_28 = iVar1;
        local_2c = iVar3;
        local_34 = iVar2;
        iVar2 = FUN_00472af0(param_1,local_38,local_3c,local_34);
        if (iVar2 != 0) {
          local_1c = (float)FUN_00446b60(iVar2,param_2,&stack0xffffff78);
          if (local_1c < local_a8) {
            if ((param_4 != (uint *)0x0) && (param_4 != &stack0xffffff60)) {
              *param_4 = local_a0;
              param_4[1] = local_9c;
              param_4[2] = local_98;
            }
            local_a8 = local_1c;
            if (param_5 != (uint *)0x0) {
              *param_5 = local_74;
            }
          }
          local_18 = local_1c;
          if (local_a8 <= 1.0) {
            return local_a8;
          }
        }
        iVar4 = iVar4 + -1;
        if (iVar4 < 1) break;
        iVar2 = local_34 + local_20;
        iVar3 = local_2c - local_44;
        iVar1 = local_28 + local_40;
        if (local_30 < 0) {
          if (local_2c < 0) {
            local_38 = local_38 + local_54;
            local_30 = local_30 + local_40;
            iVar2 = local_34;
            iVar3 = local_2c + (int)local_48;
            iVar1 = local_28;
          }
        }
        else if (-1 < local_28) {
          local_3c = local_3c + local_50;
          local_30 = local_30 - local_44;
          iVar2 = local_34;
          iVar3 = local_2c;
          iVar1 = local_28 - (int)local_48;
        }
      }
      if (param_5 != (uint *)0x0) {
        *param_5 = 1;
        return -1.0;
      }
    }
  }
  return -1.0;
}
