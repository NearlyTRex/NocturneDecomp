// Name: core_fire.cpp_CFireEffect_createCrater_FUN_004a3aa0
// Address: 004a3aa0
// Address Range: [[004a3aa0, 004a3ae3]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createCrater_FUN_004a3aa0(CFireEffect *this_ptr,CVector3f *position,float radius)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CFireEffect_createCrater_FUN_004a3aa0(CFireEffect *this_ptr,CVector3f *position,float radius)

{
  core_fire_cpp_CCrater_activate_FUN_0049d590
            ((CCrater *)(_DAT_01cfaff4 * 0x70 + 0x1cfaff8),position,radius);
  _DAT_01cfaff4 = _DAT_01cfaff4 + 1;
  if (_DAT_01cfaff4 < 0x14) {
    return;
  }
  _DAT_01cfaff4 = 0;
  return;
}
