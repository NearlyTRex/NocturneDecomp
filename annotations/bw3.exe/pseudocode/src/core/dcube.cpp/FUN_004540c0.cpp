// Name: FUN_004540c0
// Address: 004540c0
// Address Range: [[004540c0, 00454326]]
// Convention: unknown
// Signature: void FUN_004540c0(int param_1,uint param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004540c0(int param_1,uint param_2)

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
  
  FUN_0046ce90(DAT_005f2afc,&DAT_02cfd900);
  if (25000 < *(int *)(param_1 + 0x20)) {
    _DAT_01d71de0 = "..\\core\\dcube.cpp";
    _DAT_01d71de4 = 0x7bb;
    FUN_004e4330("CDemonCube::rotateVerticies - tried to rotate %d vertices, but GLOBAL_VERTEX_COUNT = %d",*(int *)(param_1 + 0x20),25000);
  }
  FUN_0046d500(DAT_005f2afc,1);
  FUN_0046d460(DAT_005f2afc,1);
  pfVar1 = *(float **)(param_1 + 0x24);
  local_20 = 0;
  local_1c = 0;
  iVar3 = *DAT_005f2afc;
  if (0 < *(int *)(param_1 + 0x20)) {
    do {
      local_48 = (int)ROUND(*pfVar1 * _DAT_005de020);
      local_44 = (int)ROUND(pfVar1[1] * _DAT_005de020);
      local_40 = (int)ROUND(pfVar1[2] * _DAT_005de020);
      FUN_005632a3(iVar3,&local_48);
      if ((*(byte *)(iVar3 + 0x13) & 0x80) == 0) {
        local_20 = local_20 + 1;
      }
      iVar3 = iVar3 + 0x30;
      pfVar1 = pfVar1 + 3;
      local_1c = local_1c + 1;
    } while (local_1c < *(int *)(param_1 + 0x20));
  }
  if (local_20 == *(int *)(param_1 + 0x20)) {
    if (DAT_005f2afc[6] == 0) {
      FUN_0046d500(DAT_005f2afc,0);
    }
  }
  if ((DAT_015485f8 & 1) == 0) {
    DAT_015485f8 = DAT_015485f8 | 1;
    _DAT_015485ec = 0x3f13cd3a;
    _DAT_015485f4 = 0x3f13cd3a;
    _DAT_015485f0 = 0xbf13cd3a;
  }
  local_14 = 0;
  if (0 < *(int *)(param_1 + 0x28)) {
    local_24 = param_2 << 2;
    local_18 = 0;
    do {
      if (param_2 < 5) {
                    /* WARNING: Could not recover jumptable at 0x004541de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)&PTR_LAB_004540a0 + local_24))();
        return;
      }
      iVar3 = *(int *)(param_1 + 0x2c) + local_18;
      if (&local_3c != (float *)(iVar3 + 0xc)) {
        local_3c = *(float *)(iVar3 + 0xc);
        local_38 = *(float *)(iVar3 + 0x10);
        local_34 = *(float *)(iVar3 + 0x14);
      }
      local_3c = local_3c * _DAT_005ba366;
      local_38 = local_38 * _DAT_005ba366;
      local_34 = _DAT_005ba366 * local_34;
      local_28 = (uint)ROUND(local_34);
      local_2c = (uint)ROUND(local_38);
      local_30 = (uint)ROUND(local_3c);
      FUN_0046d3d0(DAT_005f2afc,local_30 & 0xff,local_2c & 0xff,local_28 & 0xff);
      iVar3 = local_18 + 0x20;
      iVar2 = local_14 + 1;
      FUN_00453c40(*(int *)(param_1 + 0x2c) + local_18,*(uint *)(param_1 + 0x24));
      local_18 = iVar3;
      local_14 = iVar2;
    } while (iVar2 < *(int *)(param_1 + 0x28));
  }
  FUN_0046d500(DAT_005f2afc,1);
  FUN_0046d460(DAT_005f2afc,0);
  return;
}
