// Name: core_trash.cpp_CTrash_renderOpaque_FUN_00547670
// Address: 00547670
// Address Range: [[00547670, 0054772d]]
// Convention: __cdecl
// Signature: int __cdecl core_trash_cpp_CTrash_renderOpaque_FUN_00547670(CTrash *this_ptr)

#include "nocturne.h"

int __cdecl core_trash_cpp_CTrash_renderOpaque_FUN_00547670(CTrash *this_ptr)

{
  CBoundingBox3D *this_ptr_00;
  int iVar1;
  CBoundingBox3D local_3c;
  CVector3f CStack_24;
  CVector3f CStack_18;
  
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20(&this_ptr->base);
  this_ptr_00 = (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,&local_3c);
  iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(this_ptr_00);
  if (iVar1 == 0) {
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(&this_ptr->base);
    return 0;
  }
  CStack_24.y = this_ptr->collision_radius;
  CStack_24.x = 0.0;
  CStack_24.z = 0.0;
  core_actor_cpp_CDemonActor_inverseTransformVector_FUN_0040a220
            (&this_ptr->base,&CStack_18,&CStack_24);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
            (g_CDemonRenderer_PTR_005ae704,(CVector3f *)&DAT_02dd1184,&CStack_18);
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0(&this_ptr->model,0.0,-1);
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0();
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(&this_ptr->base);
  return iVar1;
}
