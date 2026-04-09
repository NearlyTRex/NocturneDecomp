// Name: core_fire.cpp_CExplosion_activate_FUN_004c3970
// Address: 004c3970
// Address Range: [[004c3970, 004c3abc]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CExplosion_activate_FUN_004c3970(CExplosion *this_ptr,CVector3f *position,float scale,float gore_multiplier)

#include "nocturne.h"

void __cdecl core_fire_cpp_CExplosion_activate_FUN_004c3970(CExplosion *this_ptr,CVector3f *position,float scale,float gore_multiplier)

{
  int iVar1;
  float fVar1;
  float fVar2;
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
  CDemonSet *this_ptr_00;
  
  if (this_ptr != (CExplosion *)position) {
    (this_ptr->position).x = position->x;
    (this_ptr->position).y = position->y;
    (this_ptr->position).z = position->z;
  }
  this_ptr_00 = g_CDemonSetPtr;
  this_ptr->lifetime = 1.0;
  this_ptr->scale = scale;
  core_set_cpp_CDemonSet_initCameraShake_FUN_00570fa0(this_ptr_00,200.0,0.0,0.0,2.0);
  iVar2 = 0;
  iVar1 = core_actor_cpp_randomChance_FUN_0040cd10(0.5);
  this_ptr->flip_flag = iVar1;
  this_ptr->gore_multiplier = gore_multiplier;
  do {
    fVar1 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(0.7853982,1.5707964);
    fVar2 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(0.0,6.2831855);
    fVar3 = (float10)fcos((float10)fVar2);
    fVar4 = (float10)fcos((float10)fVar1);
    fVar5 = (float10)fsin((float10)fVar2);
    fVar6 = (float10)fsin((float10)fVar1);
    local_50.y = (float)(fVar6 * (float10)30.0f);
    local_50.x = (float)(fVar3 * (float10)30.0f * fVar4);
    local_50.z = (float)(fVar5 * (float10)30.0f * fVar4);
    local_44[0].x = (this_ptr->position).x;
    local_44[0].z = (this_ptr->position).z;
    local_44[0].y = (this_ptr->position).y + 1.0;
    model_ptr = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                          (g_CFireEffectDebrisModels + iVar2 % 5);
    iVar2 = iVar2 + 1;
    core_fire_cpp_CFireEffect_createRock_FUN_004c7e60(g_CFireEffectPtr,local_44,&local_50,model_ptr)
    ;
  } while (iVar2 < 10);
  return;
}
