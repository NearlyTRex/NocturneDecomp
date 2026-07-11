// Name: FUN_004e58d0
// Address: 004e58d0
// Address Range: [[004e58d0, 004e5d7c]]
// Convention: unknown
// Signature: void FUN_004e58d0(uint *param_1,float *param_2,int param_3,int param_4,int param_5,int *param_6)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004e58d0(uint *param_1,float *param_2,int param_3,int param_4,int param_5,int *param_6)

{
  float10 fVar1;
  int iVar2;
  float *pfVar3;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int iVar4;
  int extraout_EDX;
  int extraout_EDX_00;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  uint *local_70;
  int local_6c;
  int local_68;
  float *local_64;
  int local_44;
  float *local_3c;
  int local_38;
  float *local_34;
  uint *local_30;
  int local_2c;
  int local_28;
  int local_20;
  int local_1c;
  float *local_18;
  
  iVar7 = 0;
  iVar8 = ((int *)*param_6)[4] + *(int *)*param_6 * 3;
  if ((*(int *)(param_4 + 0x10) == 0) || (*(int *)(param_4 + 0x14) != 2)) {
    local_1c = *(int *)(&DAT_005bc0fc + iVar8 * 0x94);
  }
  else {
    iVar4 = iVar8 * 0x94;
    if (*(int *)(param_4 + 0x18) == 0) {
      local_1c = *(int *)(&DAT_005bc158 + iVar4) * 3;
      local_28 = *(int *)(&DAT_005bc158 + iVar4);
      local_2c = 0;
    }
    else {
      local_1c = *(int *)(&DAT_005bc0fc + iVar4);
    }
  }
  if (_DAT_01cd6324 == 0) {
    iVar4 = 0;
    iVar6 = 0;
    do {
      fVar10 = (float10)iVar4;
      FUN_00565ad6();
      iVar4 = extraout_EDX + 1;
      *(double *)(iVar6 + 0x1cd6328) = (double)fVar10;
      iVar6 = iVar6 + 8;
    } while (iVar4 < 200);
    iVar6 = 0;
    fVar9 = (float10)_DAT_0058b898;
    iVar4 = 0;
    fVar10 = (float10)_DAT_0058b8a8;
    do {
      fVar1 = (float10)-iVar6 * fVar9;
      fVar11 = fVar9;
      FUN_00565ad6();
      fVar9 = fVar1;
      iVar6 = extraout_EDX_00 + 1;
      *(double *)(iVar4 + 0x1cd6968) = (double)fVar10;
      iVar4 = iVar4 + 8;
      fVar10 = fVar11;
    } while (iVar6 < 200);
    _DAT_01cd6324 = 1;
    param_4 = extraout_ECX;
  }
  local_44 = 0;
  param_3 = param_3 + param_5 * 0xf8;
  iVar8 = iVar8 * 0x94;
  local_64 = param_2;
  local_70 = param_1;
  local_6c = 0;
  local_68 = 0;
  do {
    local_20 = local_6c;
    local_38 = local_6c;
    local_3c = local_64;
    local_34 = local_64;
    local_18 = local_64;
    local_30 = local_70;
    iVar4 = 0;
    do {
      if (local_20 == local_1c) {
        if ((*(int *)(param_4 + 0x10) == 0) || (*(int *)(param_4 + 0x14) != 2)) {
          iVar7 = iVar7 + 1;
          local_1c = *(int *)(&DAT_005bc0fc + iVar7 * 4 + iVar8);
        }
        else {
          iVar7 = iVar7 + 1;
          iVar6 = iVar7 * 4 + iVar8;
          if (*(int *)(param_4 + 0x18) == 0) {
LAB_004e5bd0:
            local_1c = *(int *)(&DAT_005bc158 + iVar6);
            iVar2 = *(int *)(iVar6 + 0x5bc154);
            local_28 = *(int *)(&DAT_005bc158 + iVar6) - iVar2;
          }
          else {
            if (local_20 != *(int *)(&DAT_005bc118 + iVar8)) {
              if (local_20 < *(int *)(&DAT_005bc118 + iVar8)) {
                local_1c = *(int *)(&DAT_005bc0fc + iVar6);
                goto LAB_004e5a60;
              }
              goto LAB_004e5bd0;
            }
            local_1c = *(int *)(&DAT_005bc164 + iVar8);
            iVar2 = *(int *)(&DAT_005bc160 + iVar8);
            local_28 = *(int *)(&DAT_005bc164 + iVar8) - iVar2;
            iVar7 = 3;
          }
          local_1c = local_1c * 3;
          local_2c = iVar2 * 3;
        }
      }
LAB_004e5a60:
      if (*(int *)((int)param_1 + iVar4 + local_68) == 0) {
        *(uint *)((int)param_2 + iVar4 + local_68) = 0;
      }
      else {
        iVar6 = *(int *)(param_4 + 8) + -0xd2;
        if ((*(int *)(param_4 + 0x10) == 0) ||
           (((*(int *)(param_4 + 0x14) != 2 || (*(int *)(param_4 + 0x18) != 0)) &&
            ((*(int *)(param_4 + 0x14) != 2 || ((*(int *)(param_4 + 0x18) == 0 || (local_44 < 2)))))
            ))) {
          iVar2 = (*(int *)(param_4 + 0x40) + 1) * -2 *
                  (*(int *)(iVar7 * 4 + param_3) +
                  *(int *)(param_4 + 0x3c) * *(int *)(iVar7 * 4 + 0x5bbba4));
        }
        else {
          iVar2 = (local_38 - local_2c) / local_28;
          iVar6 = iVar6 + *(int *)(param_4 + 0x28 + iVar2 * 4) * -8;
          iVar2 = (*(int *)(param_4 + 0x40) + 1) * -2 *
                  *(int *)(param_3 + iVar2 * 0x34 + iVar7 * 4 + 0x5c);
        }
        iVar6 = iVar6 + iVar2;
        if ((iVar6 < 1) && (-200 < iVar6)) {
          fVar10 = (float10)*(double *)(iVar6 * -8 + 0x1cd6968);
          pfVar3 = local_3c;
        }
        else {
          fVar10 = (float10)_DAT_0058b8a8;
          FUN_00565ad6();
          pfVar3 = local_34;
          param_4 = extraout_ECX_00;
        }
        *pfVar3 = (float)fVar10;
        uVar5 = (int)*local_30 >> 0x1f;
        iVar6 = (*local_30 ^ uVar5) - uVar5;
        if (iVar6 < 200) {
          *local_18 = *local_18 * (float)*(double *)(iVar6 * 8 + 0x1cd6328);
        }
        else {
          fVar10 = (float10)iVar6;
          FUN_00565ad6();
          *local_18 = (float)(fVar10 * (float10)*local_18);
          param_4 = extraout_ECX_01;
        }
        if (*(int *)((int)param_1 + iVar4 + local_68) < 0) {
          *(float *)((int)param_2 + iVar4 + local_68) = -*(float *)((int)param_2 + iVar4 + local_68)
          ;
        }
      }
      iVar4 = iVar4 + 4;
      local_20 = local_20 + 1;
      local_38 = local_38 + 1;
      local_3c = local_3c + 1;
      local_34 = local_34 + 1;
      local_18 = local_18 + 1;
      local_30 = local_30 + 1;
    } while (iVar4 != 0x48);
    local_6c = local_6c + 0x12;
    local_68 = local_68 + 0x48;
    local_64 = local_64 + 0x12;
    local_70 = local_70 + 0x12;
    local_44 = local_44 + 1;
    if (0x1f < local_44) {
      return;
    }
  } while( true );
}
