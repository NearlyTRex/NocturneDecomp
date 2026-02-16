// Name: engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150
// Address: 0048c150
// Address Range: [[0048c150, 0048c1a6]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150(CDemonRenderer *this_ptr,CVector3i *point_ptr)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150(CDemonRenderer *this_ptr,CVector3i *point_ptr)

{
  double dVar1;
  double dVar2;
  int z;
  
  dVar1 = (double)(float)point_ptr->y * 256;
  dVar2 = (double)(float)point_ptr->x * 256;
  round((double)(float)point_ptr->z * 256);
  dVar1 = round(dVar1);
  z = 0x48c190;
  dVar2 = round(dVar2);
  engine_matrix_c_setCameraOrigin_FUN_0050e270((int)ROUND(dVar2),(int)ROUND(dVar1),z);
  return;
}
