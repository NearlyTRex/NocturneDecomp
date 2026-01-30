// Name: core_zombie.cpp_CZombie_FUN_005fbd00
// Address: 005fbd00
// Address Range: [[005fbd00, 005fbd9c]]
// Convention: __cdecl
// Signature: int __cdecl core_zombie_cpp_CZombie_FUN_005fbd00(void)

#include "nocturne.h"

/* Signature: byte actors_enemy_zombie.cpp_CZombie_FUN_005fbd00(CZombie* param_1, uint
   param_2) */

int __cdecl core_zombie_cpp_CZombie_FUN_005fbd00(void)

{
  int iVar1;
  int in_stack_00000004;
  uint in_stack_00000008;
  
  if ((in_stack_00000008 != 2) &&
     (iVar1 = stricmp
                        ((char *)(in_stack_00000004 + 0x23b8),"jeff.dfm"), iVar1 == 0)) {
    return -1;
  }
  iVar1 = strnicmp((char *)(in_stack_00000004 + 0x23b8),"new",3);
  if (iVar1 == 0) {
    if (in_stack_00000008 < 2) {
      if (in_stack_00000008 != 1) {
        return -1;
      }
    }
    else if ((2 < in_stack_00000008) && (in_stack_00000008 != 3)) {
      return -1;
    }
  }
  else if (in_stack_00000008 < 2) {
    if (in_stack_00000008 != 1) {
      return -1;
    }
  }
  else {
    if (in_stack_00000008 < 3) {
      return 0;
    }
    if (in_stack_00000008 != 3) {
      return -1;
    }
  }
  return 1;
}
