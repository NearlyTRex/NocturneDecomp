// Name: core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
// Address: 0040cd70
// Address Range: [[0040cd70, 0040ce24]]
// Convention: __cdecl
// Signature: float core_actor.cpp_normalizeAngleToPi_FUN_0040cd70(float angle_radians)

#include "nocturne.h"

float __cdecl core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(float angle_radians)

{
  double dVar1;
  uint extraout_EAX;
  uint extraout_EAX_00;
  uint extraout_EDX;
  uint extraout_EDX_00;
  float10 in_ST0;
  uint uStack_1c;
  uint local_18;
  uint uStack_c;
  
  dVar1 = (double)angle_radians;
  local_18 = SUB84 /* extract 2-byte value */(dVar1,0);
  if (angle_radians < (float)-3.1415926535000001) {
    uStack_1c = (uint)((ulonglong)((dVar1 + 3.1415926535000001) * -0.15915494309644401) >> 0x20);
    crt_math_c_floor_FUN_005feb90((double)in_ST0);
    uStack_c = ((float)(double)CONCAT44 /* combine 2-byte values */(extraout_EDX,extraout_EAX) + 1.0) * (float)6.2831853070000001 +
               (float)(double)CONCAT44 /* combine 2-byte values */(local_18,uStack_1c);
  }
  else if (3.1415926535000001 < dVar1) {
    uStack_1c = (uint)((ulonglong)((dVar1 + -3.1415926535000001) * 0.15915494309644401) >> 0x20);
    crt_math_c_floor_FUN_005feb90((double)in_ST0);
    return ((float)(double)CONCAT44 /* combine 2-byte values */(extraout_EDX_00,extraout_EAX_00) + 1.0) * (float)-6.2831853070000001
           + (float)(double)CONCAT44 /* combine 2-byte values */(local_18,uStack_1c);
  }
  return uStack_c;
}
