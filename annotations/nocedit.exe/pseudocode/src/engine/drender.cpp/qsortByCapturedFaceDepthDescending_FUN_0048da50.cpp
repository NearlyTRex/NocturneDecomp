// Name: engine_drender.cpp_qsortByCapturedFaceDepthDescending_FUN_0048da50
// Address: 0048da50
// Address Range: [[0048da50, 0048da7a]]
// Convention: __cdecl
// Signature: int __cdecl engine_drender_cpp_qsortByCapturedFaceDepthDescending_FUN_0048da50 (SFace **face_ptr_a,SFace **face_ptr_b)

#include "nocturne.h"

int __cdecl
engine_drender_cpp_qsortByCapturedFaceDepthDescending_FUN_0048da50
          (SFace **face_ptr_a,SFace **face_ptr_b)

{
  if ((*face_ptr_a)->depth < (*face_ptr_b)->depth) {
    return 1;
  }
  if ((*face_ptr_b)->depth < (*face_ptr_a)->depth) {
    return -1;
  }
  return 0;
}
