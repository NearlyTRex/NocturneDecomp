// Name: core_fire.cpp_CFireEffect_createShell_FUN_004a3e70
// Address: 004a3e70
// Address Range: [[004a3e70, 004a3ec7]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createShell_FUN_004a3e70(CFireEffect *this_ptr,CVector3f *position,CVector3f *euler_angles,CVector3f *velocity,CKeyFramedModel *model_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_createShell_FUN_004a3e70(CFireEffect *this_ptr,CVector3f *position,CVector3f *euler_angles,CVector3f *velocity,CKeyFramedModel *model_ptr)

{
  core_fire_cpp_CShell_setup_FUN_004a0960
            (g_ShellPool + g_INT_01d028c4,position,euler_angles,velocity,model_ptr);
  g_INT_01d028c4 = g_INT_01d028c4 + 1;
  if (g_INT_01d028c4 < 0x32) {
    return;
  }
  g_INT_01d028c4 = 0;
  return;
}
