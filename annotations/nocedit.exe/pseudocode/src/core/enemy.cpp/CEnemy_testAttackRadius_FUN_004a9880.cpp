// Name: core_enemy.cpp_CEnemy_testAttackRadius_FUN_004a9880
// Address: 004a9880
// Address Range: [[004a9880, 004a9927]]
// Convention: __cdecl
// Signature: int __cdecl core_enemy_cpp_CEnemy_testAttackRadius_FUN_004a9880(CEnemy *this_ptr,CVector3f *point,float radius,SDamageInfo *damage_info)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

int __cdecl core_enemy_cpp_CEnemy_testAttackRadius_FUN_004a9880(CEnemy *this_ptr,CVector3f *point,float radius,SDamageInfo *damage_info)

{
  CCharacter *this_ptr_00;
  CVector3f CStack_20;
  int iStack_14;
  
  this_ptr_00 = this_ptr->victim;
  if (this_ptr_00 != (CCharacter *)0x0) {
    (*(((this_ptr_00->base).vtable._uc)->_uc).checkCylinderCollisionWorld)
              (this_ptr_00,point,radius,damage_info);
    if (0.0 < (double)damage_info->damage_amount) {
      CStack_20.x = point->x;
      CStack_20.y = point->y;
      iStack_14 = (int)ROUND(ROUND((double)damage_info->damage_amount * 1.2 *
                                   0.25));
      CStack_20.z = point->z;
      core_gore_cpp_CGore_spawnBloodBurst_FUN_004edbb0
                (g_CGorePtr,&CStack_20,(CVector3f *)0x0,iStack_14,0);
      return 1;
    }
  }
  return 0;
}
