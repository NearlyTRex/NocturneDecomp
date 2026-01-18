// Name: core_set.cpp_CDemonSet_FUN_0056cd60
// Address: 0056cd60
// Address Range: [[0056cd60, 0056ceff]]
// Convention: __cdecl
// Signature: void core_set.cpp_CDemonSet_FUN_0056cd60(CDemonSet * this_ptr)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_FUN_0056cd60(CDemonSet *this_ptr)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  uint uStack_18;
  char *local_14;
  
  iVar5 = *(int *)this_ptr->field73_0x15f6e4 + -1;
  if (-1 < iVar5) {
    local_14 = this_ptr->cameras[0].name + *(int *)this_ptr->field73_0x15f6e4 * 4 + -8;
    do {
      iVar1 = *(int *)(local_14 + 0x15f6e8);
      if (*(int *)(iVar1 + 0xf8) == 0) {
        *(byte *)(iVar1 + 0x140) = *(byte *)(iVar1 + 0x140) & 0xfb;
      }
      else {
        puVar2 = (uint *)(**(code **)(*(int *)(iVar1 + 0x154) + 0x14))();
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
        core_set_cpp_CDemonSet_FUN_0056d380(this_ptr);
        core_set_cpp_CDemonSet_FUN_00570ca0(this_ptr);
        engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(g_CDemonRendererPtr2,0xffff);
        iVar3 = (**(code **)(*(int *)(iVar1 + 0x154) + 8))();
        if (iVar3 == 0) {
          *(byte *)(iVar1 + 0x140) = *(byte *)(iVar1 + 0x140) & 0xfb;
        }
        else {
          *(byte *)(iVar1 + 0x140) = *(byte *)(iVar1 + 0x140) | 4;
        }
        engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0(g_CDemonRendererPtr2,1);
        iVar3 = 0;
        if (0 < this_ptr->mirror_glass_count) {
          do {
            core_set_cpp_CDemonSet_setupMirrorRendering_FUN_005709e0(this_ptr,iVar3,0);
            iVar4 = (**(code **)(*(int *)(iVar1 + 0x154) + 8))();
            if (iVar4 != 0) {
              *(byte *)(iVar1 + 0x140) = *(byte *)(iVar1 + 0x140) | 4;
            }
            engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0(g_CDemonRendererPtr2,1)
            ;
            iVar3 = iVar3 + 1;
            core_set_cpp_FUN_00570af0();
          } while (iVar3 < this_ptr->mirror_glass_count);
        }
        core_set_cpp_CDemonSet_FUN_00570ca0(this_ptr);
      }
      local_14 = local_14 + -4;
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
  }
  return;
}
