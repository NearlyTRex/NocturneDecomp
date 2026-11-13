// Name: core_gore.cpp_staticInit_FUN_004e3d40
// Address: 004e3d40
// Address Range: [[004e3d40, 004e3dc0]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_staticInit_FUN_004e3d40(void)

#include "nocturne.h"

void __cdecl core_gore_cpp_staticInit_FUN_004e3d40(void)

{
  core_gore_cpp_CGore_ctor_FUN_004e5bd0(&g_CGoreInstance);
  _atexit(&g_CGoreDestructorNode);
  __arrinit(g_BloodParticles,0x100,&g_CBloodParticleTypeInfo);
  _atexit(&WatcomStaticDestructorNode_0061dc94);
  __arrinit((void *)0x1cd56b4,2000,&g_CBloodSplatTypeInfo);
  __arrinit((void *)0x1cf69fc,0x20,&g_CBloodPoolTypeInfo);
  __arrinit((void *)0x1cf6f04,1000,&g_CFootstepTypeInfo);
  return;
}
