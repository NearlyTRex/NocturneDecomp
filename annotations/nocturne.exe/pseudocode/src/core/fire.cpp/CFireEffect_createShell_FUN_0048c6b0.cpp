// Name: core_fire.cpp_CFireEffect_createShell_FUN_0048c6b0
// Address: 0048c6b0
// Address Range: [[0048c6b0, 0048c70c]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createShell_FUN_0048c6b0(CFireEffect *this_ptr,CVector3f *position,CVector3f *euler_angles,CVector3f *velocity,CKeyFramedModel *model_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_createShell_FUN_0048c6b0(CFireEffect *this_ptr,CVector3f *position,CVector3f *euler_angles,CVector3f *velocity,CKeyFramedModel *model_ptr)

{
  core_fire_cpp_CShell_setup_FUN_00489640
            (g_ShellPool + g_ShellAllocIndex,position,euler_angles,velocity,model_ptr);
  g_ShellAllocIndex = g_ShellAllocIndex + 1;
  if (g_ShellAllocIndex < 0x32) {
    return;
  }
  g_ShellAllocIndex = 0;
  return;
}
