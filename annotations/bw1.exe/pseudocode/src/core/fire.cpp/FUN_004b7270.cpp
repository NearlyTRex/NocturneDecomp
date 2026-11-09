// Name: core_fire.cpp_FUN_004b7270
// Address: 004b7270
// Address Range: [[004b7270, 004b72c7]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_FUN_004b7270(CFireEffect *this_ptr,CVector3f *position,CVector3f *euler_angles,CVector3f *velocity,CKeyFramedModel *model_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_FUN_004b7270(CFireEffect *this_ptr,CVector3f *position,CVector3f *euler_angles,CVector3f *velocity,CKeyFramedModel *model_ptr)

{
  core_fire_cpp_FUN_004b4000(g_ShellPool + _DAT_01cbae44,position,euler_angles,velocity,model_ptr);
  _DAT_01cbae44 = _DAT_01cbae44 + 1;
  if (_DAT_01cbae44 < 0x32) {
    return;
  }
  _DAT_01cbae44 = 0;
  return;
}
