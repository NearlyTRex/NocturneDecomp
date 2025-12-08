// Name: engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150
// Address: 0048c150
// Address Range: [[0048c150, 0048c1a6]]
// Convention: __cdecl
// Signature: void engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150(CDemonRenderer * this_ptr, CVector3i * point_ptr)

#include "nocturne.h"

void __cdecl
engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150
          (CDemonRenderer *this_ptr,CVector3i *point_ptr)

{
  int y;
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  double dVar4;
  int z;
  
  fVar1 = (float10)256;
  fVar2 = (float10)(float)point_ptr->y * fVar1;
  fVar3 = (float10)(float)point_ptr->x * fVar1;
  crt_math_c_round_FUN_005fe6b0((double)((float10)(float)point_ptr->z * fVar1));
  crt_math_c_round_FUN_005fe6b0((double)fVar2);
  z = 0x48c190;
  dVar4 = crt_math_c_round_FUN_005fe6b0((double)fVar3);
  engine_matrix_c_setCameraOrigin_FUN_0050e270((int)ROUND(dVar4),y,z);
  return;
}
