// Name: core_enemy.cpp_CEnemy_testAttackLine_FUN_004a9930
// Address: 004a9930
// Address Range: [[004a9930, 004a99c7]]
// Convention: __cdecl
// Signature: int __cdecl core_enemy_cpp_CEnemy_testAttackLine_FUN_004a9930(CEnemy *this_ptr,CVector3f *start,CVector3f *end,SDamageInfo *damage_info)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

int __cdecl core_enemy_cpp_CEnemy_testAttackLine_FUN_004a9930(CEnemy *this_ptr,CVector3f *start,CVector3f *end,SDamageInfo *damage_info)

{
  CCharacter *this_ptr_00;
  CVector3f local_20;
  int iStack_14;
  
  this_ptr_00 = this_ptr->victim;
  if (this_ptr_00 != (CCharacter *)0x0) {
    (*(((this_ptr_00->base).vtable._uc)->_uc).testDamageLine)
              (this_ptr_00,start,end,damage_info,&local_20);
    if (0.0 < (double)damage_info->damage_amount) {
      iStack_14 = (int)ROUND(ROUND((double)damage_info->damage_amount * 1.2 *
                                   0.25));
      core_gore_cpp_CGore_spawnBloodBurst_FUN_004edbb0
                (g_CGorePtr,&local_20,(CVector3f *)0x0,iStack_14,0);
      return 1;
    }
  }
  return 0;
}
