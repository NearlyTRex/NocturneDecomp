// Name: core_filmreel.cpp_FUN_004bed00
// Address: 004bed00
// Address Range: [[004bed00, 004bedba]]
// Convention: unknown
// Signature: undefined core_filmreel.cpp_FUN_004bed00()

#include "nocturne.h"

/* Signature: byte actors_other_filmreel.cpp_FUN_004bed00(uint param_1) */

int core_filmreel_cpp_FUN_004bed00(void)

{
  CBoundingBox3D *this_ptr;
  int iVar1;
  CDemonActor *in_stack_00000004;
  CVector3i CStack_1c;
  int iStack_10;
  
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(in_stack_00000004);
  this_ptr = (*in_stack_00000004->vtable->getBoundingBox)
                       (in_stack_00000004,(CBoundingBox3D *)&stack0xffffffc4);
  iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr);
  if (iVar1 == 0) {
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(in_stack_00000004);
    return 0;
  }
  iStack_10 = 0;
  CStack_1c.x = 0;
  CStack_1c.z = 0;
  CStack_1c.y = 0x40000000;
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr,(CVector3i *)&g_ZeroVector,&CStack_1c);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr,(CVector3i *)&iStack_10,(CVector3i *)&g_ZeroVector);
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
            ((CKeyFramedModelInstance *)(in_stack_00000004[1].create_event + 0x24),0.0,-1);
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(in_stack_00000004);
  return iVar1;
}
