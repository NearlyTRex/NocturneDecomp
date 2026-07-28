// Name: core_fire.cpp_CFireEffect_createRock_FUN_0048b320
// Address: 0048b320
// Address Range: [[0048b320, 0048b36b]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createRock_FUN_0048b320(CFireEffect *this_ptr,CVector3f *position,CVector3f *velocity,CKeyFramedModel *model_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CFireEffect_createRock_FUN_0048b320(CFireEffect *this_ptr,CVector3f *position,CVector3f *velocity,CKeyFramedModel *model_ptr)

{
  int iVar1;
  
  iVar1 = _DAT_01c5b4fc * 0x48;
  _DAT_01c5b4fc = _DAT_01c5b4fc + 1;
  if (0x3f < _DAT_01c5b4fc) {
    _DAT_01c5b4fc = 0;
  }
  core_fire_cpp_CRock_setup_FUN_00484c90((CRock *)(iVar1 + 0x1c5b500),position,velocity,model_ptr);
  return;
}
