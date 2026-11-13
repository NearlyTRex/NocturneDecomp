// Name: core_fire.cpp_CExplosion_activate_FUN_004b16d0
// Address: 004b16d0
// Address Range: [[004b16d0, 004b1812]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CExplosion_activate_FUN_004b16d0(CExplosion *this_ptr,CVector3f *position,float scale,float gore_multiplier)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CExplosion_activate_FUN_004b16d0(CExplosion *this_ptr,CVector3f *position,float scale,float gore_multiplier)

{
  CDemonSet *this_ptr_00;
  int iVar1;
  CKeyFramedModel *model_ptr;
  uint *puVar2;
  byte bVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float afStackY_102c [1010];
  CVector3f local_50;
  CVector3f local_44 [3];
  float local_20;
  float local_14;
  
  bVar3 = 0;
  if (this_ptr != (CExplosion *)position) {
    (this_ptr->position).x = position->x;
    (this_ptr->position).y = position->y;
    (this_ptr->position).z = position->z;
  }
  this_ptr_00 = g_CDemonSetPtr;
  this_ptr->lifetime = 1.0;
  this_ptr->scale = scale;
  core_set_cpp_CDemonSet_initCameraShake_FUN_00555ab0(this_ptr_00,200.0,0.0,0.0,2.0);
  iVar1 = core_actor_cpp_randomChance_FUN_0040cd00(0.5);
  this_ptr->flip_flag = iVar1;
  iVar1 = 0;
  this_ptr->gore_multiplier = gore_multiplier;
  do {
    local_20 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(0.7853982,1.5707964);
    local_14 = local_20;
    local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(0.0,6.2831855);
    fVar4 = (float10)fcos((float10)local_14);
    fVar5 = (float10)fcos((float10)local_20);
    fVar6 = (float10)fsin((float10)local_14);
    fVar7 = (float10)fsin((float10)local_20);
    local_50.y = (float)(fVar7 * (float10)_DAT_005df358);
    local_50.x = (float)(fVar4 * (float10)_DAT_005df358 * fVar5);
    local_50.z = (float)(fVar6 * (float10)_DAT_005df358 * fVar5);
    puVar2 = (uint *)((int)this_ptr + (uint)bVar3 * -8 + 4);
    local_44[0].x = (this_ptr->position).x;
    *(uint *)((int)local_44 + (uint)bVar3 * -8 + 4) = *puVar2;
    *(uint *)((int)local_44 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
         puVar2[(uint)bVar3 * -2 + 1];
    local_44[0].y = local_44[0].y + 1.0;
    model_ptr = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900
                          ((CKeyFramedModelInstance *)((iVar1 % 5) * 0x17c + 0x1c57e1c));
    iVar1 = iVar1 + 1;
    core_fire_cpp_CFireEffect_createRock_FUN_004b5eb0(0x01C57074,local_44,&local_50,model_ptr);
  } while (iVar1 < 10);
  return;
}
