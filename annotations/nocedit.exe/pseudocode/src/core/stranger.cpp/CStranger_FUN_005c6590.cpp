// Name: core_stranger.cpp_CStranger_FUN_005c6590
// Address: 005c6590
// Address Range: [[005c6590, 005c664d]]
// Convention: unknown
// Signature: undefined core_stranger.cpp_CStranger_FUN_005c6590()

#include "nocturne.h"

/* Signature: byte actors_hero_stranger.cpp_CStranger_FUN_005c6590(uint param_1,
   uint param_2) */

void core_stranger_cpp_CStranger_FUN_005c6590(void)

{
  uint uVar1;
  CDemonActor *this_ptr;
  int iVar2;
  int in_stack_00000004;
  
  if (*(int *)(in_stack_00000004 + 0x1fc2c) != 0) {
    (**(code **)(*(int *)(*(int *)(in_stack_00000004 + 0x1fc2c) + 0x154) + 4))();
    this_ptr = core_actor_cpp_castToClassHash_FUN_0040c790
                         (*(CDemonActor **)(in_stack_00000004 + 0x1fc2c),
                          g_CDynamiteClassInfo.name_hash);
    if (this_ptr != (CDemonActor *)0x0) {
      iVar2 = core_dynamite_cpp_FUN_0049cf90();
      if (iVar2 != 0) {
        this_ptr[4].location.position.y = 0.0;
        this_ptr[4].location.position.x = this_ptr[4].location.position.y;
        *(float *)(this_ptr[4].actor_name + 0x1c) = this_ptr[4].location.position.x;
        (*this_ptr->vtable[1].renderTransparent)(this_ptr);
        *(uint *)(in_stack_00000004 + 0x1fc2c) = 0;
        *(uint *)(in_stack_00000004 + 0x2a8c) = 0;
        uVar1 = DAT_00663744;
        *(uint *)(in_stack_00000004 + 0x2a90) = 0;
        *(uint *)(in_stack_00000004 + 0x1fbe4) = uVar1;
        if (*(int *)(in_stack_00000004 + 0x1fc38) == 3) {
          *(uint *)(in_stack_00000004 + 0x1fc38) = 0;
          return;
        }
      }
    }
  }
  return;
}
