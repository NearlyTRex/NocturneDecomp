// Name: core_fire.cpp_CFireball_process_FUN_004ae300
// Address: 004ae300
// Address Range: [[004ae300, 004ae54e]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireball_process_FUN_004ae300(CFireball *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CFireball_process_FUN_004ae300(CFireball *this_ptr)

{
  byte *this_ptr_00;
  int iVar1;
  longlong lVar2;
  CFireEffect *this_ptr_01;
  CDemonSet *this_ptr_02;
  int iVar3;
  int iVar4;
  SDamageInfo aSStack_54 [4];
  uint uStack_50;
  uint uStack_18;
  uint uStack_14;
  
  if (*(int *)&this_ptr->field_0x48 == 0) {
    *(uint *)&this_ptr->field_0x48 = 1;
    *(uint *)&this_ptr->field_0x50 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)&this_ptr->field_0x44 * (longlong)_DAT_01c43530;
    iVar3 = *(int *)&this_ptr->field_0x40 -
            ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
    *(int *)&this_ptr->field_0x40 = iVar3;
    if (iVar3 < 0) {
      *(uint *)&this_ptr->field_0x24 = 0;
      *(uint *)&this_ptr->field_0x40 = 0;
    }
  }
  core_particle_cpp_FUN_00532250(this_ptr);
  iVar3 = _DAT_01c43530 / 2;
  *(int *)&this_ptr->field_0x54 =
       *(int *)&this_ptr->field_0x54 +
       ((int)((_DAT_01c43530 + (_DAT_01c43530 >> 0x1f) * -4) -
             (uint)((_DAT_01c43530 >> 0x1f) << 1 < 0)) >> 2);
  *(int *)&this_ptr->field_0x58 = *(int *)&this_ptr->field_0x58 + iVar3;
  if (*(int *)&this_ptr->field_0x4c == 0) {
    this_ptr_00 = &this_ptr->field_0x64;
    core_dglobe_cpp_CDemonGlobe_setPosition_FUN_0045e970
              ((CDemonGlobe *)this_ptr_00,(CVector3f *)this_ptr);
    iVar3 = *(int *)&this_ptr->field_0x40;
    *(int *)&this_ptr->field_0xa0 = iVar3;
    iVar3 = (iVar3 + (iVar3 >> 0x1f) * -0x100) - (uint)((iVar3 >> 0x1f) << 7 < 0);
    iVar4 = iVar3 >> 0x1f;
    this_ptr->field_0x80 = (char)((int)(((iVar3 >> 8) + iVar4 * -4) - (uint)(iVar4 << 1 < 0)) >> 2);
    core_dglobe_cpp_CDemonGlobe_precomputeAttenuation_FUN_0045e9c0((CDemonGlobe *)this_ptr_00,8.0);
    this_ptr_02 = g_CDemonSetPtr;
    *(uint *)&this_ptr->field_0x84 = 0;
    core_set_cpp_CDemonSet_addCoronaGlobe_FUN_00551960(this_ptr_02,(CDemonGlobe *)this_ptr_00);
    iVar3 = *(int *)&this_ptr->field_0x50 + _DAT_01c43530;
    *(int *)&this_ptr->field_0x50 = iVar3;
    this_ptr_01 = 0x01C57074;
    if (0x1000 < iVar3) {
      *(int *)&this_ptr->field_0x50 = iVar3 + -0x1000;
      core_fire_cpp_CFireEffect_createSmokeParticle_FUN_004b5b30
                (this_ptr_01,(CVector3f *)this_ptr,2.0,(CVector3f *)0x0,0xffff);
      core_fire_cpp_CFireEffect_createSpark_FUN_004b59e0
                (0x01C57074,(CVector3f *)this_ptr,(CVector3f *)0x0,0x20000,0x10000,0,0xffff);
      core_fire_cpp_CFireEffect_createSpark_FUN_004b59e0
                (0x01C57074,(CVector3f *)this_ptr,(CVector3f *)0x0,0x20000,0x10000,0,0xffff);
      core_fire_cpp_CFireEffect_createSpark_FUN_004b59e0
                (0x01C57074,(CVector3f *)this_ptr,(CVector3f *)0x0,0x20000,0x10000,0,0xffff);
      core_fire_cpp_CFireEffect_createSpark_FUN_004b59e0
                (0x01C57074,(CVector3f *)this_ptr,(CVector3f *)0x0,0x20000,0x10000,0,0xffff);
    }
  }
  if (*(int *)&this_ptr->field_0x4c == 0) {
    uStack_18 = 0x41a00000;
    uStack_14 = 0x40800000;
  }
  else if (*(int *)&this_ptr->field_0x4c == 2) {
    uStack_18 = 0x40a00000;
    uStack_14 = 0x3f800000;
  }
  else {
    uStack_18 = 0x40a00000;
    uStack_14 = 0x3f800000;
  }
  iVar4 = 0;
  iVar3 = 0;
  while( true ) {
    if (g_CDemonSetPtr->character_count <= iVar3) break;
    iVar1 = *(int *)((int)g_CDemonSetPtr->characters + iVar4);
    core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(aSStack_54);
    uStack_50 = uStack_18;
    iVar4 = iVar4 + 4;
    iVar3 = iVar3 + 1;
    (**(code **)(*(int *)(iVar1 + 0x154) + 0x100))(iVar1,this_ptr,uStack_14,aSStack_54);
  }
  return;
}
