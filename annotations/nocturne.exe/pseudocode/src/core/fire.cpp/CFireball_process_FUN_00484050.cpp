// Name: core_fire.cpp_CFireball_process_FUN_00484050
// Address: 00484050
// Address Range: [[00484050, 0048429e]]
// Convention: unknown
// Signature: void core_fire_cpp_CFireball_process_FUN_00484050(CParticle *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_fire_cpp_CFireball_process_FUN_00484050(CParticle *param_1)

{
  CVector3f *this_ptr;
  float fVar1;
  int iVar2;
  longlong lVar3;
  CFireEffect *this_ptr_00;
  CDemonSet *this_ptr_01;
  int iVar4;
  float fVar5;
  int iVar6;
  SDamageInfo SStack_54;
  float local_18;
  uint local_14;
  
  if (param_1[1].position.z == 0.0) {
    param_1[1].position.z = 1.4013e-45;
    param_1[1].velocity.y = 0.0;
  }
  else {
    lVar3 = (longlong)(int)param_1[1].position.y * (longlong)_DAT_01bd1d80;
    fVar5 = (float)((int)param_1[1].position.x -
                   ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10));
    param_1[1].position.x = fVar5;
    if ((int)fVar5 < 0) {
      param_1->lifetime_remaining = 0.0;
      param_1[1].position.x = 0.0;
    }
  }
  core_particle_cpp_CParticle_process_FUN_004ef120(param_1);
  iVar4 = _DAT_01bd1d80 / 2;
  fVar5 = param_1[1].lifetime_remaining;
  param_1[1].velocity.z =
       (float)((int)param_1[1].velocity.z +
              ((int)((_DAT_01bd1d80 + (_DAT_01bd1d80 >> 0x1f) * -4) -
                    (uint)((_DAT_01bd1d80 >> 0x1f) << 1 < 0)) >> 2));
  fVar1 = param_1[1].velocity.x;
  param_1[1].lifetime_remaining = (float)((int)fVar5 + iVar4);
  if (fVar1 == 0.0) {
    this_ptr = &param_1[1].previous_position;
    core_dglobe_cpp_CDemonGlobe_setPosition_FUN_0044cd90((CDemonGlobe *)this_ptr,&param_1->position)
    ;
    fVar5 = param_1[1].position.x;
    param_1[2].previous_position.y = fVar5;
    iVar4 = ((int)fVar5 + ((int)fVar5 >> 0x1f) * -0x100) - (uint)(((int)fVar5 >> 0x1f) << 7 < 0);
    iVar6 = iVar4 >> 0x1f;
    *(char *)&param_1[2].position.z =
         (char)((int)(((iVar4 >> 8) + iVar6 * -4) - (uint)(iVar6 << 1 < 0)) >> 2);
    core_dglobe_cpp_CDemonGlobe_precomputeAttenuation_FUN_0044cde0((CDemonGlobe *)this_ptr,8.0);
    this_ptr_01 = 0x01E57284;
    param_1[2].velocity.x = 0.0;
    core_set_cpp_CDemonSet_addCoronaGlobe_FUN_0050a9f0(this_ptr_01,(CDemonGlobe *)this_ptr);
    fVar5 = (float)((int)param_1[1].velocity.y + _DAT_01bd1d80);
    param_1[1].velocity.y = fVar5;
    this_ptr_00 = 0x01C08D04;
    if (0x1000 < (int)fVar5) {
      param_1[1].velocity.y = (float)((int)fVar5 + -0x1000);
      core_fire_cpp_CFireEffect_createSmokeParticle_FUN_0048afe0
                (this_ptr_00,&param_1->position,2.0,(CVector3f *)0x0,0xffff);
      core_fire_cpp_CFireEffect_createSpark_FUN_0048ae90
                (0x01C08D04,&param_1->position,(CVector3f *)0x0,0x20000,0x10000,0,0xffff);
      core_fire_cpp_CFireEffect_createSpark_FUN_0048ae90
                (0x01C08D04,&param_1->position,(CVector3f *)0x0,0x20000,0x10000,0,0xffff);
      core_fire_cpp_CFireEffect_createSpark_FUN_0048ae90
                (0x01C08D04,&param_1->position,(CVector3f *)0x0,0x20000,0x10000,0,0xffff);
      core_fire_cpp_CFireEffect_createSpark_FUN_0048ae90
                (0x01C08D04,&param_1->position,(CVector3f *)0x0,0x20000,0x10000,0,0xffff);
    }
  }
  fVar5 = param_1[1].velocity.x;
  if (fVar5 == 0.0) {
    local_18 = 20.0;
    local_14 = 0x40800000;
  }
  else if (fVar5 == 2.8026e-45) {
    local_18 = 5.0;
    local_14 = 0x3f800000;
  }
  else {
    local_18 = 5.0;
    local_14 = 0x3f800000;
  }
  iVar6 = 0;
  iVar4 = 0;
  while( true ) {
    if ((int)0x01E57284->actors[0x6d6] <= iVar4) break;
    iVar2 = *(int *)((int)0x01E57284->actors + iVar6 + 0x1b5c);
    core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(&SStack_54);
    SStack_54.damage_amount = local_18;
    iVar6 = iVar6 + 4;
    iVar4 = iVar4 + 1;
    (**(code **)(*(int *)(iVar2 + 0x14c) + 0xf8))(iVar2,param_1,local_14,&SStack_54);
  }
  return;
}
