// Name: core_stone.cpp_staticInit_FUN_00534ca0
// Address: 00534ca0
// Address Range: [[00534ca0, 00534cc3]]
// Convention: __cdecl
// Signature: void __cdecl core_stone_cpp_staticInit_FUN_00534ca0(void)

#include "nocturne.h"

void __cdecl core_stone_cpp_staticInit_FUN_00534ca0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040d3f0
            (&g_CTempleStoneActorType_02dc9ee4,"CTempleStone",
             core_stone_cpp_factoryFunc_FUN_00534cd0,&INT_005c0fd8,1,&g_CBoxActorActorType_00764800)
  ;
  return;
}
