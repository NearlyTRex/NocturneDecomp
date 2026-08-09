// Name: core_tbplayer.cpp_staticInit_FUN_005430d0
// Address: 005430d0
// Address Range: [[005430d0, 00543116]]
// Convention: __cdecl
// Signature: void __cdecl core_tbplayer_cpp_staticInit_FUN_005430d0(void)

#include "nocturne.h"

void __cdecl core_tbplayer_cpp_staticInit_FUN_005430d0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040d3f0
            (&g_CBassPlayerActorType_02dca0e0,"CBassPlayer",
             core_tbplayer_cpp_factoryFuncBassPlayer_FUN_00543120,&INT_005c1050,1,
             &g_CNPCActorType_01d46820);
  core_actor_cpp_registerActorClass_FUN_0040d3f0
            (&g_CDrummerActorType_02dca11c,"CDrummer",
             core_tbplayer_cpp_factoryFuncDrummer_FUN_00543370,&INT_005c1054,1,
             &g_CNPCActorType_01d46820);
  return;
}
