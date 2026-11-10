// Name: core_boxactor.cpp_CBoxActor_renderTransparent_FUN_00422600
// Address: 00422600
// Address Range: [[00422600, 004226fe]]
// Convention: __cdecl
// Signature: int __cdecl core_boxactor_cpp_CBoxActor_renderTransparent_FUN_00422600(CBoxActor *this_ptr)

#include "nocturne.h"

int __cdecl core_boxactor_cpp_CBoxActor_renderTransparent_FUN_00422600(CBoxActor *this_ptr)

{
  CKeyFramedModel *pCVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  uint auStack_38 [6];
  uint auStack_20 [6];
  
  bVar5 = 0;
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900(&this_ptr->model);
  if (pCVar1->poly_count < 1) {
    return 0;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0
            (0x01BC120C,&(this_ptr->base).location.position);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00483850
            (0x01BC120C,&(this_ptr->base).orient.vec,(CVector3f *)0x0);
  (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,(CBoundingBox3D *)0x0);
  puVar3 = auStack_38;
  puVar4 = auStack_20;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  iVar2 = core_box_cpp_FUN_004207b0(auStack_20);
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0(DAT_00612560,0xffff);
  if (this_ptr->dont_use_normals != 0) {
    g_CDemonSetPtr->disable_directional_lighting = 1;
  }
  if (iVar2 != 0) {
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0
              (&this_ptr->model,this_ptr->anim_frame,-1);
  }
  if (this_ptr->dont_use_normals != 0) {
    g_CDemonSetPtr->disable_directional_lighting = 0;
  }
  engine_matrix_c_pop_FUN_004839a0();
  return iVar2;
}
