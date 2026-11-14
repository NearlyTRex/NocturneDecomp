// Name: core_enemy.cpp_CEnemy_testAttackLine_FUN_004a0810
// Address: 004a0810
// Address Range: [[004a0810, 004a08a7]]
// Convention: __cdecl
// Signature: int __cdecl core_enemy_cpp_CEnemy_testAttackLine_FUN_004a0810(CEnemy *this_ptr,CVector3f *start,CVector3f *end,SDamageInfo *damage_info)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_enemy_cpp_CEnemy_testAttackLine_FUN_004a0810(CEnemy *this_ptr,CVector3f *start,CVector3f *end,SDamageInfo *damage_info)

{
  CCharacter *this_ptr_00;
  float10 fVar1;
  EBloodType blood_type;
  CVector3f local_20;
  int iStack_14;
  
  this_ptr_00 = this_ptr->victim;
  if (this_ptr_00 != (CCharacter *)0x0) {
    (*(((this_ptr_00->base).vtable._uc)->_uc).testDamageLine)
              (this_ptr_00,start,end,damage_info,&local_20);
    if (0.0 < damage_info->damage_amount) {
      fVar1 = (float10)damage_info->damage_amount * (float10)_DAT_005dcb52 * (float10)_DAT_005dcb5a;
      blood_type = BLOOD_TYPE_RED;
      round();
      iStack_14 = (int)ROUND(fVar1);
      core_gore_cpp_CGore_spawnBloodBurst_FUN_004e6060
                (g_CGorePtr,&local_20,(CVector3f *)0x0,iStack_14,blood_type);
      return 1;
    }
  }
  return 0;
}
