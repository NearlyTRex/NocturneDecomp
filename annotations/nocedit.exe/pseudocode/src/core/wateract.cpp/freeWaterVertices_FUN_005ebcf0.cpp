// Name: core_wateract.cpp_freeWaterVertices_FUN_005ebcf0
// Address: 005ebcf0
// Address Range: [[005ebcf0, 005ebd07]]
// Convention: __cdecl
// Signature: SWaterVertex * __cdecl core_wateract_cpp_freeWaterVertices_FUN_005ebcf0(SWaterVertex *objs)

#include "nocturne.h"

SWaterVertex * __cdecl core_wateract_cpp_freeWaterVertices_FUN_005ebcf0(SWaterVertex *objs)

{
  SWaterVertex *pSVar1;
  
  pSVar1 = __arrfini(objs,1000,&g_SWaterVertexTypeInfo);
  return pSVar1;
}
