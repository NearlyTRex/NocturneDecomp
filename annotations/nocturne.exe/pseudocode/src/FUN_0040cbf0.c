// Name: FUN_0040cbf0
// Address: 0040cbf0
// Address Range: [[0040cbf0, 0040ce7e]]
// Convention: unknown
// Signature: void FUN_0040cbf0(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_0040cbf0(int param_1,uint param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_14;
  
  if (DAT_00763e88 != 1) {
    FUN_005644f0(DAT_00763e84,"%s{ // %s\n",&DAT_005acc90,param_2);
    FUN_0040bff0(1);
    FUN_005644f0(DAT_00763e84,"%s%d\n",&DAT_005acc90,0x1e);
    FUN_005644f0(DAT_00763e84,&DAT_00577d70,&DAT_005acc90);
    iVar2 = param_1;
    do {
      puVar1 = (uint *)(iVar2 + 0x2140);
      iVar2 = iVar2 + 4;
      FUN_005644f0(DAT_00763e84,&DAT_00577d73,*puVar1);
    } while (iVar2 != param_1 + 0x78);
    FUN_005644f0(DAT_00763e84,&DAT_00577d77);
    iVar2 = 0;
    FUN_005644f0(DAT_00763e84,&DAT_00577d79,&DAT_005acc90);
    do {
      puVar1 = (uint *)(param_1 + 0x21b8);
      param_1 = param_1 + 4;
      iVar2 = iVar2 + 1;
      FUN_005644f0(DAT_00763e84,&DAT_00577d7c,*puVar1);
    } while (iVar2 < 0x1e);
    FUN_005644f0(DAT_00763e84,&DAT_00577d80);
    FUN_0040bff0(0xffffffff);
    FUN_005644f0(DAT_00763e84,&DAT_00577d82,&DAT_005acc90);
    return;
  }
  do {
    iVar2 = FUN_00564570(DAT_00763e84);
    if (iVar2 < 0) {
      FUN_0040c320("part status opening brace",param_2);
    }
  } while (iVar2 != 10);
  FUN_00563350(DAT_00763e84,&DAT_00577cf6,&local_14);
  FUN_0051dc90(param_1);
  iVar2 = 0;
  if (0 < local_14) {
    iVar4 = param_1 + 0x2140;
    do {
      iVar3 = FUN_00563350(DAT_00763e84,&DAT_00577cf9,iVar4);
      if (iVar3 != 1) {
        FUN_0040c320("part status entry","description");
      }
      iVar2 = iVar2 + 1;
      iVar4 = iVar4 + 4;
    } while (iVar2 < local_14);
  }
  FUN_00563350(DAT_00763e84,&DAT_00577d1a);
  FUN_0051dcb0(param_1);
  iVar2 = 0;
  if (0 < local_14) {
    param_1 = param_1 + 0x21b8;
    do {
      iVar4 = FUN_00563350(DAT_00763e84,&DAT_00577d1c,param_1);
      if (iVar4 != 1) {
        FUN_0040c320("part texture entry","description");
      }
      iVar2 = iVar2 + 1;
      param_1 = param_1 + 4;
    } while (iVar2 < local_14);
  }
  FUN_00563350(DAT_00763e84,&DAT_00577d3e);
  do {
    while (iVar2 = FUN_00564570(DAT_00763e84), -1 < iVar2) {
      if (iVar2 == 10) {
        return;
      }
    }
    FUN_0040c320("part status info closing brace",param_2);
  } while (iVar2 != 10);
  return;
}
