// Name: core_gore.cpp_staticInit_FUN_004cc8d0
// Address: 004cc8d0
// Address Range: [[004cc8d0, 004cc950]]
// Convention: unknown
// Signature: void core_gore_cpp_staticInit_FUN_004cc8d0(void)

#include "nocturne.h"

void core_gore_cpp_staticInit_FUN_004cc8d0(void)

{
  core_gore_cpp_CGore_ctor_FUN_004ce530(&g_CGoreInstance);
  _atexit(&g_CGoreDestructorNode);
  __arrinit(g_BloodParticles,0x100,&g_CBloodParticleTypeInfo);
  _atexit(&WatcomStaticDestructorNode_005fed14);
  __arrinit((void *)0x1d276bc,2000,&g_CBloodSplatTypeInfo);
  __arrinit((void *)0x1d4a944,0x20,&g_CBloodPoolTypeInfo);
  __arrinit((void *)0x1d4aecc,1000,&g_CFootstepTypeInfo);
  return;
}
