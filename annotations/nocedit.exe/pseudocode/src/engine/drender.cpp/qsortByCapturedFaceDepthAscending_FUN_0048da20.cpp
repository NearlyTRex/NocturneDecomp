// Name: engine_drender.cpp_qsortByCapturedFaceDepthAscending_FUN_0048da20
// Address: 0048da20
// Address Range: [[0048da20, 0048da4a]]
// Convention: __cdecl
// Signature: int engine_drender.cpp_qsortByCapturedFaceDepthAscending_FUN_0048da20(SFace * * face_ptr_a, SFace * * face_ptr_b)

#include "nocturne.h"

int __cdecl
engine_drender_cpp_qsortByCapturedFaceDepthAscending_FUN_0048da20
          (SFace **face_ptr_a,SFace **face_ptr_b)

{
  if ((*face_ptr_b)->depth < (*face_ptr_a)->depth) {
    return 1;
  }
  if ((*face_ptr_a)->depth < (*face_ptr_b)->depth) {
    return -1;
  }
  return 0;
}
