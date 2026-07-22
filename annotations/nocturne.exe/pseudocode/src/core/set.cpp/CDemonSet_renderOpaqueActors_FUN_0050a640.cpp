// Name: core_set.cpp_CDemonSet_renderOpaqueActors_FUN_0050a640
// Address: 0050a640
// Address Range: [[0050a640, 0050a7df]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_renderOpaqueActors_FUN_0050a640(int param_1)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_renderOpaqueActors_FUN_0050a640(int param_1)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte auStack_44 [24];
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  uint uStack_18;
  int local_14;
  
  iVar5 = *(int *)(param_1 + 0x15f2fc) + -1;
  if (-1 < iVar5) {
    local_14 = iVar5 * 4 + param_1;
    do {
      iVar1 = *(int *)(local_14 + 0x15f300);
      if (*(int *)(iVar1 + 0xf8) == 0) {
        *(byte *)(iVar1 + 0x140) = *(byte *)(iVar1 + 0x140) & 0xfb;
      }
      else {
        puVar2 = (uint *)(**(code **)(*(int *)(iVar1 + 0x14c) + 0x14))(iVar1,auStack_44);
        if (&uStack_2c != puVar2) {
          uStack_2c = *puVar2;
          uStack_28 = puVar2[1];
          uStack_24 = puVar2[2];
        }
        if (&uStack_20 != puVar2 + 3) {
          uStack_20 = puVar2[3];
          uStack_1c = puVar2[4];
          uStack_18 = puVar2[5];
        }
        core_set_cpp_CDemonSet_setLightingParameters_FUN_0050adc0
                  (param_1,iVar1 + 0x20,iVar1 + 0x30,&uStack_2c,&uStack_20,iVar1 + 0x3c);
        core_set_cpp_CDemonSet_setFlatColor_FUN_0050e340
                  (param_1,*(uint *)(iVar1 + 0x108),*(uint *)(iVar1 + 0x10c),
                   *(uint *)(iVar1 + 0x110));
        engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00461010(DAT_005ae704,0xffff);
        iVar3 = (**(code **)(*(int *)(iVar1 + 0x14c) + 8))(iVar1);
        if (iVar3 == 0) {
          *(byte *)(iVar1 + 0x140) = *(byte *)(iVar1 + 0x140) & 0xfb;
        }
        else {
          *(byte *)(iVar1 + 0x140) = *(byte *)(iVar1 + 0x140) | 4;
        }
        engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_00461050(DAT_005ae704,1);
        iVar3 = 0;
        if (0 < *(int *)(param_1 + 0x15a8cc)) {
          do {
            core_set_cpp_FUN_0050e080(param_1,iVar3,0);
            iVar4 = (**(code **)(*(int *)(iVar1 + 0x14c) + 8))(iVar1);
            if (iVar4 != 0) {
              *(byte *)(iVar1 + 0x140) = *(byte *)(iVar1 + 0x140) | 4;
            }
            engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_00461050(DAT_005ae704,1);
            iVar3 = iVar3 + 1;
            core_set_cpp_CDemonSet_restoreCameraAfterMirror_FUN_0050e190(param_1);
          } while (iVar3 < *(int *)(param_1 + 0x15a8cc));
        }
        core_set_cpp_CDemonSet_setFlatColor_FUN_0050e340(param_1,0x10000,0x10000,0x10000);
      }
      local_14 = local_14 + -4;
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
  }
  return;
}
