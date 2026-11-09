// Name: core_enemy.cpp_FUN_004a0810
// Address: 004a0810
// Address Range: [[004a0810, 004a08a7]]
// Convention: __cdecl
// Signature: int __cdecl core_enemy_cpp_FUN_004a0810(CEnemy *this_ptr,CVector3f *start,CVector3f *end,SDamageInfo *damage_info)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_enemy_cpp_FUN_004a0810(CEnemy *this_ptr,CVector3f *start,CVector3f *end,SDamageInfo *damage_info)

{
  int iVar1;
  float10 fVar2;
  EBloodType blood_type;
  CVector3f local_20;
  int iStack_14;
  
  iVar1 = *(int *)&this_ptr->field_0xc1e8;
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 0x154) + 0x104))(iVar1,start,end,damage_info,&local_20);
    if (0.0 < *(float *)(damage_info + 4)) {
      fVar2 = (float10)*(float *)(damage_info + 4) * (float10)_DAT_005dcb52 * (float10)_DAT_005dcb5a
      ;
      blood_type = BLOOD_TYPE_RED;
      round();
      iStack_14 = (int)ROUND(fVar2);
      core_gore_cpp_FUN_004e6060(g_CGorePtr,&local_20,(CVector3f *)0x0,iStack_14,blood_type);
      return 1;
    }
  }
  return 0;
}
