// Name: core_bodypart.cpp_staticInit_FUN_00415b00
// Address: 00415b00
// Address Range: [[00415b00, 00415b23]]
// Convention: __cdecl
// Signature: void __cdecl core_bodypart_cpp_staticInit_FUN_00415b00(void)

#include "nocturne.h"

void __cdecl core_bodypart_cpp_staticInit_FUN_00415b00(void)

{
  core_actor_cpp_registerActorClass_FUN_0040d3f0
            (&g_CBodyPartActorType_00764758,"CBodyPart",
             core_bodypart_cpp_factoryFuncBodyPart_FUN_00415cf0,&g_INT_005ad00c,5,
             &g_CDemonActorActorType_00763e48);
  return;
}
