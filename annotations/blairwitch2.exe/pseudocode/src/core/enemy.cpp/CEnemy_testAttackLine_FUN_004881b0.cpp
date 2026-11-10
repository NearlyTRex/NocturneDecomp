// Name: core_enemy.cpp_CEnemy_testAttackLine_FUN_004881b0
// Address: 004881b0
// Address Range: [[004881b0, 00488247]]
// Convention: __cdecl
// Signature: int __cdecl core_enemy_cpp_CEnemy_testAttackLine_FUN_004881b0(CEnemy *this_ptr,CVector3f *start,CVector3f *end,SDamageInfo *damage_info)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_enemy_cpp_CEnemy_testAttackLine_FUN_004881b0(CEnemy *this_ptr,CVector3f *start,CVector3f *end,SDamageInfo *damage_info)

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
    if (0.0 < *(float *)(damage_info + 4)) {
      fVar1 = (float10)*(float *)(damage_info + 4) * (float10)_DAT_005d2db9 * (float10)_DAT_005d2dc1
      ;
      blood_type = BLOOD_TYPE_RED;
      round();
      iStack_14 = (int)ROUND(fVar1);
      core_gore_cpp_CGore_spawnBloodBurst_FUN_004c9850
                (g_CGorePtr,&local_20,(CVector3f *)0x0,iStack_14,blood_type);
      return 1;
    }
  }
  return 0;
}
