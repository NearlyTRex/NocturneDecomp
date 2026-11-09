// Name: core_cross.cpp_staticInit_FUN_005a6970
// Address: 005a6970
// Address Range: [[005a6970, 005a69b6]]
// Convention: unknown
// Signature: void core_cross_cpp_staticInit_FUN_005a6970(void)

#include "nocturne.h"

void core_cross_cpp_staticInit_FUN_005a6970(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c450
            (&g_CCrossClassInfo,"CCross",core_cross_cpp_factoryFuncCross_FUN_005a69c0,
             &g_CCrossClassVersion,1,&g_CMeleeClassInfo);
  core_actor_cpp_registerActorClass_FUN_0040c450
            ((CDemonActorType *)0x2668738,"CSimpleCross",unkafter_cross_cpp_FUN_005a7950,
             (int *)0x61ebb0,1,&g_CMeleeClassInfo);
  return;
}
