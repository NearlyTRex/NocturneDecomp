// Name: core_fire.cpp_CFireEffect_createRock_FUN_0048b320
// Address: 0048b320
// Address Range: [[0048b320, 0048b36b]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createRock_FUN_0048b320(CFireEffect *this_ptr,CVector3f *position,CVector3f *velocity,CKeyFramedModel *model_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CFireEffect_createRock_FUN_0048b320(CFireEffect *this_ptr,CVector3f *position,CVector3f *velocity,CKeyFramedModel *model_ptr)

{
  CRock *this_ptr_00;
  int iVar1;
  
  iVar1 = _DAT_01c5b4fc + 1;
  this_ptr_00 = g_CRock_ARRAY_01c5b500 + _DAT_01c5b4fc;
  _DAT_01c5b4fc = iVar1;
  if (0x3f < iVar1) {
    _DAT_01c5b4fc = 0;
  }
  core_fire_cpp_CRock_setup_FUN_00484c90(this_ptr_00,position,velocity,model_ptr);
  return;
}
