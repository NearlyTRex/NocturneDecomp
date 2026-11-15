// Name: core_turret.cpp_CTurret_renderOpaque_FUN_005a2280
// Address: 005a2280
// Address Range: [[005a2280, 005a2391]]
// Convention: __cdecl
// Signature: int __cdecl core_turret_cpp_CTurret_renderOpaque_FUN_005a2280(CTurret *this_ptr)

#include "nocturne.h"

int __cdecl core_turret_cpp_CTurret_renderOpaque_FUN_005a2280(CTurret *this_ptr)

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
  core_actor_cpp_CDemonActor_setupRenderState_FUN_004087b0((CDemonActor *)this_ptr);
  (*((this_ptr->base).base.vtable._ub)->getBoundingBox)
            ((CDemonActor *)this_ptr,(CBoundingBox3D *)0x0);
  puVar4 = auStack_3c;
  puVar5 = auStack_2c;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
    puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
  }
  iVar3 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004207b0
                    ((CBoundingBox3D *)(auStack_2c + 2),in_stack_ffffffc0);
  if (iVar3 != 0) {
    iVar7 = -1;
    fVar1 = core_turret_cpp_CTurret_getCurFrame_FUN_005a2ae0(this_ptr,0);
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0
              (&(this_ptr->base).model,fVar1,iVar7);
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_004087f0((CDemonActor *)this_ptr);
  if (iVar3 != 0) {
    pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900(&this_ptr->model);
    if (0 < pCVar2->poly_count) {
      engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0
                (DAT_00612560,&(this_ptr->base).base.location.position);
      engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00483850
                (DAT_00612560,&(this_ptr->home_orient).vec,(CVector3f *)0x0);
      iVar7 = -1;
      fVar1 = core_turret_cpp_CTurret_getCurFrame_FUN_005a2ae0(this_ptr,1);
      core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0
                (&this_ptr->model,fVar1,iVar7);
      engine_drender_cpp_pop_FUN_004839a0();
      return iVar3;
    }
  }
  return iVar3;
}
