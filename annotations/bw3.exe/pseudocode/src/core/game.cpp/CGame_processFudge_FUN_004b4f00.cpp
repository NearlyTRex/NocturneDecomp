// Name: core_game.cpp_CGame_processFudge_FUN_004b4f00
// Address: 004b4f00
// Address Range: [[004b4f00, 004b5031]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_processFudge_FUN_004b4f00(CGame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_CGame_processFudge_FUN_004b4f00(CGame *this_ptr)

{
  int iVar1;
  float fStack_18;
  
  iVar1 = (**(code **)*0x01D70A78)(0x01D70A78,0x1d);
  if ((iVar1 != 0) && (this_ptr->debug_fudge_target != (CVector3f *)0x0)) {
    fStack_18 = this_ptr->debug_fudge_step;
    iVar1 = (**(code **)*0x01D70A78)(0x01D70A78,0x38);
    if (iVar1 != 0) {
      fStack_18 = fStack_18 * (float)_DAT_005c2238;
    }
    iVar1 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,0x4b);
    if (iVar1 != 0) {
      this_ptr->debug_fudge_target->x = this_ptr->debug_fudge_target->x - fStack_18;
    }
    iVar1 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,0x4d);
    if (iVar1 != 0) {
      this_ptr->debug_fudge_target->x = this_ptr->debug_fudge_target->x + fStack_18;
    }
    iVar1 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,0x48);
    if (iVar1 != 0) {
      this_ptr->debug_fudge_target->z = this_ptr->debug_fudge_target->z - fStack_18;
    }
    iVar1 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,0x50);
    if (iVar1 != 0) {
      this_ptr->debug_fudge_target->z = this_ptr->debug_fudge_target->z + fStack_18;
    }
    iVar1 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,0x1e);
    if (iVar1 != 0) {
      this_ptr->debug_fudge_target->y = this_ptr->debug_fudge_target->y - fStack_18;
    }
    iVar1 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,0x10);
    if (iVar1 != 0) {
      this_ptr->debug_fudge_target->y = this_ptr->debug_fudge_target->y + fStack_18;
      return;
    }
  }
  return;
}
