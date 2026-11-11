// Name: core_fire.cpp_CLeaf_render_FUN_004968d0
// Address: 004968d0
// Address Range: [[004968d0, 00496988]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CLeaf_render_FUN_004968d0(CLeaf *this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CLeaf_render_FUN_004968d0(CLeaf *this_ptr)

{
  int iVar1;
  CBoundingBox3D *pCVar2;
  CVector3f *pCVar3;
  byte bVar4;
  CVector3f CStack_28;
  CVector3f CStack_1c;
  
  bVar4 = 0;
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0
            (DAT_0060b280,(CVector3f *)this_ptr);
  engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_0046b300
            (DAT_0060b280,&this_ptr->rotation,(CVector3i *)0x0);
  pCVar2 = this_ptr->model->frame_bounds;
  pCVar3 = &CStack_28;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    pCVar3->x = (pCVar2->min).x;
    pCVar2 = (CBoundingBox3D *)((int)pCVar2 + (uint)bVar4 * -8 + 4);
    pCVar3 = (CVector3f *)((int)pCVar3 + ((uint)bVar4 * -2 + 1) * 4);
  }
  iVar1 = core_box_cpp_FUN_0041a840(&CStack_28,0);
  if (iVar1 != 0) {
    core_set_cpp_CDemonSet_setLightingParameters_FUN_00530980
              (g_CDemonSetPtr,(CVector3f *)this_ptr,(UOrientationVector *)&DAT_0265370c,&CStack_28,
               &CStack_1c,(CMatrix3x3f *)0x0);
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0(DAT_0060b280,0xffff);
    core_dmodel_cpp_CKeyFramedModel_prepareForRender_FUN_0044e6a0
              (this_ptr->model,0,(CKeyFramedModelInstance *)0x0,0x2e7);
  }
  engine_matrix_c_pop_FUN_0046b4a0();
  return;
}
