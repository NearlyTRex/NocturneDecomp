// Name: core_mine.cpp_CSpiritMine_updateGlobe_FUN_005ad940
// Address: 005ad940
// Address Range: [[005ad940, 005ad9e1]]
// Convention: __cdecl
// Signature: void __cdecl core_mine_cpp_CSpiritMine_updateGlobe_FUN_005ad940(CSpiritMine *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_mine_cpp_CSpiritMine_updateGlobe_FUN_005ad940(CSpiritMine *this_ptr)

{
  int iVar1;
  int iVar2;
  double dVar3;
  CDemonGlobe *this_ptr_00;
  CVector3f *position;
  
  this_ptr_00 = (CDemonGlobe *)0x5ad996;
  position = (CVector3f *)&this_ptr->globe;
  dVar3 = round
                    ((double)((1.0 - this_ptr->sleep_timer / this_ptr->sleep_time) *
                             (float)_DAT_005f0ef3));
  iVar1 = (int)ROUND(dVar3);
  core_dglobe_cpp_CDemonGlobe_setPosition_FUN_00448810(this_ptr_00,position);
  (this_ptr->globe).intensity_multiplier = iVar1;
  iVar1 = (iVar1 + (iVar1 >> 0x1f) * -0x100) - (uint)((iVar1 >> 0x1f) << 7 < 0);
  iVar2 = iVar1 >> 0x1f;
  (this_ptr->globe).intensity.bytes[0] =
       (uchar)((int)(((iVar1 >> 8) + iVar2 * -4) - (uint)(iVar2 << 1 < 0)) >> 2);
  core_dglobe_cpp_CDemonGlobe_precomputeAttenuation_FUN_00448860(&this_ptr->globe,5.0);
  (this_ptr->globe).corona_mode = 2;
  return;
}
