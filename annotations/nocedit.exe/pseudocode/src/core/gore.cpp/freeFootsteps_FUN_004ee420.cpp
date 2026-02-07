// Name: core_gore.cpp_freeFootsteps_FUN_004ee420
// Address: 004ee420
// Address Range: [[004ee420, 004ee437]]
// Convention: __cdecl
// Signature: CFootstep * __cdecl core_gore_cpp_freeFootsteps_FUN_004ee420(CFootstep *objs)

#include "nocturne.h"

CFootstep * __cdecl core_gore_cpp_freeFootsteps_FUN_004ee420(CFootstep *objs)

{
  CFootstep *pCVar1;
  
  pCVar1 = __arrfini(objs,1000,&g_CFootstepTypeInfo);
  return pCVar1;
}
