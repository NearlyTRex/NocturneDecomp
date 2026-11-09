// Name: core_npc.cpp_staticInit_FUN_00510400
// Address: 00510400
// Address Range: [[00510400, 00510423]]
// Convention: unknown
// Signature: void core_npc_cpp_staticInit_FUN_00510400(void)

#include "nocturne.h"

void core_npc_cpp_staticInit_FUN_00510400(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c450
            (&g_CNPCClassInfo,(char *)0x5e14b4,core_npc_cpp_factoryFuncNPC_FUN_00510430,
             &g_CNPCClassVersion,6,&g_CCharacterClassInfo);
  return;
}
