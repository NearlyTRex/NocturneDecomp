// Name: core_morph.cpp_freeMorphControlPoints_FUN_0052ccb0
// Address: 0052ccb0
// Address Range: [[0052ccb0, 0052ccc4]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_freeMorphControlPoints_FUN_0052ccb0(SMorphControlPoint **array)

#include "nocturne.h"

void __cdecl core_morph_cpp_freeMorphControlPoints_FUN_0052ccb0(SMorphControlPoint **array)

{
  crt_memory_c_freeTypeArray_FUN_005feee9(array,0x14,&g_SMorphControlPointTypeInfo);
  return;
}
