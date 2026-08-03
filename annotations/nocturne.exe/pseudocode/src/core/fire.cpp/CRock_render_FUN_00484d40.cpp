// Name: core_fire.cpp_CRock_render_FUN_00484d40
// Address: 00484d40
// Address Range: [[00484d40, 00484e0a]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CRock_render_FUN_00484d40(CRock *this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CRock_render_FUN_00484d40(CRock *this_ptr)

{
  CBoundingBox3D *pCVar1;
  int iVar2;
  CBoundingBox3D local_20;
  
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
            (DAT_005ae704,(CVector3f *)this_ptr);
  engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_00460a50
            (DAT_005ae704,&this_ptr->rotation,(CVector3i *)0x0);
  pCVar1 = this_ptr->model_ptr->frame_bounds;
  local_20.min.x = (pCVar1->min).x;
  local_20.min.y = (pCVar1->min).y;
  local_20.min.z = (pCVar1->min).z;
  local_20.max.x = (pCVar1->max).x;
  local_20.max.y = (pCVar1->max).y;
  local_20.max.z = (pCVar1->max).z;
  iVar2 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(&local_20);
  if (iVar2 != 0) {
    core_set_cpp_CDemonSet_setLightingParameters_FUN_0050adc0
              (g_CDemonSet_PTR_005be368,(CVector3f *)this_ptr,(UOrientationVector *)&DAT_02dd1184,
               &local_20.min,&local_20.max,(CMatrix3x3f *)0x0);
    core_dmodel_cpp_CKeyFramedModel_prepareForRender_FUN_00453040
              (this_ptr->model_ptr,0,(CKeyFramedModelInstance *)0x0,-1);
  }
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0();
  return;
}
