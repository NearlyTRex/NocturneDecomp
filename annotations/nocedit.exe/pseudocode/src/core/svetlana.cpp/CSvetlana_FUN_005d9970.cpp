// Name: core_svetlana.cpp_CSvetlana_FUN_005d9970
// Address: 005d9970
// Address Range: [[005d9970, 005d9a07]]
// Convention: __cdecl
// Signature: void __cdecl core_svetlana_cpp_CSvetlana_FUN_005d9970(CSvetlana *this_ptr)

#include "nocturne.h"

void __cdecl core_svetlana_cpp_CSvetlana_FUN_005d9970(CSvetlana *this_ptr)

{
  int iVar1;
  uint uVar2;
  float in_stack_00000008;
  
  do {
    uVar2 = core_motion_cpp_CMotionController_advance_FUN_0052d610
                      (&(this_ptr->base).base.model.motion_controller);
    if (uVar2 < 100) {
      core_charactr_cpp_CCharacter_FUN_0042ec40((CCharacter *)this_ptr);
    }
    else {
      if (uVar2 < 0x65) {
        core_svetlana_cpp_CSvetlana_FUN_005d9a10(this_ptr);
        iVar1 = this_ptr->unk2;
      }
      else {
        if (uVar2 != 0x65) {
          core_charactr_cpp_CCharacter_FUN_0042ec40((CCharacter *)this_ptr);
          goto LAB_005d99be;
        }
        core_svetlana_cpp_CSvetlana_FUN_005d9a10(this_ptr);
        iVar1 = this_ptr->unk2;
      }
      this_ptr->unk2 = (uint)(iVar1 == 0);
    }
LAB_005d99be:
    if (in_stack_00000008 <= 0.0) {
      return;
    }
  } while( true );
}
