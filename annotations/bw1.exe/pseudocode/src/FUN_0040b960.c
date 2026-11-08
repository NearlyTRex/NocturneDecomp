// Name: FUN_0040b960
// Address: 0040b960
// Address Range: [[0040b960, 0040bbee]]
// Convention: unknown
// Signature: void FUN_0040b960(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_0040b960(int param_1,uint param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_14;
  
  if (DAT_007c3038 != 1) {
    FUN_005c03c0(DAT_007c3034,"%s{ // %s\n",&DAT_006106c0,param_2);
    FUN_0040ad60(1);
    FUN_005c03c0(DAT_007c3034,"%s%d\n",&DAT_006106c0,0x3c);
    FUN_005c03c0(DAT_007c3034,&DAT_005d2b98,&DAT_006106c0);
    iVar2 = param_1;
    do {
      puVar1 = (uint *)(iVar2 + 0x2140);
      iVar2 = iVar2 + 4;
      FUN_005c03c0(DAT_007c3034,&DAT_005d2b9b,*puVar1);
    } while (iVar2 != param_1 + 0xf0);
    FUN_005c03c0(DAT_007c3034,&DAT_005d2b9f);
    iVar2 = 0;
    FUN_005c03c0(DAT_007c3034,&DAT_005d2ba1,&DAT_006106c0);
    do {
      puVar1 = (uint *)(param_1 + 0x2230);
      param_1 = param_1 + 4;
      iVar2 = iVar2 + 1;
      FUN_005c03c0(DAT_007c3034,&DAT_005d2ba4,*puVar1);
    } while (iVar2 < 0x3c);
    FUN_005c03c0(DAT_007c3034,&DAT_005d2ba8);
    FUN_0040ad60(0xffffffff);
    FUN_005c03c0(DAT_007c3034,&DAT_005d2baa,&DAT_006106c0);
    return;
  }
  do {
    iVar2 = FUN_005c0530(DAT_007c3034);
    if (iVar2 < 0) {
      FUN_0040b090("part status opening brace",param_2);
    }
  } while (iVar2 != 10);
  FUN_005c04b0(DAT_007c3034,&DAT_005d2b1e,&local_14);
  FUN_00569ae0(param_1);
  iVar2 = 0;
  if (0 < local_14) {
    iVar4 = param_1 + 0x2140;
    do {
      iVar3 = FUN_005c04b0(DAT_007c3034,&DAT_005d2b21,iVar4);
      if (iVar3 != 1) {
        FUN_0040b090("part status entry","description");
      }
      iVar2 = iVar2 + 1;
      iVar4 = iVar4 + 4;
    } while (iVar2 < local_14);
  }
  FUN_005c04b0(DAT_007c3034,&DAT_005d2b42);
  FUN_00569b00(param_1);
  iVar2 = 0;
  if (0 < local_14) {
    param_1 = param_1 + 0x2230;
    do {
      iVar4 = FUN_005c04b0(DAT_007c3034,&DAT_005d2b44,param_1);
      if (iVar4 != 1) {
        FUN_0040b090("part texture entry","description");
      }
      iVar2 = iVar2 + 1;
      param_1 = param_1 + 4;
    } while (iVar2 < local_14);
  }
  FUN_005c04b0(DAT_007c3034,&DAT_005d2b66);
  do {
    while (iVar2 = FUN_005c0530(DAT_007c3034), -1 < iVar2) {
      if (iVar2 == 10) {
        return;
      }
    }
    FUN_0040b090("part status info closing brace",param_2);
  } while (iVar2 != 10);
  return;
}
