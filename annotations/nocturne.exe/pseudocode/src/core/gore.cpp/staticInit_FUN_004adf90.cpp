// Name: core_gore.cpp_staticInit_FUN_004adf90
// Address: 004adf90
// Address Range: [[004adf90, 004ae01d]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_staticInit_FUN_004adf90(void)

#include "nocturne.h"

void __cdecl core_gore_cpp_staticInit_FUN_004adf90(void)

{
  core_gore_cpp_CGore_ctor_FUN_004afd80(&g_CGoreInstance);
  _atexit(&g_CGoreDestructorNode);
  __arrinit(g_BloodParticles,0x100,&g_CBloodParticleTypeInfo_0059e530);
  _atexit(&g_WatcomStaticDestructorNode_005b96a4);
  __arrinit
            (g_CBloodSplat_ARRAY_01c7ccf4,2000,&g_CBloodSplatTypeInfo_0059e550);
  __arrinit
            (g_CBloodPool_ARRAY_01c9e03c,0x20,&g_CBloodPoolTypeInfo_0059e570);
  __arrinit(g_Footsteps,1000,&g_CFootstepTypeInfo_0059e590);
  _atexit(&g_WatcomStaticDestructorNode_005b96b4);
  return;
}
