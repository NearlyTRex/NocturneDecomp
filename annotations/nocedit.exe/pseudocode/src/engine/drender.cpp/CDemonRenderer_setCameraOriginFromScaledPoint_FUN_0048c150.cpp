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
  uint in_EDX;
  float10 fVar1;
  float10 fVar2;
  double dVar3;
  int z;
  
  fVar1 = (float10)(float)point_ptr->z * (float10)256;
  fVar2 = (float10)(float)point_ptr->x * (float10)256;
  dVar3 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(in_EDX,point_ptr));
  dVar3 = crt_math_c_round_FUN_005fe6b0(dVar3);
  z = (int)ROUND(fVar1);
  crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(z,SUB84 /* extract 2-byte value */(dVar3,0)));
  engine_matrix_c_setCameraOrigin_FUN_0050e270((int)ROUND(fVar2),y,z);
  return;
}
