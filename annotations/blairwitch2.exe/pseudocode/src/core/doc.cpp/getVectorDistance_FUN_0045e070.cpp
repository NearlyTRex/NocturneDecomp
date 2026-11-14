// Name: core_doc.cpp_getVectorDistance_FUN_0045e070
// Address: 0045e070
// Address Range: [[0045e070, 0045e0a4]]
// Convention: __cdecl
// Signature: float __cdecl core_doc_cpp_getVectorDistance_FUN_0045e070(CVector3f *a,CVector3f *b)

#include "nocturne.h"

float __cdecl core_doc_cpp_getVectorDistance_FUN_0045e070(CVector3f *a,CVector3f *b)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = a->x - b->x;
  fVar3 = a->y - b->y;
  fVar2 = a->z - b->z;
  return SQRT(fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1);
}
