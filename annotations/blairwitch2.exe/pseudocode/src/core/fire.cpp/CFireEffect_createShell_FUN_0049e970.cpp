// Name: core_fire.cpp_CFireEffect_createShell_FUN_0049e970
// Address: 0049e970
// Address Range: [[0049e970, 0049e9c7]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createShell_FUN_0049e970(CFireEffect *this_ptr,CVector3f *position,CVector3f *euler_angles,CVector3f *velocity,CKeyFramedModel *model_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_createShell_FUN_0049e970(CFireEffect *this_ptr,CVector3f *position,CVector3f *euler_angles,CVector3f *velocity,CKeyFramedModel *model_ptr)

{
  core_fire_cpp_CShell_setup_FUN_0049b660
            (g_ShellPool + g_INT_01ca23b8,position,euler_angles,velocity,model_ptr);
  g_INT_01ca23b8 = g_INT_01ca23b8 + 1;
  if (g_INT_01ca23b8 < 0x32) {
    return;
  }
  g_INT_01ca23b8 = 0;
  return;
}
