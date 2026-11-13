// Name: core_fire.cpp_CExplosion_activate_FUN_0049c730
// Address: 0049c730
// Address Range: [[0049c730, 0049c881]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CExplosion_activate_FUN_0049c730(CExplosion *this_ptr,CVector3f *position,float scale,float gore_multiplier,int explosion_type)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CExplosion_activate_FUN_0049c730(CExplosion *this_ptr,CVector3f *position,float scale,float gore_multiplier,int explosion_type)

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
  float afStackY_1030 [1012];
  CVector3f local_48;
  CVector3f local_3c [3];
  float local_18;
  float local_c;
  
  bVar3 = 0;
  if (this_ptr != (CExplosion *)position) {
    (this_ptr->position).x = position->x;
    (this_ptr->position).y = position->y;
    (this_ptr->position).z = position->z;
  }
  this_ptr_00 = g_CDemonSetPtr;
  this_ptr->lifetime = 1.0;
  this_ptr->explosion_type = explosion_type;
  this_ptr->scale = scale;
  core_set_cpp_CDemonSet_initCameraShake_FUN_0053b440(this_ptr_00,200.0,0.0,0.0,2.0);
  iVar1 = core_actor_cpp_randomChance_FUN_0040cf40(0.5);
  this_ptr->flip_flag = iVar1;
  this_ptr->gore_multiplier = gore_multiplier;
  if (explosion_type == 0) {
    iVar1 = 0;
    do {
      local_18 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.7853982,1.5707964);
      local_c = local_18;
      local_c = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.0,6.2831855);
      fVar4 = (float10)fcos((float10)local_c);
      fVar5 = (float10)fcos((float10)local_18);
      fVar6 = (float10)fsin((float10)local_c);
      fVar7 = (float10)fsin((float10)local_18);
      local_3c[0].y = (float)(fVar7 * (float10)_DAT_005c068c);
      local_3c[0].x = (float)(fVar4 * (float10)_DAT_005c068c * fVar5);
      local_3c[0].z = (float)(fVar6 * (float10)_DAT_005c068c * fVar5);
      puVar2 = (uint *)((int)this_ptr + (uint)bVar3 * -8 + 4);
      local_48.x = (this_ptr->position).x;
      *(uint *)((int)local_3c + (uint)bVar3 * -8 + -8) = *puVar2;
      *(uint *)((int)local_3c + (uint)bVar3 * -8 + (uint)bVar3 * -8 + -4) =
           puVar2[(uint)bVar3 * -2 + 1];
      local_48.y = local_48.y + 1.0;
      model_ptr = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0
                            ((CKeyFramedModelInstance *)((iVar1 % 5) * 0x17c + 0x1c743fc));
      iVar1 = iVar1 + 1;
      core_fire_cpp_CFireEffect_createRock_FUN_004a28e0(0x01C73654,&local_48,local_3c,model_ptr);
    } while (iVar1 < 10);
  }
  return;
}
