// Name: core_fire.cpp_CStake_render_FUN_004c0140
// Address: 004c0140
// Address Range: [[004c0140, 004c01d2] [004c01dd, 004c020e]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CStake_render_FUN_004c0140(CStake *this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CStake_render_FUN_004c0140(CStake *this_ptr)

{
  CVector3f *orientation;
  CKeyFramedModel *pCVar1;
  int iVar2;
  CBoundingBox3D local_24;
  
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr2,&(this_ptr->physics_box).position);
  orientation = &(this_ptr->physics_box).orientation;
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr2,(CVector3i *)orientation,(CVector3i *)0x0);
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                     (&g_FireEffectFlamingStakeModel);
  local_24.min.x = (pCVar1->bounds_min).x;
  local_24.min.y = (pCVar1->bounds_min).y;
  local_24.min.z = (pCVar1->bounds_min).z;
  local_24.max.x = (pCVar1->bounds_max).x;
  local_24.max.y = (pCVar1->bounds_max).y;
  local_24.max.z = (pCVar1->bounds_max).z;
  iVar2 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(&local_24);
  if (iVar2 != 0) {
    core_set_cpp_CDemonSet_setLightingParameters_FUN_0056d380
              (g_CDemonSetPtr,&(this_ptr->physics_box).position,(UOrientationVector *)orientation,
               &local_24.min,&local_24.max,&(this_ptr->physics_box).rotation_matrix);
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
              (&g_FireEffectFlamingStakeModel,0.0,-1);
  }
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  return;
}
