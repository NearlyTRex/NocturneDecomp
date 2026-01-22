// Name: core_zombie.cpp_CZombie_FUN_005fbe70
// Address: 005fbe70
// Address Range: [[005fbe70, 005fbfce]]
// Convention: __cdecl
// Signature: int core_zombie.cpp_CZombie_FUN_005fbe70(CZombie * this_ptr)

#include "nocturne.h"

int __cdecl core_zombie_cpp_CZombie_FUN_005fbe70(CZombie *this_ptr)

{
  CVector3f *pCVar1;
  int iVar2;
  CMatrix3x4f *pCVar3;
  CMatrix3x4f *pCVar4;
  byte bVar5;
  CMatrix3x4f local_f4;
  CMatrix3x4f local_c4;
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
  if ((*(int *)(this_ptr->base_enemy).base_character.field13_0x2620 != 0) &&
     (this_ptr->is_miner_zombie != 0)) {
    core_skeleton_cpp_CDeformableModelInstance_getBoneWorldMatrix_FUN_0059f820
              (&(this_ptr->base_enemy).base_character.model,*(int *)(this_ptr->field4_0xbf48 + 4),
               &local_c4);
    local_70.y = 0.5;
    local_70.z = 0.5;
    pCVar3 = &local_c4;
    pCVar4 = &local_f4;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      pCVar4->m[0].w = pCVar3->m[0].w;
      pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar5 * -2 + 1) * 4);
      pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar5 * -2 + 1) * 4);
    }
    local_70.x = 0.0;
    pCVar1 = core_xform_cpp_transformVector3x4_FUN_005f4dc0(&local_94,&local_70,&local_f4);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              ((CDemonActor *)this_ptr,&local_88,pCVar1);
    local_58.x = 0.0;
    local_58.y = 0.0;
    local_58.z = 0.0;
    pCVar1 = core_xform_cpp_transformVector3x4_FUN_005f4dc0(&local_40,&local_58,&local_f4);
    core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
              ((CDemonActor *)this_ptr,&local_34,pCVar1);
    local_28.x = 0.0;
    local_28.y = 0.0;
    local_28.z = 1.0;
    pCVar1 = core_xform_cpp_transformVector3x4_FUN_005f4dc0(&local_4c,&local_28,&local_f4);
    core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
              ((CDemonActor *)this_ptr,&local_1c,pCVar1);
    local_64.x = local_1c.x - local_34.x;
    local_64.y = local_1c.y - local_34.y;
    local_64.z = local_1c.z - local_34.z;
    core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_7c,&local_64);
    core_dlight_cpp_renderConeLightGeometry_FUN_004760d0(&local_88,(CVector3i *)&local_7c,56.0,6.0);
  }
  if (*(int *)(this_ptr->base_enemy).base_character.field13_0x2620 == 0) {
    return *(int *)(this_ptr->base_enemy).base_character.field13_0x2620;
  }
  core_charactr_cpp_CCharacter_FUN_0042b0e0((CCharacter *)this_ptr);
  return *(int *)(this_ptr->base_enemy).base_character.field13_0x2620;
}
