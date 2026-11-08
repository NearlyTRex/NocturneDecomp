// Name: FUN_00558eb0
// Address: 00558eb0
// Address Range: [[00558eb0, 0055905f]]
// Convention: unknown
// Signature: void FUN_00558eb0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00558eb0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  
  if (5 < _DAT_020af5c8) {
    _DAT_01d1d400 = "..\\core\\setcolid.cpp";
    _DAT_01d1d404 = 0x406;
    FUN_005030e0("CDemonSet::pushRaytraceState - stack full");
  }
  iVar2 = _DAT_020af5c8 * 0xa0;
  puVar5 = (uint *)(iVar2 + 0x20af5cc);
  *puVar5 = *(uint *)(param_1 + 0x15f698);
  *(uint *)(iVar2 + 0x20af5d0) = *(uint *)(param_1 + 0x15f69c);
  *(uint *)(iVar2 + 0x20af5d4) = *(uint *)(param_1 + 0x15f6a0);
  *(uint *)(iVar2 + 0x20af5d8) = *(uint *)(param_1 + 0x15f6a4);
  iVar4 = 0;
  *(uint *)(iVar2 + 0x20af5dc) = *(uint *)(param_1 + 0x15f6a8);
  _DAT_020af5c8 = _DAT_020af5c8 + 1;
  iVar1 = *(int *)(param_1 + 0x15f6ac);
  *(int *)(iVar2 + 0x20af5e0) = iVar1;
  iVar3 = param_1;
  if (0 < iVar1) {
    do {
      puVar5[7] = *(uint *)(iVar3 + 0x15f6b4);
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 4;
      puVar5 = puVar5 + 1;
    } while (iVar4 < *(int *)(param_1 + 0x15f6ac));
  }
  *(uint *)(iVar2 + 0x20af5e4) = *(uint *)(param_1 + 0x15f6b0);
  if ((uint *)(iVar2 + 0x20af610) != (uint *)(param_1 + 0x14d110)) {
    *(uint *)(iVar2 + 0x20af610) = *(uint *)(param_1 + 0x14d110);
    *(uint *)(iVar2 + 0x20af614) = *(uint *)(param_1 + 0x14d114);
    *(uint *)(iVar2 + 0x20af618) = *(uint *)(param_1 + 0x14d118);
  }
  if ((uint *)(iVar2 + 0x20af61c) != (uint *)(param_1 + 0x14d11c)) {
    *(uint *)(iVar2 + 0x20af61c) = *(uint *)(param_1 + 0x14d11c);
    *(uint *)(iVar2 + 0x20af620) = *(uint *)(param_1 + 0x14d120);
    *(uint *)(iVar2 + 0x20af624) = *(uint *)(param_1 + 0x14d124);
  }
  *(uint *)(iVar2 + 0x20af628) = *(uint *)(param_1 + 0x15f6dc);
  *(uint *)(iVar2 + 0x20af62c) = *(uint *)(param_1 + 0x15f6e0);
  if ((uint *)(iVar2 + 0x20af630) != (uint *)(param_1 + 0x15f6e4)) {
    *(uint *)(iVar2 + 0x20af630) = *(uint *)(param_1 + 0x15f6e4);
    *(uint *)(iVar2 + 0x20af634) = *(uint *)(param_1 + 0x15f6e8);
    *(uint *)(iVar2 + 0x20af638) = *(uint *)(param_1 + 0x15f6ec);
  }
  *(uint *)(iVar2 + 0x20af63c) = *(uint *)(param_1 + 0x15f6f0);
  if ((uint *)(iVar2 + 0x20af644) != (uint *)(param_1 + 0x14d128)) {
    *(uint *)(iVar2 + 0x20af644) = *(uint *)(param_1 + 0x14d128);
    *(uint *)(iVar2 + 0x20af648) = *(uint *)(param_1 + 0x14d12c);
    *(uint *)(iVar2 + 0x20af64c) = *(uint *)(param_1 + 0x14d130);
  }
  *(uint *)(iVar2 + 0x20af650) = *(uint *)(param_1 + 0x14d134);
  if ((uint *)(iVar2 + 0x20af654) != (uint *)(param_1 + 0x14d138)) {
    *(uint *)(iVar2 + 0x20af654) = *(uint *)(param_1 + 0x14d138);
    *(uint *)(iVar2 + 0x20af658) = *(uint *)(param_1 + 0x14d13c);
    *(uint *)(iVar2 + 0x20af65c) = *(uint *)(param_1 + 0x14d140);
  }
  *(uint *)(iVar2 + 0x20af660) = *(uint *)(param_1 + 0x14d144);
  *(uint *)(iVar2 + 0x20af664) = *(uint *)(param_1 + 0x14d148);
  *(uint *)(iVar2 + 0x20af668) = *(uint *)(param_1 + 0x14d14c);
  *(uint *)(iVar2 + 0x20af640) = *(uint *)(param_1 + 0x15f6f4);
  return;
}
