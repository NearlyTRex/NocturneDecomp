// Name: core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
// Address: 0040cd70
// Address Range: [[0040cd70, 0040ce24]]
// Convention: __cdecl
// Signature: float core_actor.cpp_normalizeAngleToPi_FUN_0040cd70(float angle_radians)

#include "nocturne.h"

float __cdecl core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(float angle_radians)

{
  double dVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  float fVar5;
  uint in_EAX;
  ushort uVar6;
  uint in_EDX;
  float10 in_ST0;
  uint uStack_1c;
  uint local_18;
  uint uStack_c;
  
  dVar1 = (double)angle_radians;
  local_18 = SUB84 /* extract 2-byte value */(dVar1,0);
  fVar5 = (float)-3.1415926535000001;
  uVar6 = (ushort)((uint)in_EAX >> 0x10);
  if (angle_radians < fVar5) {
    uStack_1c = (uint)((ulonglong)((dVar1 + 3.1415926535000001) * -0.15915494309644401) >> 0x20);
    crt_math_c_floor_FUN_005feb90((double)in_ST0);
    uStack_c = ((float)(double)CONCAT44 /* combine 2-byte values */(in_EDX,CONCAT22 /* combine 2-byte values */(uVar6,(ushort)(angle_radians < fVar5) << 8 |
                                                              (ushort)(NAN(angle_radians) ||
                                                                      NAN(fVar5)) << 10 |
                                                              (ushort)(angle_radians == fVar5) <<
                                                              0xe)) + 1.0) * (float)6.2831853070000001
               + (float)(double)CONCAT44 /* combine 2-byte values */(local_18,uStack_1c);
  }
  else {
    bVar2 = NAN(3.1415926535000001);
    bVar3 = dVar1 < 3.1415926535000001;
    bVar4 = dVar1 == 3.1415926535000001;
    if (!bVar3 && bVar4 == 0) {
      uStack_1c = (uint)((ulonglong)((dVar1 + -3.1415926535000001) * 0.15915494309644401) >> 0x20);
      crt_math_c_floor_FUN_005feb90((double)in_ST0);
      return ((float)(double)CONCAT44 /* combine 2-byte values */(in_EDX,CONCAT22 /* combine 2-byte values */(uVar6,(ushort)bVar3 << 8 |
                                                            (ushort)(NAN(dVar1) || bVar2) << 10 |
                                                            (ushort)bVar4 << 0xe)) + 1.0) *
             (float)-6.2831853070000001 + (float)(double)CONCAT44 /* combine 2-byte values */(local_18,uStack_1c);
    }
  }
  return uStack_c;
}
