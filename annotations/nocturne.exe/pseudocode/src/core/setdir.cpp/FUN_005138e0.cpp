// Name: core_setdir.cpp_FUN_005138e0
// Address: 005138e0
// Address Range: [[005138e0, 00513cdb]]
// Convention: unknown
// Signature: void core_setdir_cpp_FUN_005138e0(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_setdir_cpp_FUN_005138e0(int *param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  char local_c4 [100];
  int *local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
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
  int local_1c;
  int local_18;
  int local_14;
  
  local_54 = DAT_005b7620;
  iVar6 = 0;
  local_40 = DAT_005b7620 + -0x78;
  local_2c = 2;
  if (0 < *param_1) {
    iVar3 = 0;
    do {
      *(int *)(iVar3 + 0x26714b4) = iVar6;
      iVar6 = iVar6 + 1;
      iVar3 = iVar3 + 4;
    } while (iVar6 < *param_1);
  }
  local_50 = 0;
  for (iVar6 = 0; iVar6 < *param_1 + -1; iVar6 = iVar6 + 1) {
    iVar3 = iVar6 + 1;
    if (iVar3 < *param_1) {
      iVar5 = iVar3 * 4;
      do {
        iVar1 = *(int *)(local_50 + 0x26714b4);
        if (*(float *)(&DAT_02663604 + iVar1 * 4) <
            *(float *)(&DAT_02663604 + *(int *)(iVar5 + 0x26714b4) * 4)) {
          *(uint *)(local_50 + 0x26714b4) = *(uint *)(iVar5 + 0x26714b4);
          *(int *)(iVar5 + 0x26714b4) = iVar1;
        }
        iVar3 = iVar3 + 1;
        iVar5 = iVar5 + 4;
      } while (iVar3 < *param_1);
    }
    local_50 = local_50 + 4;
  }
  local_5c = 9;
  if (*param_1 < 9) {
    local_5c = *param_1;
  }
  if (0 < local_5c) {
    local_48 = local_40 * 4;
    local_58 = local_48 + 0xc0;
    local_5c = local_5c << 2;
    local_60 = param_1 + 1;
    local_4c = local_54 + -0x83;
    local_38 = 0;
    local_44 = local_54 + -0x48;
    local_54 = local_54 + -0xc;
    do {
      local_3c = *(int *)(local_38 + 0x26714b4);
      iVar6 = local_3c * 0x3000;
      if (DAT_005b7624 == 0x20) {
        local_1c = local_48;
        local_34 = local_58;
        local_24 = iVar6;
        do {
          iVar6 = local_2c * 4;
          iVar3 = local_24;
          do {
            uVar4 = (uint)(0xffffff / (ulonglong)(*(int *)(iVar3 + 0x23755f8) + 1));
            if (0xff < uVar4) {
              uVar4 = 0xff;
            }
            iVar5 = iVar6 + 4;
            iVar3 = iVar3 + 4;
            *(uint *)(iVar6 + *(int *)(&DAT_01bd2fa0 + local_1c)) = uVar4 * 0x10101;
            iVar6 = iVar5;
          } while (iVar5 != local_2c * 4 + 0x100);
          local_1c = local_1c + 4;
          local_24 = local_24 + 0x100;
        } while (local_1c != local_58);
      }
      else {
        local_20 = iVar6 + 0x100;
        local_18 = 0;
        local_28 = local_40;
        local_30 = iVar6;
        do {
          iVar6 = local_28;
          iVar5 = local_18 * 0x100 + local_30;
          local_14 = local_20;
          iVar3 = local_2c;
          do {
            uVar4 = (uint)(0xffffff / (ulonglong)(*(int *)(iVar5 + 0x23755f8) + 1));
            if (0xff < uVar4) {
              uVar4 = 0xff;
            }
            _DAT_01c00c70 = (uint)(byte)(&DAT_01bf7720)[(uVar4 >> 3) * 0x421];
            engine_2d_c_plotPixel_FUN_00401530(iVar3,iVar6);
            iVar5 = iVar5 + 4;
            iVar3 = iVar3 + 1;
          } while (iVar5 != local_14);
          local_28 = local_28 + 1;
          local_18 = local_18 + 1;
          local_20 = local_20 + 0x100;
        } while (local_18 < 0x30);
      }
      _sprintf(local_c4,"%g",(double)*(float *)(&DAT_02663604 + local_3c * 4));
      iVar6 = local_2c;
      engine_2d_c_drawText_FUN_00402600(local_c4,local_2c,local_44);
      engine_2d_c_drawText_FUN_00402600((char *)(local_60 + local_3c * 0x68),iVar6,local_4c);
      local_2c = iVar6 + 0x41;
      if (DAT_005b761c < iVar6 + 0x81) {
        local_2c = 2;
        local_58 = local_58 + 0xf0;
        local_48 = local_48 + 0xf0;
        local_4c = local_4c + 0x3c;
        local_44 = local_44 + 0x3c;
        local_40 = local_40 + 0x3c;
        bVar2 = DAT_005b7620 < local_54;
        local_54 = local_54 + 0x3c;
        if (bVar2) {
          return;
        }
      }
      local_38 = local_38 + 4;
    } while (local_38 < local_5c);
  }
  return;
}
