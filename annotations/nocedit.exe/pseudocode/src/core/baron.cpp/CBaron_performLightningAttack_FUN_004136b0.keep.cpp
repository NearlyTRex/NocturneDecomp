// Name: core_baron.cpp_CBaron_performLightningAttack_FUN_004136b0
// Address: 004136b0
// MANUAL RECONSTRUCTION
// Address Range: [[004136b0, 004139f7]]
// Convention: __cdecl
// Signature: void __cdecl core_baron_cpp_CBaron_performLightningAttack_FUN_004136b0(CBaron *this_ptr)

#include "nocturne.h"

void __cdecl core_baron_cpp_CBaron_performLightningAttack_FUN_004136b0(CBaron *this_ptr)

{
  CLocation *start_position_00;
  CEnemy *this_ptr_00;
  CVector3f *pCVar1;
  int iVar2;
  int iVar3;
  CVector3f *pCVar2;
  int iVar4;
  CVector3f local_148 [10];
  SDamageInfo local_d0;
  CVector3f CStack_94;
  CVector3f CStack_88;
  CVector3f local_7c;
  CVector3f CStack_70;
  CVector3f CStack_64;
  CVector3f CStack_58;
  CVector3f CStack_4c;
  CVector3f local_40;
  CVector3f CStack_34;
  CVector3f CStack_28;
  float local_1c;
  int iStack_18;
  float local_14;

  this_ptr_00 = core_hero_cpp_CHero_closestEnemy_FUN_004f3960(&this_ptr->base,&local_1c);
  if (this_ptr_00 == (CEnemy *)0x0) {
    return;
  }
  core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
            ((CDemonActor *)this_ptr,&local_40,&(this_ptr_00->base).base.location.position);
  pCVar1 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_7c,&local_40);
  if (&local_40 != pCVar1) {
    local_40.x = pCVar1->x;
    local_40.y = pCVar1->y;
    local_40.z = pCVar1->z;
  }
  local_40.y = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(local_40.y);
  local_14 = local_40.y;
  if ((local_40.y < (float)-0.78539816337500001) || (0.78539816337500001 < (double)local_40.y)) {
    start_position_00 = &(this_ptr_00->base).base.location;
    core_fire_cpp_CFireEffect_createLightningBolt_FUN_004c8f50
              (g_CFireEffectPtr,&start_position_00->position,16.0,1,0.0);
    core_fire_cpp_CFireEffect_createCrater_FUN_004c8ea0
              (g_CFireEffectPtr,&start_position_00->position,4.0);
  }
  else {
    __arrinit(local_148,10,&g_CVectorTypeInfo);
    iVar2 = (*((this_ptr_00->base).base.vtable._ub)->getTargetPoints)
                      ((CDemonActor *)this_ptr_00,local_148);
    iStack_18 = iVar2;
    iVar3 = rand();
    pCVar2 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                       ((CDemonActor *)this_ptr_00,&CStack_94,local_148 + iVar3 % iVar2);
    if (&CStack_28 != pCVar2) {
      CStack_28.x = pCVar2->x;
      CStack_28.y = pCVar2->y;
      CStack_28.z = pCVar2->z;
    }
    iVar4 = rand();
    pCVar2 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                       ((CDemonActor *)this_ptr_00,&CStack_58,local_148 + iVar4 % iStack_18);
    if (&CStack_4c != pCVar2) {
      CStack_4c.x = pCVar2->x;
      CStack_4c.y = pCVar2->y;
      CStack_4c.z = pCVar2->z;
    }
    pCVar2 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                       (&CStack_64,&g_ZeroVector.f,
                        (this_ptr->base).base.model.bone_transform.bone_world_matrices +
                        g_BaronIndices[0xd]);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              ((CDemonActor *)this_ptr,&CStack_70,pCVar2);
    pCVar2 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                       (&CStack_88,&g_ZeroVector.f,
                        (this_ptr->base).base.model.bone_transform.bone_world_matrices +
                        g_BaronIndices[0xe]);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              ((CDemonActor *)this_ptr,&CStack_34,pCVar2);
    core_fire_cpp_CFireEffect_createLightningBoltDirectional_FUN_004c8fd0
              (g_CFireEffectPtr,&CStack_70,&CStack_28,1,0.5,4.0);
    core_fire_cpp_CFireEffect_createLightningBoltDirectional_FUN_004c8fd0
              (g_CFireEffectPtr,&CStack_34,&CStack_28,1,0.5,4.0);
    (*((this_ptr->base).base.base.vtable._ub)->playSound)
              ((CDemonActor *)this_ptr,"baron-attack.wav");
  }
  core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_d0);
  local_d0.damage_type = DAMAGE_TYPE_ELECTROCUTE;
  local_d0.damage_amount = 100.0;
  local_d0.attacker = (CDemonActor *)this_ptr;
  local_d0.wielder = this_ptr->target_actor;
  if (local_d0.wielder == (CDemonActor *)0x0) {
    local_d0.wielder = (CDemonActor *)this_ptr;
  }
  (*(((this_ptr_00->base).base.vtable._uc)->_uc).processDamage)(&this_ptr_00->base,&local_d0);
  (this_ptr_00->base).stagger_amount = 3.0;
  return;
}
