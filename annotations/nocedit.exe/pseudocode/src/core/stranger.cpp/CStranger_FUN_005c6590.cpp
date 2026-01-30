// Name: core_stranger.cpp_CStranger_FUN_005c6590
// Address: 005c6590
// Address Range: [[005c6590, 005c664d]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_FUN_005c6590(void)

#include "nocturne.h"

/* Signature: byte actors_hero_stranger.cpp_CStranger_FUN_005c6590(uint param_1,
   uint param_2) */

void __cdecl core_stranger_cpp_CStranger_FUN_005c6590(void)

{
  float fVar1;
  bool bVar2;
  CDemonActor *pCVar3;
  undefined3 extraout_var;
  int in_stack_00000004;
  
  if (*(int *)(in_stack_00000004 + 0x1fc2c) != 0) {
    (**(code **)(*(int *)(*(int *)(in_stack_00000004 + 0x1fc2c) + 0x154) + 4))();
    pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c790
                       (*(CDemonActor **)(in_stack_00000004 + 0x1fc2c),
                        g_CDynamiteClassInfo.name_hash);
    if (pCVar3 != (CDemonActor *)0x0) {
      bVar2 = core_dynamite_cpp_FUN_0049cf90();
      if (CONCAT31(extraout_var,bVar2) != 0) {
        pCVar3[4].location.position.y = 0.0;
        pCVar3[4].location.position.x = pCVar3[4].location.position.y;
        *(float *)(pCVar3[4].actor_name + 0x1c) = pCVar3[4].location.position.x;
        (*(((pCVar3->vtable)._uc)->_uc).cfunc4)();
        *(uint *)(in_stack_00000004 + 0x1fc2c) = 0;
        *(uint *)(in_stack_00000004 + 0x2a8c) = 0;
        fVar1 = 10.0f;
        *(uint *)(in_stack_00000004 + 0x2a90) = 0;
        *(float *)(in_stack_00000004 + 0x1fbe4) = fVar1;
        if (*(int *)(in_stack_00000004 + 0x1fc38) == 3) {
          *(uint *)(in_stack_00000004 + 0x1fc38) = 0;
          return;
        }
      }
    }
  }
  return;
}
