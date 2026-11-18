// Name: core_fire.cpp_CRock_render_FUN_004966a0
// Address: 004966a0
// Address Range: [[004966a0, 00496742]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CRock_render_FUN_004966a0(CRock *this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CRock_render_FUN_004966a0(CRock *this_ptr)

{
  int iVar1;
  CBoundingBox3D *pCVar2;
  CBoundingBox3D *pCVar3;
  byte bVar4;
  CBoundingBox3D CStack_28;
  
  bVar4 = 0;
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0
            (g_CDemonRenderer_PTR_0060b280,(CVector3f *)this_ptr);
  engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_0046b300
            (g_CDemonRenderer_PTR_0060b280,&this_ptr->rotation,(CVector3i *)0x0);
  pCVar2 = this_ptr->model_ptr->frame_bounds;
  pCVar3 = &CStack_28;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    (pCVar3->min).x = (pCVar2->min).x;
    pCVar2 = (CBoundingBox3D *)((int)pCVar2 + (uint)bVar4 * -8 + 4);
    pCVar3 = (CBoundingBox3D *)((int)pCVar3 + ((uint)bVar4 * -2 + 1) * 4);
  }
  iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041a840(&CStack_28,0);
  if (iVar1 != 0) {
    core_set_cpp_CDemonSet_setLightingParameters_FUN_00530980
              (g_CDemonSetPtr,(CVector3f *)this_ptr,(UOrientationVector *)&g_ZeroVector,
               &CStack_28.min,&CStack_28.max,(CMatrix3x3f *)0x0);
    core_dmodel_cpp_CKeyFramedModel_prepareForRender_FUN_0044e6a0
              (this_ptr->model_ptr,0,(CKeyFramedModelInstance *)0x0,-1);
  }
  engine_drender_cpp_pop_FUN_0046b4a0();
  return;
}
