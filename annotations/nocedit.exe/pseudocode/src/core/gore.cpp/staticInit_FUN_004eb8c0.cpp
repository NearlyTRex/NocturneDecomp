// Name: core_gore.cpp_staticInit_FUN_004eb8c0
// Address: 004eb8c0
// Address Range: [[004eb8c0, 004eb94d]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_staticInit_FUN_004eb8c0(void)

#include "nocturne.h"

void __cdecl core_gore_cpp_staticInit_FUN_004eb8c0(void)

{
  core_gore_cpp_CGore_ctor_FUN_004ed730(&g_CGoreInstance);
  _atexit(&g_CGoreDestructorNode);
  __arrinit(DAT_02d833d4,0x100,&g_CBloodParticleTypeInfo);
  _atexit(&DAT_0067b980);
  __arrinit(DAT_02d873dc,2000,&g_CBloodSplatTypeInfo);
  __arrinit(DAT_02da8724,0x20,&g_CBloodPoolTypeInfo);
  __arrinit(DAT_02da8c2c,1000,&g_CFootstepTypeInfo);
  _atexit(&DAT_0067b990);
  return;
}
