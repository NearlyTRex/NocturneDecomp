// Name: core_npc.cpp_staticInit_FUN_00531610
// Address: 00531610
// Address Range: [[00531610, 00531633]]
// Convention: __cdecl
// Signature: void __cdecl core_npc_cpp_staticInit_FUN_00531610(void)

#include "nocturne.h"

void __cdecl core_npc_cpp_staticInit_FUN_00531610(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c160
            (&g_CNPCClassInfo,(char *)0x5ec70f,core_npc_cpp_factoryFuncNPC_FUN_00531640,
             &g_CNPCClassVersion,6,&g_CCharacterClassInfo);
  return;
}
