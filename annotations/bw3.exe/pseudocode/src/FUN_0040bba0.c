// Name: FUN_0040bba0
// Address: 0040bba0
// Address Range: [[0040bba0, 0040be2e]]
// Convention: unknown
// Signature: void FUN_0040bba0(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_0040bba0(int param_1,uint param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_14;
  
  if (DAT_007df9b8 != 1) {
    FUN_005a3140(DAT_007df9b4,"%s{ // %s\n",&DAT_005f0990,param_2);
    FUN_0040afa0(1);
    FUN_005a3140(DAT_007df9b4,"%s%d\n",&DAT_005f0990,0x3c);
    FUN_005a3140(DAT_007df9b4,&DAT_005b5be4,&DAT_005f0990);
    iVar2 = param_1;
    do {
      puVar1 = (uint *)(iVar2 + 0x2140);
      iVar2 = iVar2 + 4;
      FUN_005a3140(DAT_007df9b4,&DAT_005b5be7,*puVar1);
    } while (iVar2 != param_1 + 0xf0);
    FUN_005a3140(DAT_007df9b4,&DAT_005b5beb);
    iVar2 = 0;
    FUN_005a3140(DAT_007df9b4,&DAT_005b5bed,&DAT_005f0990);
    do {
      puVar1 = (uint *)(param_1 + 0x2230);
      param_1 = param_1 + 4;
      iVar2 = iVar2 + 1;
      FUN_005a3140(DAT_007df9b4,&DAT_005b5bf0,*puVar1);
    } while (iVar2 < 0x3c);
    FUN_005a3140(DAT_007df9b4,&DAT_005b5bf4);
    FUN_0040afa0(0xffffffff);
    FUN_005a3140(DAT_007df9b4,&DAT_005b5bf6,&DAT_005f0990);
    return;
  }
  do {
    iVar2 = FUN_005a32b0(DAT_007df9b4);
    if (iVar2 < 0) {
      FUN_0040b2d0("part status opening brace",param_2);
    }
  } while (iVar2 != 10);
  FUN_005a3230(DAT_007df9b4,&DAT_005b5b6a,&local_14);
  FUN_0054e670(param_1);
  iVar2 = 0;
  if (0 < local_14) {
    iVar4 = param_1 + 0x2140;
    do {
      iVar3 = FUN_005a3230(DAT_007df9b4,&DAT_005b5b6d,iVar4);
      if (iVar3 != 1) {
        FUN_0040b2d0("part status entry","description");
      }
      iVar2 = iVar2 + 1;
      iVar4 = iVar4 + 4;
    } while (iVar2 < local_14);
  }
  FUN_005a3230(DAT_007df9b4,&DAT_005b5b8e);
  FUN_0054e690(param_1);
  iVar2 = 0;
  if (0 < local_14) {
    param_1 = param_1 + 0x2230;
    do {
      iVar4 = FUN_005a3230(DAT_007df9b4,&DAT_005b5b90,param_1);
      if (iVar4 != 1) {
        FUN_0040b2d0("part texture entry","description");
      }
      iVar2 = iVar2 + 1;
      param_1 = param_1 + 4;
    } while (iVar2 < local_14);
  }
  FUN_005a3230(DAT_007df9b4,&DAT_005b5bb2);
  do {
    while (iVar2 = FUN_005a32b0(DAT_007df9b4), -1 < iVar2) {
      if (iVar2 == 10) {
        return;
      }
    }
    FUN_0040b2d0("part status info closing brace",param_2);
  } while (iVar2 != 10);
  return;
}
