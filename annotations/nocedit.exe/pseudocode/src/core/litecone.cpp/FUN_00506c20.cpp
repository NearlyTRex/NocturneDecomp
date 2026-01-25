// Name: core_litecone.cpp_FUN_00506c20
// Address: 00506c20
// Address Range: [[00506c20, 00506ca6]]
// Convention: unknown
// Signature: undefined core_litecone.cpp_FUN_00506c20()

#include "nocturne.h"

int core_litecone_cpp_FUN_00506c20(void)

{
  int iVar1;
  CBoundingBox3D *this_ptr;
  CDemonActor *in_stack_00000004;
  CBoundingBox3D local_1c;
  
  if (*(int *)(in_stack_00000004[1].actor_name + 8) != 0) {
    iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2);
    if (iVar1 == 0) {
      core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(in_stack_00000004);
      this_ptr = (*((in_stack_00000004->vtable)._ub)->getBoundingBox)(in_stack_00000004,&local_1c);
      iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr);
      core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(in_stack_00000004);
      if (iVar1 != 0) {
        core_dlight_cpp_renderConeLightGeometry_FUN_004760d0
                  (&(in_stack_00000004->location).position,(CVector3i *)&in_stack_00000004->orient,
                   *(float *)in_stack_00000004[1].actor_name,
                   *(float *)(in_stack_00000004[1].actor_name + 4));
      }
      return iVar1;
    }
  }
  return 0;
}
