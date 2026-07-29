// Name: core_fire.cpp_CRock_render_FUN_00484d40
// Address: 00484d40
// Address Range: [[00484d40, 00484e0a]]
// Convention: unknown
// Signature: void core_fire_cpp_CRock_render_FUN_00484d40(CVector3f *param_1)

#include "nocturne.h"

void core_fire_cpp_CRock_render_FUN_00484d40(CVector3f *param_1)

{
  float *pfVar1;
  int iVar2;
  CBoundingBox3D local_20;
  
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00(DAT_005ae704,param_1);
  engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_00460a50
            (DAT_005ae704,(CVector3i *)&param_1[4].z,(CVector3i *)0x0);
  pfVar1 = *(float **)((int)param_1[5].z + 0x350);
  local_20.min.x = *pfVar1;
  local_20.min.y = pfVar1[1];
  local_20.min.z = pfVar1[2];
  local_20.max.x = pfVar1[3];
  local_20.max.y = pfVar1[4];
  local_20.max.z = pfVar1[5];
  iVar2 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(&local_20);
  if (iVar2 != 0) {
    core_set_cpp_CDemonSet_setLightingParameters_FUN_0050adc0
              (0x01E57284,param_1,(UOrientationVector *)&DAT_02dd1184,&local_20.min,&local_20.max,
               (CMatrix3x3f *)0x0);
    core_dmodel_cpp_CKeyFramedModel_prepareForRender_FUN_00453040
              ((CKeyFramedModel *)param_1[5].z,0,(CKeyFramedModelInstance *)0x0,-1);
  }
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0();
  return;
}
