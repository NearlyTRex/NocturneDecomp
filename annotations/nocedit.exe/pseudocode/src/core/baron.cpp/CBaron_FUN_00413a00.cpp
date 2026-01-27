// Name: core_baron.cpp_CBaron_FUN_00413a00
// Address: 00413a00
// Address Range: [[00413a00, 00413a68]]
// Convention: __cdecl
// Signature: void core_baron.cpp_CBaron_FUN_00413a00(CBaron * this_ptr, float param_2)

#include "nocturne.h"

void __cdecl core_baron_cpp_CBaron_FUN_00413a00(CBaron *this_ptr,float param_2)

{
  uint uVar1;
  
  do {
    uVar1 = core_motion_cpp_CMotionController_advance_FUN_0052d610
                      (&(this_ptr->base).base.model.motion_controller);
    if (99 < uVar1) {
      if (uVar1 < 0x65) {
        core_baron_cpp_CBaron_FUN_004136b0(this_ptr);
      }
      else if (uVar1 == 0x6e) {
        this_ptr->unk[0xf8] = '\0';
        this_ptr->unk[0xf9] = '\0';
        this_ptr->unk[0xfa] = '\0';
        this_ptr->unk[0xfb] = '\0';
        this_ptr->unk[0xfc] = '\0';
        this_ptr->unk[0xfd] = '\0';
        this_ptr->unk[0xfe] = '\0';
        this_ptr->unk[0xff] = '\0';
        this_ptr->unk[0xd8] = '\0';
        this_ptr->unk[0xd9] = '\0';
        this_ptr->unk[0xda] = '\0';
        this_ptr->unk[0xdb] = '\0';
      }
    }
  } while (0.0 < param_2);
  return;
}
