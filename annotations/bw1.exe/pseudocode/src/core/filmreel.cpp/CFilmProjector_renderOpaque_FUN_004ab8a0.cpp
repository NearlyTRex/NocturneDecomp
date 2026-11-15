// Name: core_filmreel.cpp_CFilmProjector_renderOpaque_FUN_004ab8a0
// Address: 004ab8a0
// Address Range: [[004ab8a0, 004ab996]]
// Convention: __cdecl
// Signature: int __cdecl core_filmreel_cpp_CFilmProjector_renderOpaque_FUN_004ab8a0(CFilmProjector *this_ptr)

#include "nocturne.h"

int __cdecl core_filmreel_cpp_CFilmProjector_renderOpaque_FUN_004ab8a0(CFilmProjector *this_ptr)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  int in_stack_ffffffac;
  uint auStack_50 [4];
  uint auStack_40 [2];
  CBoundingBox3D CStack_38;
  CVector3f CStack_20;
  float fStack_14;
  
  bVar4 = 0;
  core_actor_cpp_CDemonActor_setupRenderState_FUN_004087b0((CDemonActor *)this_ptr);
  (*((this_ptr->base).base.vtable._ub)->getBoundingBox)
            ((CDemonActor *)this_ptr,(CBoundingBox3D *)0x0);
  puVar2 = auStack_50;
  puVar3 = auStack_40;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004207b0(&CStack_38,in_stack_ffffffac);
  if (iVar1 == 0) {
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_004087f0((CDemonActor *)this_ptr);
    return 0;
  }
  fStack_14 = 0.0;
  CStack_20.x = 0.0;
  CStack_20.z = 0.0;
  CStack_20.y = 2.0;
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00483850
            (DAT_00612560,(CVector3f *)&DAT_02c8af28,&CStack_20);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00483850
            (DAT_00612560,(CVector3f *)&fStack_14,(CVector3f *)&DAT_02c8af28);
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0(&this_ptr->model,0.0,-1);
  engine_drender_cpp_pop_FUN_004839a0();
  engine_drender_cpp_pop_FUN_004839a0();
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_004087f0((CDemonActor *)this_ptr);
  return iVar1;
}
