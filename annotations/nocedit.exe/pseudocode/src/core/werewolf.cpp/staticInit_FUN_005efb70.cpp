// Name: core_werewolf.cpp_staticInit_FUN_005efb70
// Address: 005efb70
// Address Range: [[005efb70, 005efbcf]]
// Convention: __cdecl
// Signature: CDemonActorType * core_werewolf.cpp_staticInit_FUN_005efb70(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CDemonActorType * __cdecl core_werewolf_cpp_staticInit_FUN_005efb70(void)

{
  CDemonActorType *pCVar1;
  
  _DAT_03f96b44 = 0xbe8f5c29;
  _DAT_03f96b48 = 0x3ed70a3d;
  _DAT_03f96b4c = 0x3f19999a;
  _DAT_03f96b50 = 0x3eb33333;
  _DAT_03f96b54 = 0x3ed70a3d;
  _DAT_03f96b58 = 0x3f19999a;
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CWerewolfClassInfo,"CWerewolf",core_werewolf_cpp_FUN_005efbd0,
                      &g_CWerewolfClassVersion,6,&g_CEnemyClassInfo);
  return pCVar1;
}
