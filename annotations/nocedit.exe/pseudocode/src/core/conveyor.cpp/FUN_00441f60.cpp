// Name: core_conveyor.cpp_FUN_00441f60
// Address: 00441f60
// Address Range: [[00441f60, 00442018]]
// Convention: unknown
// Signature: undefined core_conveyor.cpp_FUN_00441f60()

#include "nocturne.h"

/* Signature: byte actors_other_conveyor.cpp_FUN_00441f60(uint param_1) */

uint core_conveyor_cpp_FUN_00441f60(void)

{
  int iVar1;
  CBoundingBox3D *this_ptr;
  BADSPACEBASE *in_ESP;
  CDemonActor *in_stack_00000004;
  float fStack_18;
  
  if ((*(int *)(g_CDemonMissionPtr->field0_0x0 + 4) != 0) &&
     (iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr),
     iVar1 == 0)) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(in_stack_00000004);
    this_ptr = (*in_stack_00000004->vtable->getBoundingBox)
                         (in_stack_00000004,(CBoundingBox3D *)&fStack_18);
    iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr);
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(in_stack_00000004);
    if (iVar1 != 0) {
      fStack_18 = 6.256297e-39;
      core_actor_cpp_CDemonActor_FUN_0040dec0(in_stack_00000004);
      return 1;
    }
  }
  return 0;
}
