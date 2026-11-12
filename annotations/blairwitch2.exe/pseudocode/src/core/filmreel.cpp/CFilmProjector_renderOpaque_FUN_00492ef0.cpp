// Name: core_filmreel.cpp_CFilmProjector_renderOpaque_FUN_00492ef0
// Address: 00492ef0
// Address Range: [[00492ef0, 00492fe6]]
// Convention: __cdecl
// Signature: int __cdecl core_filmreel_cpp_CFilmProjector_renderOpaque_FUN_00492ef0(CFilmProjector *this_ptr)

#include "nocturne.h"

int __cdecl core_filmreel_cpp_CFilmProjector_renderOpaque_FUN_00492ef0(CFilmProjector *this_ptr)

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
  core_actor_cpp_CDemonActor_setupRenderState_FUN_004089d0((CDemonActor *)this_ptr);
  (*((this_ptr->base).base.vtable._ub)->getBoundingBox)
            ((CDemonActor *)this_ptr,(CBoundingBox3D *)0x0);
  puVar2 = auStack_58;
  puVar3 = auStack_40;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  iVar1 = core_box_cpp_FUN_0041a840(auStack_40);
  if (iVar1 == 0) {
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408a10((CDemonActor *)this_ptr);
    return 0;
  }
  CStack_1c.x = 0.0;
  CStack_1c.z = this_ptr->reel_rotation;
  CStack_1c.y = 0.0;
  CStack_28.x = 0.0;
  CStack_28.z = 0.0;
  CStack_28.y = 2.0;
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
            (DAT_0060b280,(CVector3f *)&DAT_0265370c,&CStack_28);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
            (DAT_0060b280,&CStack_1c,(CVector3f *)&DAT_0265370c);
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0(&this_ptr->model,0.0,-1);
  engine_drender_cpp_pop_FUN_0046b4a0();
  engine_drender_cpp_pop_FUN_0046b4a0();
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408a10((CDemonActor *)this_ptr);
  return iVar1;
}
