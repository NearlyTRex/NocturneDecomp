// Name: core_fire.cpp_CRock_render_FUN_004c1870
// Address: 004c1870
// MANUAL RECONSTRUCTION
// Address Range: [[004c1870, 004c1936]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CRock_render_FUN_004c1870(CRock *this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CRock_render_FUN_004c1870(CRock *this_ptr)

{
  int iVar2;
  CBoundingBox3D local_20;
  CVector3f *pCVar1;
  
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr2,(CVector3f *)this_ptr);
  engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_0048c4a0
            (g_CDemonRendererPtr2,&this_ptr->rotation,(CVector3i *)0x0);
  local_20 = *this_ptr->model_ptr->frame_bounds;
  iVar2 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(&local_20);
  if (iVar2 != 0) {
    core_set_cpp_CDemonSet_setLightingParameters_FUN_0056d380
              (g_CDemonSetPtr,(CVector3f *)this_ptr,(UOrientationVector *)&g_ZeroVector,
               &local_20.min,&local_20.max,(CMatrix3x3f *)0x0);
    core_dmodel_cpp_CKeyFramedModel_prepareForRender_FUN_00477850
              (this_ptr->model_ptr,0,(CKeyFramedModelInstance *)0x0,-1);
  }
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0048c640(g_CDemonRendererPtr2);
  return;
}
