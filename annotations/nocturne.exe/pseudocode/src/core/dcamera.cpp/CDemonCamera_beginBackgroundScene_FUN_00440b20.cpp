// Name: core_dcamera.cpp_CDemonCamera_beginBackgroundScene_FUN_00440b20
// Address: 00440b20
// Address Range: [[00440b20, 00440c4a]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_beginBackgroundScene_FUN_00440b20(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dcamera_cpp_CDemonCamera_beginBackgroundScene_FUN_00440b20(int param_1)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  
  bVar5 = 0;
  if (*(int *)(param_1 + 0x11e4) == 0) {
    _DAT_01cc4800 = "..\\core\\dcamera.cpp";
    _DAT_01cc4804 = 0x43b;
    FUN_004c8440("CDemonCamera::beginBackgroundScene - Scene not open");
  }
  _DAT_0140efa8 = _DAT_0140efa8 + 1;
  if (_DAT_0140efa8 == 1) {
    _DAT_0140efac = DAT_005b7624;
    _DAT_0140efb0 = _DAT_01c02594;
    puVar3 = (uint *)&DAT_01bd2fa0;
    puVar4 = (uint *)&DAT_0140efb4;
    for (uVar1 = DAT_005b7620 & 0x3fffffff; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
      puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
    }
    for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(byte *)puVar4 = *(byte *)puVar3;
      puVar3 = (uint *)((int)puVar3 + (uint)bVar5 * -2 + 1);
      puVar4 = (uint *)((int)puVar4 + (uint)bVar5 * -2 + 1);
    }
    _DAT_01410274 = _DAT_01c00624;
    DAT_005b7624 = 0x20;
    _DAT_01410278 = _DAT_01c00630;
    _DAT_01c02594 = 0;
    _DAT_0141027c = _DAT_01c0063c;
    _DAT_01c00630 = 8;
    _DAT_01c0063c = 0;
    _DAT_01c00624 = 0x10;
    iVar2 = 0;
    if (0 < *(int *)(param_1 + 0x140)) {
      do {
        *(int *)(&DAT_01bd2fa0 + (*(int *)(param_1 + 0x148) + iVar2) * 4) =
             *(int *)(param_1 + 0x158) + *(int *)(param_1 + 0x13c) * iVar2 * 4 +
             *(int *)(param_1 + 0x144) * -4;
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(param_1 + 0x140));
      return;
    }
  }
  return;
}
