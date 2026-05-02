// Name: core_enemy.cpp_CEnemy_testAttackLine_FUN_004a9930
// Address: 004a9930
// MANUAL RECONSTRUCTION
// Address Range: [[004a9930, 004a99c7]]
// Convention: __cdecl
// Signature: int __cdecl core_enemy_cpp_CEnemy_testAttackLine_FUN_004a9930(CEnemy *this_ptr,CVector3f *start,CVector3f *end,SDamageInfo *damage_info)

#include "nocturne.h"

int __cdecl core_enemy_cpp_CEnemy_testAttackLine_FUN_004a9930(CEnemy *this_ptr,CVector3f *start,CVector3f *end,SDamageInfo *damage_info)

{
  CVector3f local_20;
  CCharacter *this_ptr_00;
  
  this_ptr_00 = this_ptr->victim;
  if (this_ptr_00 != (CCharacter *)0x0) {
    (*(((this_ptr_00->base).vtable._uc)->_uc).testDamageLine)
              (this_ptr_00,start,end,damage_info,&local_20);
    if (0.0 < (double)damage_info->damage_amount) {
      core_gore_cpp_CGore_spawnBloodBurst_FUN_004edbb0
                (g_CGorePtr,&local_20,(CVector3f *)0x0,
                 (int)ROUND(ROUND((double)damage_info->damage_amount * 1.2 *
                                  0.25)),0);
      return 1;
    }
  }
  return 0;
}
