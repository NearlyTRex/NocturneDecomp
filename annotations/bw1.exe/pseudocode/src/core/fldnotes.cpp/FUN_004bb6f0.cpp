// Name: FUN_004bb6f0
// Address: 004bb6f0
// Address Range: [[004bb6f0, 004bbac1]]
// Convention: unknown
// Signature: undefined4 FUN_004bb6f0(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004bb6f0(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  byte local_220 [256];
  byte local_120 [256];
  int local_20;
  uint local_1c;
  int local_18;
  int local_14;
  
  iVar1 = FUN_005c04e0(param_2,&DAT_005dfa0c);
  if (iVar1 == 0) {
    if ((*(int *)(param_1 + 0x1c) != *(int *)(param_1 + 0x14)) ||
       (*(int *)(param_1 + 0x20) != *(int *)(param_1 + 0x18))) {
      FUN_004bb630(param_1);
    }
    uVar2 = 1;
  }
  else {
    iVar1 = FUN_005c04e0(param_2,&DAT_005dfa0f);
    if (iVar1 == 0) {
      FUN_004bb6c0(param_1);
      return 1;
    }
    iVar1 = FUN_005c04e0(param_2,&DAT_005dfa12);
    if (iVar1 == 0) {
      *(uint *)(param_1 + 0x34) = 1;
      return 1;
    }
    iVar1 = FUN_005c04e0(param_2,&DAT_005dfa15);
    if (iVar1 == 0) {
      *(uint *)(param_1 + 0x34) = 0;
      return 1;
    }
    iVar1 = FUN_005c1210(param_2,"image",5);
    if (iVar1 != 0) {
      iVar1 = FUN_005c1210(param_2,"twanachar",9);
      if (iVar1 == 0) {
        local_14 = -1;
        FUN_005c2cac(param_2 + 9," %s%n",local_220,&local_14);
        if (local_14 < 3) {
          FUN_005bfb40(&DAT_01cc4270,"Error parsing 'twanachar' parms: '%s'",param_2);
          return 0xffffffff;
        }
        iVar1 = FUN_005c0f32(0x4c);
        puVar3 = (uint *)0x0;
        if (iVar1 != 0) {
          puVar3 = (uint *)FUN_004bab60(iVar1,local_220);
        }
        if (puVar3 == (uint *)0x0) {
          _DAT_01d1d400 = "..\\core\\fldnotes.cpp";
          _DAT_01d1d404 = 0x620;
          FUN_005030e0("Out of memory");
        }
        iVar1 = FUN_004bbad0(param_1,puVar3[2],puVar3[3]);
        if (iVar1 != 0) {
          *puVar3 = *(uint *)(param_1 + 0x14);
          puVar3[1] = *(uint *)(param_1 + 0x18);
          *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + puVar3[2];
          FUN_004bb5f0(param_1,puVar3);
          return 1;
        }
      }
      else {
        iVar1 = FUN_005c04e0(param_2,"twanaentry");
        if (iVar1 != 0) {
          FUN_005bfb40(&DAT_01cc4270,"Ignoring unknown markup tag: %s",param_2);
          return 0xffffffff;
        }
        iVar1 = FUN_005c0f32(0x118);
        puVar3 = (uint *)0x0;
        if (iVar1 != 0) {
          puVar3 = (uint *)FUN_004bac90(iVar1);
        }
        if (puVar3 == (uint *)0x0) {
          _DAT_01d1d400 = "..\\core\\fldnotes.cpp";
          _DAT_01d1d404 = 0x638;
          FUN_005030e0("Out of memory");
        }
        iVar1 = FUN_004bbad0(param_1,puVar3[2],puVar3[3]);
        if (iVar1 != 0) {
          *puVar3 = *(uint *)(param_1 + 0x14);
          puVar3[1] = *(uint *)(param_1 + 0x18);
          *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + puVar3[2];
          FUN_004bb5f0(param_1,puVar3);
          return 1;
        }
      }
      (**(code **)puVar3[5])(puVar3,2);
      return 0;
    }
    local_18 = -1;
    FUN_005c2cac(param_2 + 5,"%s %d %d%n",local_120,&local_20,&local_1c,&local_18);
    if (local_18 < 3) {
      FUN_005bfb40(&DAT_01cc4270,"Error parsing 'image' tag parms: '%s'",param_2);
      return 0xffffffff;
    }
    iVar1 = FUN_004bbad0(param_1,local_20,local_1c);
    uVar2 = 0;
    if (iVar1 != 0) {
      iVar1 = FUN_005c0f32(0x2c);
      puVar3 = (uint *)0x0;
      if (iVar1 != 0) {
        puVar3 = (uint *)FUN_004baa40(iVar1,local_120,local_20,local_1c);
      }
      if (puVar3 == (uint *)0x0) {
        _DAT_01d1d400 = "..\\core\\fldnotes.cpp";
        _DAT_01d1d404 = 0x60a;
        FUN_005030e0("Out of memory");
      }
      *puVar3 = *(uint *)(param_1 + 0x14);
      puVar3[1] = *(uint *)(param_1 + 0x18);
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + local_20;
      FUN_004bb5f0(param_1,puVar3);
      return 1;
    }
  }
  return uVar2;
}
