// Name: FUN_0041f7c0
// Address: 0041f7c0
// Address Range: [[0041f7c0, 0041f8d8]]
// Convention: unknown
// Signature: void FUN_0041f7c0(int param_1)

#include "nocturne.h"

void FUN_0041f7c0(int param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_00487ec0(param_1);
  FUN_0040b960(param_1 + 0x10afc,"?count" + 1);
  FUN_0040b960(param_1 + 0x16f00,"modelCount");
  if (DAT_007bc038 == 1) {
    iVar1 = param_1 + 0x16f04;
    do {
      FUN_0044fd70(iVar1,&DAT_005cc972);
      iVar1 = iVar1 + 0x17c;
    } while (iVar1 != param_1 + 0x174f4);
  }
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x16f00)) {
    iVar2 = param_1 + 0x16f04;
    do {
      iVar1 = iVar1 + 1;
      FUN_0040ba60(iVar2,"modelName");
      iVar2 = iVar2 + 0x17c;
    } while (iVar1 < *(int *)(param_1 + 0x16f00));
  }
  FUN_0040b960(param_1 + 0x1e4d4,"allowChase");
  FUN_0040b960(param_1 + 0x1e4d8,"allowSwarm");
  FUN_0040b730(param_1 + 0x1e4dc,"allowChaseEvent");
  FUN_0040b730(param_1 + 0x1e540,"allowSwarmEvent");
  FUN_0040b730(param_1 + 0x1e5a4,"animateEvent");
  return;
}
