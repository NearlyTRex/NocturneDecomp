// Name: core_vehicle.cpp_CVehicle_renderOpaque_FUN_0054f510
// Address: 0054f510
// Address Range: [[0054f510, 0054f77a]]
// Convention: unknown
// Signature: int core_vehicle_cpp_CVehicle_renderOpaque_FUN_0054f510(CDemonActor *param_1)

#include "nocturne.h"

int core_vehicle_cpp_CVehicle_renderOpaque_FUN_0054f510(CDemonActor *param_1)

{
  CBoundingBox3D *pCVar1;
  int iVar2;
  CVector3f *pCVar3;
  CKeyFramedModelInstance *this_ptr;
  CVector3f *position;
  CBoundingBox3D CStack_78;
  CBoundingBox3D local_60;
  CVector3f CStack_48;
  CVector3f CStack_3c;
  CVector3f CStack_30;
  CVector3f CStack_24;
  int iStack_18;
  CVector3f *pCStack_14;
  
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20(param_1);
  pCVar1 = (*((param_1->vtable)._ub)->getBoundingBox)(param_1,&local_60);
  iStack_18 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(pCVar1);
  *(int *)(param_1[0xc].create_event + 0x2c) = iStack_18;
  if (iStack_18 != 0) {
    iVar2 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090(DAT_005ae704);
    if ((iVar2 == 0) || (*(int *)(0x01C775EC + 0x240) != 0)) {
      core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0
                ((CKeyFramedModelInstance *)(param_1 + 1),0.0,-1);
      iVar2 = 0;
      if (0 < *(int *)param_1[7].actor_name) {
        this_ptr = (CKeyFramedModelInstance *)(param_1[7].actor_name + 0x18);
        pCStack_14 = (CVector3f *)&param_1[8].orient_matrix.m[0].z;
        position = (CVector3f *)&param_1[8].orient_matrix.m[2].z;
        pCVar3 = (CVector3f *)&param_1[8].orient_matrix.m[1].z;
        do {
          engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
                    (DAT_005ae704,position,pCVar3);
          engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
                    (DAT_005ae704,pCStack_14,(CVector3f *)0x0);
          core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0(this_ptr,0.0,-1);
          engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0();
          engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0();
          pCStack_14 = (CVector3f *)&pCStack_14[0x24].y;
          iVar2 = iVar2 + 1;
          pCVar3 = (CVector3f *)&pCVar3[0x24].y;
          position = (CVector3f *)&position[0x24].y;
          this_ptr = (CKeyFramedModelInstance *)(this_ptr[1].part_visibility_flags + 0xe);
        } while (iVar2 < *(int *)param_1[7].actor_name);
      }
    }
    else {
      pCVar1 = (*((param_1->vtable)._ub)->getBoundingBox)(param_1,&CStack_78);
      core_box_cpp_CBoundingBox3D_render_FUN_0041dcc0(pCVar1);
    }
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(param_1);
  if ((*(int *)(param_1[0xc].create_event + 0x2c) != 0) &&
     (iVar2 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090(DAT_005ae704), iVar2 == 0)
     ) {
    CStack_30.z = 6.0;
    CStack_24.z = 6.0;
    CStack_30.x = 1.14;
    CStack_30.y = -0.164;
    CStack_24.x = -1.14;
    CStack_24.y = -0.164;
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(param_1,&CStack_48,&CStack_30);
    core_dlight_cpp_renderConeLightGeometry_FUN_00451b70
              (&CStack_48,&(param_1->orient).vec,56.0,10.0);
    pCVar3 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                       (param_1,&CStack_3c,&CStack_24);
    if (&CStack_48 != pCVar3) {
      CStack_48.x = pCVar3->x;
      CStack_48.y = pCVar3->y;
      CStack_48.z = pCVar3->z;
    }
    core_dlight_cpp_renderConeLightGeometry_FUN_00451b70
              (&CStack_48,&(param_1->orient).vec,56.0,10.0);
    return iStack_18;
  }
  return iStack_18;
}
