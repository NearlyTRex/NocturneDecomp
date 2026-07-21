// Name: core_setcolid.cpp_CDemonSet_pushRaytraceState_FUN_005113e0
// Address: 005113e0
// Address Range: [[005113e0, 0051158f]]
// Convention: __cdecl
// Signature: void __cdecl core_setcolid_cpp_CDemonSet_pushRaytraceState_FUN_005113e0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_setcolid_cpp_CDemonSet_pushRaytraceState_FUN_005113e0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  
  if (5 < _DAT_020842d0) {
    _DAT_01cc4800 = "..\\core\\setcolid.cpp";
    _DAT_01cc4804 = 0x406;
    FUN_004c8440("CDemonSet::pushRaytraceState - stack full");
  }
  iVar2 = _DAT_020842d0 * 0xa0;
  puVar5 = (uint *)(iVar2 + 0x20842d4);
  *puVar5 = *(uint *)(param_1 + 0x15f298);
  *(uint *)(iVar2 + 0x20842d8) = *(uint *)(param_1 + 0x15f29c);
  *(uint *)(iVar2 + 0x20842dc) = *(uint *)(param_1 + 0x15f2a0);
  *(uint *)(iVar2 + 0x20842e0) = *(uint *)(param_1 + 0x15f2a4);
  iVar4 = 0;
  *(uint *)(iVar2 + 0x20842e4) = *(uint *)(param_1 + 0x15f2a8);
  _DAT_020842d0 = _DAT_020842d0 + 1;
  iVar1 = *(int *)(param_1 + 0x15f2ac);
  *(int *)(iVar2 + 0x20842e8) = iVar1;
  iVar3 = param_1;
  if (0 < iVar1) {
    do {
      puVar5[7] = *(uint *)(iVar3 + 0x15f2b4);
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 4;
      puVar5 = puVar5 + 1;
    } while (iVar4 < *(int *)(param_1 + 0x15f2ac));
  }
  *(uint *)(iVar2 + 0x20842ec) = *(uint *)(param_1 + 0x15f2b0);
  if ((uint *)(iVar2 + 0x2084318) != (uint *)(param_1 + 0x14cd28)) {
    *(uint *)(iVar2 + 0x2084318) = *(uint *)(param_1 + 0x14cd28);
    *(uint *)(iVar2 + 0x208431c) = *(uint *)(param_1 + 0x14cd2c);
    *(uint *)(iVar2 + 0x2084320) = *(uint *)(param_1 + 0x14cd30);
  }
  if ((uint *)(iVar2 + 0x2084324) != (uint *)(param_1 + 0x14cd34)) {
    *(uint *)(iVar2 + 0x2084324) = *(uint *)(param_1 + 0x14cd34);
    *(uint *)(iVar2 + 0x2084328) = *(uint *)(param_1 + 0x14cd38);
    *(uint *)(iVar2 + 0x208432c) = *(uint *)(param_1 + 0x14cd3c);
  }
  *(uint *)(iVar2 + 0x2084330) = *(uint *)(param_1 + 0x15f2dc);
  *(uint *)(iVar2 + 0x2084334) = *(uint *)(param_1 + 0x15f2e0);
  if ((uint *)(iVar2 + 0x2084338) != (uint *)(param_1 + 0x15f2e4)) {
    *(uint *)(iVar2 + 0x2084338) = *(uint *)(param_1 + 0x15f2e4);
    *(uint *)(iVar2 + 0x208433c) = *(uint *)(param_1 + 0x15f2e8);
    *(uint *)(iVar2 + 0x2084340) = *(uint *)(param_1 + 0x15f2ec);
  }
  *(uint *)(iVar2 + 0x2084344) = *(uint *)(param_1 + 0x15f2f0);
  if ((uint *)(iVar2 + 0x208434c) != (uint *)(param_1 + 0x14cd40)) {
    *(uint *)(iVar2 + 0x208434c) = *(uint *)(param_1 + 0x14cd40);
    *(uint *)(iVar2 + 0x2084350) = *(uint *)(param_1 + 0x14cd44);
    *(uint *)(iVar2 + 0x2084354) = *(uint *)(param_1 + 0x14cd48);
  }
  *(uint *)(iVar2 + 0x2084358) = *(uint *)(param_1 + 0x14cd4c);
  if ((uint *)(iVar2 + 0x208435c) != (uint *)(param_1 + 0x14cd50)) {
    *(uint *)(iVar2 + 0x208435c) = *(uint *)(param_1 + 0x14cd50);
    *(uint *)(iVar2 + 0x2084360) = *(uint *)(param_1 + 0x14cd54);
    *(uint *)(iVar2 + 0x2084364) = *(uint *)(param_1 + 0x14cd58);
  }
  *(uint *)(iVar2 + 0x2084368) = *(uint *)(param_1 + 0x14cd5c);
  *(uint *)(iVar2 + 0x208436c) = *(uint *)(param_1 + 0x14cd60);
  *(uint *)(iVar2 + 0x2084370) = *(uint *)(param_1 + 0x14cd64);
  *(uint *)(iVar2 + 0x2084348) = *(uint *)(param_1 + 0x15f2f4);
  return;
}
