// Name: core_bat.cpp_FUN_00414ce0
// Address: 00414ce0
// Address Range: [[00414ce0, 00414db6]]
// Convention: unknown
// Signature: undefined core_bat.cpp_FUN_00414ce0()

#include "nocturne.h"

/* Signature: byte actors_other_bat.cpp_FUN_00414ce0(uint param_1) */

void core_bat_cpp_FUN_00414ce0
               (uint param_1,uint param_2,uint param_3,uint param_4,
               int param_5)

{
  double dVar1;
  float fVar2;
  uint uVar3;
  float10 in_ST0;
  uint uStack_2c;
  uint local_28;
  float fStack_24;
  
  fVar2 = *(float *)(param_5 + 0x304);
  dVar1 = (double)fVar2;
  local_28 = SUB84 /* extract 2-byte value */(dVar1,0);
  uVar3 = CONCAT22 /* combine 2-byte values */((short)((uint)fVar2 >> 0x10),
                   (ushort)(0.0 < dVar1) << 8 | (ushort)NAN(dVar1) << 10 |
                   (ushort)(dVar1 == 0.0) << 0xe);
  if (0.0 < dVar1 || (dVar1 == 0.0) != 0) {
    uStack_2c = (uint)((ulonglong)(double)(fVar2 / (float)*(int *)(param_5 + 0x178)) >> 0x20);
    crt_math_c_floor_FUN_005feb90((double)in_ST0);
    fStack_24 = (float)(double)CONCAT44 /* combine 2-byte values */(local_28,uStack_2c) -
                (float)(double)CONCAT44 /* combine 2-byte values */(param_2,uVar3) * fVar2;
  }
  else {
    uStack_2c = (uint)((ulonglong)(double)(-fVar2 / (float)*(int *)(param_5 + 0x178)) >> 0x20)
    ;
    crt_math_c_floor_FUN_005feb90((double)in_ST0);
    fStack_24 = (float)(double)CONCAT44 /* combine 2-byte values */(param_2,uVar3) * fVar2 +
                (float)(double)CONCAT44 /* combine 2-byte values */(local_28,uStack_2c);
    if (fStack_24 < 0.0) {
      fStack_24 = fStack_24 + fVar2;
    }
  }
  *(float *)(param_5 + 0x304) = fStack_24;
  core_course_cpp_CCourse_FUN_00442710((CCourse *)(param_5 + 0x178));
  return;
}
