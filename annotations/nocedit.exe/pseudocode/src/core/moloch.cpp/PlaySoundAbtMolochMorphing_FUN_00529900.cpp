// Name: core_moloch.cpp_PlaySoundAbtMolochMorphing_FUN_00529900
// Address: 00529900
// Address Range: [[00529900, 00529947]]
// Convention: unknown
// Signature: undefined core_moloch.cpp_PlaySoundAbtMolochMorphing_FUN_00529900()

#include "nocturne.h"

/* Signature: byte actors_hero_moloch.cpp_PlaySoundAbtMolochMorphingToHumanOrDemon(uint
   param_1) */

void core_moloch_cpp_PlaySoundAbtMolochMorphing_FUN_00529900(void)

{
  int in_stack_00000004;
  
  *(uint *)(in_stack_00000004 + 0x21e90) = 0;
  *(uint *)(in_stack_00000004 + 0x21e8c) = 1;
  if (*(int *)(in_stack_00000004 + 0x21e88) != 0) {
    (**(code **)(*(int *)(in_stack_00000004 + 0x154) + 0x24))();
    return;
  }
  (**(code **)(*(int *)(in_stack_00000004 + 0x154) + 0x24))();
  return;
}
