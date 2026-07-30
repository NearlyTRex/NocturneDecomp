// Name: core_fire.cpp_CFireEffect_createShell_FUN_0048c6b0
// Address: 0048c6b0
// Address Range: [[0048c6b0, 0048c70c]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createShell_FUN_0048c6b0(CFireEffect *this_ptr,CVector3f *position,CVector3f *euler_angles,CVector3f *velocity,CKeyFramedModel *model_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CFireEffect_createShell_FUN_0048c6b0(CFireEffect *this_ptr,CVector3f *position,CVector3f *euler_angles,CVector3f *velocity,CKeyFramedModel *model_ptr)

{
  core_fire_cpp_CShell_setup_FUN_00489640
            ((CShell *)(&DAT_01c684e0 + _DAT_01c684dc * 0x58),position,euler_angles,velocity,
             model_ptr);
  _DAT_01c684dc = _DAT_01c684dc + 1;
  if (_DAT_01c684dc < 0x32) {
    return;
  }
  _DAT_01c684dc = 0;
  return;
}
