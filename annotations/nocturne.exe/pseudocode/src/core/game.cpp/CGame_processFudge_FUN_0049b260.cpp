// Name: core_game.cpp_CGame_processFudge_FUN_0049b260
// Address: 0049b260
// Address Range: [[0049b260, 0049b391]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_processFudge_FUN_0049b260(CGame *this_ptr)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_processFudge_FUN_0049b260(CGame *this_ptr)

{
  int iVar1;
  float fStack_18;
  
  iVar1 = (*(code *)**(uint **)INT_005bac64)(INT_005bac64,0x1d);
  if ((iVar1 != 0) && (this_ptr->debug_fudge_target != (CVector3f *)0x0)) {
    fStack_18 = this_ptr->debug_fudge_step;
    iVar1 = (*(code *)**(uint **)INT_005bac64)(INT_005bac64,0x38);
    if (iVar1 != 0) {
      fStack_18 = fStack_18 * (float)0.10000000000000001;
    }
    iVar1 = (**(code **)(*(int *)INT_005bac64 + 4))(INT_005bac64,0x4b);
    if (iVar1 != 0) {
      this_ptr->debug_fudge_target->x = this_ptr->debug_fudge_target->x - fStack_18;
    }
    iVar1 = (**(code **)(*(int *)INT_005bac64 + 4))(INT_005bac64,0x4d);
    if (iVar1 != 0) {
      this_ptr->debug_fudge_target->x = this_ptr->debug_fudge_target->x + fStack_18;
    }
    iVar1 = (**(code **)(*(int *)INT_005bac64 + 4))(INT_005bac64,0x48);
    if (iVar1 != 0) {
      this_ptr->debug_fudge_target->z = this_ptr->debug_fudge_target->z - fStack_18;
    }
    iVar1 = (**(code **)(*(int *)INT_005bac64 + 4))(INT_005bac64,0x50);
    if (iVar1 != 0) {
      this_ptr->debug_fudge_target->z = this_ptr->debug_fudge_target->z + fStack_18;
    }
    iVar1 = (**(code **)(*(int *)INT_005bac64 + 4))(INT_005bac64,0x1e);
    if (iVar1 != 0) {
      this_ptr->debug_fudge_target->y = this_ptr->debug_fudge_target->y - fStack_18;
    }
    iVar1 = (**(code **)(*(int *)INT_005bac64 + 4))(INT_005bac64,0x10);
    if (iVar1 != 0) {
      this_ptr->debug_fudge_target->y = this_ptr->debug_fudge_target->y + fStack_18;
      return;
    }
  }
  return;
}
