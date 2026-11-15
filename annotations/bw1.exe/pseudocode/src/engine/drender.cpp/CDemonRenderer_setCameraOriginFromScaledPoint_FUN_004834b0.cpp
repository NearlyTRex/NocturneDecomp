// Name: engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_004834b0
// Address: 004834b0
// Address Range: [[004834b0, 00483506]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_004834b0(CDemonRenderer *this_ptr,CVector3f *point_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_004834b0(CDemonRenderer *this_ptr,CVector3f *point_ptr)

{
  double dVar1;
  double dVar2;
  int z;
  
  dVar1 = (double)point_ptr->y * _DAT_005db35c;
  dVar2 = (double)point_ptr->x * _DAT_005db35c;
  round((double)point_ptr->z * _DAT_005db35c);
  dVar1 = round(dVar1);
  z = 0x4834f0;
  dVar2 = round(dVar2);
  engine_matrix_c_setCameraOrigin_FUN_00509000((int)ROUND(dVar2),(int)ROUND(dVar1),z);
  return;
}
