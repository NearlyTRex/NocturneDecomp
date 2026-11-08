// Name: FUN_0053ea20
// Address: 0053ea20
// Address Range: [[0053ea20, 0053ebce]]
// Convention: unknown
// Signature: void FUN_0053ea20(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0053ea20(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  
  if (_DAT_021221f0 < 1) {
    _DAT_01d71de0 = "..\\core\\setcolid.cpp";
    _DAT_01d71de4 = 0x42a;
    FUN_004e4330("CDemonSet::popRaytraceState - stack empty");
  }
  _DAT_021221f0 = _DAT_021221f0 + -1;
  iVar2 = _DAT_021221f0 * 0xa0;
  puVar5 = (uint *)(iVar2 + 0x21221f4);
  *(uint *)(param_1 + 0x15f698) = *puVar5;
  *(uint *)(param_1 + 0x15f69c) = *(uint *)(iVar2 + 0x21221f8);
  *(uint *)(param_1 + 0x15f6a0) = *(uint *)(iVar2 + 0x21221fc);
  *(uint *)(param_1 + 0x15f6a4) = *(uint *)(iVar2 + 0x2122200);
  *(uint *)(param_1 + 0x15f6a8) = *(uint *)(iVar2 + 0x2122204);
  iVar1 = *(int *)(iVar2 + 0x2122208);
  iVar3 = 0;
  *(int *)(param_1 + 0x15f6ac) = iVar1;
  iVar4 = param_1;
  if (0 < iVar1) {
    do {
      *(uint *)(iVar4 + 0x15f6b4) = puVar5[7];
      iVar3 = iVar3 + 1;
      puVar5 = puVar5 + 1;
      iVar4 = iVar4 + 4;
    } while (iVar3 < *(int *)(param_1 + 0x15f6ac));
  }
  *(uint *)(param_1 + 0x15f6b0) = *(uint *)(iVar2 + 0x212220c);
  if ((uint *)(param_1 + 0x14d110) != (uint *)(iVar2 + 0x2122238)) {
    *(uint *)(param_1 + 0x14d110) = *(uint *)(iVar2 + 0x2122238);
    *(uint *)(param_1 + 0x14d114) = *(uint *)(iVar2 + 0x212223c);
    *(uint *)(param_1 + 0x14d118) = *(uint *)(iVar2 + 0x2122240);
  }
  if ((uint *)(param_1 + 0x14d11c) != (uint *)(iVar2 + 0x2122244)) {
    *(uint *)(param_1 + 0x14d11c) = *(uint *)(iVar2 + 0x2122244);
    *(uint *)(param_1 + 0x14d120) = *(uint *)(iVar2 + 0x2122248);
    *(uint *)(param_1 + 0x14d124) = *(uint *)(iVar2 + 0x212224c);
  }
  *(uint *)(param_1 + 0x15f6dc) = *(uint *)(iVar2 + 0x2122250);
  *(uint *)(param_1 + 0x15f6e0) = *(uint *)(iVar2 + 0x2122254);
  if ((uint *)(param_1 + 0x15f6e4) != (uint *)(iVar2 + 0x2122258)) {
    *(uint *)(param_1 + 0x15f6e4) = *(uint *)(iVar2 + 0x2122258);
    *(uint *)(param_1 + 0x15f6e8) = *(uint *)(iVar2 + 0x212225c);
    *(uint *)(param_1 + 0x15f6ec) = *(uint *)(iVar2 + 0x2122260);
  }
  *(uint *)(param_1 + 0x15f6f0) = *(uint *)(iVar2 + 0x2122264);
  if ((uint *)(param_1 + 0x14d128) != (uint *)(iVar2 + 0x212226c)) {
    *(uint *)(param_1 + 0x14d128) = *(uint *)(iVar2 + 0x212226c);
    *(uint *)(param_1 + 0x14d12c) = *(uint *)(iVar2 + 0x2122270);
    *(uint *)(param_1 + 0x14d130) = *(uint *)(iVar2 + 0x2122274);
  }
  *(uint *)(param_1 + 0x14d134) = *(uint *)(iVar2 + 0x2122278);
  if ((uint *)(param_1 + 0x14d138) != (uint *)(iVar2 + 0x212227c)) {
    *(uint *)(param_1 + 0x14d138) = *(uint *)(iVar2 + 0x212227c);
    *(uint *)(param_1 + 0x14d13c) = *(uint *)(iVar2 + 0x2122280);
    *(uint *)(param_1 + 0x14d140) = *(uint *)(iVar2 + 0x2122284);
  }
  *(uint *)(param_1 + 0x14d144) = *(uint *)(iVar2 + 0x2122288);
  *(uint *)(param_1 + 0x14d148) = *(uint *)(iVar2 + 0x212228c);
  *(uint *)(param_1 + 0x14d14c) = *(uint *)(iVar2 + 0x2122290);
  *(uint *)(param_1 + 0x15f6f4) = *(uint *)(iVar2 + 0x2122268);
  return;
}
