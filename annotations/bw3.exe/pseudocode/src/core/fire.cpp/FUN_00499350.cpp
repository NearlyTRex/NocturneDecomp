// Name: core_fire.cpp_FUN_00499350
// Address: 00499350
// Address Range: [[00499350, 0049959e]]
// Convention: unknown
// Signature: void core_fire_cpp_FUN_00499350(CVector3f *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_fire_cpp_FUN_00499350(CVector3f *param_1)

{
  byte *this_ptr;
  int iVar1;
  longlong lVar2;
  CFireEffect *this_ptr_00;
  CDemonSet *this_ptr_01;
  int iVar3;
  int iVar4;
  SDamageInfo aSStack_54 [4];
  uint uStack_50;
  uint uStack_18;
  uint uStack_14;
  
  if (*(int *)(param_1 + 6) == 0) {
    *(uint *)(param_1 + 6) = 1;
    *(uint *)&param_1[6].field_0x8 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)&param_1[5].field_0x8 * (longlong)_DAT_01c5fad0;
    iVar4 = *(int *)&param_1[5].field_0x4 -
            ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
    *(int *)&param_1[5].field_0x4 = iVar4;
    if (iVar4 < 0) {
      *(uint *)(param_1 + 3) = 0;
      *(uint *)&param_1[5].field_0x4 = 0;
    }
  }
  core_particle_cpp_FUN_00509f30(param_1);
  iVar3 = _DAT_01c5fad0 / 2;
  iVar4 = *(int *)&param_1[7].field_0x4;
  *(int *)(param_1 + 7) =
       *(int *)(param_1 + 7) +
       ((int)((_DAT_01c5fad0 + (_DAT_01c5fad0 >> 0x1f) * -4) -
             (uint)((_DAT_01c5fad0 >> 0x1f) << 1 < 0)) >> 2);
  *(int *)&param_1[7].field_0x4 = iVar4 + iVar3;
  if (*(int *)&param_1[6].field_0x4 == 0) {
    this_ptr = &param_1[8].field_0x4;
    core_dglobe_cpp_CDemonGlobe_setPosition_FUN_0045aae0((CDemonGlobe *)this_ptr,param_1);
    iVar4 = *(int *)&param_1[5].field_0x4;
    *(int *)&param_1[0xd].field_0x4 = iVar4;
    iVar4 = (iVar4 + (iVar4 >> 0x1f) * -0x100) - (uint)((iVar4 >> 0x1f) << 7 < 0);
    iVar3 = iVar4 >> 0x1f;
    param_1[10].field_0x8 = (char)((int)(((iVar4 >> 8) + iVar3 * -4) - (uint)(iVar3 << 1 < 0)) >> 2)
    ;
    core_dglobe_cpp_CDemonGlobe_precomputeAttenuation_FUN_0045ab30((CDemonGlobe *)this_ptr,8.0);
    this_ptr_01 = g_CDemonSetPtr;
    *(uint *)(param_1 + 0xb) = 0;
    core_set_cpp_CDemonSet_addCoronaGlobe_FUN_005372f0(this_ptr_01,(CDemonGlobe *)this_ptr);
    iVar4 = *(int *)&param_1[6].field_0x8 + _DAT_01c5fad0;
    *(int *)&param_1[6].field_0x8 = iVar4;
    this_ptr_00 = 0x01C73654;
    if (0x1000 < iVar4) {
      *(int *)&param_1[6].field_0x8 = iVar4 + -0x1000;
      core_fire_cpp_CFireEffect_createSmokeParticle_FUN_004a2560
                (this_ptr_00,param_1,2.0,(CVector3f *)0x0,0x4000);
      core_fire_cpp_CFireEffect_createSpark_FUN_004a23c0
                (0x01C73654,param_1,(CVector3f *)0x0,0x20000,0x10000,0,0xffff);
      core_fire_cpp_CFireEffect_createSpark_FUN_004a23c0
                (0x01C73654,param_1,(CVector3f *)0x0,0x20000,0x10000,0,0xffff);
      core_fire_cpp_CFireEffect_createSpark_FUN_004a23c0
                (0x01C73654,param_1,(CVector3f *)0x0,0x20000,0x10000,0,0xffff);
      core_fire_cpp_CFireEffect_createSpark_FUN_004a23c0
                (0x01C73654,param_1,(CVector3f *)0x0,0x20000,0x10000,0,0xffff);
    }
  }
  if (*(int *)&param_1[6].field_0x4 == 0) {
    uStack_18 = 0x41a00000;
    uStack_14 = 0x40800000;
  }
  else if (*(int *)&param_1[6].field_0x4 == 2) {
    uStack_18 = 0x40a00000;
    uStack_14 = 0x3f800000;
  }
  else {
    uStack_18 = 0x40a00000;
    uStack_14 = 0x3f800000;
  }
  iVar3 = 0;
  iVar4 = 0;
  while( true ) {
    if (*(int *)&g_CDemonSetPtr->field_0x14f0a8 <= iVar4) break;
    iVar1 = *(int *)(&g_CDemonSetPtr->field_0x14f0ac + iVar3);
    core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0(aSStack_54);
    uStack_50 = uStack_18;
    iVar3 = iVar3 + 4;
    iVar4 = iVar4 + 1;
    (**(code **)(*(int *)(iVar1 + 0x154) + 0x100))(iVar1,param_1,uStack_14,aSStack_54);
  }
  return;
}
