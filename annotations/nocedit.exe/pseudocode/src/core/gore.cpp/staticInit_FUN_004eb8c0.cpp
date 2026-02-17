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
  __arrinit(g_BloodParticles,0x100,&g_CBloodParticleTypeInfo);
  _atexit(&WatcomStaticDestructorNode_0067b980);
  __arrinit(g_BloodSplats,2000,&g_CBloodSplatTypeInfo);
  __arrinit(g_BloodPools,0x20,&g_CBloodPoolTypeInfo);
  __arrinit(g_Footsteps,1000,&g_CFootstepTypeInfo);
  _atexit(&WatcomStaticDestructorNode_0067b990);
  return;
}
