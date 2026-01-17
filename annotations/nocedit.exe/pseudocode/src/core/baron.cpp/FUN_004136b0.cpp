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
  float in_stack_fffffec0;
  byte auStack_c0 [56];
  CDemonActor *pCStack_88;
  byte auStack_80 [24];
  CVector3f CStack_68;
  CVector3f CStack_5c;
  CVector3f CStack_50;
  byte auStack_44 [8];
  float local_3c;
  float local_38;
  CVector3f CStack_2c;
  CVector3f CStack_20;
  float local_14;
  
  this_ptr = (CDemonActor *)core_hero_cpp_FUN_004f3960();
  if (this_ptr == (CDemonActor *)0x0) {
    return;
  }
  core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
            (in_stack_00000004,(CVector3f *)(auStack_44 + 4),&(this_ptr->location).position);
  pCVar1 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                     ((CVector3f *)(auStack_80 + 4),(CVector3f *)(auStack_44 + 4));
  if ((CVector3f *)(auStack_44 + 4) != pCVar1) {
    auStack_44._4_4_ = pCVar1->x;
    local_3c = pCVar1->y;
    local_38 = pCVar1->z;
  }
  local_3c = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(local_3c);
  local_14 = local_3c;
  if ((local_3c < (float)-0.78539816337500001) || (0.78539816337500001 < (double)local_3c)) {
    core_fire_cpp_CFireEffect_FUN_004c8f50(g_CFireEffectPtr);
    core_fire_cpp_CFireEffect_FUN_004c8ea0(g_CFireEffectPtr);
  }
  else {
    crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
              (&stack0xfffffeb8,10,&g_CVectorTypeInfo);
    iVar2 = (*this_ptr->vtable->getTargetPoints)(this_ptr,(CVector3f *)&stack0xfffffeb8);
    iVar3 = crt_stdlib_c_rand_FUN_005feb5c();
    pCVar1 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                       (this_ptr,(CVector3f *)(auStack_c0 + 0x34),
                        (CVector3f *)(&stack0xfffffec0 + (iVar3 % iVar2) * 0xc));
    if (&CStack_20 != pCVar1) {
      CStack_20.x = pCVar1->x;
      CStack_20.y = pCVar1->y;
      CStack_20.z = pCVar1->z;
    }
    iVar3 = crt_stdlib_c_rand_FUN_005feb5c();
    pCVar1 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                       (this_ptr,&CStack_50,(CVector3f *)(&stack0xfffffec0 + (iVar3 % iVar2) * 0xc))
    ;
    if ((CVector3f *)auStack_44 != pCVar1) {
      auStack_44._0_4_ = pCVar1->x;
      auStack_44._4_4_ = pCVar1->y;
      local_3c = pCVar1->z;
    }
    pCVar1 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                       (&CStack_5c,&g_ZeroVector,
                        (CMatrix3x4f *)&(&in_stack_00000004[0xb].scale)[DAT_008224cc * 4].z);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(in_stack_00000004,&CStack_68,pCVar1);
    pCVar1 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                       ((CVector3f *)auStack_80,&g_ZeroVector,
                        (CMatrix3x4f *)&(&in_stack_00000004[0xb].scale)[DAT_008224d0 * 4].z);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(in_stack_00000004,&CStack_2c,pCVar1);
    core_fire_cpp_CFireEffect_FUN_004c8fd0(g_CFireEffectPtr);
    core_fire_cpp_CFireEffect_FUN_004c8fd0(g_CFireEffectPtr);
    (*in_stack_00000004->vtable->playSound)(in_stack_00000004,"baron-attack.wav");
  }
  core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)auStack_c0);
  auStack_c0._48_4_ = 6;
  auStack_c0._4_4_ = 100.0;
  auStack_c0._52_4_ = in_stack_00000004;
  pCStack_88 = *(CDemonActor **)(in_stack_00000004[0x17a].create_event + 0x44);
  if (pCStack_88 == (CDemonActor *)0x0) {
    pCStack_88 = in_stack_00000004;
  }
  (*this_ptr->vtable[1].playAmbientSoundWithVolume)(this_ptr,auStack_c0,in_stack_fffffec0);
  this_ptr[0x88].field22_0x120 = 0x40400000;
  return;
}
