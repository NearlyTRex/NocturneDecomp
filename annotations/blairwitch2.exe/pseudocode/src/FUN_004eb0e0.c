// Name: FUN_004eb0e0
// Address: 004eb0e0
// Address Range: [[004eb0e0, 004eb3c7]]
// Convention: unknown
// Signature: int FUN_004eb0e0(undefined4 *param_1,int param_2,int *param_3,int param_4,int param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004eb0e0(uint *param_1,int param_2,int *param_3,int param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  uint local_14;
  
  uVar1 = _DAT_01511cc0;
  if (param_5 != 0) {
    iVar5 = FUN_004aaf00(_DAT_01511cc0,param_5);
    iVar5 = (0x280 - iVar5) / 2;
    FUN_004a8df0(uVar1,param_5,iVar5 + 1,param_4 + 1,2,0);
    FUN_004a8df0(uVar1,param_5,iVar5,param_4,0xfa,0);
    iVar5 = FUN_004ab560(uVar1,0x58);
    param_4 = param_4 + iVar5;
  }
  iVar5 = 0;
  puVar4 = param_1;
  if (0 < param_2) {
    do {
      iVar2 = FUN_004aaf00(uVar1,*puVar4);
      iVar3 = FUN_004ab560(uVar1,0x58,iVar2);
      iVar2 = (0x280 - iVar2) / 2;
      FUN_004a8df0(uVar1,*puVar4,iVar2,param_4 + 1,4,0xffffffff);
      local_14 = 0xfc;
      if (iVar5 == *param_3) {
        local_14 = 0xff;
      }
      FUN_00406da0(0xffff);
      FUN_004a8df0(uVar1,*puVar4,iVar2,param_4,local_14,0xffffffff);
      param_4 = param_4 + iVar3;
      if (param_5 == 0) {
        param_4 = param_4 + iVar3;
      }
      iVar5 = iVar5 + 1;
      puVar4 = puVar4 + 1;
    } while (iVar5 < param_2);
  }
  FUN_00406da0(0xffff);
  iVar5 = FUN_004aaf00(_DAT_01511cc4,&DAT_005dcacd);
  FUN_004aafb0(_DAT_01511cc4,&DAT_005dcacd);
  FUN_004a8df0(_DAT_01511cc4,&DAT_005dcacd,0x280 - iVar5,0,0xfa,0);
  FUN_00406da0(0x8000);
  FUN_00406da0(0xffff);
  pcVar7 = (char *)param_1[*param_3];
  do {
    pcVar6 = pcVar7;
    if (*pcVar7 == ':') goto LAB_004eb260;
    if (*pcVar7 == '\0') break;
    pcVar6 = pcVar7 + 1;
    if (*pcVar6 == ':') goto LAB_004eb260;
    pcVar7 = pcVar7 + 2;
  } while (*pcVar6 != '\0');
  pcVar6 = (char *)0x0;
LAB_004eb260:
  _DAT_01d06138 = 0;
  iVar5 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,0x48);
  if (iVar5 != 0) {
    iVar5 = *param_3;
    _DAT_01d06138 = 1;
    *param_3 = iVar5 + -1;
    if (iVar5 + -1 < 0) {
      *param_3 = param_2 + -1;
    }
  }
  iVar5 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,0x50);
  if (iVar5 != 0) {
    iVar5 = *param_3;
    _DAT_01d06138 = 1;
    *param_3 = iVar5 + 1;
    if (param_2 <= iVar5 + 1) {
      *param_3 = 0;
    }
  }
  if (pcVar6 != (char *)0x0) {
    _DAT_01d0612c = 0;
    iVar5 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,0x4b);
    if (iVar5 != 0) {
      _DAT_01d0612c = 1;
      return *param_3;
    }
    iVar5 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,0x4d);
    if (iVar5 != 0) goto LAB_004eb328;
  }
  iVar5 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,0x1c);
  if (iVar5 == 0) {
    return -1;
  }
LAB_004eb328:
  return *param_3;
}
