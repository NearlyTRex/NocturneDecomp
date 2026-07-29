// Name: core_fire.cpp_CExplosion_activate_FUN_00486e40
// Address: 00486e40
// Address Range: [[00486e40, 00486f8c]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CExplosion_activate_FUN_00486e40(CExplosion *this_ptr,CVector3f *position,float scale,float gore_multiplier)

#include "nocturne.h"

void __cdecl core_fire_cpp_CExplosion_activate_FUN_00486e40(CExplosion *this_ptr,CVector3f *position,float scale,float gore_multiplier)

{
  uint uVar1;
  int iVar2;
  CKeyFramedModel *model_ptr;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  CVector3f local_50;
  CVector3f local_44 [2];
  float local_28;
  float local_14;
  
  if (this_ptr != (CExplosion *)position) {
    (this_ptr->position).x = position->x;
    (this_ptr->position).y = position->y;
    (this_ptr->position).z = position->z;
  }
  uVar1 = 0x01E57284;
  this_ptr->lifetime = 1.0;
  this_ptr->scale = scale;
  core_set_cpp_FUN_0050e660(uVar1,0x43480000,0,0,0x40000000);
  iVar3 = 0;
  iVar2 = core_actor_cpp_randomChance_FUN_0040dea0(0.5);
  this_ptr->flip_flag = iVar2;
  this_ptr->gore_multiplier = gore_multiplier;
  do {
    local_28 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0.7853982,1.5707964);
    local_14 = local_28;
    local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0.0,6.2831855);
    fVar4 = (float10)fcos((float10)local_14);
    fVar5 = (float10)fcos((float10)local_28);
    fVar6 = (float10)fsin((float10)local_14);
    fVar7 = (float10)fsin((float10)local_28);
    local_50.y = (float)(fVar7 * (float10)30.0f);
    local_50.x = (float)(fVar4 * (float10)30.0f * fVar5);
    local_50.z = (float)(fVar6 * (float10)30.0f * fVar5);
    local_44[0].x = (this_ptr->position).x;
    local_44[0].z = (this_ptr->position).z;
    local_44[0].y = (this_ptr->position).y + 1.0;
    model_ptr = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530
                          ((CKeyFramedModelInstance *)((iVar3 % 5) * 0x17c + 0x1c094bc));
    iVar3 = iVar3 + 1;
    core_fire_cpp_CFireEffect_createRock_FUN_0048b320(0x01C08D04,local_44,&local_50,model_ptr);
  } while (iVar3 < 10);
  return;
}
