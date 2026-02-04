// Name: core_frankgen.cpp_FUN_004d2560
// Address: 004d2560
// Address Range: [[004d2560, 004d25c4]]
// Convention: __cdecl
// Signature: void __cdecl core_frankgen_cpp_FUN_004d2560(void)

#include "nocturne.h"

/* Signature: byte actors_other_frankgen.cpp_FUN_004d2560(uint param_1, uint
   param_2) */

void __cdecl core_frankgen_cpp_FUN_004d2560(void)

{
  CDemonActor *in_stack_00000004;
  _FILE *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_addFilesToExtract_FUN_0040cfd0(in_stack_00000004,in_stack_00000008);
  core_dmodel_cpp_CKeyFramedModelInstance_addFilesToExtract_FUN_0047edd0
            ((CKeyFramedModelInstance *)&in_stack_00000004[1].location.area_id,in_stack_00000008);
  if (in_stack_00000004[1].actor_name[8] != '\0') {
    _fprintf(in_stack_00000008,"data\\%s\n",in_stack_00000004[1].actor_name + 8);
  }
  if (in_stack_00000004[2].create_event[0x5c] == '\0') {
    return;
  }
  core_dmodel_cpp_CKeyFramedModelInstance_addFilesToExtract_FUN_0047edd0
            ((CKeyFramedModelInstance *)&in_stack_00000004[2].orient_matrix.m[2].z,in_stack_00000008
            );
  return;
}
