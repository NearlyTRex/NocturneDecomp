// Name: engine_drender.cpp_CDemonRenderer_setFaceCount_FUN_0048cac0
// Address: 0048cac0
// Address Range: [[0048cac0, 0048cad0]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_setFaceCount_FUN_0048cac0(CDemonRenderer *this_ptr,int value)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_setFaceCount_FUN_0048cac0(CDemonRenderer *this_ptr,int value)

{
  g_TexturesDisabled = value;
  this_ptr->face_count = value;
  return;
}
