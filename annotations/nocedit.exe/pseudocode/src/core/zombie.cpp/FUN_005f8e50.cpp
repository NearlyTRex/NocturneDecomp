// Name: core_zombie.cpp_FUN_005f8e50
// Address: 005f8e50
// Address Range: [[005f8e50, 005f8f99]]
// Convention: __cdecl
// Signature: int __cdecl core_zombie_cpp_FUN_005f8e50(void)

#include "nocturne.h"

int __cdecl core_zombie_cpp_FUN_005f8e50(void)

{
  float *in_stack_00000004;
  
  if ((((((float)2 <= *in_stack_00000004) ||
        ((float)2 <= in_stack_00000004[1])) ||
       ((float)2 <= in_stack_00000004[2])) ||
      ((*in_stack_00000004 <= (float)0.69999999999999996 ||
       (in_stack_00000004[1] <= (float)0.69999999999999996)))) ||
     (in_stack_00000004[2] <= (float)0.69999999999999996)) {
    if (((*in_stack_00000004 < 1.0) && (in_stack_00000004[1] < 1.0)) &&
       (((float)2 < in_stack_00000004[2] &&
        (((in_stack_00000004[2] < (float)6 &&
          (*in_stack_00000004 <= in_stack_00000004[2])) &&
         (in_stack_00000004[1] <= in_stack_00000004[2])))))) {
      return 1;
    }
    if ((((*in_stack_00000004 < 1.0) && (in_stack_00000004[1] < 1.0)) &&
        ((1.0 < in_stack_00000004[2] &&
         ((in_stack_00000004[2] < (float)2 &&
          (*in_stack_00000004 < in_stack_00000004[2])))))) &&
       (in_stack_00000004[1] < in_stack_00000004[2])) {
      return 3;
    }
  }
  return 0;
}
