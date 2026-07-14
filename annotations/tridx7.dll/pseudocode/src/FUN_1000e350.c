// Name: FUN_1000e350
// Address: 1000e350
// Address Range: [[1000e350, 1000e64e]]
// Convention: unknown
// Signature: undefined4 FUN_1000e350(char *param_1,undefined4 *param_2,int param_3)

#include "nocturne.h"

uint FUN_1000e350(char *param_1,uint *param_2,int param_3)

{
  LCID LVar1;
  BOOL BVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  bool bVar6;
  byte bVar7;
  ushort local_8c;
  ushort uStack_8a;
  ushort local_88;
  int local_84;
  uint local_80 [32];
  
  bVar7 = 0;
  local_84 = 0;
  if ((param_2 == (uint *)0x0) && (param_3 == 0)) {
    return 0;
  }
  local_8c = 0;
  uStack_8a = 0;
  local_88 = 0;
  if (((param_1 != (char *)0x0) && (*param_1 != '\0')) &&
     (local_8c = FUN_1000e650(param_1), local_8c == 0)) {
    return 0;
  }
  if (((param_1 != (char *)0xffffffc0) && (param_1[0x40] != '\0')) &&
     (uStack_8a = FUN_1000e6b0(param_1 + 0x40), uStack_8a == 0)) {
    return 0;
  }
  if (param_1 != (char *)0xffffff80) {
    param_1 = param_1 + 0x80;
    bVar6 = *param_1 == '\0';
    if (!bVar6) {
      iVar3 = 4;
      pcVar4 = param_1;
      pcVar5 = "ACP";
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar6 = *pcVar4 == *pcVar5;
        pcVar4 = pcVar4 + (uint)bVar7 * -2 + 1;
        pcVar5 = pcVar5 + (uint)bVar7 * -2 + 1;
      } while (bVar6);
      if (!bVar6) {
        iVar3 = 4;
        pcVar4 = param_1;
        pcVar5 = "OCP";
        do {
          if (iVar3 == 0) break;
          iVar3 = iVar3 + -1;
          bVar6 = *pcVar4 == *pcVar5;
          pcVar4 = pcVar4 + (uint)bVar7 * -2 + 1;
          pcVar5 = pcVar5 + (uint)bVar7 * -2 + 1;
        } while (bVar6);
        if (bVar6) {
          local_84 = 1;
        }
        else {
          local_88 = FUN_1000ff10(param_1);
          if (local_88 == 0) {
            return 0;
          }
        }
      }
    }
  }
  if (local_8c == 0) {
    if (uStack_8a == 0) {
      LVar1 = GetUserDefaultLCID();
      local_8c = (ushort)LVar1;
      uStack_8a = local_8c;
      if (local_88 == 0) {
        local_80[0] = GetUserDefaultLCID();
      }
    }
    else {
      local_8c = FUN_1000e710(CONCAT22(local_88,uStack_8a));
      uStack_8a = local_8c;
      if (local_88 == 0) {
        local_80[0] = (uint)local_8c;
      }
    }
  }
  else if (uStack_8a == 0) {
    uStack_8a = local_8c;
    if (local_88 == 0) {
      local_80[0] = (uint)local_8c;
    }
  }
  else {
    iVar3 = FUN_1000e780(&uStack_8a,&local_8c);
    if (iVar3 == 0) {
      return 0;
    }
    if (local_88 == 0) {
      local_80[0] = (uint)uStack_8a;
    }
  }
  if (local_88 == 0) {
    iVar3 = FUN_1000f9a0(local_80[0],(-(uint)(local_84 == 0) & 0xff9) + 0xb,local_80,0x40,0);
    if (iVar3 == 0) {
      return 0;
    }
    local_88 = FUN_1000fc10(local_80,0,10);
  }
  BVar2 = IsValidCodePage((uint)local_88);
  if (BVar2 == 0) {
    return 0;
  }
  BVar2 = IsValidLocale((uint)local_8c,1);
  if (BVar2 == 0) {
    return 0;
  }
  if (param_2 != (uint *)0x0) {
    *param_2 = CONCAT22(uStack_8a,local_8c);
    *(ushort *)(param_2 + 1) = local_88;
  }
  if (param_3 != 0) {
    iVar3 = FUN_1000fad0(local_8c,0x1001,param_3,0x40,0);
    if (iVar3 == 0) {
      return 0;
    }
    iVar3 = FUN_1000fad0(uStack_8a,0x1002,param_3 + 0x40,0x40,0);
    if (iVar3 == 0) {
      return 0;
    }
    FUN_1000f8b0(local_88,param_3 + 0x80,10);
  }
  return 1;
}
