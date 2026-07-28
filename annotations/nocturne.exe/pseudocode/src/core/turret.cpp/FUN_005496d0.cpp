// Name: core_turret.cpp_FUN_005496d0
// Address: 005496d0
// Address Range: [[005496d0, 005497ce]]
// Convention: unknown
// Signature: int core_turret_cpp_FUN_005496d0(CDemonActor *param_1)

#include "nocturne.h"

int core_turret_cpp_FUN_005496d0(CDemonActor *param_1)

{
  CBoundingBox3D *this_ptr;
  int iVar1;
  CKeyFramedModel *pCVar2;
  int iVar3;
  CBoundingBox3D local_28;
  float fStack_10;
  
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20(param_1);
  this_ptr = (*((param_1->vtable)._ub)->getBoundingBox)(param_1,&local_28);
  iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(this_ptr);
  if (iVar1 != 0) {
    iVar3 = -1;
    fStack_10 = (float)core_turret_cpp_CTurret_getCurFrame_FUN_00549ef0(param_1,0);
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0
              ((CKeyFramedModelInstance *)(param_1 + 1),fStack_10,iVar3);
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(param_1);
  if (iVar1 != 0) {
    pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530
                       ((CKeyFramedModelInstance *)&param_1[4].orient_matrix);
    if (0 < pCVar2->poly_count) {
      engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
                (DAT_005ae704,&(param_1->location).position);
      engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
                (DAT_005ae704,&param_1[4].orient.vec,(CVector3f *)0x0);
      iVar3 = -1;
      fStack_10 = (float)core_turret_cpp_CTurret_getCurFrame_FUN_00549ef0(param_1,1);
      core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0
                ((CKeyFramedModelInstance *)&param_1[4].orient_matrix,fStack_10,iVar3);
      engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0();
      return iVar1;
    }
  }
  return iVar1;
}
