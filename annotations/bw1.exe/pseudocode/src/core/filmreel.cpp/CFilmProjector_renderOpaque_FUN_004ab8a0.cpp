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
  uint auStack_58 [6];
  uint auStack_40 [6];
  CVector3f CStack_28;
  CVector3f CStack_1c;
  
  bVar4 = 0;
  core_actor_cpp_CDemonActor_setupRenderState_FUN_004087b0((CDemonActor *)this_ptr);
  (*((this_ptr->base).base.vtable._ub)->getBoundingBox)
            ((CDemonActor *)this_ptr,(CBoundingBox3D *)0x0);
  puVar2 = auStack_58;
  puVar3 = auStack_40;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  iVar1 = core_box_cpp_FUN_004207b0(auStack_40);
  if (iVar1 == 0) {
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_004087f0((CDemonActor *)this_ptr);
    return 0;
  }
  CStack_1c.x = 0.0;
  CStack_1c.z = this_ptr->reel_rotation;
  CStack_1c.y = 0.0;
  CStack_28.x = 0.0;
  CStack_28.z = 0.0;
  CStack_28.y = 2.0;
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00483850
            (DAT_00612560,(CVector3f *)&DAT_02c8af28,&CStack_28);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00483850
            (DAT_00612560,&CStack_1c,(CVector3f *)&DAT_02c8af28);
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0(&this_ptr->model,0.0,-1);
  engine_drender_cpp_pop_FUN_004839a0();
  engine_drender_cpp_pop_FUN_004839a0();
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_004087f0((CDemonActor *)this_ptr);
  return iVar1;
}
