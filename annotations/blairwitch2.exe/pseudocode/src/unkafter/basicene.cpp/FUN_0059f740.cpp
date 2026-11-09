// Name: unkafter_basicene.cpp_FUN_0059f740
// Address: 0059f740
// Address Range: [[0059f740, 0059f7f1]]
// Convention: unknown
// Signature: int unkafter_basicene_cpp_FUN_0059f740(CEnemy *param_1,undefined4 param_2,int param_3,float param_4)

#include "nocturne.h"

int unkafter_basicene_cpp_FUN_0059f740(CEnemy *param_1,uint param_2,int param_3,float param_4)

{
  int iVar1;
  byte bVar2;
  uint auStackY_101c [997];
  CVector3f *point;
  uint *puVar3;
  SDamageInfo *damage_info;
  SDamageInfo local_70 [4];
  uint local_6c;
  CEnemy *local_3c;
  CEnemy *local_38;
  CVector3f local_34;
  CVector3f local_28;
  uint local_1c;
  uint auStack_18 [5];
  
  bVar2 = 0;
  if (*(int *)&param_1[1].field_0x8d8 != 0) {
    return 0;
  }
  core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(local_70);
  local_6c = param_2;
  local_3c = param_1;
  local_38 = param_1;
  core_xform_cpp_FUN_00591530(&DAT_0265370c,&param_1->field_0x1134 + param_3 * 0x30);
  puVar3 = auStack_18 + 2;
  auStack_18[2] = local_1c;
  auStack_18[(uint)bVar2 * -2 + 3] = auStack_18[(uint)bVar2 * -2];
  auStack_18[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 4] =
       auStack_18[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
  core_actor_cpp_FUN_00408d70(param_1,puVar3);
  damage_info = local_70;
  point = &local_34;
  local_34._0_4_ = local_28._0_4_;
  *(uint *)((int)&local_34 + (uint)bVar2 * -8 + 4) =
       *(uint *)((int)&local_28 + (uint)bVar2 * -8 + 4);
  *(uint *)((int)&local_34 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
       *(uint *)((int)&local_28 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
  iVar1 = core_enemy_cpp_FUN_00488110(param_1,point,param_4,damage_info);
  return iVar1;
}
