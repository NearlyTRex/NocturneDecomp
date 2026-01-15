// Name: core_baron.cpp_FUN_004136b0
// Address: 004136b0
// Address Range: [[004136b0, 004139f7]]
// Convention: unknown
// Signature: undefined core_baron.cpp_FUN_004136b0()

#include "nocturne.h"

/* Signature: byte actors_hero_baron.cpp_FUN_004136b0(uint param_1) */

void core_baron_cpp_FUN_004136b0(void)

{
  CDemonActor *this_ptr;
  CVector3f *pCVar1;
  int iVar2;
  int iVar3;
  CDemonActor *in_stack_00000004;
  float volume;
  double dVar4;
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
  
  this_ptr = (CDemonActor *)core_hero_cpp_FUN_004f3960();
  if (this_ptr == (CDemonActor *)0x0) {
    return;
  }
  core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
            (in_stack_00000004,&local_40,&(this_ptr->location).position);
  pCVar1 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_7c,&local_40);
  if (&local_40 != pCVar1) {
    local_40.x = pCVar1->x;
    local_40.y = pCVar1->y;
    local_40.z = pCVar1->z;
  }
  local_40.y = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(local_40.y);
  dVar4 = (double)local_40.y;
  local_14 = local_40.y;
  if ((local_40.y < (float)-0.78539816337500001) || (0.78539816337500001 < dVar4)) {
    core_fire_cpp_CFireEffect_FUN_004c8f50(g_CFireEffectPtr);
    volume = SUB84 /* extract 2-byte value */(dVar4,0);
    core_fire_cpp_CFireEffect_FUN_004c8ea0(g_CFireEffectPtr);
  }
  else {
    crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667(local_148,10,&g_CVectorTypeInfo);
    volume = SUB84 /* extract 2-byte value */(dVar4,0);
    iVar2 = (*this_ptr->vtable->getTargetPoints)(this_ptr,local_148);
    iStack_18 = iVar2;
    iVar3 = crt_stdlib_c_rand_FUN_005feb5c();
    pCVar1 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                       (this_ptr,&CStack_94,local_148 + iVar3 % iVar2);
    if (&CStack_28 != pCVar1) {
      CStack_28.x = pCVar1->x;
      CStack_28.y = pCVar1->y;
      CStack_28.z = pCVar1->z;
    }
    iVar2 = crt_stdlib_c_rand_FUN_005feb5c();
    pCVar1 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                       (this_ptr,&CStack_58,local_148 + iVar2 % iStack_18);
    if (&CStack_4c != pCVar1) {
      CStack_4c.x = pCVar1->x;
      CStack_4c.y = pCVar1->y;
      CStack_4c.z = pCVar1->z;
    }
    pCVar1 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                       (&CStack_64,&g_ZeroVector,
                        (CMatrix3x4f *)&(&in_stack_00000004[0xb].scale)[DAT_008224cc * 4].z);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(in_stack_00000004,&CStack_70,pCVar1);
    pCVar1 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                       (&CStack_88,&g_ZeroVector,
                        (CMatrix3x4f *)&(&in_stack_00000004[0xb].scale)[DAT_008224d0 * 4].z);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(in_stack_00000004,&CStack_34,pCVar1);
    core_fire_cpp_CFireEffect_FUN_004c8fd0(g_CFireEffectPtr);
    core_fire_cpp_CFireEffect_FUN_004c8fd0(g_CFireEffectPtr);
    (*in_stack_00000004->vtable->playSound)(in_stack_00000004,"baron-attack.wav");
  }
  core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_d0);
  local_d0.damage_type = 6;
  local_d0.damage_amount = 100.0;
  local_d0.attacker = in_stack_00000004;
  local_d0.wielder = *(CDemonActor **)(in_stack_00000004[0x17a].create_event + 0x44);
  if (local_d0.wielder == (CDemonActor *)0x0) {
    local_d0.wielder = in_stack_00000004;
  }
  (*this_ptr->vtable[1].playAmbientSoundWithVolume)(this_ptr,(char *)&local_d0,volume);
  this_ptr[0x88].field22_0x120 = 0x40400000;
  return;
}
