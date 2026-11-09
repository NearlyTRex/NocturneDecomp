// Name: core_kedward.cpp_staticInit_FUN_0058fd10
// Address: 0058fd10
// Address Range: [[0058fd10, 0058fd33]]
// Convention: unknown
// Signature: void core_kedward_cpp_staticInit_FUN_0058fd10(void)

#include "nocturne.h"

void core_kedward_cpp_staticInit_FUN_0058fd10(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            (&g_CKedwardClassInfo,"CKedward",
             core_kedward_cpp_factoryFuncKedward_FUN_0058fd40,&g_CKedwardClassVersion,4,
             &g_CEnemyClassInfo);
  return;
}
