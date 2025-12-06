// Name: core_vehicle.cpp_CVehicle_FUN_005e88c0
// Address: 005e88c0
// Address Range: [[005e88c0, 005e8a11] [005e8a57, 005e8b2a]]
// Convention: __cdecl
// Signature: int core_vehicle.cpp_CVehicle_FUN_005e88c0(CVehicle * this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

int __cdecl core_vehicle_cpp_CVehicle_FUN_005e88c0(CVehicle *this_ptr)

{
  CVector3f *pCVar1;
  CBoundingBox3D *pCVar2;
  int iVar3;
  CVector3i *rotation;
  BADSPACEBASE *in_ESP;
  CKeyFramedModelInstance *this_ptr_00;
  CDemonActor *in_stack_00000008;
  uint uStack0000000c;
  char *in_stack_00000010;
  CVector3i *in_stack_00000014;
  int in_stack_00000020;
  CDemonActor *in_stack_00000024;
  CDemonActor *in_stack_00000028;
  int in_stack_0000002c;
  CDemonActor *in_stack_00000030;
  int in_stack_0000003c;
  float in_stack_ffffffa8;
  float in_stack_ffffffac;
  float in_stack_ffffffb0;
  CVector3f CStack_1c;
  
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(&this_ptr->base_actor);
  pCVar2 = (*in_stack_00000008->vtable->getBoundingBox)
                     (in_stack_00000008,(CBoundingBox3D *)&stack0xffffffa4);
  iVar3 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(pCVar2);
  *(int *)(in_stack_00000020 + 0x106c) = iVar3;
  if (iVar3 != 0) {
    iVar3 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr);
    if ((iVar3 == 0) || (g_CGamePtr->block_auto_save != 0)) {
      core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
                ((CKeyFramedModelInstance *)(in_stack_00000024 + 1),0.0,-1);
      iVar3 = 0;
      if (0 < (int)in_stack_00000028[6].previous_transform_state.position.x) {
        this_ptr_00 = (CKeyFramedModelInstance *)
                      &in_stack_00000028[6].previous_transform_state.dirty_flags;
        in_stack_00000010 = in_stack_00000028[8].actor_name + 0xc;
        pCVar1 = &in_stack_00000028[8].location.position;
        rotation = (CVector3i *)(in_stack_00000028[8].actor_name + 0x18);
        do {
          engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
                    (g_CDemonRendererPtr,(CVector3i *)&pCVar1->y,rotation);
          engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
                    (g_CDemonRendererPtr,in_stack_00000014,(CVector3i *)0x0);
          core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
                    (this_ptr_00,0.0,-1);
          engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
          engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
          in_stack_00000024 = (CDemonActor *)&in_stack_00000024[1].orient_matrix.m[2].z;
          iVar3 = iVar3 + 1;
          rotation = (CVector3i *)&rotation[0x24].y;
          pCVar1 = (CVector3f *)(&pCVar1->y + 0x6c);
          this_ptr_00 = (CKeyFramedModelInstance *)(this_ptr_00[1].part_visibility_flags + 0xe);
        } while (iVar3 < *(int *)(in_stack_0000003c + 0x938));
      }
    }
    else {
      pCVar2 = (*in_stack_00000024->vtable->getBoundingBox)
                         (in_stack_00000024,(CBoundingBox3D *)&stack0xffffffa8);
      core_box_cpp_CBoundingBox3D_render_FUN_004210b0
                (pCVar2,(int)in_stack_ffffffa8,(int)in_stack_ffffffac,(int)in_stack_ffffffb0);
    }
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(in_stack_00000028);
  if ((*(int *)(in_stack_0000002c + 0x106c) != 0) &&
     (iVar3 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr),
     iVar3 == 0)) {
    in_stack_00000010 = (char *)0x40c00000;
    uStack0000000c = 0xbe27ef9e;
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              (in_stack_00000030,&CStack_1c,(CVector3f *)&stack0xfffffffc);
    core_dlight_cpp_renderConeLightGeometry_FUN_004760d0
              ((CVector3f *)&CStack_1c.y,(CVector3i *)&in_stack_00000030->orient,56.0,10.0);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              (in_stack_00000030,(CVector3f *)&stack0xfffffff8,(CVector3f *)&stack0x00000010);
    core_dlight_cpp_renderConeLightGeometry_FUN_004760d0
              ((CVector3f *)&stack0xfffffff0,(CVector3i *)(in_stack_0000003c + 0x30),56.0,10.0);
    return (int)in_stack_00000024;
  }
  return (int)in_stack_00000014;
}
