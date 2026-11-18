// Name: core_basicene.cpp_CBasicEnemy_attackFromBone_FUN_0059f740
// Address: 0059f740
// Address Range: [[0059f740, 0059f7f1]]
// Convention: __cdecl
// Signature: int __cdecl core_basicene_cpp_CBasicEnemy_attackFromBone_FUN_0059f740(CBasicEnemy *this_ptr,float damage,int bone_index,float radius)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

int __cdecl core_basicene_cpp_CBasicEnemy_attackFromBone_FUN_0059f740(CBasicEnemy *this_ptr,float damage,int bone_index,float radius)

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
  if (this_ptr->flinch_active != 0) {
    return 0;
  }
  core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(&local_70);
  local_70.damage_amount = damage;
  local_70.attacker = (CDemonActor *)this_ptr;
  local_70.wielder = (CDemonActor *)this_ptr;
  core_xform_cpp_transformVector3x4_FUN_00591530
            (&g_ZeroVector,
             (this_ptr->base).base.model.bone_transform.bone_model_matrices + bone_index,&local_1c);
  pCVar3 = &local_10;
  local_10.x = local_1c.x;
  *(uint *)((int)&local_10 + (uint)bVar2 * -8 + 4) =
       *(uint *)((int)&local_1c + (uint)bVar2 * -8 + 4);
  *(uint *)((int)&local_10 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
       *(uint *)((int)&local_1c + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
            ((CDemonActor *)this_ptr,pCVar3,&local_28);
  damage_info = &local_70;
  pCVar3 = &local_34;
  local_34.x = local_28.x;
  *(uint *)((int)&local_34 + (uint)bVar2 * -8 + 4) =
       *(uint *)((int)&local_28 + (uint)bVar2 * -8 + 4);
  *(uint *)((int)&local_34 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
       *(uint *)((int)&local_28 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
  iVar1 = core_enemy_cpp_CEnemy_testAttackRadius_FUN_00488110
                    (&this_ptr->base,pCVar3,radius,damage_info);
  return iVar1;
}
