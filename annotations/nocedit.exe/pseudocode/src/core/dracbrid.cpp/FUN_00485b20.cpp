// Name: core_dracbrid.cpp_FUN_00485b20
// Address: 00485b20
// Address Range: [[00485b20, 00485bb9]]
// Convention: __cdecl
// Signature: void __cdecl core_dracbrid_cpp_FUN_00485b20(void)

#include "nocturne.h"

/* Signature: byte actors_enemy_draculabride.cpp_FUN_00485b20(uint param_1, uint
   param_2, uint param_3, uint param_4) */

void __cdecl core_dracbrid_cpp_FUN_00485b20(void)

{
  int *piVar1;
  CBodyPart *pCVar2;
  CCharacter *in_stack_00000004;
  int in_stack_00000008;
  
  if (((in_stack_00000004->model).model_name[0] != '\0') &&
     ((in_stack_00000004->model).part_visibility_flags[in_stack_00000008] != 0)) {
    pCVar2 = core_bodypart_cpp_CreateBodyPart_FUN_00418e10();
    core_charactr_cpp_CCharacter_FUN_0042bd30(in_stack_00000004);
    core_bodypart_cpp_FUN_0041a050();
    *(CBodyPart **)
     (in_stack_00000004[1].model.motion_controller.current_motion_name +
     in_stack_00000004[1].base.unk13 * 4 + -0x40) = pCVar2;
    piVar1 = &in_stack_00000004[1].base.unk13;
    *piVar1 = *piVar1 + 1;
    (pCVar2->base).is_transparent = 1;
    pCVar2->unk[0xb5c] = '\x01';
    pCVar2->unk[0xb5d] = '\0';
    pCVar2->unk[0xb5e] = '\0';
    pCVar2->unk[0xb5f] = '\0';
    pCVar2->unk[0xb68] = -1;
    pCVar2->unk[0xb69] = -1;
    pCVar2->unk[0xb6a] = '\0';
    pCVar2->unk[0xb6b] = '\0';
    return;
  }
  return;
}
