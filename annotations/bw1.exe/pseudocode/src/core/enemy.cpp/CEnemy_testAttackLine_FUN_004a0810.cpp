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
  double dVar1;
  EBloodType blood_type;
  byte auStack_28 [8];
  CVector3f local_20;
  
  this_ptr_00 = this_ptr->victim;
  if (this_ptr_00 != (CCharacter *)0x0) {
    (*(((this_ptr_00->base).vtable._uc)->_uc).testDamageLine)
              (this_ptr_00,start,end,damage_info,&local_20);
    auStack_28 = (byte  [8])(double)damage_info->damage_amount;
    if (0.0 < (double)auStack_28) {
      blood_type = 0x4a087e;
      dVar1 = round((double)auStack_28 * _DAT_005dcb52 * _DAT_005dcb5a);
      local_20.z = (float)(int)ROUND(dVar1);
      core_gore_cpp_CGore_spawnBloodBurst_FUN_004e6060
                (g_CGorePtr,(CVector3f *)(auStack_28 + 4),(CVector3f *)0x0,(int)local_20.z,
                 blood_type);
      return 1;
    }
  }
  return 0;
}
