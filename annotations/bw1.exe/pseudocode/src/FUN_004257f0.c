// Name: FUN_004257f0
// Address: 004257f0
// Address Range: [[004257f0, 00425908]]
// Convention: unknown
// Signature: void FUN_004257f0(int param_1)

#include "nocturne.h"

void FUN_004257f0(int param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_004a0520(param_1);
  FUN_0040b670(param_1 + 0xc26c,"?count" + 1);
  FUN_0040b670(param_1 + 0x12670,"modelCount");
  if (DAT_007c3038 == 1) {
    iVar1 = param_1 + 0x12674;
    do {
      FUN_00468950(iVar1,&DAT_005d5061);
      iVar1 = iVar1 + 0x17c;
    } while (iVar1 != param_1 + 0x12c64);
  }
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x12670)) {
    iVar2 = param_1 + 0x12674;
    do {
      iVar1 = iVar1 + 1;
      FUN_0040b770(iVar2,"modelName");
      iVar2 = iVar2 + 0x17c;
    } while (iVar1 < *(int *)(param_1 + 0x12670));
  }
  FUN_0040b670(param_1 + 0x19c44,"allowChase");
  FUN_0040b670(param_1 + 0x19c48,"allowSwarm");
  FUN_0040b440(param_1 + 0x19c4c,"allowChaseEvent");
  FUN_0040b440(param_1 + 0x19cb0,"allowSwarmEvent");
  FUN_0040b440(param_1 + 0x19d14,"animateEvent");
  return;
}
