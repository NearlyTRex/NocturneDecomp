// Name: core_turret.cpp_CTurret_FUN_005e2320
// Address: 005e2320
// Address Range: [[005e2320, 005e240d]]
// Convention: __cdecl
// Signature: int core_turret.cpp_CTurret_FUN_005e2320(CTurret * this_ptr)

#include "nocturne.h"

int __cdecl core_turret_cpp_CTurret_FUN_005e2320(CTurret *this_ptr)

{
  CBoundingBox3D *this_ptr_00;
  int iVar1;
  float fVar2;
  CKeyFramedModel *pCVar3;
  float fVar4;
  
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00((CDemonActor *)this_ptr);
  this_ptr_00 = (*((this_ptr->base).base.vtable._ub)->getBoundingBox)
                          ((CDemonActor *)this_ptr,(CBoundingBox3D *)&stack0xffffffd8);
  iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr_00);
  if (iVar1 != 0) {
    fVar4 = -NAN;
    fVar2 = (float)core_turret_cpp_CTurret_getCurFrame_FUN_005e2b30();
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
              (&(this_ptr->base).model,fVar2,(int)fVar4);
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40((CDemonActor *)this_ptr);
  if (iVar1 != 0) {
    pCVar3 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                       ((CKeyFramedModelInstance *)(this_ptr->unk1 + 0xc));
    if (0 < pCVar3->poly_count) {
      engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
                (g_CDemonRendererPtr2,&(this_ptr->base).base.location.position);
      engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
                (g_CDemonRendererPtr2,(CVector3i *)this_ptr->unk1,(CVector3i *)0x0);
      fVar4 = -NAN;
      fVar2 = (float)core_turret_cpp_CTurret_getCurFrame_FUN_005e2b30();
      core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
                ((CKeyFramedModelInstance *)(this_ptr->unk1 + 0xc),fVar2,(int)fVar4);
      engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
      return iVar1;
    }
  }
  return iVar1;
}
