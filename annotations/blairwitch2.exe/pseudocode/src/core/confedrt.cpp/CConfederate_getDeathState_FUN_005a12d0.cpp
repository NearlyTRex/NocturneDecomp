// Name: core_confedrt.cpp_CConfederate_getDeathState_FUN_005a12d0
// Address: 005a12d0
// Address Range: [[005a12d0, 005a1331]]
// Convention: __cdecl
// Signature: EDeathState __cdecl core_confedrt_cpp_CConfederate_getDeathState_FUN_005a12d0(CConfederate *this_ptr)

#include "nocturne.h"

EDeathState __cdecl core_confedrt_cpp_CConfederate_getDeathState_FUN_005a12d0(CConfederate *this_ptr)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = unkaddr_0059d350_cpp_FUN_0059daa0(&this_ptr->field_0x10af8,"Death");
  if ((iVar2 == 0) &&
     (iVar2 = unkaddr_0059d350_cpp_FUN_0059daa0(&this_ptr->field_0x10af8,"Animation"),
     iVar2 == 0)) {
    return DEATH_STATE_ALIVE;
  }
  iVar2 = core_motion_cpp_FUN_005035c0(&this_ptr->field_0x2b4);
  uVar1 = *(uint *)(iVar2 + 0x24);
  if (5 < uVar1) {
    if (uVar1 < 7) {
      return DEATH_STATE_DYING;
    }
    if (uVar1 == 7) {
      return DEATH_STATE_DEAD;
    }
  }
  return DEATH_STATE_ALIVE;
}
