// Name: core_fire.cpp_CExplosion_activate_FUN_004c3970
// Address: 004c3970
// Address Range: [[004c3970, 004c39eb]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CExplosion_activate_FUN_004c3970(CExplosion *this_ptr,CVector3f *position,float scale,int damage_amount)

#include "nocturne.h"

void __cdecl core_fire_cpp_CExplosion_activate_FUN_004c3970(CExplosion *this_ptr,CVector3f *position,float scale,int damage_amount)

{
  CDemonSet *this_ptr_00;
  int iVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  
  if (this_ptr != (CExplosion *)position) {
    (this_ptr->position).x = position->x;
    (this_ptr->position).y = position->y;
    (this_ptr->position).z = position->z;
  }
  this_ptr_00 = g_CDemonSetPtr;
  this_ptr->lifetime = 1.0;
  this_ptr->scale = scale;
  core_set_cpp_CDemonSet_initCameraShake_FUN_00570fa0(this_ptr_00,200.0,0.0,0.0,2.0);
  iVar4 = 0;
  iVar1 = core_actor_cpp_randomChance_FUN_0040cd10(0.5);
  this_ptr->flip_flag = iVar1;
  this_ptr->damage_amount = damage_amount;
  do {
    fVar2 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.7853982,1.5707964);
    fVar3 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,6.2831855);
    fcos((float10)fVar3);
    fcos((float10)fVar2);
    fsin((float10)fVar3);
    fsin((float10)fVar2);
    core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
              (g_CFireEffectDebrisModels + iVar4 % 5);
    iVar4 = iVar4 + 1;
    core_fire_cpp_CFireEffect_createRock_FUN_004c7e60(g_CFireEffectPtr);
  } while (iVar4 < 10);
  return;
}
