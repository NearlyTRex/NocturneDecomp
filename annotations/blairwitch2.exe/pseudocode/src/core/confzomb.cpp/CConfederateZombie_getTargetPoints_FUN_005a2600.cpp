// Name: core_confzomb.cpp_CConfederateZombie_getTargetPoints_FUN_005a2600
// Address: 005a2600
// Address Range: [[005a2600, 005a2626]]
// Convention: __cdecl
// Signature: int __cdecl core_confzomb_cpp_CConfederateZombie_getTargetPoints_FUN_005a2600(CConfederateZombie *this_ptr,CVector3f *out_points_array)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_confzomb_cpp_CConfederateZombie_getTargetPoints_FUN_005a2600(CConfederateZombie *this_ptr,CVector3f *out_points_array)

{
  int iVar1;
  
  if (*(float *)&this_ptr->field_0x113c4 < (float)_DAT_005eff67) {
    return 0;
  }
  iVar1 = core_enemy_cpp_CEnemy_getTargetPoints_FUN_00488020((CEnemy *)this_ptr,out_points_array);
  return iVar1;
}
