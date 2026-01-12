// Name: core_bat.cpp_FUN_00414ce0
// Address: 00414ce0
// Address Range: [[00414ce0, 00414db6]]
// Convention: unknown
// Signature: undefined core_bat.cpp_FUN_00414ce0()

#include "nocturne.h"

/* Signature: byte actors_other_bat.cpp_FUN_00414ce0(uint param_1) */

void core_bat_cpp_FUN_00414ce0(void)

{
  int extraout_EBX;
  int iVar1;
  int extraout_EBX_00;
  double dVar2;
  int in_stack_00000004;
  float local_1c;
  float local_18;
  
  local_1c = *(float *)(in_stack_00000004 + 0x304);
  if (0.0 <= local_1c) {
    dVar2 = crt_math_c_floor_FUN_005feb90
                      ((double)(local_1c / (float)*(int *)(in_stack_00000004 + 0x178)));
    local_18 = SUB84 /* extract 2-byte value */(dVar2,0);
    local_1c = local_1c - (float)dVar2 * local_18;
    iVar1 = extraout_EBX_00;
  }
  else {
    dVar2 = crt_math_c_floor_FUN_005feb90
                      ((double)(-local_1c / (float)*(int *)(in_stack_00000004 + 0x178)));
    local_18 = SUB84 /* extract 2-byte value */(dVar2,0);
    local_1c = (float)dVar2 * local_18 + local_1c;
    iVar1 = extraout_EBX;
    if (local_1c < 0.0) {
      local_1c = local_1c + local_18;
    }
  }
  *(float *)(iVar1 + 0x304) = local_1c;
  core_course_cpp_CCourse_FUN_00442710((CCourse *)(iVar1 + 0x178));
  return;
}
