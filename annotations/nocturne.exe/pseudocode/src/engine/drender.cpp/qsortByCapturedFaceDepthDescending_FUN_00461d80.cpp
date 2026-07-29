// Name: engine_drender.cpp_qsortByCapturedFaceDepthDescending_FUN_00461d80
// Address: 00461d80
// Address Range: [[00461d80, 00461daa]]
// Convention: __cdecl
// Signature: int __cdecl engine_drender_cpp_qsortByCapturedFaceDepthDescending_FUN_00461d80(SFace **face_ptr_a,SFace **face_ptr_b)

#include "nocturne.h"

int __cdecl engine_drender_cpp_qsortByCapturedFaceDepthDescending_FUN_00461d80(SFace **face_ptr_a,SFace **face_ptr_b)

{
  if ((*face_ptr_a)->depth < (*face_ptr_b)->depth) {
    return 1;
  }
  if ((*face_ptr_b)->depth < (*face_ptr_a)->depth) {
    return -1;
  }
  return 0;
}
