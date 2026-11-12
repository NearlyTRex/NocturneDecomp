// Name: core_fire.cpp_CStake_render_FUN_00497dc0
// Address: 00497dc0
// Address Range: [[00497dc0, 00497e72]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CStake_render_FUN_00497dc0(CStake *this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CStake_render_FUN_00497dc0(CStake *this_ptr)

{
  CKeyFramedModel *pCVar1;
  int iVar2;
  CVector3f *orientation;
  CBoundingBox3D *pCVar3;
  CVector3f *pCVar4;
  byte bVar5;
  CVector3f local_28;
  CVector3f local_1c;
  
  bVar5 = 0;
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90
            (DAT_005f2afc,&(this_ptr->physics_box).position);
  orientation = &(this_ptr->physics_box).orientation;
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30
            (DAT_005f2afc,orientation,(CVector3f *)0x0);
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0
                     ((CKeyFramedModelInstance *)0x1c73698);
  pCVar3 = &pCVar1->bounds;
  pCVar4 = &local_28;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    pCVar4->x = (pCVar3->min).x;
    pCVar3 = (CBoundingBox3D *)((int)pCVar3 + (uint)bVar5 * -8 + 4);
    pCVar4 = (CVector3f *)((int)pCVar4 + ((uint)bVar5 * -2 + 1) * 4);
  }
  iVar2 = core_box_cpp_FUN_0041daf0(&local_28,0);
  if (iVar2 != 0) {
    core_set_cpp_CDemonSet_setLightingParameters_FUN_005375c0
              (g_CDemonSetPtr,&(this_ptr->physics_box).position,(UOrientationVector *)orientation,
               &local_28,&local_1c,&(this_ptr->physics_box).rotation_matrix);
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540
              ((CKeyFramedModelInstance *)0x1c73698,0.0,-1);
  }
  engine_drender_cpp_pop_FUN_0046d080();
  return;
}
