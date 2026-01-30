// Name: core_marquee.cpp_FUN_0050be50
// Address: 0050be50
// Address Range: [[0050be50, 0050beb3]]
// Convention: __cdecl
// Signature: float __cdecl core_marquee_cpp_FUN_0050be50(void)

#include "nocturne.h"

/* Signature: byte actors_other_marquee.cpp_FUN_0050be50(uint param_1) */

float __cdecl core_marquee_cpp_FUN_0050be50(void)

{
  int iVar1;
  CBoundingBox3D *this_ptr;
  float fVar2;
  CDemonActor *in_stack_00000004;
  float fStack_1c;
  
  iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2);
  if (iVar1 != 0) {
    return 0.0;
  }
  in_stack_00000004[1].orient_matrix.m[0].z = 0.0;
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(in_stack_00000004);
  this_ptr = (*((in_stack_00000004->vtable)._ub)->getBoundingBox)
                       (in_stack_00000004,(CBoundingBox3D *)&fStack_1c);
  fStack_1c = 7.41521e-39;
  fVar2 = (float)core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr);
  in_stack_00000004[1].orient_matrix.m[0].z = fVar2;
  fStack_1c = 7.415231e-39;
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(in_stack_00000004);
  return in_stack_00000004[1].orient_matrix.m[0].z;
}
