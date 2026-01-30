// Name: core_conveyor.cpp_FUN_00441f60
// Address: 00441f60
// Address Range: [[00441f60, 00442018]]
// Convention: __cdecl
// Signature: int __cdecl core_conveyor_cpp_FUN_00441f60(void)

#include "nocturne.h"

/* Signature: byte actors_other_conveyor.cpp_FUN_00441f60(uint param_1) */

int __cdecl core_conveyor_cpp_FUN_00441f60(void)

{
  int iVar1;
  CBoundingBox3D *this_ptr;
  CDemonActor *in_stack_00000004;
  float fStack_20;
  
  if (*(int *)(g_CDemonMissionPtr->unk1 + 4) != 0) {
    iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2);
    if (iVar1 == 0) {
      core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(in_stack_00000004);
      this_ptr = (*((in_stack_00000004->vtable)._ub)->getBoundingBox)
                           (in_stack_00000004,(CBoundingBox3D *)&fStack_20);
      fStack_20 = 6.256178e-39;
      iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr);
      fStack_20 = 6.256194e-39;
      core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(in_stack_00000004);
      if (iVar1 != 0) {
        if (in_stack_00000004 == *(CDemonActor **)(g_CDemonMissionPtr->unk2 + 0x1c)) {
          fStack_20 = 1.79366e-43;
        }
        else {
          fStack_20 = 8.96831e-44;
        }
        core_actor_cpp_CDemonActor_FUN_0040dec0(in_stack_00000004);
        return 1;
      }
    }
  }
  return 0;
}
