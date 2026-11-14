// Name: core_turret.cpp_CTurret_renderOpaque_FUN_0057e630
// Address: 0057e630
// Address Range: [[0057e630, 0057e741]]
// Convention: __cdecl
// Signature: int __cdecl core_turret_cpp_CTurret_renderOpaque_FUN_0057e630(CTurret *this_ptr)

#include "nocturne.h"

int __cdecl core_turret_cpp_CTurret_renderOpaque_FUN_0057e630(CTurret *this_ptr)

{
  CKeyFramedModel *pCVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  int iVar6;
  uint auStack_44 [6];
  uint auStack_2c [6];
  float fStack_14;
  
  bVar5 = 0;
  core_actor_cpp_CDemonActor_setupRenderState_FUN_004089d0((CDemonActor *)this_ptr);
  (*((this_ptr->base).base.vtable._ub)->getBoundingBox)
            ((CDemonActor *)this_ptr,(CBoundingBox3D *)0x0);
  puVar3 = auStack_44;
  puVar4 = auStack_2c;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  iVar2 = core_box_cpp_FUN_0041a840(auStack_2c);
  if (iVar2 != 0) {
    iVar6 = -1;
    fStack_14 = core_turret_cpp_CTurret_getCurFrame_FUN_0057ee90(this_ptr,0);
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0
              (&(this_ptr->base).model,fStack_14,iVar6);
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408a10((CDemonActor *)this_ptr);
  if (iVar2 != 0) {
    pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20(&this_ptr->model);
    if (0 < pCVar1->poly_count) {
      engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0
                (DAT_0060b280,&(this_ptr->base).base.location.position);
      engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
                (DAT_0060b280,&(this_ptr->home_orient).vec,(CVector3f *)0x0);
      iVar6 = -1;
      fStack_14 = core_turret_cpp_CTurret_getCurFrame_FUN_0057ee90(this_ptr,1);
      core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0
                (&this_ptr->model,fStack_14,iVar6);
      engine_drender_cpp_pop_FUN_0046b4a0();
      return iVar2;
    }
  }
  return iVar2;
}
