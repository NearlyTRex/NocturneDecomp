// Name: core_enemy.cpp_CEnemy_testAttackRadius_FUN_004a0770
// Address: 004a0770
// Address Range: [[004a0770, 004a0809]]
// Convention: __cdecl
// Signature: int __cdecl core_enemy_cpp_CEnemy_testAttackRadius_FUN_004a0770(CEnemy *this_ptr,CVector3f *point,float radius,SDamageInfo *damage_info)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_enemy_cpp_CEnemy_testAttackRadius_FUN_004a0770(CEnemy *this_ptr,CVector3f *point,float radius,SDamageInfo *damage_info)

{
  CCharacter *this_ptr_00;
  int *piVar1;
  byte bVar2;
  double dVar3;
  int aiStackY_100c [1011];
  CVector3f *direction;
  int count;
  EBloodType blood_type;
  byte auStack_28 [8];
  int aiStack_20 [4];
  
  bVar2 = 0;
  this_ptr_00 = this_ptr->victim;
  if (this_ptr_00 != (CCharacter *)0x0) {
    (*(((this_ptr_00->base).vtable._uc)->_uc).checkCylinderCollisionWorld)
              (this_ptr_00,point,radius,damage_info);
    auStack_28 = (byte  [8])(double)damage_info->damage_amount;
    if (0.0 < (double)auStack_28) {
      blood_type = 0x4a07d8;
      dVar3 = round((double)auStack_28 * _DAT_005dcb42 * _DAT_005dcb4a);
      count = (int)ROUND(dVar3);
      direction = (CVector3f *)0x0;
      piVar1 = (int *)((int)point + (uint)bVar2 * -8 + 4);
      auStack_28._4_4_ = point->x;
      aiStack_20[2] = count;
      aiStack_20[(uint)bVar2 * -2] = *piVar1;
      aiStack_20[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1] = piVar1[(uint)bVar2 * -2 + 1];
      core_gore_cpp_CGore_spawnBloodBurst_FUN_004e6060
                (g_CGorePtr,(CVector3f *)(auStack_28 + 4),direction,count,blood_type);
      return 1;
    }
  }
  return 0;
}
