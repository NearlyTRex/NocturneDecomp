// Name: core_fire.cpp_CRock_render_FUN_004c1870
// Address: 004c1870
// Address Range: [[004c1870, 004c18f4] [004c18fe, 004c1936]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CRock_render_FUN_004c1870(CRock * this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CRock_render_FUN_004c1870(CRock *this_ptr)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr,(CVector3f *)this_ptr);
  engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_0048c4a0
            (g_CDemonRendererPtr,(CVector3i *)this_ptr->field1_0x38,(CVector3i *)0x0);
  iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0((CBoundingBox3D *)&stack0xffffffe8);
  if (iVar1 != 0) {
    core_set_cpp_CDemonSet_FUN_0056d380(g_CDemonSetPtr);
    core_dmodel_cpp_CKeyFramedModel_prepareForRender_FUN_00477850
              (*(CKeyFramedModel **)(this_ptr->field1_0x38 + 0xc),(CKeyFramedModelInstance *)0x0,0,
               -1);
  }
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  return;
}
