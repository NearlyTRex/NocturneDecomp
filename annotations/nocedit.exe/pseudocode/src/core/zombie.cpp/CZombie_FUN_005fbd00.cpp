// Name: core_zombie.cpp_CZombie_FUN_005fbd00
// Address: 005fbd00
// Address Range: [[005fbd00, 005fbd9c]]
// Convention: unknown
// Signature: undefined4 core_zombie_cpp_CZombie_FUN_005fbd00(void)

#include "nocturne.h"

/* Signature: byte actors_enemy_zombie.cpp_CZombie_FUN_005fbd00(CZombie* param_1, uint
   param_2) */

uint core_zombie_cpp_CZombie_FUN_005fbd00(void)

{
  int iVar1;
  int in_stack_00000004;
  uint in_stack_00000008;
  
  if ((in_stack_00000008 != 2) &&
     (iVar1 = crt_string_c_stricmp_FUN_005fe7f0
                        ((char *)(in_stack_00000004 + 0x23b8),"jeff.dfm"), iVar1 == 0)) {
    return 0xffffffff;
  }
  iVar1 = crt_string_c_strnicmp_FUN_005ff070((char *)(in_stack_00000004 + 0x23b8),"new",3);
  if (iVar1 == 0) {
    if (in_stack_00000008 < 2) {
      if (in_stack_00000008 != 1) {
        return 0xffffffff;
      }
    }
    else if ((2 < in_stack_00000008) && (in_stack_00000008 != 3)) {
      return 0xffffffff;
    }
  }
  else if (in_stack_00000008 < 2) {
    if (in_stack_00000008 != 1) {
      return 0xffffffff;
    }
  }
  else {
    if (in_stack_00000008 < 3) {
      return 0;
    }
    if (in_stack_00000008 != 3) {
      return 0xffffffff;
    }
  }
  return 1;
}
