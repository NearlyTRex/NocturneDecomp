// Name: core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
// Address: 0040cd70
// Address Range: [[0040cd70, 0040ce24]]
// Convention: __cdecl
// Signature: float __cdecl core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(float angle_radians)

#include "nocturne.h"

float __cdecl core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(float angle_radians)

{
  double dVar1;
  uint uVar2;
  uint local_18;
  uint uStack_c;
  
  dVar1 = (double)angle_radians;
  local_18 = SUB84(dVar1,0);
  if (angle_radians < (float)-3.1415926535000001) {
    dVar1 = (dVar1 + 3.1415926535000001) * -0.15915494309644401;
    uVar2 = (uint)((ulonglong)dVar1 >> 0x20);
    dVar1 = floor(dVar1);
    uStack_c = ((float)dVar1 + 1.0) * (float)6.2831853070000001 +
               (float)(double)CONCAT44(local_18,uVar2);
  }
  else if (3.1415926535000001 < dVar1) {
    dVar1 = (dVar1 + -3.1415926535000001) * 0.15915494309644401;
    uVar2 = (uint)((ulonglong)dVar1 >> 0x20);
    dVar1 = floor(dVar1);
    return ((float)dVar1 + 1.0) * (float)-6.2831853070000001 + (float)(double)CONCAT44(local_18,uVar2);
  }
  return uStack_c;
}
