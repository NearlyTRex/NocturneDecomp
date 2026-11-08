// Name: FUN_00523e50
// Address: 00523e50
// Address Range: [[00523e50, 00524167]]
// Convention: unknown
// Signature: void FUN_00523e50(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00523e50(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  uint uVar5;
  
  if (*(int *)(param_1 + 0x27b0) != 0) {
    return;
  }
  if (*(int *)(0x01D2130C + 500) != 0) {
    *(uint *)(param_2 + 4) = 0;
  }
  if (*(int *)(0x01D2130C + 0x250) == 0) {
    *(uint *)(param_2 + 4) = 0;
  }
  FUN_004d3af0(param_1);
  if ((((0.0 < *(float *)(param_1 + 0xcdcc)) && (iVar2 = *(int *)(param_2 + 0x30), 0xb < iVar2)) &&
      (iVar2 != 0x66)) && ((iVar2 != 0x6f && (iVar2 != 0x69)))) {
    *(uint *)(param_2 + 4) = 0;
    return;
  }
  *(uint *)(param_1 + 0xcdcc) = _DAT_005e34f8;
  iVar2 = FUN_0040c790(*(uint *)(param_2 + 0x38),"CBugs");
  if (iVar2 != 0) {
    *(uint *)(param_1 + 0xcdcc) = 0x3e19999a;
  }
  fVar4 = *(float *)(param_1 + 0x2538) - *(float *)(param_2 + 4);
  iVar2 = param_1 + 0x158;
  *(float *)(param_1 + 0x2538) = fVar4;
  if (0.0 < fVar4) {
    if (0.0 < *(float *)(param_2 + 4)) {
      iVar3 = *(int *)(param_2 + 0x30);
      if ((((iVar3 != 0x69) && (iVar3 != 0x6f)) &&
          ((iVar3 != 0x66 &&
           (((*(int *)(param_1 + 0x20ba4) == 0 && (*(int *)(param_1 + 0x20c20) == 0)) &&
            (*(int *)(param_1 + 0x20b64) == 0)))))) &&
         ((iVar3 = FUN_0040c840(*(uint *)(param_2 + 0x34),_DAT_02cfd794), iVar3 == 0 ||
          (iVar3 = FUN_0040cf40(0x3eaa7efa), iVar3 != 0)))) {
        FUN_004fc0d0(iVar2,0x31,1);
      }
      iVar2 = FUN_00556700(*(uint *)(param_1 + 0x20cf4));
      if (iVar2 == 0) {
        uVar5 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"prye-pain?.wav");
        *(uint *)(param_1 + 0x20cf4) = uVar5;
      }
    }
  }
  else {
    *(uint *)(param_1 + 0x2538) = 0;
    (**(code **)(*(int *)(param_1 + 0x154) + 0xf0))(param_1);
    iVar3 = FUN_004fc070(iVar2);
    if ((*(int *)(iVar3 + 0x24) != 0x36) &&
       (iVar2 = FUN_004fc070(iVar2), *(int *)(iVar2 + 0x24) != 0x35)) {
      if ((*(int *)(param_1 + 0x20ba4) == 0) && (*(int *)(param_1 + 0x20c20) == 0)) {
        if (*(int *)(param_2 + 0x30) == 1) {
          cVar1 = '4';
          uVar5 = 1;
        }
        else {
          uVar5 = 1;
          fVar4 = (float)FUN_0040ce40(0,0x42c80000,1);
          cVar1 = (fVar4 <= _DAT_005cd757) + '2';
        }
      }
      else {
        uVar5 = 1;
        cVar1 = '\x1a';
        *(uint *)(param_1 + 0x20ba4) = 0;
        *(uint *)(param_1 + 0x20c20) = 0;
      }
      FUN_004fc0d0(param_1 + 0x158,cVar1,uVar5);
      FUN_00556be0(*(uint *)(param_1 + 0x20cf4));
      if (*(int *)(param_2 + 0x30) != 1) {
        uVar5 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"prye-death?.wav");
        *(uint *)(param_1 + 0x20cf4) = uVar5;
      }
      FUN_004cee30(0x01D22E44,param_1,0x32,0x42480000,0);
    }
    if (*(int *)(param_1 + 0x20c24) == *(int *)(param_1 + 0x25b0)) {
      *(uint *)(param_1 + 0x20c24) = 0;
    }
    (**(code **)(*(int *)(param_1 + 0x154) + 0x128))(param_1,0,0);
    if (*(int *)(param_1 + 0x2628) == *(int *)(param_1 + 0x20c24)) {
      *(uint *)(param_1 + 0x20c24) = 0;
    }
    (**(code **)(*(int *)(param_1 + 0x154) + 0x128))(param_1,1,0);
  }
  if (0.0 < *(float *)(param_2 + 4)) {
    FUN_004bd910(0x01D2130C);
  }
  FUN_00430d60(param_1,param_2);
  return;
}
