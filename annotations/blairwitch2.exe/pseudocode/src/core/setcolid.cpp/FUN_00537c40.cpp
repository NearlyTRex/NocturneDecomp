// Name: FUN_00537c40
// Address: 00537c40
// Address Range: [[00537c40, 00537dee]]
// Convention: unknown
// Signature: void FUN_00537c40(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00537c40(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  
  if (_DAT_02093614 < 1) {
    _DAT_01d046a0 = "..\\core\\setcolid.cpp";
    _DAT_01d046a4 = 0x42a;
    FUN_004e4500("CDemonSet::popRaytraceState - stack empty");
  }
  _DAT_02093614 = _DAT_02093614 + -1;
  iVar2 = _DAT_02093614 * 0xa0;
  puVar5 = (uint *)(iVar2 + 0x2093618);
  *(uint *)(param_1 + 0x15f694) = *puVar5;
  *(uint *)(param_1 + 0x15f698) = *(uint *)(iVar2 + 0x209361c);
  *(uint *)(param_1 + 0x15f69c) = *(uint *)(iVar2 + 0x2093620);
  *(uint *)(param_1 + 0x15f6a0) = *(uint *)(iVar2 + 0x2093624);
  *(uint *)(param_1 + 0x15f6a4) = *(uint *)(iVar2 + 0x2093628);
  iVar1 = *(int *)(iVar2 + 0x209362c);
  iVar3 = 0;
  *(int *)(param_1 + 0x15f6a8) = iVar1;
  iVar4 = param_1;
  if (0 < iVar1) {
    do {
      *(uint *)(iVar4 + 0x15f6b0) = puVar5[7];
      iVar3 = iVar3 + 1;
      puVar5 = puVar5 + 1;
      iVar4 = iVar4 + 4;
    } while (iVar3 < *(int *)(param_1 + 0x15f6a8));
  }
  *(uint *)(param_1 + 0x15f6ac) = *(uint *)(iVar2 + 0x2093630);
  if ((uint *)(param_1 + 0x14d110) != (uint *)(iVar2 + 0x209365c)) {
    *(uint *)(param_1 + 0x14d110) = *(uint *)(iVar2 + 0x209365c);
    *(uint *)(param_1 + 0x14d114) = *(uint *)(iVar2 + 0x2093660);
    *(uint *)(param_1 + 0x14d118) = *(uint *)(iVar2 + 0x2093664);
  }
  if ((uint *)(param_1 + 0x14d11c) != (uint *)(iVar2 + 0x2093668)) {
    *(uint *)(param_1 + 0x14d11c) = *(uint *)(iVar2 + 0x2093668);
    *(uint *)(param_1 + 0x14d120) = *(uint *)(iVar2 + 0x209366c);
    *(uint *)(param_1 + 0x14d124) = *(uint *)(iVar2 + 0x2093670);
  }
  *(uint *)(param_1 + 0x15f6d8) = *(uint *)(iVar2 + 0x2093674);
  *(uint *)(param_1 + 0x15f6dc) = *(uint *)(iVar2 + 0x2093678);
  if ((uint *)(param_1 + 0x15f6e0) != (uint *)(iVar2 + 0x209367c)) {
    *(uint *)(param_1 + 0x15f6e0) = *(uint *)(iVar2 + 0x209367c);
    *(uint *)(param_1 + 0x15f6e4) = *(uint *)(iVar2 + 0x2093680);
    *(uint *)(param_1 + 0x15f6e8) = *(uint *)(iVar2 + 0x2093684);
  }
  *(uint *)(param_1 + 0x15f6ec) = *(uint *)(iVar2 + 0x2093688);
  if ((uint *)(param_1 + 0x14d128) != (uint *)(iVar2 + 0x2093690)) {
    *(uint *)(param_1 + 0x14d128) = *(uint *)(iVar2 + 0x2093690);
    *(uint *)(param_1 + 0x14d12c) = *(uint *)(iVar2 + 0x2093694);
    *(uint *)(param_1 + 0x14d130) = *(uint *)(iVar2 + 0x2093698);
  }
  *(uint *)(param_1 + 0x14d134) = *(uint *)(iVar2 + 0x209369c);
  if ((uint *)(param_1 + 0x14d138) != (uint *)(iVar2 + 0x20936a0)) {
    *(uint *)(param_1 + 0x14d138) = *(uint *)(iVar2 + 0x20936a0);
    *(uint *)(param_1 + 0x14d13c) = *(uint *)(iVar2 + 0x20936a4);
    *(uint *)(param_1 + 0x14d140) = *(uint *)(iVar2 + 0x20936a8);
  }
  *(uint *)(param_1 + 0x14d144) = *(uint *)(iVar2 + 0x20936ac);
  *(uint *)(param_1 + 0x14d148) = *(uint *)(iVar2 + 0x20936b0);
  *(uint *)(param_1 + 0x14d14c) = *(uint *)(iVar2 + 0x20936b4);
  *(uint *)(param_1 + 0x15f6f0) = *(uint *)(iVar2 + 0x209368c);
  return;
}
