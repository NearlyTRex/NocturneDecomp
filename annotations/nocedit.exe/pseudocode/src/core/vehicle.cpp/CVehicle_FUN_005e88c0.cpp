// Name: core_vehicle.cpp_CVehicle_FUN_005e88c0
// Address: 005e88c0
// Address Range: [[005e88c0, 005e8a11] [005e8a57, 005e8b2a]]
// Convention: __cdecl
// Signature: int __cdecl core_vehicle_cpp_CVehicle_FUN_005e88c0(CVehicle *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

int __cdecl core_vehicle_cpp_CVehicle_FUN_005e88c0(CVehicle *this_ptr)

{
  CBoundingBox3D *pCVar1;
  float fVar2;
  int iVar3;
  CVector3f *pCVar4;
  CVector3i *rotation;
  CKeyFramedModelInstance *this_ptr_00;
  CDemonActor *in_stack_0000000c;
  float fStack_70;
  float in_stack_ffffff98;
  float in_stack_ffffff9c;
  float in_stack_ffffffa0;
  CVector3f CStack_40;
  CVector3f CStack_34;
  CVector3f CStack_28;
  CVector3f CStack_1c;
  CVector3i *position;
  
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(&this_ptr->base);
  pCVar1 = (*((this_ptr->base).vtable._ub)->getBoundingBox)
                     (&this_ptr->base,(CBoundingBox3D *)&stack0xffffffa0);
  fVar2 = (float)core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(pCVar1);
  in_stack_0000000c[0xc].orient_matrix.m[1].y = fVar2;
  if (fVar2 != 0.0) {
    iVar3 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2);
    if ((iVar3 == 0) || (g_CGamePtr->block_auto_save != 0)) {
      core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
                ((CKeyFramedModelInstance *)(in_stack_0000000c + 1),0.0,-1);
      iVar3 = 0;
      if (0 < (int)in_stack_0000000c[6].previous_transform_state.position.x) {
        this_ptr_00 = (CKeyFramedModelInstance *)
                      &in_stack_0000000c[6].previous_transform_state.dirty_flags;
        position = (CVector3i *)(in_stack_0000000c[8].actor_name + 0xc);
        pCVar4 = &in_stack_0000000c[8].location.position;
        rotation = (CVector3i *)(in_stack_0000000c[8].actor_name + 0x18);
        do {
          engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
                    (g_CDemonRendererPtr2,(CVector3i *)&pCVar4->y,rotation);
          engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
                    (g_CDemonRendererPtr2,position,(CVector3i *)0x0);
          core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
                    (this_ptr_00,0.0,-1);
          engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
          engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
          position = (CVector3i *)&position[0x24].y;
          iVar3 = iVar3 + 1;
          rotation = (CVector3i *)&rotation[0x24].y;
          pCVar4 = (CVector3f *)(&pCVar4->y + 0x6c);
          this_ptr_00 = (CKeyFramedModelInstance *)(this_ptr_00[1].part_visibility_flags + 0xe);
        } while (iVar3 < (int)in_stack_0000000c[6].previous_transform_state.position.x);
      }
    }
    else {
      pCVar1 = (*((in_stack_0000000c->vtable)._ub)->getBoundingBox)
                         (in_stack_0000000c,(CBoundingBox3D *)&fStack_70);
      fStack_70 = 8.681796e-39;
      core_box_cpp_CBoundingBox3D_render_FUN_004210b0
                (pCVar1,(int)in_stack_ffffff98,(int)in_stack_ffffff9c,(int)in_stack_ffffffa0);
    }
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(in_stack_0000000c);
  if ((in_stack_0000000c[0xc].orient_matrix.m[1].y != 0.0) &&
     (iVar3 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2),
     iVar3 == 0)) {
    CStack_28.z = 6.0;
    CStack_1c.z = 6.0;
    CStack_28.x = 1.14;
    CStack_28.y = -0.164;
    CStack_1c.x = -1.14;
    CStack_1c.y = -0.164;
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              (in_stack_0000000c,&CStack_40,&CStack_28);
    core_dlight_cpp_renderConeLightGeometry_FUN_004760d0
              (&CStack_40,(CVector3i *)&in_stack_0000000c->orient,56.0,10.0);
    pCVar4 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                       (in_stack_0000000c,&CStack_34,&CStack_1c);
    if (&CStack_40 != pCVar4) {
      CStack_40.x = pCVar4->x;
      CStack_40.y = pCVar4->y;
      CStack_40.z = pCVar4->z;
    }
    core_dlight_cpp_renderConeLightGeometry_FUN_004760d0
              (&CStack_40,(CVector3i *)&in_stack_0000000c->orient,56.0,10.0);
    return (int)fVar2;
  }
  return (int)fVar2;
}
