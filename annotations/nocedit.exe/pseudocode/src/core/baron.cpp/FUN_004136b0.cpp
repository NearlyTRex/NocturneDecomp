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
  CDemonActor *in_stack_00000004;
  float in_stack_00000008;
  float in_stack_0000000c;
  float in_stack_00000010;
  int in_stack_0000001c;
  byte auStack_138 [4];
  float fStack_134;
  float in_stack_ffffff18;
  byte auStack_74 [12];
  CVector3f aCStack_68 [2];
  CVector3f CStack_48;
  byte local_3c [8];
  byte auStack_34 [16];
  CVector3f CStack_24;
  float local_14;
  
  this_ptr = (CDemonActor *)core_hero_cpp_FUN_004f3960();
  if (this_ptr == (CDemonActor *)0x0) {
    return;
  }
  core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
            (in_stack_00000004,(CVector3f *)local_3c,&(this_ptr->location).position);
  pCVar1 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                     ((CVector3f *)auStack_74,(CVector3f *)(local_3c + 4));
  if ((CVector3f *)auStack_34 != pCVar1) {
    auStack_34._0_4_ = pCVar1->x;
    auStack_34._4_4_ = pCVar1->y;
    auStack_34._8_4_ = pCVar1->z;
  }
  auStack_34._8_4_ = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70((float)auStack_34._4_4_);
  if (((float)auStack_34._8_4_ < (float)-0.78539816337500001) ||
     (0.78539816337500001 < (double)(float)auStack_34._8_4_)) {
    core_fire_cpp_CFireEffect_FUN_004c8f50(g_CFireEffectPtr);
    core_fire_cpp_CFireEffect_FUN_004c8ea0(g_CFireEffectPtr);
  }
  else {
    crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667(auStack_138,10,&g_CVectorTypeInfo);
    fVar2 = (float)(*this_ptr->vtable->getTargetPoints)(this_ptr,(CVector3f *)&fStack_134);
    in_stack_00000010 = fVar2;
    iVar3 = crt_stdlib_c_rand_FUN_005feb5c();
    fStack_134 = 5.98957e-39;
    pCVar1 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                       (this_ptr,aCStack_68,
                        (CVector3f *)(&stack0xfffffee4 + (iVar3 % (int)fVar2) * 0xc));
    if ((CVector3f *)&stack0x00000008 != pCVar1) {
      in_stack_00000008 = pCVar1->x;
      in_stack_0000000c = pCVar1->y;
      in_stack_00000010 = pCVar1->z;
    }
    iVar3 = crt_stdlib_c_rand_FUN_005feb5c();
    pCVar1 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                       (this_ptr,&CStack_24,
                        (CVector3f *)(&stack0xfffffeec + (iVar3 % in_stack_0000001c) * 0xc));
    if ((CVector3f *)&local_14 != pCVar1) {
      local_14 = pCVar1->x;
    }
    pCVar1 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                       ((CVector3f *)(auStack_34 + 8),&g_ZeroVector,
                        (CMatrix3x4f *)&(&in_stack_00000004[0xb].scale)[DAT_008224cc * 4].z);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              (in_stack_00000004,(CVector3f *)auStack_34,pCVar1);
    pCVar1 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                       (&CStack_48,&g_ZeroVector,
                        (CMatrix3x4f *)&(&in_stack_00000004[0xb].scale)[DAT_008224d0 * 4].z);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              (in_stack_00000004,(CVector3f *)&stack0x00000010,pCVar1);
    core_fire_cpp_CFireEffect_FUN_004c8fd0(g_CFireEffectPtr);
    core_fire_cpp_CFireEffect_FUN_004c8fd0(g_CFireEffectPtr);
    (*in_stack_00000004->vtable->playSound)(in_stack_00000004,"baron-attack.wav");
  }
  core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)(auStack_74 + 8));
  local_3c._4_4_ = 8.40779e-45;
  aCStack_68[0].y = 100.0;
  auStack_34._0_4_ = in_stack_00000004;
  auStack_34._4_4_ = *(uint *)(in_stack_00000004[0x17a].create_event + 0x44);
  if ((CDemonActor *)auStack_34._4_4_ == (CDemonActor *)0x0) {
    auStack_34._4_4_ = in_stack_00000004;
  }
  (*this_ptr->vtable[1].playAmbientSoundWithVolume)(this_ptr,(char *)aCStack_68,in_stack_ffffff18);
  this_ptr[0x88].field22_0x120 = 0x40400000;
  return;
}
