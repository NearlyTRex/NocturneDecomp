// Name: core_werewolf.cpp_staticInit_FUN_005efb70
// Address: 005efb70
// Address Range: [[005efb70, 005efbcf]]
// Convention: __cdecl
// Signature: void __cdecl core_werewolf_cpp_staticInit_FUN_005efb70(void)

#include "nocturne.h"

void __cdecl core_werewolf_cpp_staticInit_FUN_005efb70(void)

{
  FLOAT_03f96b44 = -0.28;
  FLOAT_03f96b48 = 0.42;
  FLOAT_03f96b4c = 0.6;
  FLOAT_03f96b50 = 0.35;
  FLOAT_03f96b54 = 0.42;
  FLOAT_03f96b58 = 0.6;
  core_actor_cpp_registerActorClass_FUN_0040c2e0
            (&g_CWerewolfClassInfo,"CWerewolf",core_werewolf_cpp_factoryFunc_FUN_005efbd0,
             &g_CWerewolfClassVersion,6,&g_CEnemyClassInfo);
  return;
}
