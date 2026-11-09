// Name: core_fire.cpp_CFireEffect_createShell_FUN_004a3e70
// Address: 004a3e70
// Address Range: [[004a3e70, 004a3ec7]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createShell_FUN_004a3e70(CFireEffect *this_ptr,CVector3f *position,CVector3f *euler_angles,CVector3f *velocity,CKeyFramedModel *model_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CFireEffect_createShell_FUN_004a3e70(CFireEffect *this_ptr,CVector3f *position,CVector3f *euler_angles,CVector3f *velocity,CKeyFramedModel *model_ptr)

{
  core_fire_cpp_FUN_004a0960(g_ShellPool + _DAT_01d028c4,position,euler_angles,velocity,model_ptr);
  _DAT_01d028c4 = _DAT_01d028c4 + 1;
  if (_DAT_01d028c4 < 0x32) {
    return;
  }
  _DAT_01d028c4 = 0;
  return;
}
