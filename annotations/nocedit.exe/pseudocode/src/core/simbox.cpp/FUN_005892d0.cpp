// Name: core_simbox.cpp_FUN_005892d0
// Address: 005892d0
// Address Range: [[005892d0, 00589302]]
// Convention: __cdecl
// Signature: int core_simbox.cpp_FUN_005892d0(CSimBox * this_ptr)

#include "nocturne.h"

int __cdecl core_simbox_cpp_FUN_005892d0(CSimBox *this_ptr)

{
  CDemonActor *pCVar1;
  
  pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c790
                     (&this_ptr->base_actor,g_CSimBoxClassInfo.name_hash);
  pCVar1[2].location.position.y = (float)(uint)(pCVar1[2].location.position.y == 0.0);
  return 1;
}
