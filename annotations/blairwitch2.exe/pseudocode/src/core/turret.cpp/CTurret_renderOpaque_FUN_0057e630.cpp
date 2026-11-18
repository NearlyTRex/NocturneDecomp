// Name: core_turret.cpp_CTurret_renderOpaque_FUN_0057e630
// Address: 0057e630
// Address Range: [[0057e630, 0057e741]]
// Convention: __cdecl
// Signature: int __cdecl core_turret_cpp_CTurret_renderOpaque_FUN_0057e630(CTurret *this_ptr)

#include "nocturne.h"

int __cdecl core_turret_cpp_CTurret_renderOpaque_FUN_0057e630(CTurret *this_ptr)

{
  float fVar1;
  CKeyFramedModel *pCVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  int in_stack_ffffffc0;
  int iVar7;
  uint auStack_3c [4];
  uint auStack_2c [7];
  
  bVar6 = 0;
  core_actor_cpp_CDemonActor_setupRenderState_FUN_004089d0((CDemonActor *)this_ptr);
  (*((this_ptr->base).base.vtable._ub)->getBoundingBox)
            ((CDemonActor *)this_ptr,(CBoundingBox3D *)0x0);
  puVar4 = auStack_3c;
  puVar5 = auStack_2c;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
    puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
  }
  iVar3 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041a840
                    ((CBoundingBox3D *)(auStack_2c + 2),in_stack_ffffffc0);
  if (iVar3 != 0) {
    iVar7 = -1;
    fVar1 = core_turret_cpp_CTurret_getCurFrame_FUN_0057ee90(this_ptr,0);
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0
              (&(this_ptr->base).model,fVar1,iVar7);
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408a10((CDemonActor *)this_ptr);
  if (iVar3 != 0) {
    pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20(&this_ptr->model);
    if (0 < pCVar2->poly_count) {
      engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0
                (g_CDemonRenderer_PTR_0060b280,&(this_ptr->base).base.location.position);
      engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
                (g_CDemonRenderer_PTR_0060b280,&(this_ptr->home_orient).vec,(CVector3f *)0x0);
      iVar7 = -1;
      fVar1 = core_turret_cpp_CTurret_getCurFrame_FUN_0057ee90(this_ptr,1);
      core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0
                (&this_ptr->model,fVar1,iVar7);
      engine_drender_cpp_pop_FUN_0046b4a0();
      return iVar3;
    }
  }
  return iVar3;
}
