// Name: core_fire.cpp_CFireEffect_createShell_FUN_004c91e0
// Address: 004c91e0
// Address Range: [[004c91e0, 004c923c]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createShell_FUN_004c91e0(CFireEffect *this_ptr,CVector3f *position,CVector3f *euler_angles,CVector3f *velocity,CKeyFramedModel *model_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_createShell_FUN_004c91e0(CFireEffect *this_ptr,CVector3f *position,CVector3f *euler_angles,CVector3f *velocity,CKeyFramedModel *model_ptr)

{
  core_fire_cpp_CShell_setup_FUN_004c6170
            (g_ShellPool + g_ShellAllocIndex,position,euler_angles,velocity,model_ptr);
  g_ShellAllocIndex = g_ShellAllocIndex + 1;
  if (g_ShellAllocIndex < 0x32) {
    return;
  }
  g_ShellAllocIndex = 0;
  return;
}
