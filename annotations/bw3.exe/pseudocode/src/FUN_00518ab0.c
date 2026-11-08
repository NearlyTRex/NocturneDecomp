// Name: FUN_00518ab0
// Address: 00518ab0
// Address Range: [[00518ab0, 00518ccd]]
// Convention: unknown
// Signature: void FUN_00518ab0(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00518ab0(int param_1,float param_2)

{
  bool bVar1;
  int iVar2;
  byte auStack_4c [4];
  float fStack_48;
  uint uStack_1c;
  float fStack_10;
  uint uStack_c;
  
  iVar2 = FUN_0042cd70(param_1,param_2);
  if (iVar2 == 0) {
    if (0.0 < *(float *)(param_1 + 0x3254)) {
      FUN_00526dc0(param_1,param_2);
      return;
    }
  }
  else {
    if ((*(int *)(param_1 + 0x20c24) == 0) || (*(int *)(*(int *)(param_1 + 0x20c24) + 0x57c) == 0))
    {
      *(uint *)(param_1 + 0x20b90) = 0;
      *(uint *)(param_1 + 0x20b8c) = 0;
    }
    if (*(int *)(param_1 + 0x20b8c) != 0) {
      *(float *)(param_1 + 0x20b90) = param_2 * _DAT_005cd00b + *(float *)(param_1 + 0x20b90);
    }
    if ((0.0 < *(float *)(param_1 + 0x3254)) && (*(int *)(param_1 + 0x3258) == 3)) {
      FUN_0042abb0(auStack_4c);
      fStack_48 = param_2 * (float)_DAT_005cd00f;
      uStack_1c = 0x69;
      (**(code **)(*(int *)(param_1 + 0x154) + 0x108))(param_1,auStack_4c);
    }
    iVar2 = *(int *)(0x01D2130C + 0x264);
    if (*(int *)(param_1 + 0x20cf8) == 1) {
      *(float *)(param_1 + 0x20cfc) = *(float *)(param_1 + 0x20cfc) - _DAT_005e3504;
      FUN_004fc0d0(param_1 + 0x158,0x7a,1);
      if ((float)_DAT_005cd017 <= *(float *)(param_1 + 0x20cfc)) {
        *(float *)(param_1 + 0x34) = _DAT_005e3504 + *(float *)(param_1 + 0x34);
        FUN_00433220(param_1,param_1 + 0x30);
      }
      else {
        *(uint *)(param_1 + 0x20cf8) = 0;
      }
    }
    FUN_00432330(param_1,param_2,iVar2 != 0);
    uStack_c = *(uint *)(0x01D2130C + 0x314);
    iVar2 = FUN_004fc070(param_1 + 0x158);
    bVar1 = false;
    switch(*(uint *)(iVar2 + 0x24)) {
    case 0x1a:
    case 0x1b:
    case 0x1c:
    case 0x1d:
    case 0x1e:
    case 0x1f:
    case 0x20:
    case 0x21:
    case 0x22:
    case 0x24:
    case 0x26:
      bVar1 = true;
    }
    if ((*(int *)(param_1 + 0x20b64) == 7) || (bVar1)) {
      fStack_10 = param_2 * (float)_DAT_005cd01f;
      FUN_00518cd0(param_1,fStack_10);
      FUN_00518cd0(param_1,fStack_10);
      FUN_00518cd0(param_1,fStack_10);
      param_2 = fStack_10;
    }
    FUN_00518cd0(param_1,param_2);
    FUN_004bf3a0(0x01D2130C,uStack_c);
  }
  return;
}
