// Name: core_zombie.cpp_FUN_00561940
// Address: 00561940
// Address Range: [[00561940, 00561a9e]]
// Convention: unknown
// Signature: int core_zombie_cpp_FUN_00561940(CCharacter *param_1)

#include "nocturne.h"

int core_zombie_cpp_FUN_00561940(CCharacter *param_1)

{
  CVector3f *pCVar1;
  int iVar2;
  float *pfVar3;
  CMatrix3x4f *pCVar4;
  byte bVar5;
  CMatrix3x4f local_f4;
  float local_c4 [12];
  CVector3f local_94;
  CVector3f local_88;
  CVector3f local_7c;
  CVector3f local_70;
  CVector3f local_64;
  CVector3f local_58;
  CVector3f local_4c;
  CVector3f local_40;
  CVector3f local_34;
  CVector3f local_28;
  CVector3f local_1c;
  
  bVar5 = 0;
  if ((param_1->was_rendered_opaque != 0) && (*(int *)param_1[1].base.footstep_sound_code != 0)) {
    core_skeleton_cpp_CDeformableModelInstance_getBoneWorldMatrix_FUN_0051d0a0
              (&param_1->model,param_1[1].base.previous_transform_state.position.x);
    local_70.y = 0.5;
    local_70.z = 0.5;
    pfVar3 = local_c4;
    pCVar4 = &local_f4;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      pCVar4->m[0].w = *pfVar3;
      pfVar3 = pfVar3 + (uint)bVar5 * -2 + 1;
      pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar5 * -2 + 1) * 4);
    }
    local_70.x = 0.0;
    pCVar1 = core_xform_cpp_transformVector3x4_FUN_0055a8b0(&local_94,&local_70,&local_f4);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(&param_1->base,&local_88,pCVar1);
    local_58.x = 0.0;
    local_58.y = 0.0;
    local_58.z = 0.0;
    pCVar1 = core_xform_cpp_transformVector3x4_FUN_0055a8b0(&local_40,&local_58,&local_f4);
    core_actor_cpp_CDemonActor_transformVector_FUN_0040a200(&param_1->base,&local_34,pCVar1);
    local_28.x = 0.0;
    local_28.y = 0.0;
    local_28.z = 1.0;
    pCVar1 = core_xform_cpp_transformVector3x4_FUN_0055a8b0(&local_4c,&local_28,&local_f4);
    core_actor_cpp_CDemonActor_transformVector_FUN_0040a200(&param_1->base,&local_1c,pCVar1);
    local_64.x = local_1c.x - local_34.x;
    local_64.y = local_1c.y - local_34.y;
    local_64.z = local_1c.z - local_34.z;
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(&local_7c,&local_64);
    core_dlight_cpp_renderConeLightGeometry_FUN_00451b70(&local_88,&local_7c,56.0,6.0);
  }
  if (param_1->was_rendered_opaque == 0) {
    return param_1->was_rendered_opaque;
  }
  core_charactr_cpp_CCharacter_renderTransparent_FUN_00427260(param_1);
  return param_1->was_rendered_opaque;
}
