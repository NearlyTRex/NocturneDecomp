// Name: core_game.cpp_CGame_FUN_004dda80
// Address: 004dda80
// Address Range: [[004dda80, 004ddae6]]
// Convention: __cdecl
// Signature: void core_game.cpp_CGame_FUN_004dda80(CGame * this_ptr)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_FUN_004dda80(CGame *this_ptr)

{
  int iVar1;
  int iVar2;
  int in_stack_00000008;
  float in_stack_0000000c;
  int in_stack_00000010;
  
  *(float *)(this_ptr->field101_0x38c + in_stack_00000010 * 4 + 0x188) =
       *(float *)(this_ptr->field101_0x38c + in_stack_00000010 * 4 + 0x188) * in_stack_0000000c;
  iVar1 = 0;
  iVar2 = in_stack_00000008;
  if (0 < *(int *)(in_stack_00000008 + 0x28558)) {
    do {
      if (in_stack_00000010 == *(int *)(iVar2 + 0x2857c)) {
        core_game_cpp_CGame_FUN_004dda80(this_ptr);
      }
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 0x24;
    } while (iVar1 < *(int *)(in_stack_00000008 + 0x28558));
  }
  return;
}
