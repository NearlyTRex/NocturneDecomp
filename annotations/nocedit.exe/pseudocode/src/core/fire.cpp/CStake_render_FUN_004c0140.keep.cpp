// Name: core_fire.cpp_CStake_render_FUN_004c0140
// Address: 004c0140
// MANUAL RECONSTRUCTION
// Address Range: [[004c0140, 004c020e]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CStake_render_FUN_004c0140(CStake *this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CStake_render_FUN_004c0140(CStake *this_ptr)

{
  CKeyFramedModel *pCVar1;
  int iVar2;
  CBoundingBox3D local_24;
  CVector3f *orientation;
  
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr2,&(this_ptr->physics_box).position);
  orientation = &(this_ptr->physics_box).orientation;
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr2,orientation,(CVector3f *)0x0);
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                     (&g_FireEffectFlamingStakeModel);
  local_24.min = pCVar1->bounds_min;
  local_24.max = pCVar1->bounds_max;
  iVar2 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(&local_24);
  if (iVar2 != 0) {
    core_set_cpp_CDemonSet_setLightingParameters_FUN_0056d380
              (g_CDemonSetPtr,&(this_ptr->physics_box).position,(UOrientationVector *)orientation,
               &local_24.min,&local_24.max,&(this_ptr->physics_box).rotation_matrix);
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
              (&g_FireEffectFlamingStakeModel,0.0,-1);
  }
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0048c640(g_CDemonRendererPtr2);
  return;
}
