// Name: core_vehicle.cpp_CVehicle_renderOpaque_FUN_005e88c0
// Address: 005e88c0
// MANUAL RECONSTRUCTION
// Address Range: [[005e88c0, 005e8a11] [005e8a57, 005e8b2a]]
// Convention: __cdecl
// Signature: int __cdecl core_vehicle_cpp_CVehicle_renderOpaque_FUN_005e88c0(CVehicle *this_ptr)

#include "nocturne.h"

int __cdecl core_vehicle_cpp_CVehicle_renderOpaque_FUN_005e88c0(CVehicle *this_ptr)

{
  CBoundingBox3D *pCVar1;
  CBoundingBox3D local_78;
  int iVar2;
  int iVar3;
  CVector3f *pCVar4;
  CBoundingBox3D local_60;
  CVector3f CStack_48;
  CVector3f CStack_3c;
  CVector3f CStack_30;
  CVector3f CStack_24;

  core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(&this_ptr->base);
  pCVar1 = (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,&local_60);
  iVar2 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(pCVar1);
  this_ptr->is_visible = iVar2;
  if (iVar2 != 0) {
    iVar3 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2);
    if ((iVar3 == 0) || (g_CGamePtr->goggles_active != 0)) {
      core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
                (&this_ptr->model,0.0,-1);
      for (iVar3 = 0; iVar3 < this_ptr->tire_count; iVar3 = iVar3 + 1) {
        engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
                  (g_CDemonRendererPtr2,
                   &this_ptr->tires[iVar3].runtime_rotation,
                   &this_ptr->tires[iVar3].runtime_position);
        engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
                  (g_CDemonRendererPtr2,
                   &this_ptr->tires[iVar3].spin_angle,
                   (CVector3f *)0x0);
        core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
                  (&this_ptr->tires[iVar3].model,0.0,-1);
        engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0048c640(g_CDemonRendererPtr2);
        engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0048c640(g_CDemonRendererPtr2);
      }
    }
    else {
      pCVar1 = (*((this_ptr->base).vtable._ub)->getBoundingBox)
                         (&this_ptr->base,&local_78);
      core_box_cpp_CBoundingBox3D_render_FUN_004210b0(pCVar1);
    }
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(&this_ptr->base);
  if ((this_ptr->is_visible != 0) &&
     (iVar3 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2),
     iVar3 == 0)) {
    CStack_30.x = 1.14;
    CStack_30.y = -0.164;
    CStack_30.z = 6.0;
    CStack_24.x = -1.14;
    CStack_24.y = -0.164;
    CStack_24.z = 6.0;
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(&this_ptr->base,&CStack_48,&CStack_30);
    core_dlight_cpp_renderConeLightGeometry_FUN_004760d0
              (&CStack_48,&(this_ptr->base).orient.vec,56.0,10.0);
    pCVar4 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                       (&this_ptr->base,&CStack_3c,&CStack_24);
    CStack_48 = *pCVar4;
    core_dlight_cpp_renderConeLightGeometry_FUN_004760d0
              (&CStack_48,&(this_ptr->base).orient.vec,56.0,10.0);
  }
  return iVar2;
}
