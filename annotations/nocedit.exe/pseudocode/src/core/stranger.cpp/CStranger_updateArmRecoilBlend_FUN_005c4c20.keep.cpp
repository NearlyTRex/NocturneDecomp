// Name: core_stranger.cpp_CStranger_updateArmRecoilBlend_FUN_005c4c20
// Address: 005c4c20
// MANUAL RECONSTRUCTION
// Address Range: [[005c4c20, 005c516b]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_updateArmRecoilBlend_FUN_005c4c20(CStranger *this_ptr,float delta_time,int is_weapon_active)

#include "nocturne.h"

void __cdecl core_stranger_cpp_CStranger_updateArmRecoilBlend_FUN_005c4c20(CStranger *this_ptr,float delta_time,int is_weapon_active)

{
  EDeathState EVar2;
  ECollisionType EVar3;
  CVector3f *pCVar4;
  CVector3f *pCVar1;
  float fVar2;
  int iVar5;
  float local_f8;
  float local_f4;
  float fStack_f0;
  SCollisionInfo SStack_e4;
  CVector3f local_bc;
  CVector3f local_b0;
  CVector3f local_a4;
  CVector3f local_98;
  CVector3f local_8c;
  CVector3f local_80;
  CVector3f local_74;
  CVector3f local_68;
  CVector3f local_5c;
  CVector3f local_50;
  CVector3f local_44;
  CVector3f local_38 [2];
  CStranger *this_ptr_00;
  float fVar1;
  
  if ((this_ptr->weapon == (CWeapon *)0x0) || (this_ptr->weapon->weapon_type != 0)) {
    is_weapon_active = 0;
  }
  iVar5 = 0;
  local_f8 = 0.0;
  if (is_weapon_active != 0) {
LAB_005c4c51:
    do {
      if (g_CDemonSetPtr->character_count <= iVar5) goto LAB_005c4d62;
      this_ptr_00 = (CStranger *)g_CDemonSetPtr->characters[iVar5];
      core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                ((CDemonActor *)this_ptr,&local_68,&(this_ptr_00->base).base.base.location.position)
      ;
      if (((ABS(local_68.x) <= (float)1.5) &&
          (ABS(local_68.y) <= (float)4)) &&
         ((0.0 <= local_68.z &&
          ((((int)local_68.z < 0x40c00001 && (this_ptr_00 != this_ptr)) &&
           (EVar2 = (*(((this_ptr_00->base).base.base.vtable._uc)->_uc).getDeathState)
                              ((CCharacter *)this_ptr_00), EVar2 == DEATH_STATE_ALIVE)))))) {
        core_setcolid_cpp_SCollisionInfo_ctor_FUN_005743c0(&SStack_e4);
        EVar3 = (*((this_ptr_00->base).base.base.vtable._ub)->getCollisionType)
                          ((CDemonActor *)this_ptr_00,&SStack_e4);
        if ((EVar3 == COLLISION_TYPE_CYLINDER) &&
           (fStack_f0 = 1.0 - ((local_68.z - SStack_e4.cylinder_radius) + (float)-1.5) *
                              (float)0.40000000000000002, local_f8 <= fStack_f0)) {
          if (fStack_f0 < 0.0) {
            fStack_f0 = 0.0;
          }
          local_f8 = fStack_f0;
          iVar5 = iVar5 + 1;
          goto LAB_005c4c51;
        }
      }
      iVar5 = iVar5 + 1;
    } while( true );
  }
LAB_005c50a7:
  if (1.0 < local_f8) {
    local_f8 = 1.0;
  }
  local_f4 = local_f8 - this_ptr->arm_recoil_blend;
  if (0.0 <= local_f4) {
    if ((0.0 < local_f4) && (delta_time / 0.05f < local_f4)) {
      local_f4 = delta_time / 0.05f;
    }
  }
  else {
    fVar2 = -delta_time * (1.0 / 0.5f);
    if (local_f4 < fVar2) {
      local_f4 = fVar2;
    }
  }
  this_ptr->arm_recoil_blend = this_ptr->arm_recoil_blend + local_f4;
  return;
LAB_005c4d62:
  core_setcolid_cpp_CDemonSet_init_FUN_00574180(g_CDemonSetPtr);
  core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,(CDemonActor *)this_ptr);
  local_a4.x = 0.0;
  local_a4.y = 0.0;
  local_a4.z = 3.5;
  pCVar4 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                     ((CDemonActor *)this_ptr,&local_b0,&local_a4);
  if (&local_8c != pCVar4) {
    local_8c.x = pCVar4->x;
    local_8c.y = pCVar4->y;
    local_8c.z = pCVar4->z;
  }
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                     (&(this_ptr->base).base.model,&local_bc,g_StrangerIndices[1]);
  pCVar1 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                     ((CDemonActor *)this_ptr,&local_80,pCVar1);
  if (&local_5c != pCVar1) {
    local_5c.x = pCVar1->x;
    local_5c.y = pCVar1->y;
    local_5c.z = pCVar1->z;
  }
  local_74.x = local_5c.x + local_8c.x;
  local_74.y = local_5c.y + local_8c.y;
  local_74.z = local_5c.z + local_8c.z;
  if (&local_98 != &local_74) {
    local_98.x = local_74.x;
    local_98.y = local_74.y;
    local_98.z = local_74.z;
  }
  fVar2 = core_setcolid_cpp_CDemonSet_raycast_FUN_00572530(g_CDemonSetPtr,&local_5c,&local_98);
  if (((0.0 <= fVar2) && (fVar2 < 1.0)) &&
     (fVar1 = 1.0 - (fVar2 * 3.5 - 1.5) / 2.0, local_f8 < fVar1)) {
    local_f8 = fVar1;
  }
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                     (&(this_ptr->base).base.model,&local_50,g_StrangerIndices[2]);
  pCVar1 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                     ((CDemonActor *)this_ptr,&local_44,pCVar1);
  if (&local_5c != pCVar1) {
    local_5c.x = pCVar1->x;
    local_5c.y = pCVar1->y;
    local_5c.z = pCVar1->z;
  }
  local_38[0].x = local_5c.x + local_8c.x;
  local_38[0].y = local_5c.y + local_8c.y;
  local_38[0].z = local_5c.z + local_8c.z;
  if (&local_98 != local_38) {
    local_98.x = local_38[0].x;
    local_98.y = local_38[0].y;
    local_98.z = local_38[0].z;
  }
  fVar2 = core_setcolid_cpp_CDemonSet_raycast_FUN_00572530(g_CDemonSetPtr,&local_5c,&local_98);
  if (((0.0 <= fVar2) && (fVar2 < 1.0)) &&
     (fVar2 = 1.0 - (fVar2 * 3.5 - 1.5) / 2.0, local_f8 < fVar2)) {
    local_f8 = fVar2;
  }
  core_setcolid_cpp_CDemonSet_init_FUN_00574180(g_CDemonSetPtr);
  goto LAB_005c50a7;
}
