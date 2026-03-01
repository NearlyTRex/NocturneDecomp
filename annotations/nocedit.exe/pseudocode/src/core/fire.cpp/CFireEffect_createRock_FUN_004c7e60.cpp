// Name: core_fire.cpp_CFireEffect_createRock_FUN_004c7e60
// Address: 004c7e60
// Address Range: [[004c7e60, 004c7eab]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createRock_FUN_004c7e60(CFireEffect *this_ptr,CVector3f *position,CVector3f *velocity,CKeyFramedModel *model_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_createRock_FUN_004c7e60(CFireEffect *this_ptr,CVector3f *position,CVector3f *velocity,CKeyFramedModel *model_ptr)

{
  CRock *this_ptr_00;
  int iVar1;
  
  iVar1 = g_RockAllocIndex + 1;
  this_ptr_00 = g_RockPool + g_RockAllocIndex;
  g_RockAllocIndex = iVar1;
  if (0x3f < iVar1) {
    g_RockAllocIndex = 0;
  }
  core_fire_cpp_CRock_setup_FUN_004c17c0(this_ptr_00,position,velocity,model_ptr);
  return;
}
