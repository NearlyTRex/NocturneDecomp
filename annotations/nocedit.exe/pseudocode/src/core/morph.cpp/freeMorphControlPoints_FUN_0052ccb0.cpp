// Name: core_morph.cpp_freeMorphControlPoints_FUN_0052ccb0
// Address: 0052ccb0
// Address Range: [[0052ccb0, 0052ccc4]]
// Convention: __cdecl
// Signature: SMorphControlPoint * __cdecl core_morph_cpp_freeMorphControlPoints_FUN_0052ccb0(SMorphControlPoint *objs)

#include "nocturne.h"

SMorphControlPoint * __cdecl
core_morph_cpp_freeMorphControlPoints_FUN_0052ccb0(SMorphControlPoint *objs)

{
  SMorphControlPoint *pSVar1;
  
  pSVar1 = __arrfini(objs,0x14,&g_SMorphControlPointTypeInfo);
  return pSVar1;
}
