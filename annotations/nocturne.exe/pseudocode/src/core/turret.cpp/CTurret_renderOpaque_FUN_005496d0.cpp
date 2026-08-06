// Name: core_turret.cpp_CTurret_renderOpaque_FUN_005496d0
// Address: 005496d0
// Address Range: [[005496d0, 005497ce]]
// Convention: __cdecl
// Signature: int __cdecl core_turret_cpp_CTurret_renderOpaque_FUN_005496d0(CTurret *this_ptr)

#include "nocturne.h"

int __cdecl core_turret_cpp_CTurret_renderOpaque_FUN_005496d0(CTurret *this_ptr)

{
  CBoundingBox3D *this_ptr_00;
  int iVar1;
  CKeyFramedModel *pCVar2;
  int iVar3;
  CBoundingBox3D local_28;
  float fStack_10;
  
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20((CDemonActor *)this_ptr);
  this_ptr_00 = (*((this_ptr->base).base.vtable._ub)->getBoundingBox)
                          ((CDemonActor *)this_ptr,&local_28);
  iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(this_ptr_00);
  if (iVar1 != 0) {
    iVar3 = -1;
    fStack_10 = core_turret_cpp_CTurret_getCurFrame_FUN_00549ef0(this_ptr,0);
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0
              (&(this_ptr->base).model,fStack_10,iVar3);
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60((CDemonActor *)this_ptr);
  if (iVar1 != 0) {
    pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530(&this_ptr->model);
    if (0 < pCVar2->poly_count) {
      engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
                (g_CDemonRenderer_PTR_005ae704,&(this_ptr->base).base.location.position);
      engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
                (g_CDemonRenderer_PTR_005ae704,&(this_ptr->home_orient).vec,(CVector3f *)0x0);
      iVar3 = -1;
      fStack_10 = core_turret_cpp_CTurret_getCurFrame_FUN_00549ef0(this_ptr,1);
      core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0
                (&this_ptr->model,fStack_10,iVar3);
      engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0();
      return iVar1;
    }
  }
  return iVar1;
}
