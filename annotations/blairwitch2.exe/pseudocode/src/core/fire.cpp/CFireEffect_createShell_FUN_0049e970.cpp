// Name: core_fire.cpp_CFireEffect_createShell_FUN_0049e970
// Address: 0049e970
// Address Range: [[0049e970, 0049e9c7]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createShell_FUN_0049e970(CFireEffect *this_ptr,CVector3f *position,CVector3f *euler_angles,CVector3f *velocity,CKeyFramedModel *model_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CFireEffect_createShell_FUN_0049e970(CFireEffect *this_ptr,CVector3f *position,CVector3f *euler_angles,CVector3f *velocity,CKeyFramedModel *model_ptr)

{
  core_fire_cpp_CShell_setup_FUN_0049b660
            (g_ShellPool + _DAT_01ca23b8,position,euler_angles,velocity,model_ptr);
  _DAT_01ca23b8 = _DAT_01ca23b8 + 1;
  if (_DAT_01ca23b8 < 0x32) {
    return;
  }
  _DAT_01ca23b8 = 0;
  return;
}
