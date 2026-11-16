// Name: core_dracbrid.cpp_randomizePosition_FUN_0047d890
// Address: 0047d890
// Address Range: [[0047d890, 0047d914]]
// Convention: __stack3_esi
// Signature: CVector3f * __stack3_esi core_dracbrid_cpp_randomizePosition_FUN_0047d890(float src_x,float src_y,float src_z,CVector3f *dest)

#include "nocturne.h"

CVector3f * __stack3_esi core_dracbrid_cpp_randomizePosition_FUN_0047d890(float src_x,float src_y,float src_z,CVector3f *dest)

{
  float fVar1;
  uint *puVar2;
  byte bVar3;
  float afStackY_1000 [1016];
  float fStack_18;
  float fStack_c;
  
  bVar3 = 0;
  fStack_c = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(-5.0,5.0);
  fVar1 = fStack_c + src_x;
  fStack_c = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(-2.0,2.0);
  src_y = fStack_c + src_y;
  fStack_c = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(-5.0,5.0);
  src_z = fStack_c + src_z;
  fStack_18 = fVar1;
  *(float *)(&stack0xffffffec + (uint)bVar3 * -8) = (&src_y)[(uint)bVar3 * -2];
  *(float *)(&stack0xfffffff0 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
       (&src_z)[(uint)bVar3 * -2 + (uint)bVar3 * -2];
  puVar2 = (uint *)((int)dest + (uint)bVar3 * -8 + 4);
  dest->x = fStack_18;
  *puVar2 = *(uint *)(&stack0xffffffec + (uint)bVar3 * -8);
  puVar2[(uint)bVar3 * -2 + 1] =
       *(uint *)(&stack0xfffffff0 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
  return dest;
}
