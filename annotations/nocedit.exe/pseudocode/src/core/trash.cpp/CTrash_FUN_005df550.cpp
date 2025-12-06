// Name: core_trash.cpp_CTrash_FUN_005df550
// Address: 005df550
// Address Range: [[005df550, 005df5f3]]
// Convention: __cdecl
// Signature: int core_trash.cpp_CTrash_FUN_005df550(CTrash * this_ptr)

#include "nocturne.h"

int __cdecl core_trash_cpp_CTrash_FUN_005df550(CTrash *this_ptr)

{
  CTrash *this_ptr_00;
  CBoundingBox3D *this_ptr_01;
  int iVar1;
  BADSPACEBASE *in_ESP;
  float fStack_34;
  
  this_ptr_00 = this_ptr;
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(&this_ptr->base_actor);
  this_ptr_01 = (*((this_ptr_00->base_actor).vtable)->getBoundingBox)
                          (&this_ptr_00->base_actor,(CBoundingBox3D *)&stack0xffffffc8);
  iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr_01);
  if (iVar1 == 0) {
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(&this_ptr_00->base_actor);
    return 0;
  }
  fStack_34 = 8.62885e-39;
  core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
            (&this_ptr_00->base_actor,(CVector3f *)&this_ptr,(CVector3f *)&stack0xfffffff8);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr,(CVector3i *)&g_ZeroVector,(CVector3i *)&stack0x00000008);
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
            ((CKeyFramedModelInstance *)&this_ptr_00->model_name,0.0,-1);
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(&this_ptr_00->base_actor);
  return iVar1;
}
