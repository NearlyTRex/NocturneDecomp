// Name: FUN_004a2cc0
// Address: 004a2cc0
// Address Range: [[004a2cc0, 004a3091]]
// Convention: unknown
// Signature: undefined4 FUN_004a2cc0(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004a2cc0(int param_1,int param_2)

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
  
  iVar1 = FUN_005b8130(param_2,&DAT_005d5b91);
  if (iVar1 == 0) {
    if ((*(int *)(param_1 + 0x1c) != *(int *)(param_1 + 0x14)) ||
       (*(int *)(param_1 + 0x20) != *(int *)(param_1 + 0x18))) {
      FUN_004a2bf0(param_1);
    }
    uVar2 = 1;
  }
  else {
    iVar1 = FUN_005b8130(param_2,&DAT_005d5b94);
    if (iVar1 == 0) {
      FUN_004a2c90(param_1);
      return 1;
    }
    iVar1 = FUN_005b8130(param_2,&DAT_005d5b97);
    if (iVar1 == 0) {
      *(uint *)(param_1 + 0x34) = 1;
      return 1;
    }
    iVar1 = FUN_005b8130(param_2,&DAT_005d5b9a);
    if (iVar1 == 0) {
      *(uint *)(param_1 + 0x34) = 0;
      return 1;
    }
    iVar1 = FUN_005b8da0(param_2,"image",5);
    if (iVar1 != 0) {
      iVar1 = FUN_005b8da0(param_2,"twanachar",9);
      if (iVar1 == 0) {
        local_14 = -1;
        FUN_005ba8cc(param_2 + 9," %s%n",local_220,&local_14);
        if (local_14 < 3) {
          FUN_005b7790(&DAT_01cab7f0,"Error parsing 'twanachar' parms: '%s'",param_2);
          return 0xffffffff;
        }
        iVar1 = FUN_005b8be2(0x4c);
        puVar3 = (uint *)0x0;
        if (iVar1 != 0) {
          puVar3 = (uint *)FUN_004a2290(iVar1,local_220);
        }
        if (puVar3 == (uint *)0x0) {
          _DAT_01d046a0 = "..\\core\\fldnotes.cpp";
          _DAT_01d046a4 = 0x5c7;
          FUN_004e4500("Out of memory");
        }
        iVar1 = FUN_004a30a0(param_1,puVar3[2],puVar3[3]);
        if (iVar1 != 0) {
          *puVar3 = *(uint *)(param_1 + 0x14);
          puVar3[1] = *(uint *)(param_1 + 0x18);
          *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + puVar3[2];
          FUN_004a2bb0(param_1,puVar3);
          return 1;
        }
      }
      else {
        iVar1 = FUN_005b8130(param_2,"twanaentry");
        if (iVar1 != 0) {
          FUN_005b7790(&DAT_01cab7f0,"Ignoring unknown markup tag: %s",param_2);
          return 0xffffffff;
        }
        iVar1 = FUN_005b8be2(0x114);
        puVar3 = (uint *)0x0;
        if (iVar1 != 0) {
          puVar3 = (uint *)FUN_004a23c0(iVar1);
        }
        if (puVar3 == (uint *)0x0) {
          _DAT_01d046a0 = "..\\core\\fldnotes.cpp";
          _DAT_01d046a4 = 0x5df;
          FUN_004e4500("Out of memory");
        }
        iVar1 = FUN_004a30a0(param_1,puVar3[2],puVar3[3]);
        if (iVar1 != 0) {
          *puVar3 = *(uint *)(param_1 + 0x14);
          puVar3[1] = *(uint *)(param_1 + 0x18);
          *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + puVar3[2];
          FUN_004a2bb0(param_1,puVar3);
          return 1;
        }
      }
      (**(code **)puVar3[5])(puVar3,2);
      return 0;
    }
    local_18 = -1;
    FUN_005ba8cc(param_2 + 5,"%s %d %d%n",local_120,&local_20,&local_1c,&local_18);
    if (local_18 < 3) {
      FUN_005b7790(&DAT_01cab7f0,"Error parsing 'image' tag parms: '%s'",param_2);
      return 0xffffffff;
    }
    iVar1 = FUN_004a30a0(param_1,local_20,local_1c);
    uVar2 = 0;
    if (iVar1 != 0) {
      iVar1 = FUN_005b8be2(0x2c);
      puVar3 = (uint *)0x0;
      if (iVar1 != 0) {
        puVar3 = (uint *)FUN_004a2170(iVar1,local_120,local_20,local_1c);
      }
      if (puVar3 == (uint *)0x0) {
        _DAT_01d046a0 = "..\\core\\fldnotes.cpp";
        _DAT_01d046a4 = 0x5b1;
        FUN_004e4500("Out of memory");
      }
      *puVar3 = *(uint *)(param_1 + 0x14);
      puVar3[1] = *(uint *)(param_1 + 0x18);
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + local_20;
      FUN_004a2bb0(param_1,puVar3);
      return 1;
    }
  }
  return uVar2;
}
