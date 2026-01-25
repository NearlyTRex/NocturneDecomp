// Name: core_hostage.cpp_RelatedToScatDazzle_FUN_004f6120
// Address: 004f6120
// Address Range: [[004f6120, 004f616e]]
// Convention: unknown
// Signature: undefined core_hostage.cpp_RelatedToScatDazzle_FUN_004f6120()

#include "nocturne.h"

/* Signature: byte actors_npc_hostage.cpp_RelatedToScatDazzle(uint param_1) */

void core_hostage_cpp_RelatedToScatDazzle_FUN_004f6120(void)

{
  int iVar1;
  CNPC *in_stack_00000004;
  int in_stack_0000000c;
  
  iVar1 = (*(((in_stack_00000004->base_character).base_actor.vtable._uc)->_uc).isDamageable)
                    (&in_stack_00000004->base_character);
  if (0 < iVar1) {
    iVar1 = crt_string_c_stricmp_FUN_005fe7f0((char *)in_stack_00000004,"ScatDazzle");
    if (iVar1 != 0) {
      if (in_stack_0000000c != 0) {
        (in_stack_00000004->base_character).field2_0x240c[0] = '\x01';
        (in_stack_00000004->base_character).field2_0x240c[1] = '\0';
        (in_stack_00000004->base_character).field2_0x240c[2] = '\0';
        (in_stack_00000004->base_character).field2_0x240c[3] = '\0';
      }
      core_npc_cpp_CNPC_FUN_00544b70(in_stack_00000004);
      return;
    }
  }
  return;
}
