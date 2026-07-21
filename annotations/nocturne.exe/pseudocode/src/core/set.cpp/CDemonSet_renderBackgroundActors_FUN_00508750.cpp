// Name: core_set.cpp_CDemonSet_renderBackgroundActors_FUN_00508750
// Address: 00508750
// Address Range: [[00508750, 00508889]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_renderBackgroundActors_FUN_00508750(int param_1,undefined4 param_2)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_renderBackgroundActors_FUN_00508750(int param_1,uint param_2)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  byte auStack_40 [24];
  uint uStack_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  uint uStack_18;
  uint uStack_14;
  
  if (*(int *)(0x01CC9450 + 4) != 0) {
    param_2 = 0;
  }
  iVar3 = 0;
  iVar4 = param_1;
  if (0 < *(int *)(param_1 + 0x15f2fc)) {
    do {
      iVar1 = *(int *)(iVar4 + 0x15f300);
      puVar2 = (uint *)(**(code **)(*(int *)(iVar1 + 0x14c) + 0x14))(iVar1,auStack_40);
      if (&uStack_28 != puVar2) {
        uStack_28 = *puVar2;
        uStack_24 = puVar2[1];
        uStack_20 = puVar2[2];
      }
      if (&uStack_1c != puVar2 + 3) {
        uStack_1c = puVar2[3];
        uStack_18 = puVar2[4];
        uStack_14 = puVar2[5];
      }
      core_set_cpp_CDemonSet_setLightingParameters_FUN_0050adc0
                (param_1,iVar1 + 0x20,iVar1 + 0x30,&uStack_28,&uStack_1c,iVar1 + 0x3c);
      core_set_cpp_CDemonSet_setFlatColor_FUN_0050e340
                (param_1,*(uint *)(iVar1 + 0x108),*(uint *)(iVar1 + 0x10c),
                 *(uint *)(iVar1 + 0x110));
      engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00461010(DAT_005ae704,0xffff);
      (**(code **)(*(int *)(iVar1 + 0x14c) + 0x10))(iVar1,param_2);
      core_set_cpp_CDemonSet_setFlatColor_FUN_0050e340(param_1,0x10000,0x10000,0x10000);
      iVar3 = iVar3 + 1;
      engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_00461050(DAT_005ae704,1);
      iVar4 = iVar4 + 4;
    } while (iVar3 < *(int *)(param_1 + 0x15f2fc));
  }
  return;
}
