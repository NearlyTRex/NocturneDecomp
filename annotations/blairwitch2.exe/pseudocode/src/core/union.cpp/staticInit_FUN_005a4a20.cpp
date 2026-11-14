// Name: core_union.cpp_staticInit_FUN_005a4a20
// Address: 005a4a20
// Address Range: [[005a4a20, 005a4a43]]
// Convention: __cdecl
// Signature: void __cdecl core_union_cpp_staticInit_FUN_005a4a20(void)

#include "nocturne.h"

void __cdecl core_union_cpp_staticInit_FUN_005a4a20(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c450
            (&g_CUnionClassInfo,"CUnion",core_union_cpp_factoryFuncUnion_FUN_005a4a50,
             &g_CUnionClassVersion,1,&g_CBasicNPCClassInfo);
  return;
}
