// Name: core_baron.cpp_CBaron_FUN_004135a0
// Address: 004135a0
// Address Range: [[004135a0, 004135d7]]
// Convention: __cdecl
// Signature: void __cdecl core_baron_cpp_CBaron_FUN_004135a0(CBaron *this_ptr,int param_2)

#include "nocturne.h"

void __cdecl core_baron_cpp_CBaron_FUN_004135a0(CBaron *this_ptr,int param_2)

{
  if ((param_2 == *(int *)(this_ptr->unk + 0xd8)) && (*(int *)(this_ptr->unk + 0xd8) != 0)) {
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(this_ptr->base).base.model.motion_controller,7,1);
    this_ptr->unk[0xd8] = '\0';
    this_ptr->unk[0xd9] = '\0';
    this_ptr->unk[0xda] = '\0';
    this_ptr->unk[0xdb] = '\0';
    return;
  }
  return;
}
