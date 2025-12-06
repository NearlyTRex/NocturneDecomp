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
  float animation_frame;
  CKeyFramedModel *pCVar2;
  BADSPACEBASE *in_ESP;
  int unaff_EBP;
  int in_stack_00000008;
  CDemonRenderer *pCStack0000000c;
  float fStack00000028;
  float fStack_1c;
  CTurret *pCStack_18;
  
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00((CDemonActor *)this_ptr);
  this_ptr_00 = (*((this_ptr->base_weapon).base_actor.vtable)->getBoundingBox)
                          ((CDemonActor *)this_ptr,(CBoundingBox3D *)&stack0xffffffdc);
  pCStack_18 = (CTurret *)0x5e2349;
  iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr_00);
  if (iVar1 != 0) {
    pCStack_18 = this_ptr;
    fStack_1c = 8.645221e-39;
    animation_frame = (float)core_turret_cpp_CTurret_getCurFrame_FUN_005e2b30();
    pCStack_18 = (CTurret *)0x5e2379;
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
              (&(this_ptr->base_weapon).model,animation_frame,unaff_EBP);
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40((CDemonActor *)this_ptr);
  if (iVar1 != 0) {
    pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                       ((CKeyFramedModelInstance *)(this_ptr->field1_0x578 + 0xc));
    if (0 < pCVar2->poly_count) {
      engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
                (g_CDemonRendererPtr,&(this_ptr->base_weapon).base_actor.location.position);
      engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
                (g_CDemonRendererPtr,(CVector3i *)this_ptr->field1_0x578,(CVector3i *)0x0);
      fStack00000028 = (float)core_turret_cpp_CTurret_getCurFrame_FUN_005e2b30();
      core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
                ((CKeyFramedModelInstance *)(this_ptr->field1_0x578 + 0xc),fStack00000028,
                 in_stack_00000008);
      pCStack0000000c = g_CDemonRendererPtr;
      engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
      return iVar1;
    }
  }
  return iVar1;
}
