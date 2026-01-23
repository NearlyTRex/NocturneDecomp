// Name: core_zombie.cpp_CZombie_FUN_005f8e50
// Address: 005f8e50
// Address Range: [[005f8e50, 005f8f99]]
// Convention: unknown
// Signature: undefined core_zombie.cpp_CZombie_FUN_005f8e50()

#include "nocturne.h"

/* Signature: byte actors_enemy_zombie.cpp_CZombie_FUN_005f8e50(CZombie* param_1) */

uint core_zombie_cpp_CZombie_FUN_005f8e50(void)

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
