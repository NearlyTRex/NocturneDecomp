// Name: core_morph.cpp_countTrianglesFromPolygons_FUN_0052a490
// Address: 0052a490
// MANUAL RECONSTRUCTION
// Address Range: [[0052a490, 0052a4b7]]
// Convention: __cdecl
// Signature: int __cdecl core_morph_cpp_countTrianglesFromPolygons_FUN_0052a490(int poly_count,SMRGLHeaderPrimitive *poly_headers,int poly_stride)

#include "nocturne.h"

int __cdecl core_morph_cpp_countTrianglesFromPolygons_FUN_0052a490(int poly_count,SMRGLHeaderPrimitive *poly_headers,int poly_stride)

{
  SMRGLHeaderBasic *pSVar1;
  int iVar2;
  
  iVar2 = 0;
  for (; 0 < poly_count; poly_count = poly_count + -1) {
    pSVar1 = &poly_headers->base;
    poly_headers = (SMRGLHeaderPrimitive *)((char *)poly_headers + poly_stride);
    iVar2 = iVar2 + pSVar1->count + -2;
  }
  return iVar2;
}
