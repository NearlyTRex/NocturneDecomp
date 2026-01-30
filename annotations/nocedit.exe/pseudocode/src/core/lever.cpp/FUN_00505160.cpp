// Name: core_lever.cpp_FUN_00505160
// Address: 00505160
// Address Range: [[00505160, 00505192]]
// Convention: __cdecl
// Signature: int __cdecl core_lever_cpp_FUN_00505160(void)

#include "nocturne.h"

int __cdecl core_lever_cpp_FUN_00505160(void)

{
  CDemonActor *pCVar1;
  CDemonActor *in_stack_00000004;
  
  pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c790
                     (in_stack_00000004,g_CLeverClassInfo.name_hash);
  pCVar1[2].location.position.z = (float)(uint)(pCVar1[2].location.position.z == 0.0);
  return 1;
}
