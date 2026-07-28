// Name: engine_drender.cpp_CDemonRenderer_pushViewport_FUN_00460e40
// Address: 00460e40
// Address Range: [[00460e40, 00460e60]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_pushViewport_FUN_00460e40(CDemonRenderer *this_ptr,int x,int y,int width,int height)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_pushViewport_FUN_00460e40(CDemonRenderer *this_ptr,int x,int y,int width,int height)

{
  engine_matrix_c_pushViewport_FUN_004ce7c0(x,y,width,height);
  return;
}
