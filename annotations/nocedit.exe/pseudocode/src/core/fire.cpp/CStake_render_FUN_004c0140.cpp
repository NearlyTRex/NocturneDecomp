// Name: core_fire.cpp_CStake_render_FUN_004c0140
// Address: 004c0140
// Address Range: [[004c0140, 004c01d2] [004c01dd, 004c020e]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CStake_render_FUN_004c0140(CStake * this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CStake_render_FUN_004c0140(CStake *this_ptr)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr,&(this_ptr->box).position);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr,(CVector3i *)&(this_ptr->box).orientation,(CVector3i *)0x0);
  core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(&g_FireEffectFlamingStakeModel);
  iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0((CBoundingBox3D *)&stack0xffffffe8);
  if (iVar1 != 0) {
    core_set_cpp_CDemonSet_FUN_0056d380(g_CDemonSetPtr);
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
              (&g_FireEffectFlamingStakeModel,0.0,-1);
  }
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  return;
}
