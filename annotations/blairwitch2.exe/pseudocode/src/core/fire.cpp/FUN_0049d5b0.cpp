// Name: core_fire.cpp_FUN_0049d5b0
// Address: 0049d5b0
// Address Range: [[0049d5b0, 0049d5fb]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_FUN_0049d5b0(CFireEffect *this_ptr,CVector3f *position,CVector3f *velocity,CKeyFramedModel *model_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_FUN_0049d5b0(CFireEffect *this_ptr,CVector3f *position,CVector3f *velocity,CKeyFramedModel *model_ptr)

{
  CRock *this_ptr_00;
  int iVar1;
  
  iVar1 = _DAT_01c93cd4 + 1;
  this_ptr_00 = g_RockPool + _DAT_01c93cd4;
  _DAT_01c93cd4 = iVar1;
  if (0x3f < iVar1) {
    _DAT_01c93cd4 = 0;
  }
  core_fire_cpp_FUN_004965f0(this_ptr_00,position,velocity,model_ptr);
  return;
}
