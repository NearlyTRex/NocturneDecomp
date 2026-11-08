// Name: FUN_00509e20
// Address: 00509e20
// Address Range: [[00509e20, 0050a1ec]]
// Convention: unknown
// Signature: int FUN_00509e20(undefined4 *param_1,int param_2,int *param_3,int param_4,int param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00509e20(uint *param_1,int param_2,int *param_3,int param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  uint uVar9;
  uint uVar10;
  int local_20;
  uint *local_1c;
  
  uVar1 = _DAT_0152d244;
  if (param_5 != 0) {
    FUN_004c1dd0(_DAT_0152d244,param_5,400,param_4,7,0);
    iVar2 = FUN_004c4510(uVar1,0x58);
    param_4 = param_4 + iVar2 * 2;
  }
  local_20 = 0;
  if (0 < param_2) {
    local_1c = param_1;
    do {
      FUN_004c3ea0(uVar1,*local_1c);
      iVar2 = FUN_004c4510(uVar1,0x58);
      uVar10 = 0xf8;
      uVar9 = 400;
      if (local_20 == *param_3) {
        iVar3 = FUN_005220b0(0x1d1e380,400,iVar2,0xf8);
        uVar10 = 7;
        if (iVar3 == 0) {
          uVar10 = 0xff;
        }
        else {
          iVar3 = 0;
          do {
            uVar4 = FUN_005c084c(uVar9,iVar2,uVar10);
            uVar5 = FUN_005c084c();
            iVar6 = FUN_005c084c();
            FUN_00406bd0((uint)((longlong)iVar6 * 48000) >> 0x10 |
                         (int)((ulonglong)((longlong)iVar6 * 48000) >> 0x20) << 0x10);
            iVar3 = iVar3 + 1;
            FUN_004c1dd0(uVar1,*local_1c,(uVar4 & 3) + 0x18e,((uVar5 & 3) - 2) + param_4,7,
                         0xffffffff);
          } while (iVar3 < 5);
        }
      }
      FUN_00406bd0(48000,uVar9,iVar2,uVar10);
      FUN_004c1dd0(uVar1,*local_1c,uVar9,param_4,uVar10,0xffffffff);
      param_4 = param_4 + iVar2;
      if (param_5 == 0) {
        param_4 = param_4 + iVar2;
      }
      local_1c = local_1c + 1;
      local_20 = local_20 + 1;
    } while (local_20 < param_2);
  }
  FUN_00406bd0(0xffff);
  if (_DAT_01d7f1b8 == 0) {
    iVar2 = FUN_004c3ea0(_DAT_0152d248,"Blair Witch Volume I: Rustin Parr  2000 Terminal Reality Inc.  Patent Pending.");
    iVar3 = FUN_004c3f50(_DAT_0152d248,"Blair Witch Volume I: Rustin Parr  2000 Terminal Reality Inc.  Patent Pending.");
    pcVar8 = "Blair Witch Volume I: Rustin Parr  2000 Terminal Reality Inc.  Patent Pending.";
  }
  else {
    iVar2 = FUN_004c3ea0(_DAT_0152d248,"Blair Witch Volume I: Rustin Parr (c) 2000 Terminal Reality Inc.  Patent Pending.");
    iVar3 = FUN_004c3f50(_DAT_0152d248,"Blair Witch Volume I: Rustin Parr (c) 2000 Terminal Reality Inc.  Patent Pending.");
    pcVar8 = "Blair Witch Volume I: Rustin Parr (c) 2000 Terminal Reality Inc.  Patent Pending.";
  }
  FUN_004c1dd0(_DAT_0152d248,pcVar8,0x26b - iVar2,0x1df - iVar3,0xf8,0);
  FUN_00406bd0(0x8000);
  FUN_004c1dd0(_DAT_0152d248,&DAT_005e7aac,0x206,399,0xf8,0);
  FUN_00406bd0(0xffff);
  pcVar8 = (char *)param_1[*param_3];
  do {
    pcVar7 = pcVar8;
    if (*pcVar8 == ':') goto LAB_0050a05a;
    if (*pcVar8 == '\0') break;
    pcVar7 = pcVar8 + 1;
    if (*pcVar7 == ':') goto LAB_0050a05a;
    pcVar8 = pcVar8 + 2;
  } while (*pcVar7 != '\0');
  pcVar7 = (char *)0x0;
LAB_0050a05a:
  _DAT_01d1ee9c = 0;
  iVar2 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,0x48);
  if (iVar2 != 0) {
    _DAT_01d1ee9c = 1;
    iVar2 = *param_3;
    *param_3 = iVar2 + -1;
    if (iVar2 + -1 < 0) {
      *param_3 = param_2 + -1;
    }
  }
  iVar2 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,0x50);
  if (iVar2 != 0) {
    iVar2 = *param_3;
    _DAT_01d1ee9c = 1;
    *param_3 = iVar2 + 1;
    if (param_2 <= iVar2 + 1) {
      *param_3 = 0;
    }
  }
  if (pcVar7 != (char *)0x0) {
    _DAT_01d1ee8c = 0;
    iVar2 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,0x4b);
    if (iVar2 != 0) {
      _DAT_01d1ee8c = 1;
      return *param_3;
    }
    iVar2 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,0x4d);
    if (iVar2 != 0) goto LAB_0050a120;
  }
  iVar2 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,0x1c);
  if (iVar2 == 0) {
    return -1;
  }
LAB_0050a120:
  return *param_3;
}
