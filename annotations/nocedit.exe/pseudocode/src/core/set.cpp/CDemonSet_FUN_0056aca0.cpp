// Name: core_set.cpp_CDemonSet_FUN_0056aca0
// Address: 0056aca0
// Address Range: [[0056aca0, 0056add9]]
// Convention: __cdecl
// Signature: void core_set.cpp_CDemonSet_FUN_0056aca0(CDemonSet * this_ptr)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_FUN_0056aca0(CDemonSet *this_ptr)

{
  int iVar1;
  uint *puVar2;
  BADSPACEBASE *in_ESP;
  int iVar3;
  CDemonSet *pCVar4;
  uint uStack_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  uint uStack_18;
  uint uStack_14;
  
  iVar3 = 0;
  pCVar4 = this_ptr;
  if (0 < *(int *)this_ptr->field73_0x15f6e4) {
    do {
      iVar1 = *(int *)(pCVar4->field73_0x15f6e4 + 4);
      puVar2 = (uint *)(**(code **)(*(int *)(iVar1 + 0x154) + 0x14))();
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
      core_set_cpp_CDemonSet_FUN_0056d380(this_ptr);
      core_set_cpp_CDemonSet_FUN_00570ca0(this_ptr);
      engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(g_CDemonRendererPtr,0xffff);
      (**(code **)(*(int *)(iVar1 + 0x154) + 0x10))();
      core_set_cpp_CDemonSet_FUN_00570ca0(this_ptr);
      iVar3 = iVar3 + 1;
      engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0(g_CDemonRendererPtr,1);
      pCVar4 = (CDemonSet *)pCVar4->cameras;
    } while (iVar3 < *(int *)this_ptr->field73_0x15f6e4);
  }
  return;
}
