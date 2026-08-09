// Name: core_fire.cpp_CExplosion_activate_FUN_00486e40
// Address: 00486e40
// Address Range: [[00486e40, 00486f8c]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CExplosion_activate_FUN_00486e40(CExplosion *this_ptr,CVector3f *position,float scale,float gore_multiplier)

#include "nocturne.h"

void __cdecl core_fire_cpp_CExplosion_activate_FUN_00486e40(CExplosion *this_ptr,CVector3f *position,float scale,float gore_multiplier)

{
  CDemonSet *this_ptr_00;
  int iVar1;
  CKeyFramedModel *model_ptr;
  int iVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  CVector3f local_50;
  CVector3f local_44 [2];
  float local_28;
  float local_14;
  
  if (this_ptr != (CExplosion *)position) {
    (this_ptr->position).x = position->x;
    (this_ptr->position).y = position->y;
    (this_ptr->position).z = position->z;
  }
  this_ptr_00 = g_CDemonSet_PTR_005be368;
  this_ptr->lifetime = 1.0;
  this_ptr->scale = scale;
  core_set_cpp_CDemonSet_initCameraShake_FUN_0050e660(this_ptr_00,200.0,0.0,0.0,2.0);
  iVar2 = 0;
  iVar1 = core_actor_cpp_randomChance_FUN_0040dea0(0.5);
  this_ptr->flip_flag = iVar1;
  this_ptr->gore_multiplier = gore_multiplier;
  do {
    local_28 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0.7853982,1.5707964);
    local_14 = local_28;
    local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0.0,6.2831855);
    fVar3 = (float10)fcos((float10)local_14);
    fVar4 = (float10)fcos((float10)local_28);
    fVar5 = (float10)fsin((float10)local_14);
    fVar6 = (float10)fsin((float10)local_28);
    local_50.y = (float)(fVar6 * (float10)30.0f);
    local_50.x = (float)(fVar3 * (float10)30.0f * fVar4);
    local_50.z = (float)(fVar5 * (float10)30.0f * fVar4);
    local_44[0].x = (this_ptr->position).x;
    local_44[0].z = (this_ptr->position).z;
    local_44[0].y = (this_ptr->position).y + 1.0;
    model_ptr = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530
                          (g_CKeyFramedModelInstance_ARRAY_01c094bc + iVar2 % 5);
    iVar2 = iVar2 + 1;
    core_fire_cpp_CFireEffect_createRock_FUN_0048b320
              (g_CFireEffect_PTR_005b80f0,local_44,&local_50,model_ptr);
  } while (iVar2 < 10);
  return;
}
