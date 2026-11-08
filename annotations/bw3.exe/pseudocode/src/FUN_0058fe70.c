// Name: FUN_0058fe70
// Address: 0058fe70
// Address Range: [[0058fe70, 0058ff63]]
// Convention: unknown
// Signature: void FUN_0058fe70(int param_1)

#include "nocturne.h"

void FUN_0058fe70(int param_1)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  
  if (*(int *)(param_1 + 0x3268) == 0) {
    *(uint *)(param_1 + 0xce5c) = 0x41a00000;
    *(uint *)(param_1 + 0xce60) = 0x41a00000;
    *(uint *)(param_1 + 0x2538) = 0x43160000;
  }
  if (*(int *)(param_1 + 0xd094) == 0) {
    pcVar3 = "bwp3_keddem.dfm";
  }
  else {
    pcVar3 = "bwp3_keddem_invis.dfm";
  }
  FUN_0054eae0(param_1 + 0x158,pcVar3);
  iVar2 = param_1 + 0x158;
  FUN_0054e6b0(iVar2);
  uVar1 = FUN_0054eac0(iVar2);
  uVar1 = FUN_00548090(uVar1,"Bip01 R Hand",1);
  *(uint *)(param_1 + 0xce5c) = 0;
  *(uint *)(param_1 + 0xd074) = uVar1;
  FUN_00489110(param_1);
  iVar2 = FUN_004fc070(iVar2);
  if ((*(int *)(iVar2 + 0x24) == 8) || (*(int *)(param_1 + 0xd094) != 0)) {
    *(uint *)(param_1 + 0x2540) = 0;
  }
  else {
    *(uint *)(param_1 + 0x2540) = 2;
  }
  *(uint *)(param_1 + 0xd05c) = 0;
  *(uint *)(param_1 + 0xcdcc) = 0x3fc00000;
  *(uint *)(param_1 + 0xd058) = 0;
  return;
}
