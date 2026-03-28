// Name: core_filmreel.cpp_CFilmProjector_renderOpaque_FUN_004bed00
// Address: 004bed00
// Address Range: [[004bed00, 004bedba]]
// Convention: __cdecl
// Signature: int __cdecl core_filmreel_cpp_CFilmProjector_renderOpaque_FUN_004bed00(CFilmProjector *this_ptr)

#include "nocturne.h"

int __cdecl core_filmreel_cpp_CFilmProjector_renderOpaque_FUN_004bed00(CFilmProjector *this_ptr)

{
  CBoundingBox3D *this_ptr_00;
  int iVar1;
  float fStack_3c;
  CVector3i CStack_24;
  CVector3i CStack_18;
  
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00((CDemonActor *)this_ptr);
  this_ptr_00 = (*((this_ptr->base).base.vtable._ub)->getBoundingBox)
                          ((CDemonActor *)this_ptr,(CBoundingBox3D *)&fStack_3c);
  iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr_00);
  if (iVar1 == 0) {
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40((CDemonActor *)this_ptr);
    return 0;
  }
  CStack_18.x = 0;
  CStack_18.z = (int)this_ptr->reel_rotation;
  CStack_18.y = 0;
  CStack_24.x = 0;
  CStack_24.z = 0;
  CStack_24.y = 0x40000000;
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr2,&g_ZeroVector.i,&CStack_24);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr2,&CStack_18,&g_ZeroVector.i);
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20(&this_ptr->model,0.0,-1);
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0048c640(g_CDemonRendererPtr2);
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0048c640(g_CDemonRendererPtr2);
  fStack_3c = 6.972979e-39;
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40((CDemonActor *)this_ptr);
  return iVar1;
}
