// Name: core_morph.cpp_countTrianglesFromPolygons_FUN_0052a490
// Address: 0052a490
// Address Range: [[0052a490, 0052a4b7]]
// Convention: __cdecl
// Signature: int __cdecl core_morph_cpp_countTrianglesFromPolygons_FUN_0052a490(int poly_count,int *poly_headers,int poly_stride)

#include "nocturne.h"

int __cdecl core_morph_cpp_countTrianglesFromPolygons_FUN_0052a490(int poly_count,int *poly_headers,int poly_stride)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  for (; 0 < poly_count; poly_count = poly_count + -1) {
    piVar1 = poly_headers + 1;
    poly_headers = (int *)((int)poly_headers + poly_stride);
    iVar2 = iVar2 + *piVar1 + -2;
  }
  return iVar2;
}
