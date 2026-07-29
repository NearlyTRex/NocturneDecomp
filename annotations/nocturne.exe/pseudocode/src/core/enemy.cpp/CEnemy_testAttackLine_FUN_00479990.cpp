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
  byte auStack_28 [8];
  CVector3f local_20;
  
  this_ptr_00 = this_ptr->victim;
  if (this_ptr_00 != (CCharacter *)0x0) {
    (*(((this_ptr_00->base).vtable._uc)->_uc).testDamageLine)
              (this_ptr_00,start,end,damage_info,&local_20);
    auStack_28 = (byte  [8])(double)damage_info->damage_amount;
    if (0.0 < (double)auStack_28) {
      blood_type = 0x4799fe;
      dVar1 = round((double)auStack_28 * 1.2 * 0.25);
      local_20.z = (float)(int)ROUND(dVar1);
      core_gore_cpp_CGore_spawnBloodBurst_FUN_004b0200
                ((CGore *)INT_005b96c4,(CVector3f *)(auStack_28 + 4),(CVector3f *)0x0,
                 (int)local_20.z,blood_type);
      return 1;
    }
  }
  return 0;
}
