// Name: core_enemy.cpp_CEnemy_testAttackLine_FUN_00489490
// Address: 00489490
// Address Range: [[00489490, 00489527]]
// Convention: __cdecl
// Signature: int __cdecl core_enemy_cpp_CEnemy_testAttackLine_FUN_00489490(CEnemy *this_ptr,CVector3f *start,CVector3f *end,SDamageInfo *damage_info)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_enemy_cpp_CEnemy_testAttackLine_FUN_00489490(CEnemy *this_ptr,CVector3f *start,CVector3f *end,SDamageInfo *damage_info)

{
  CCharacter *this_ptr_00;
  float10 fVar1;
  EBloodType blood_type;
  CVector3f CStack_20;
  int iStack_14;
  
  this_ptr_00 = this_ptr->victim;
  if (this_ptr_00 != (CCharacter *)0x0) {
    (*(((this_ptr_00->base).vtable._uc)->_uc).testDamageLine)
              (this_ptr_00,start,end,damage_info,&CStack_20);
    if (0.0 < damage_info->damage_amount) {
      fVar1 = (float10)damage_info->damage_amount * (float10)_DAT_005bdc5f * (float10)_DAT_005bdc67;
      blood_type = BLOOD_TYPE_RED;
      round();
      iStack_14 = (int)ROUND(fVar1);
      core_gore_cpp_CGore_spawnBloodBurst_FUN_004ce9c0
                (g_CGorePtr,&CStack_20,(CVector3f *)0x0,iStack_14,blood_type);
      return 1;
    }
  }
  return 0;
}
