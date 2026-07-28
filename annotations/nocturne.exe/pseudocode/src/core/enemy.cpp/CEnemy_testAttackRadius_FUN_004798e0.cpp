// Name: core_enemy.cpp_CEnemy_testAttackRadius_FUN_004798e0
// Address: 004798e0
// Address Range: [[004798e0, 00479987]]
// Convention: __cdecl
// Signature: int __cdecl core_enemy_cpp_CEnemy_testAttackRadius_FUN_004798e0(CEnemy *this_ptr,CVector3f *point,float radius,SDamageInfo *damage_info)

#include "nocturne.h"

int __cdecl core_enemy_cpp_CEnemy_testAttackRadius_FUN_004798e0(CEnemy *this_ptr,CVector3f *point,float radius,SDamageInfo *damage_info)

{
  CCharacter *this_ptr_00;
  float fVar1;
  double dVar2;
  int blood_type;
  byte auStack_28 [8];
  float fStack_20;
  float fStack_1c;
  int iStack_18;
  
  this_ptr_00 = this_ptr->victim;
  if (this_ptr_00 != (CCharacter *)0x0) {
    (*(((this_ptr_00->base).vtable._uc)->_uc).isGrabbable)(this_ptr_00,(CDemonActor *)point);
    auStack_28 = (byte  [8])(double)damage_info->damage_amount;
    if (0.0 < (double)auStack_28) {
      fStack_20 = point->x;
      fVar1 = point->y;
      blood_type = 0x479951;
      dVar2 = round((double)auStack_28 * 1.2 * 0.25);
      iStack_18 = (int)ROUND(dVar2);
      fStack_1c = point->z;
      fStack_20 = fVar1;
      core_gore_cpp_CGore_spawnBloodBurst_FUN_004b0200
                ((CGore *)INT_005b96c4,(CVector3f *)(auStack_28 + 4),(CVector3f *)0x0,iStack_18,
                 blood_type);
      return 1;
    }
  }
  return 0;
}
