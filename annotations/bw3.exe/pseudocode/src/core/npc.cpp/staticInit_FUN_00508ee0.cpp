// Name: core_npc.cpp_staticInit_FUN_00508ee0
// Address: 00508ee0
// Address Range: [[00508ee0, 00508f03]]
// Convention: __cdecl
// Signature: void __cdecl core_npc_cpp_staticInit_FUN_00508ee0(void)

#include "nocturne.h"

void __cdecl core_npc_cpp_staticInit_FUN_00508ee0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            (&g_CNPCClassInfo,(char *)0x5cb520,core_npc_cpp_factoryFuncNPC_FUN_00508f10,
             &g_CNPCClassVersion,8,&g_CCharacterClassInfo);
  return;
}
