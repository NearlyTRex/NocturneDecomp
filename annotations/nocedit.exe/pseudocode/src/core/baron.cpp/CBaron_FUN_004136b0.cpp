// Name: core_baron.cpp_CBaron_FUN_004136b0
// Address: 004136b0
// Address Range: [[004136b0, 004139f7]]
// Convention: __cdecl
// Signature: void __cdecl core_baron_cpp_CBaron_FUN_004136b0(CBaron *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_baron_cpp_CBaron_FUN_004136b0(CBaron *this_ptr)

{
  CCharacter *this_ptr_00;
  CVector3f *pCVar1;
  int iVar2;
  int iVar3;
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
  int iStack_18;
  float local_14;
  
  this_ptr_00 = (CCharacter *)core_hero_cpp_CHero_FUN_004f3960(&this_ptr->base);
  if (this_ptr_00 == (CCharacter *)0x0) {
    return;
  }
  core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
            ((CDemonActor *)this_ptr,&local_40,&(this_ptr_00->base).location.position);
  pCVar1 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_7c,&local_40);
  if (&local_40 != pCVar1) {
    local_40.x = pCVar1->x;
    local_40.y = pCVar1->y;
    local_40.z = pCVar1->z;
  }
  local_40.y = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(local_40.y);
  local_14 = local_40.y;
  if ((local_40.y < (float)-0.78539816337500001) || (0.78539816337500001 < (double)local_40.y)) {
    core_fire_cpp_CFireEffect_FUN_004c8f50(g_CFireEffectPtr);
    core_fire_cpp_CFireEffect_FUN_004c8ea0(g_CFireEffectPtr);
  }
  else {
    __arrinit(local_148,10,&g_CVectorTypeInfo);
    iVar2 = (*((this_ptr_00->base).vtable._ub)->getTargetPoints)
                      ((CDemonActor *)this_ptr_00,local_148);
    iStack_18 = iVar2;
    iVar3 = rand();
    pCVar1 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                       ((CDemonActor *)this_ptr_00,&CStack_94,local_148 + iVar3 % iVar2);
    if (&CStack_28 != pCVar1) {
      CStack_28.x = pCVar1->x;
      CStack_28.y = pCVar1->y;
      CStack_28.z = pCVar1->z;
    }
    iVar2 = rand();
    pCVar1 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                       ((CDemonActor *)this_ptr_00,&CStack_58,local_148 + iVar2 % iStack_18);
    if (&CStack_4c != pCVar1) {
      CStack_4c.x = pCVar1->x;
      CStack_4c.y = pCVar1->y;
      CStack_4c.z = pCVar1->z;
    }
    pCVar1 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                       (&CStack_64,&g_ZeroVector,
                        (this_ptr->base).base.model.bone_transform.bone_world_matrices +
                        INT_008224cc);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              ((CDemonActor *)this_ptr,&CStack_70,pCVar1);
    pCVar1 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                       (&CStack_88,&g_ZeroVector,
                        (this_ptr->base).base.model.bone_transform.bone_world_matrices +
                        INT_008224d0);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              ((CDemonActor *)this_ptr,&CStack_34,pCVar1);
    core_fire_cpp_CFireEffect_FUN_004c8fd0(g_CFireEffectPtr);
    core_fire_cpp_CFireEffect_FUN_004c8fd0(g_CFireEffectPtr);
    (*((this_ptr->base).base.base.vtable._ub)->playSound)
              ((CDemonActor *)this_ptr,"baron-attack.wav");
  }
  core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_d0);
  local_d0.gore_multiplier = 8.40779e-45;
  local_d0.damage_amount = 100.0;
  local_d0.attacker = (CDemonActor *)this_ptr;
  local_d0.wielder = (CDemonActor *)this_ptr->unk5;
  if ((CBaron *)local_d0.wielder == (CBaron *)0x0) {
    local_d0.wielder = (CDemonActor *)this_ptr;
  }
  (*(((this_ptr_00->base).vtable._uc)->_uc).processDamage)(this_ptr_00,&local_d0);
  this_ptr_00->stagger_amount = 3.0;
  return;
}
