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
  float fVar2;
  int iVar3;
  BADSPACEBASE *in_ESP;
  int *matrix;
  CDemonActor *in_stack_00000004;
  double dVar4;
  byte local_148 [120];
  SDamageInfo local_d0;
  CVector3f CStack_90;
  byte auStack_84 [20];
  CVector3f CStack_70;
  CVector3f CStack_64;
  CVector3f CStack_54;
  float fStack_48;
  byte auStack_44 [8];
  byte local_3c [20];
  float fStack_28;
  float fStack_24;
  CVector3f CStack_20;
  int local_14;
  
  this_ptr = (CDemonActor *)core_hero_cpp_FUN_004f3960();
  if (this_ptr == (CDemonActor *)0x0) {
    return;
  }
  core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
            (in_stack_00000004,(CVector3f *)(auStack_44 + 4),&(this_ptr->location).position);
  pCVar1 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                     ((CVector3f *)(auStack_84 + 8),(CVector3f *)(auStack_44 + 4));
  if ((CVector3f *)local_3c != pCVar1) {
    auStack_44._4_4_ = pCVar1->x;
    local_3c._0_4_ = pCVar1->y;
    local_3c._4_4_ = pCVar1->z;
  }
  local_3c._0_4_ = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70((float)local_3c._0_4_);
  dVar4 = (double)(float)local_3c._0_4_;
  if (((float)local_3c._0_4_ < (float)-0.78539816337500001) || (0.78539816337500001 < dVar4)) {
    core_fire_cpp_CFireEffect_FUN_004c8f50(g_CFireEffectPtr);
    core_fire_cpp_CFireEffect_FUN_004c8ea0(g_CFireEffectPtr);
  }
  else {
    crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667(local_148,10,&g_CVectorTypeInfo);
    fVar2 = (float)(*this_ptr->vtable->getTargetPoints)(this_ptr,(CVector3f *)local_148);
    CStack_20.z = fVar2;
    iVar3 = crt_stdlib_c_rand_FUN_005feb5c();
    pCVar1 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                       (this_ptr,&CStack_90,
                        (CVector3f *)(local_148 + (iVar3 % (int)fVar2) * 0xc + 4));
    if (&CStack_20 != pCVar1) {
      fStack_28 = pCVar1->x;
      fStack_24 = pCVar1->y;
      CStack_20.x = pCVar1->z;
    }
    iVar3 = crt_stdlib_c_rand_FUN_005feb5c();
    pCVar1 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                       (this_ptr,&CStack_54,(CVector3f *)(local_148 + (iVar3 % local_14) * 0xc + 4))
    ;
    if ((CVector3f *)auStack_44 != pCVar1) {
      CStack_54.z = pCVar1->x;
      fStack_48 = pCVar1->y;
      auStack_44._0_4_ = pCVar1->z;
    }
    pCVar1 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                       (&CStack_64,&g_ZeroVector,
                        (CMatrix3x4f *)&(&in_stack_00000004[0xb].scale)[DAT_008224cc * 4].z);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(in_stack_00000004,&CStack_70,pCVar1);
    matrix = &(&in_stack_00000004[0xb].scale)[DAT_008224d0 * 4].z;
    dVar4 = (double)ZEXT48(matrix);
    pCVar1 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                       ((CVector3f *)auStack_84,&g_ZeroVector,(CMatrix3x4f *)matrix);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              (in_stack_00000004,(CVector3f *)(local_3c + 8),pCVar1);
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
  (*this_ptr->vtable[1].playAmbientSoundWithVolume)(this_ptr,(char *)&local_d0,SUB84 /* extract 2-byte value */(dVar4,0));
  this_ptr[0x88].field22_0x120 = 0x40400000;
  return;
}
