// Name: core_vehicle.cpp_CVehicle_renderOpaque_FUN_0054f510
// Address: 0054f510
// Address Range: [[0054f510, 0054f77a]]
// Convention: __cdecl
// Signature: int __cdecl core_vehicle_cpp_CVehicle_renderOpaque_FUN_0054f510(CVehicle *this_ptr)

#include "nocturne.h"

int __cdecl core_vehicle_cpp_CVehicle_renderOpaque_FUN_0054f510(CVehicle *this_ptr)

{
  CBoundingBox3D *pCVar1;
  int iVar2;
  CVector3f *pCVar3;
  CKeyFramedModelInstance *this_ptr_00;
  CVector3f *position;
  CBoundingBox3D CStack_78;
  CBoundingBox3D local_60;
  CVector3f CStack_48;
  CVector3f CStack_3c;
  CVector3f CStack_30;
  CVector3f CStack_24;
  int iStack_18;
  CVector3f *pCStack_14;
  
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20(&this_ptr->base);
  pCVar1 = (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,&local_60);
  iStack_18 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(pCVar1);
  this_ptr->is_visible = iStack_18;
  if (iStack_18 != 0) {
    iVar2 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090
                      (g_CDemonRenderer_PTR_005ae704);
    if ((iVar2 == 0) || (g_CGame_PTR_005b9354->goggles_active != 0)) {
      core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0
                (&this_ptr->model,0.0,-1);
      iVar2 = 0;
      if (0 < this_ptr->tire_count) {
        this_ptr_00 = &this_ptr->tires[0].model;
        pCStack_14 = &this_ptr->tires[0].spin_angle;
        position = &this_ptr->tires[0].runtime_rotation;
        pCVar3 = &this_ptr->tires[0].runtime_position;
        do {
          engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
                    (g_CDemonRenderer_PTR_005ae704,position,pCVar3);
          engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
                    (g_CDemonRenderer_PTR_005ae704,pCStack_14,(CVector3f *)0x0);
          core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0
                    (this_ptr_00,0.0,-1);
          engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0();
          engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0();
          pCStack_14 = (CVector3f *)&pCStack_14[0x24].y;
          iVar2 = iVar2 + 1;
          pCVar3 = (CVector3f *)&pCVar3[0x24].y;
          position = (CVector3f *)&position[0x24].y;
          this_ptr_00 = (CKeyFramedModelInstance *)(this_ptr_00[1].part_visibility_flags + 0xe);
        } while (iVar2 < this_ptr->tire_count);
      }
    }
    else {
      pCVar1 = (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,&CStack_78);
      core_box_cpp_CBoundingBox3D_render_FUN_0041dcc0(pCVar1);
    }
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(&this_ptr->base);
  if ((this_ptr->is_visible != 0) &&
     (iVar2 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090
                        (g_CDemonRenderer_PTR_005ae704), iVar2 == 0)) {
    CStack_30.z = 6.0;
    CStack_24.z = 6.0;
    CStack_30.x = 1.14;
    CStack_30.y = -0.164;
    CStack_24.x = -1.14;
    CStack_24.y = -0.164;
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(&this_ptr->base,&CStack_48,&CStack_30)
    ;
    core_dlight_cpp_renderConeLightGeometry_FUN_00451b70
              (&CStack_48,&(this_ptr->base).orient.vec,56.0,10.0);
    pCVar3 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                       (&this_ptr->base,&CStack_3c,&CStack_24);
    if (&CStack_48 != pCVar3) {
      CStack_48.x = pCVar3->x;
      CStack_48.y = pCVar3->y;
      CStack_48.z = pCVar3->z;
    }
    core_dlight_cpp_renderConeLightGeometry_FUN_00451b70
              (&CStack_48,&(this_ptr->base).orient.vec,56.0,10.0);
    return iStack_18;
  }
  return iStack_18;
}
