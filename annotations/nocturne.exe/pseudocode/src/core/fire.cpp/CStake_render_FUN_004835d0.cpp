// Name: core_fire.cpp_CStake_render_FUN_004835d0
// Address: 004835d0
// Address Range: [[004835d0, 004836a2]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CStake_render_FUN_004835d0(CStake *this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CStake_render_FUN_004835d0(CStake *this_ptr)

{
  CVector3f *orientation;
  CKeyFramedModel *pCVar1;
  int iVar2;
  CBoundingBox3D local_24;
  
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
            (DAT_005ae704,&(this_ptr->physics_box).position);
  orientation = &(this_ptr->physics_box).orientation;
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
            (DAT_005ae704,orientation,(CVector3f *)0x0);
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530
                     (&g_CKeyFramedModelInstance_01c08d48);
  local_24.min.x = (pCVar1->bounds).min.x;
  local_24.min.y = (pCVar1->bounds).min.y;
  local_24.min.z = (pCVar1->bounds).min.z;
  local_24.max.x = (pCVar1->bounds).max.x;
  local_24.max.y = (pCVar1->bounds).max.y;
  local_24.max.z = (pCVar1->bounds).max.z;
  iVar2 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(&local_24);
  if (iVar2 != 0) {
    core_set_cpp_CDemonSet_setLightingParameters_FUN_0050adc0
              (g_CDemonSet_PTR_005be368,&(this_ptr->physics_box).position,
               (UOrientationVector *)orientation,&local_24.min,&local_24.max,
               &(this_ptr->physics_box).rotation_matrix);
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0
              (&g_CKeyFramedModelInstance_01c08d48,0.0,-1);
  }
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0();
  return;
}
