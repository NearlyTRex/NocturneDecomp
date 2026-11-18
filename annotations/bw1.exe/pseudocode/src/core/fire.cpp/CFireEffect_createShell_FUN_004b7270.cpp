// Name: core_fire.cpp_CFireEffect_createShell_FUN_004b7270
// Address: 004b7270
// Address Range: [[004b7270, 004b72c7]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createShell_FUN_004b7270(CFireEffect *this_ptr,CVector3f *position,CVector3f *euler_angles,CVector3f *velocity,CKeyFramedModel *model_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_createShell_FUN_004b7270(CFireEffect *this_ptr,CVector3f *position,CVector3f *euler_angles,CVector3f *velocity,CKeyFramedModel *model_ptr)

{
  core_fire_cpp_CShell_setup_FUN_004b4000
            (g_ShellPool + g_INT_01cbae44,position,euler_angles,velocity,model_ptr);
  g_INT_01cbae44 = g_INT_01cbae44 + 1;
  if (g_INT_01cbae44 < 0x32) {
    return;
  }
  g_INT_01cbae44 = 0;
  return;
}
