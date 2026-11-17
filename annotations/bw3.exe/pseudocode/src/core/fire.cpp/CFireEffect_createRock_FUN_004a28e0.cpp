// Name: core_fire.cpp_CFireEffect_createRock_FUN_004a28e0
// Address: 004a28e0
// Address Range: [[004a28e0, 004a292b]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createRock_FUN_004a28e0(CFireEffect *this_ptr,CVector3f *position,CVector3f *velocity,CKeyFramedModel *model_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_createRock_FUN_004a28e0(CFireEffect *this_ptr,CVector3f *position,CVector3f *velocity,CKeyFramedModel *model_ptr)

{
  CRock *this_ptr_00;
  int iVar1;
  
  iVar1 = g_RockAllocIndex + 1;
  this_ptr_00 = g_RockPool + g_RockAllocIndex;
  g_RockAllocIndex = iVar1;
  if (0x3f < iVar1) {
    g_RockAllocIndex = 0;
  }
  core_fire_cpp_CRock_setup_FUN_00499fe0(this_ptr_00,position,velocity,model_ptr);
  return;
}
