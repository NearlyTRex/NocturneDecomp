// Name: core_enemy.cpp_CEnemy_testAttackLine_FUN_00479990
// Address: 00479990
// Address Range: [[00479990, 00479a27]]
// Convention: __cdecl
// Signature: int __cdecl core_enemy_cpp_CEnemy_testAttackLine_FUN_00479990(CEnemy *this_ptr,CVector3f *start,CVector3f *end,SDamageInfo *damage_info)

#include "nocturne.h"

int __cdecl core_enemy_cpp_CEnemy_testAttackLine_FUN_00479990(CEnemy *this_ptr,CVector3f *start,CVector3f *end,SDamageInfo *damage_info)

{
  CCharacter *this_ptr_00;
  double dVar1;
  int blood_type;
  byte auStack_28 [16];
  int iStack_18;
  
  this_ptr_00 = this_ptr->victim;
  if (this_ptr_00 != (CCharacter *)0x0) {
    (*(((this_ptr_00->base).vtable._uc)->_uc).canBeGrabbed)
              (this_ptr_00,(CDemonActor *)start,(int)end);
    auStack_28._0_8_ = (ulonglong)damage_info->damage_amount;
    if (0.0 < (double)auStack_28._0_8_) {
      blood_type = 0x4799fe;
      dVar1 = round
                        ((double)auStack_28._0_8_ * 1.2 * 0.25);
      iStack_18 = (int)ROUND(dVar1);
      core_gore_cpp_CGore_spawnBloodBurst_FUN_004b0200
                ((CGore *)INT_005b96c4,(CVector3f *)(auStack_28 + 4),(CVector3f *)0x0,iStack_18,
                 blood_type);
      return 1;
    }
  }
  return 0;
}
