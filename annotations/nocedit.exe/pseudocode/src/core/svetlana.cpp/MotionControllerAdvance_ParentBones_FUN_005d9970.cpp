// Name: core_svetlana.cpp_MotionControllerAdvance_ParentBones_FUN_005d9970
// Address: 005d9970
// Address Range: [[005d9970, 005d9a07]]
// Convention: __cdecl
// Signature: void __cdecl core_svetlana_cpp_MotionControllerAdvance_ParentBones_FUN_005d9970(void)

#include "nocturne.h"

/* Signature: byte actors_hero_svetlana.cpp_MotionControllerAdvance_ParentBones(uint
   param_1, uint param_2) */

void __cdecl core_svetlana_cpp_MotionControllerAdvance_ParentBones_FUN_005d9970(void)

{
  int iVar1;
  uint uVar2;
  CCharacter *in_stack_00000004;
  float in_stack_00000008;
  
  do {
    uVar2 = core_motion_cpp_CMotionController_advance_FUN_0052d610
                      (&(in_stack_00000004->model).motion_controller);
    if (uVar2 < 100) {
      core_charactr_cpp_CCharacter_FUN_0042ec40(in_stack_00000004);
    }
    else {
      if (uVar2 < 0x65) {
        core_svetlana_cpp_AttackWithParentBone_FUN_005d9a10();
        iVar1 = *(int *)(in_stack_00000004[2].field66_0x33cc[0x1c].on_event + 0x1c);
      }
      else {
        if (uVar2 != 0x65) {
          core_charactr_cpp_CCharacter_FUN_0042ec40(in_stack_00000004);
          goto LAB_005d99be;
        }
        core_svetlana_cpp_AttackWithParentBone_FUN_005d9a10();
        iVar1 = *(int *)(in_stack_00000004[2].field66_0x33cc[0x1c].on_event + 0x1c);
      }
      *(uint *)(in_stack_00000004[2].field66_0x33cc[0x1c].on_event + 0x1c) = (uint)(iVar1 == 0);
    }
LAB_005d99be:
    if (in_stack_00000008 <= 0.0) {
      return;
    }
  } while( true );
}
