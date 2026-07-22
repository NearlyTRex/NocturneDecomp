// Name: core_dlight.cpp_CDemonLight_beginBackgroundScene_FUN_0044e830
// Address: 0044e830
// Address Range: [[0044e830, 0044e91d]]
// Convention: __cdecl
// Signature: void __cdecl core_dlight_cpp_CDemonLight_beginBackgroundScene_FUN_0044e830(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dlight_cpp_CDemonLight_beginBackgroundScene_FUN_0044e830(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  
  bVar6 = 0;
  if (*(int *)(param_1 + 0x11e4) == 0) {
    _DAT_01cc4800 = "..\\core\\dlight.cpp";
    _DAT_01cc4804 = 0x1af;
    FUN_004c8440("CDemonLight::beginBackgroundScene - Scene not open");
  }
  _DAT_01ab99f0 = _DAT_01ab99f0 + 1;
  if (_DAT_01ab99f0 == 1) {
    puVar4 = (uint *)&DAT_01bd2fa0;
    puVar5 = (uint *)&DAT_01ab99f4;
    for (uVar1 = *(uint *)(param_1 + 0x1cc4) & 0x3fffffff; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
      puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
    }
    for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(byte *)puVar5 = *(byte *)puVar4;
      puVar4 = (uint *)((int)puVar4 + (uint)bVar6 * -2 + 1);
      puVar5 = (uint *)((int)puVar5 + (uint)bVar6 * -2 + 1);
    }
    if (*(int *)(param_1 + 0x2f9c) == 0) {
      _DAT_01cc4800 = "..\\core\\dlight.cpp";
      _DAT_01cc4804 = 0x1bc;
      FUN_004c8440("CDemonLight::beginBackgroundScene - No master Z buffer");
    }
    iVar2 = 0;
    if (0 < *(int *)(param_1 + 0x1cc4)) {
      iVar3 = 0;
      do {
        *(int *)(&DAT_01bd2fa0 + iVar3) =
             *(int *)(param_1 + 0x2f9c) + *(int *)(param_1 + 0x1cc0) * iVar2 * 2;
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 4;
      } while (iVar2 < *(int *)(param_1 + 0x1cc4));
    }
    engine_drender_cpp_CDemonRenderer_setFaceCount_FUN_00461070(DAT_005ae704,1);
  }
  return;
}
