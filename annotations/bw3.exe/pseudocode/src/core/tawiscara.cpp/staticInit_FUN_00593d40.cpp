// Name: core_tawiscara.cpp_staticInit_FUN_00593d40
// Address: 00593d40
// Address Range: [[00593d40, 00593d9f]]
// Convention: __cdecl
// Signature: void __cdecl core_tawiscara_cpp_staticInit_FUN_00593d40(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_tawiscara_cpp_staticInit_FUN_00593d40(void)

{
  _DAT_02d24a54 = 0xbe8f5c29;
  _DAT_02d24a58 = 0x3ed70a3d;
  _DAT_02d24a5c = 0x3f19999a;
  _DAT_02d24a60 = 0x3eb33333;
  _DAT_02d24a64 = 0x3ed70a3d;
  _DAT_02d24a68 = 0x3f19999a;
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            (&g_CTawiscaraClassInfo,"CTawiscara",
             core_tawiscara_cpp_factoryFuncTawiscara_FUN_00593da0,&g_CTawiscaraClassVersion,1,
             &g_CEnemyClassInfo);
  return;
}
