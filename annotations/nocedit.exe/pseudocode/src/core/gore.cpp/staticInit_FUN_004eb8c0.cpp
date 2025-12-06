// Name: core_gore.cpp_staticInit_FUN_004eb8c0
// Address: 004eb8c0
// Address Range: [[004eb8c0, 004eb94d]]
// Convention: __cdecl
// Signature: void core_gore.cpp_staticInit_FUN_004eb8c0(void)

#include "nocturne.h"

void __cdecl core_gore_cpp_staticInit_FUN_004eb8c0(void)

{
  core_gore_cpp_FUN_004ed730(&g_CGoreInstance);
  crt_stdlib_c_atexit_FUN_005ff060(&g_CGoreDestructorNode);
  crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
            (DAT_02d833d4,0x100,&g_CBloodParticleTypeInfo);
  crt_stdlib_c_atexit_FUN_005ff060(&DAT_0067b980);
  crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
            (DAT_02d873dc,2000,&g_CBloodSplatTypeInfo);
  crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
            (DAT_02da8724,0x20,&g_CBloodPoolTypeInfo);
  crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667(DAT_02da8c2c,1000,&g_CFootstepTypeInfo)
  ;
  crt_stdlib_c_atexit_FUN_005ff060(&DAT_0067b990);
  return;
}
