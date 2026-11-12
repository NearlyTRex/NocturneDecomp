// Name: core_basicene.cpp_FUN_0059f740
// Address: 0059f740
// Address Range: [[0059f740, 0059f7f1]]
// Convention: unknown
// Signature: int core_basicene_cpp_FUN_0059f740(CEnemy *param_1,float param_2,int param_3,float param_4)

#include "nocturne.h"

int core_basicene_cpp_FUN_0059f740(CEnemy *param_1,float param_2,int param_3,float param_4)

{
  int iVar1;
  byte bVar2;
  uint auStackY_101c [997];
  CVector3f *point;
  uint *puVar3;
  SDamageInfo *damage_info;
  SDamageInfo local_70;
  CVector3f local_34;
  float local_28;
  uint auStack_24 [5];
  uint local_10 [3];
  
  bVar2 = 0;
  if (param_1[1].base.model.rest_bone_scales[0x44] != 0.0) {
    return 0;
  }
  core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(&local_70);
  local_70.damage_amount = param_2;
  local_70.attacker = (CDemonActor *)param_1;
  local_70.wielder = (CDemonActor *)param_1;
  core_xform_cpp_FUN_00591530
            (&DAT_0265370c,(param_1->base).model.bone_transform.bone_model_matrices + param_3);
  puVar3 = auStack_24 + 5;
  local_10[0] = auStack_24[2];
  auStack_24[(uint)bVar2 * -2 + 6] = auStack_24[(uint)bVar2 * -2 + 3];
  auStack_24[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 7] =
       auStack_24[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 4];
  core_actor_cpp_FUN_00408d70(param_1,puVar3);
  damage_info = &local_70;
  point = &local_34;
  local_34.x = local_28;
  *(uint *)((int)&local_34 + (uint)bVar2 * -8 + 4) = auStack_24[(uint)bVar2 * -2];
  *(uint *)((int)&local_34 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
       auStack_24[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
  iVar1 = core_enemy_cpp_CEnemy_testAttackRadius_FUN_00488110(param_1,point,param_4,damage_info);
  return iVar1;
}
