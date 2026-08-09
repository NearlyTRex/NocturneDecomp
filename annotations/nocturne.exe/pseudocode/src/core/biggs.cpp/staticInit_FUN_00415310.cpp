// Name: core_biggs.cpp_staticInit_FUN_00415310
// Address: 00415310
// Address Range: [[00415310, 00415333]]
// Convention: __cdecl
// Signature: void __cdecl core_biggs_cpp_staticInit_FUN_00415310(void)

#include "nocturne.h"

void __cdecl core_biggs_cpp_staticInit_FUN_00415310(void)

{
  core_actor_cpp_registerActorClass_FUN_0040d3f0
            (&g_CBiggsActorType_0076471c,"CBiggs",
             core_biggs_cpp_factoryFuncBiggs_FUN_00415340,&g_INT_005acff8,1,
             &g_CEnemyActorType_01bcdebc);
  return;
}
