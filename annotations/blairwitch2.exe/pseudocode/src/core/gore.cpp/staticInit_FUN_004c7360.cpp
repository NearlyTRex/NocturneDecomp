// Name: core_gore.cpp_staticInit_FUN_004c7360
// Address: 004c7360
// Address Range: [[004c7360, 004c73e0]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_staticInit_FUN_004c7360(void)

#include "nocturne.h"

void __cdecl core_gore_cpp_staticInit_FUN_004c7360(void)

{
  core_gore_cpp_CGore_ctor_FUN_004c93c0(&g_CGoreInstance);
  _atexit(&g_CGoreDestructorNode);
  __arrinit(g_BloodParticles,0x100,&g_CBloodParticleTypeInfo);
  _atexit(&WatcomStaticDestructorNode_006167d0);
  __arrinit((void *)0x1cbcafc,2000,&g_CBloodSplatTypeInfo);
  __arrinit((void *)0x1cdde44,0x20,&g_CBloodPoolTypeInfo);
  __arrinit((void *)0x1cde34c,1000,&g_CFootstepTypeInfo);
  return;
}
