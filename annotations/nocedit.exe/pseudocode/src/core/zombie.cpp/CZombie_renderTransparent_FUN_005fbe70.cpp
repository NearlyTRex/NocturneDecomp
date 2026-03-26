// Name: core_zombie.cpp_CZombie_renderTransparent_FUN_005fbe70
// Address: 005fbe70
// Address Range: [[005fbe70, 005fbfce] [03fc3940, 03fc39a9]]
// Convention: __cdecl
// Signature: int __cdecl core_zombie_cpp_CZombie_renderTransparent_FUN_005fbe70(CZombie *this_ptr)

#include "nocturne.h"

int __cdecl core_zombie_cpp_CZombie_renderTransparent_FUN_005fbe70(CZombie *this_ptr)

{
  CVector3f *pCVar1;
  CVector3f *pCVar2;
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
  
  if (((this_ptr->base).base.was_rendered_opaque != 0) && (this_ptr->is_miner_zombie != 0)) {
    core_skeleton_cpp_CDeformableModelInstance_getBoneWorldMatrix_FUN_0059f820
              (&(this_ptr->base).base.model,this_ptr->bone_indices[0],&local_c4);
    local_70.y = 0.5;
    local_70.z = 0.5;
    local_70.x = 0.0;
    pCVar1 = core_xform_cpp_transformVector3x4_FUN_005f4dc0(&local_94,&local_70,&local_f4);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              ((CDemonActor *)this_ptr,&local_88,pCVar1);
    local_58.x = 0.0;
    local_58.y = 0.0;
    local_58.z = 0.0;
    pCVar2 = core_xform_cpp_transformVector3x4_FUN_005f4dc0(&local_40,&local_58,&local_f4);
    core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
              ((CDemonActor *)this_ptr,&local_34,pCVar2);
    local_28.x = 0.0;
    local_28.y = 0.0;
    local_28.z = 1.0;
    pCVar2 = core_xform_cpp_transformVector3x4_FUN_005f4dc0(&local_4c,&local_28,&local_f4);
    core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
              ((CDemonActor *)this_ptr,&local_1c,pCVar2);
    local_64.x = local_1c.x - local_34.x;
    local_64.y = local_1c.y - local_34.y;
    local_64.z = local_1c.z - local_34.z;
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_7c,&local_64);
    core_dlight_cpp_renderConeLightGeometry_FUN_004760d0(&local_88,(CVector3i *)&local_7c,56.0,6.0);
  }
  if ((this_ptr->base).base.was_rendered_opaque == 0) {
    return (this_ptr->base).base.was_rendered_opaque;
  }
  core_charactr_cpp_CCharacter_renderTransparent_FUN_0042b0e0((CCharacter *)this_ptr);
  return (this_ptr->base).base.was_rendered_opaque;
}
