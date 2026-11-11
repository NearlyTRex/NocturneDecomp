// Name: core_enemy.cpp_CEnemy_testAttackRadius_FUN_00488110
// Address: 00488110
// Address Range: [[00488110, 004881a9]]
// Convention: __cdecl
// Signature: int __cdecl core_enemy_cpp_CEnemy_testAttackRadius_FUN_00488110(CEnemy *this_ptr,CVector3f *point,float radius,SDamageInfo *damage_info)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_enemy_cpp_CEnemy_testAttackRadius_FUN_00488110(CEnemy *this_ptr,CVector3f *point,float radius,SDamageInfo *damage_info)

{
  CCharacter *this_ptr_00;
  uint *puVar1;
  byte bVar2;
  float10 fVar3;
  float afStackY_1008 [1011];
  CVector3f *direction;
  int count;
  EBloodType blood_type;
  CVector3f CStack_20;
  int iStack_14;
  
  bVar2 = 0;
  this_ptr_00 = this_ptr->victim;
  if (this_ptr_00 != (CCharacter *)0x0) {
    (*(((this_ptr_00->base).vtable._uc)->_uc).checkCylinderCollisionWorld)
              (this_ptr_00,point,radius,damage_info);
    if (0.0 < damage_info->damage_amount) {
      fVar3 = (float10)damage_info->damage_amount * (float10)_DAT_005d2da9 * (float10)_DAT_005d2db1;
      blood_type = BLOOD_TYPE_RED;
      round();
      count = (int)ROUND(fVar3);
      direction = (CVector3f *)0x0;
      puVar1 = (uint *)((int)point + (uint)bVar2 * -8 + 4);
      CStack_20.x = point->x;
      iStack_14 = count;
      *(uint *)((int)&CStack_20 + (uint)bVar2 * -8 + 4) = *puVar1;
      *(uint *)((int)&CStack_20 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
           puVar1[(uint)bVar2 * -2 + 1];
      core_gore_cpp_CGore_spawnBloodBurst_FUN_004c9850
                (g_CGorePtr,&CStack_20,direction,count,blood_type);
      return 1;
    }
  }
  return 0;
}
