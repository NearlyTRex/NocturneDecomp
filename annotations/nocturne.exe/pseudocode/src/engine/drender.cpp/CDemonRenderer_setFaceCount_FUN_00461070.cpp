// Name: engine_drender.cpp_CDemonRenderer_setFaceCount_FUN_00461070
// Address: 00461070
// Address Range: [[00461070, 00461080]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_setFaceCount_FUN_00461070(CDemonRenderer *this_ptr,int value)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_setFaceCount_FUN_00461070(CDemonRenderer *this_ptr,int value)

{
  DAT_006b0278 = value;
  this_ptr->face_count = value;
  return;
}
