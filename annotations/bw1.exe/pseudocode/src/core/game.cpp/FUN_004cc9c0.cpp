// Name: core_game.cpp_FUN_004cc9c0
// Address: 004cc9c0
// Address Range: [[004cc9c0, 004ccaf1]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_FUN_004cc9c0(CGame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_FUN_004cc9c0(CGame *this_ptr)

{
  int iVar1;
  float fStack_18;
  
  iVar1 = (**(code **)*0x01D1BCA0)(0x01D1BCA0,0x1d);
  if ((iVar1 != 0) && (*(int *)&this_ptr->field_0x9f0 != 0)) {
    fStack_18 = *(float *)&this_ptr->field_0x9f4;
    iVar1 = (**(code **)*0x01D1BCA0)(0x01D1BCA0,0x38);
    if (iVar1 != 0) {
      fStack_18 = fStack_18 * (float)_DAT_005e13bc;
    }
    iVar1 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,0x4b);
    if (iVar1 != 0) {
      **(float **)&this_ptr->field_0x9f0 = **(float **)&this_ptr->field_0x9f0 - fStack_18;
    }
    iVar1 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,0x4d);
    if (iVar1 != 0) {
      **(float **)&this_ptr->field_0x9f0 = **(float **)&this_ptr->field_0x9f0 + fStack_18;
    }
    iVar1 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,0x48);
    if (iVar1 != 0) {
      *(float *)(*(int *)&this_ptr->field_0x9f0 + 8) =
           *(float *)(*(int *)&this_ptr->field_0x9f0 + 8) - fStack_18;
    }
    iVar1 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,0x50);
    if (iVar1 != 0) {
      *(float *)(*(int *)&this_ptr->field_0x9f0 + 8) =
           *(float *)(*(int *)&this_ptr->field_0x9f0 + 8) + fStack_18;
    }
    iVar1 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,0x1e);
    if (iVar1 != 0) {
      *(float *)(*(int *)&this_ptr->field_0x9f0 + 4) =
           *(float *)(*(int *)&this_ptr->field_0x9f0 + 4) - fStack_18;
    }
    iVar1 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,0x10);
    if (iVar1 != 0) {
      *(float *)(*(int *)&this_ptr->field_0x9f0 + 4) =
           *(float *)(*(int *)&this_ptr->field_0x9f0 + 4) + fStack_18;
      return;
    }
  }
  return;
}
