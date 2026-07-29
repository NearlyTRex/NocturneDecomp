// Name: engine_drender.cpp_qsortByCapturedFaceDepthAscending_FUN_00461d50
// Address: 00461d50
// Address Range: [[00461d50, 00461d7a]]
// Convention: __cdecl
// Signature: int __cdecl engine_drender_cpp_qsortByCapturedFaceDepthAscending_FUN_00461d50(SFace **face_ptr_a,SFace **face_ptr_b)

#include "nocturne.h"

int __cdecl engine_drender_cpp_qsortByCapturedFaceDepthAscending_FUN_00461d50(SFace **face_ptr_a,SFace **face_ptr_b)

{
  if ((*face_ptr_b)->depth < (*face_ptr_a)->depth) {
    return 1;
  }
  if ((*face_ptr_a)->depth < (*face_ptr_b)->depth) {
    return -1;
  }
  return 0;
}
