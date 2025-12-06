// Name: core_boxactor.cpp_FUN_00422640
// Address: 00422640
// Address Range: [[00422640, 004226c2]]
// Convention: unknown
// Signature: undefined core_boxactor.cpp_FUN_00422640()

#include "nocturne.h"

/* Signature: byte actors_other_boxactor.cpp_FUN_00422640(uint param_1, uint
   param_2, uint param_3) */

void core_boxactor_cpp_FUN_00422640(void)

{
  float *pfVar1;
  CDemonActor *in_stack_00000004;
  float *in_stack_00000008;
  float *in_stack_0000000c;
  
  (in_stack_00000004->location).position.x = *in_stack_00000008;
  (in_stack_00000004->location).position.y = in_stack_00000008[1];
  (in_stack_00000004->location).position.z = in_stack_00000008[2];
  if (&in_stack_00000004->orient != (COrientation *)in_stack_0000000c) {
    (in_stack_00000004->orient).pitch = *in_stack_0000000c;
    (in_stack_00000004->orient).bank = in_stack_0000000c[1];
    (in_stack_00000004->orient).heading = in_stack_0000000c[2];
  }
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(in_stack_00000004);
  pfVar1 = &in_stack_00000004[2].field12_0xe0.y;
  if (pfVar1 != in_stack_00000008) {
    *pfVar1 = *in_stack_00000008;
    in_stack_00000004[2].field12_0xe0.z = in_stack_00000008[1];
    in_stack_00000004[2].field13_0xec.x = in_stack_00000008[2];
  }
  pfVar1 = &in_stack_00000004[2].field13_0xec.y;
  if (pfVar1 != in_stack_0000000c) {
    *pfVar1 = *in_stack_0000000c;
    in_stack_00000004[2].field13_0xec.z = in_stack_0000000c[1];
    in_stack_00000004[2].field14_0xf8 = (int)in_stack_0000000c[2];
  }
  core_boxactor_cpp_FUN_004218d0();
  return;
}
