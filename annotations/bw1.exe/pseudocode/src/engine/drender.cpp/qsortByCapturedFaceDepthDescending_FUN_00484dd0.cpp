// Name: engine_drender.cpp_qsortByCapturedFaceDepthDescending_FUN_00484dd0
// Address: 00484dd0
// Address Range: [[00484dd0, 00484dfa]]
// Convention: __cdecl
// Signature: int __cdecl engine_drender_cpp_qsortByCapturedFaceDepthDescending_FUN_00484dd0(SFace **face_ptr_a,SFace **face_ptr_b)

#include "nocturne.h"

int __cdecl engine_drender_cpp_qsortByCapturedFaceDepthDescending_FUN_00484dd0(SFace **face_ptr_a,SFace **face_ptr_b)

{
  if ((*face_ptr_a)->depth < (*face_ptr_b)->depth) {
    return 1;
  }
  if ((*face_ptr_b)->depth < (*face_ptr_a)->depth) {
    return -1;
  }
  return 0;
}
