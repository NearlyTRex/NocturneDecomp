// Name: core_carved.cpp_staticInit_FUN_00425550
// Address: 00425550
// Address Range: [[00425550, 00425573]]
// Convention: __cdecl
// Signature: void __cdecl core_carved_cpp_staticInit_FUN_00425550(void)

#include "nocturne.h"

void __cdecl core_carved_cpp_staticInit_FUN_00425550(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            (&g_CCarvedClassInfo,"CCarved",core_carved_cpp_factoryFuncCarved_FUN_00425930,
             &g_CCarvedClassVersion,1,&g_CEnemyClassInfo);
  return;
}
