// Name: core_doc.cpp_dotProduct_FUN_0045e010
// Address: 0045e010
// Address Range: [[0045e010, 0045e038]]
// Convention: __cdecl
// Signature: float __cdecl core_doc_cpp_dotProduct_FUN_0045e010(CVector3f *a,CVector3f *b)

#include "nocturne.h"

float __cdecl core_doc_cpp_dotProduct_FUN_0045e010(CVector3f *a,CVector3f *b)

{
  return a->z * b->z + a->x * b->x + a->y * b->y;
}
