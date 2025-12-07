// Name: core_bat.cpp_FUN_004146f0
// Address: 004146f0
// Address Range: [[004146f0, 00414780]]
// Convention: unknown
// Signature: undefined core_bat.cpp_FUN_004146f0()

#include "nocturne.h"

float core_bat_cpp_FUN_004146f0
                (uint param_1,uint param_2,uint param_3,uint param_4,
                float param_5,float param_6)

{
  double dVar1;
  uint uVar2;
  float10 in_ST0;
  uint uStack_1c;
  uint local_18;
  
  dVar1 = (double)param_5;
  local_18 = SUB84 /* extract 2-byte value */(dVar1,0);
  uVar2 = CONCAT22 /* combine 2-byte values */((short)((uint)param_1 >> 0x10),
                   (ushort)(0.0 < dVar1) << 8 | (ushort)NAN(dVar1) << 10 |
                   (ushort)(dVar1 == 0.0) << 0xe);
  if (0.0 >= dVar1 && (dVar1 == 0.0) == 0) {
    uStack_1c = (uint)((ulonglong)(double)(-param_5 / param_6) >> 0x20);
    crt_math_c_floor_FUN_005feb90((double)in_ST0);
    param_5 = (float)(double)CONCAT44 /* combine 2-byte values */(param_2,uVar2) * param_6 +
              (float)(double)CONCAT44 /* combine 2-byte values */(local_18,uStack_1c);
    if (param_5 < 0.0) {
      param_5 = param_5 + param_6;
    }
    return param_5;
  }
  uStack_1c = (uint)((ulonglong)(double)(param_5 / param_6) >> 0x20);
  crt_math_c_floor_FUN_005feb90((double)in_ST0);
  return (float)(double)CONCAT44 /* combine 2-byte values */(local_18,uStack_1c) -
         (float)(double)CONCAT44 /* combine 2-byte values */(param_2,uVar2) * param_6;
}
