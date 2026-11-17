// Name: core_unionzom.cpp_CUnionZombie_getTargetPoints_FUN_005a46e0
// Address: 005a46e0
// Address Range: [[005a46e0, 005a4706]]
// Convention: __cdecl
// Signature: int __cdecl core_unionzom_cpp_CUnionZombie_getTargetPoints_FUN_005a46e0(CUnionZombie *this_ptr,CVector3f *out_points_array)

#include "nocturne.h"

int __cdecl core_unionzom_cpp_CUnionZombie_getTargetPoints_FUN_005a46e0(CUnionZombie *this_ptr,CVector3f *out_points_array)

{
  int iVar1;
  
  if ((this_ptr->base).fade_val < (float)0.5) {
    return 0;
  }
  iVar1 = core_enemy_cpp_CEnemy_getTargetPoints_FUN_00488020((CEnemy *)this_ptr,out_points_array);
  return iVar1;
}
