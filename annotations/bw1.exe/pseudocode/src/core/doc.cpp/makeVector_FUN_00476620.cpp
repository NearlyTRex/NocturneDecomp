// Name: core_doc.cpp_makeVector_FUN_00476620
// Address: 00476620
// Address Range: [[00476620, 00476648]]
// Convention: __stack3_esi
// Signature: CVector3f * __stack3_esi core_doc_cpp_makeVector_FUN_00476620(float x,float y,float z,CVector3f *out)

#include "nocturne.h"

CVector3f * __stack3_esi core_doc_cpp_makeVector_FUN_00476620(float x,float y,float z,CVector3f *out)

{
  out->x = x;
  out->y = z;
  out->z = y;
  return out;
}
