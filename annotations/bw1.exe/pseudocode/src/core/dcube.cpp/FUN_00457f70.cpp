// Name: FUN_00457f70
// Address: 00457f70
// Address Range: [[00457f70, 004581d6]]
// Convention: unknown
// Signature: void FUN_00457f70(int param_1,uint param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00457f70(int param_1,uint param_2)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  int local_48;
  int local_44;
  int local_40;
  float local_3c;
  float local_38;
  float local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  FUN_004837b0(DAT_00612560,&DAT_02c8af28);
  if (20000 < *(int *)(param_1 + 0x20)) {
    _DAT_01d1d400 = "..\\core\\dcube.cpp";
    _DAT_01d1d404 = 0x7bb;
    FUN_005030e0("CDemonCube::rotateVerticies - tried to rotate %d vertices, but GLOBAL_VERTEX_COUNT = %d",*(int *)(param_1 + 0x20),20000);
  }
  FUN_00483e20(DAT_00612560,1);
  FUN_00483d80(DAT_00612560,1);
  pfVar1 = *(float **)(param_1 + 0x24);
  local_20 = 0;
  local_1c = 0;
  iVar3 = *DAT_00612560;
  if (0 < *(int *)(param_1 + 0x20)) {
    do {
      local_48 = (int)ROUND(*pfVar1 * _DAT_005fe660);
      local_44 = (int)ROUND(pfVar1[1] * _DAT_005fe660);
      local_40 = (int)ROUND(pfVar1[2] * _DAT_005fe660);
      FUN_00580173(iVar3,&local_48);
      if ((*(byte *)(iVar3 + 0x13) & 0x80) == 0) {
        local_20 = local_20 + 1;
      }
      iVar3 = iVar3 + 0x30;
      pfVar1 = pfVar1 + 3;
      local_1c = local_1c + 1;
    } while (local_1c < *(int *)(param_1 + 0x20));
  }
  if (local_20 == *(int *)(param_1 + 0x20)) {
    if (DAT_00612560[6] == 0) {
      FUN_00483e20(DAT_00612560,0);
    }
  }
  if ((DAT_0152bd48 & 1) == 0) {
    DAT_0152bd48 = DAT_0152bd48 | 1;
    _DAT_0152bd3c = 0x3f13cd3a;
    _DAT_0152bd44 = 0x3f13cd3a;
    _DAT_0152bd40 = 0xbf13cd3a;
  }
  local_14 = 0;
  if (0 < *(int *)(param_1 + 0x28)) {
    local_24 = param_2 << 2;
    local_18 = 0;
    do {
      if (param_2 < 5) {
                    /* WARNING: Could not recover jumptable at 0x0045808e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)&PTR_LAB_00457f50 + local_24))();
        return;
      }
      iVar3 = *(int *)(param_1 + 0x2c) + local_18;
      if (&local_3c != (float *)(iVar3 + 0xc)) {
        local_3c = *(float *)(iVar3 + 0xc);
        local_38 = *(float *)(iVar3 + 0x10);
        local_34 = *(float *)(iVar3 + 0x14);
      }
      local_3c = local_3c * _DAT_005d7cff;
      local_38 = local_38 * _DAT_005d7cff;
      local_34 = _DAT_005d7cff * local_34;
      local_28 = (uint)ROUND(local_34);
      local_2c = (uint)ROUND(local_38);
      local_30 = (uint)ROUND(local_3c);
      FUN_00483cf0(DAT_00612560,local_30 & 0xff,local_2c & 0xff,local_28 & 0xff);
      iVar3 = local_18 + 0x20;
      iVar2 = local_14 + 1;
      FUN_00457af0(*(int *)(param_1 + 0x2c) + local_18,*(uint *)(param_1 + 0x24));
      local_18 = iVar3;
      local_14 = iVar2;
    } while (iVar2 < *(int *)(param_1 + 0x28));
  }
  FUN_00483e20(DAT_00612560,1);
  FUN_00483d80(DAT_00612560,0);
  return;
}
