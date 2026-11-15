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
  CVector3f *pCVar3;
  SDamageInfo *damage_info;
  SDamageInfo local_70;
  CVector3f local_34;
  CVector3f local_28;
  CVector3f local_1c;
  CVector3f local_10;
  
  bVar2 = 0;
  if (param_1[1].base.model.rest_bone_scales[0x44] != 0.0) {
    return 0;
  }
  core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(&local_70);
  local_70.damage_amount = param_2;
  local_70.attacker = (CDemonActor *)param_1;
  local_70.wielder = (CDemonActor *)param_1;
  core_xform_cpp_transformVector3x4_FUN_00591530
            ((CVector3f *)&DAT_0265370c,
             (param_1->base).model.bone_transform.bone_model_matrices + param_3,&local_1c);
  pCVar3 = &local_10;
  local_10.x = local_1c.x;
  *(uint *)((int)&local_10 + (uint)bVar2 * -8 + 4) =
       *(uint *)((int)&local_1c + (uint)bVar2 * -8 + 4);
  *(uint *)((int)&local_10 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
       *(uint *)((int)&local_1c + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70((CDemonActor *)param_1,pCVar3,&local_28)
  ;
  damage_info = &local_70;
  pCVar3 = &local_34;
  local_34.x = local_28.x;
  *(uint *)((int)&local_34 + (uint)bVar2 * -8 + 4) =
       *(uint *)((int)&local_28 + (uint)bVar2 * -8 + 4);
  *(uint *)((int)&local_34 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
       *(uint *)((int)&local_28 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
  iVar1 = core_enemy_cpp_CEnemy_testAttackRadius_FUN_00488110(param_1,pCVar3,param_4,damage_info);
  return iVar1;
}
