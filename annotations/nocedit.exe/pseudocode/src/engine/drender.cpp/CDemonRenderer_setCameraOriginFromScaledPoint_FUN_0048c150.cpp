// Name: engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150
// Address: 0048c150
// Address Range: [[0048c150, 0048c1a6]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150 (CDemonRenderer *this_ptr,CVector3i *point_ptr)

#include "nocturne.h"

void __cdecl
engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150
          (CDemonRenderer *this_ptr,CVector3i *point_ptr)

{
  float fVar1;
  float10 fVar2;
  float10 fVar3;
  double dVar4;
  double dVar5;
  int z;
  
  fVar2 = (float10)256;
  fVar1 = (float)point_ptr->y;
  fVar3 = (float10)(float)point_ptr->x * fVar2;
  crt_math_c_round_FUN_005fe6b0((double)((float10)(float)point_ptr->z * fVar2));
  dVar4 = crt_math_c_round_FUN_005fe6b0((double)((float10)fVar1 * fVar2));
  z = 0x48c190;
  dVar5 = crt_math_c_round_FUN_005fe6b0((double)fVar3);
  engine_matrix_c_setCameraOrigin_FUN_0050e270((int)ROUND(dVar5),(int)ROUND(dVar4),z);
  return;
}
