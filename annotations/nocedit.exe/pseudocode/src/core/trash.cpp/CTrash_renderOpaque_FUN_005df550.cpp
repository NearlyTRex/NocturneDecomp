// Name: core_trash.cpp_CTrash_renderOpaque_FUN_005df550
// Address: 005df550
// Address Range: [[005df550, 005df609]]
// Convention: __cdecl
// Signature: int __cdecl core_trash_cpp_CTrash_renderOpaque_FUN_005df550(CTrash *this_ptr)

#include "nocturne.h"

int __cdecl core_trash_cpp_CTrash_renderOpaque_FUN_005df550(CTrash *this_ptr)

{
  CBoundingBox3D *this_ptr_00;
  int iVar1;
  CVector3f CStack_24;
  CVector3f CStack_18;
  
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(&this_ptr->base);
  this_ptr_00 = (*((this_ptr->base).vtable._ub)->getBoundingBox)
                          (&this_ptr->base,(CBoundingBox3D *)&stack0xffffffc4);
  iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr_00);
  if (iVar1 == 0) {
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(&this_ptr->base);
    return 0;
  }
  CStack_24.y = this_ptr->collision_radius;
  CStack_24.x = 0.0;
  CStack_24.z = 0.0;
  core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
            (&this_ptr->base,&CStack_18,&CStack_24);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr2,&g_ZeroVector.i,(CVector3i *)&CStack_18);
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20(&this_ptr->model,0.0,-1);
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0048c640(g_CDemonRendererPtr2);
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(&this_ptr->base);
  return iVar1;
}
