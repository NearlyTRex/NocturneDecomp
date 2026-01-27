// Name: core_dracbrid.cpp_staticInit_FUN_00483ef0
// Address: 00483ef0
// Address Range: [[00483ef0, 00483f7c]]
// Convention: __cdecl
// Signature: void core_dracbrid.cpp_staticInit_FUN_00483ef0(void)

#include "nocturne.h"

void __cdecl core_dracbrid_cpp_staticInit_FUN_00483ef0(void)

{
  FLOAT_02c6d040 = 0.0;
  FLOAT_02c6d044 = 0.5;
  FLOAT_02c6d048 = 0.0;
  FLOAT_02c6d04c = -0.6;
  FLOAT_02c6d050 = 0.0;
  FLOAT_02c6d054 = 0.0;
  FLOAT_02c6d058 = 0.6;
  FLOAT_02c6d05c = 0.0;
  FLOAT_02c6d060 = 0.0;
  core_actor_cpp_registerActorClass_FUN_0040c2e0
            (&g_CDraculaBrideClassInfo,"CDraculaBride",
             core_dracbrid_cpp_factoryFunc_FUN_00483f80,&g_CDraculaBrideClassVersion,9,
             &g_CEnemyClassInfo);
  crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
            (SFreaky_ARRAY_02c6d0c0,6,&g_SFreakyTypeInfo);
  crt_stdlib_c_atexit_FUN_005ff060(&DAT_006703a0);
  return;
}
