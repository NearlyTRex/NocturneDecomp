// Name: core_zombie.cpp_CZombie_FUN_005f8e50
// Address: 005f8e50
// Address Range: [[005f8e50, 005f8f99]]
// Convention: unknown
// Signature: undefined core_zombie.cpp_CZombie_FUN_005f8e50()

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: byte actors_enemy_zombie.cpp_CZombie_FUN_005f8e50(CZombie* param_1) */

uint core_zombie_cpp_CZombie_FUN_005f8e50(void)

{
  float *in_stack_00000004;
  
  if ((((((float)_DAT_0065845d <= *in_stack_00000004) ||
        ((float)_DAT_0065845d <= in_stack_00000004[1])) ||
       ((float)_DAT_0065845d <= in_stack_00000004[2])) ||
      ((*in_stack_00000004 <= (float)_DAT_00658465 || (in_stack_00000004[1] <= (float)_DAT_00658465)
       ))) || (in_stack_00000004[2] <= (float)_DAT_00658465)) {
    if (((*in_stack_00000004 < 1.0) && (in_stack_00000004[1] < 1.0)) &&
       (((float)_DAT_0065845d < in_stack_00000004[2] &&
        (((in_stack_00000004[2] < (float)_DAT_0065846d &&
          (*in_stack_00000004 <= in_stack_00000004[2])) &&
         (in_stack_00000004[1] <= in_stack_00000004[2])))))) {
      return 1;
    }
    if ((((*in_stack_00000004 < 1.0) && (in_stack_00000004[1] < 1.0)) &&
        ((1.0 < in_stack_00000004[2] &&
         ((in_stack_00000004[2] < (float)_DAT_0065845d &&
          (*in_stack_00000004 < in_stack_00000004[2])))))) &&
       (in_stack_00000004[1] < in_stack_00000004[2])) {
      return 3;
    }
  }
  return 0;
}
