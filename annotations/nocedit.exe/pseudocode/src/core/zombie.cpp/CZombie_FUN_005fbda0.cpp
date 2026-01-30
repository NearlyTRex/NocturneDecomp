// Name: core_zombie.cpp_CZombie_FUN_005fbda0
// Address: 005fbda0
// Address Range: [[005fbda0, 005fbdd5]]
// Convention: __cdecl
// Signature: int __cdecl core_zombie_cpp_CZombie_FUN_005fbda0(void)

#include "nocturne.h"

/* Signature: byte actors_enemy_zombie.cpp_CZombie_FUN_005fbda0(CZombie* param_1, uint
   param_2) */

int __cdecl core_zombie_cpp_CZombie_FUN_005fbda0(void)

{
  int iVar1;
  int in_stack_00000004;
  
  iVar1 = core_zombie_cpp_CZombie_FUN_005fbd00();
  if ((-1 < iVar1) && (iVar1 = *(int *)(in_stack_00000004 + 0x24b0 + iVar1 * 0x44), -1 < iVar1)) {
    return *(int *)(in_stack_00000004 + 0x2298 + iVar1 * 4);
  }
  return 0;
}
