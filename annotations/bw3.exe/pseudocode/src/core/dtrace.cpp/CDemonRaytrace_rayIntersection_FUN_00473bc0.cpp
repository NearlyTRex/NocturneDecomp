// Name: core_dtrace.cpp_CDemonRaytrace_rayIntersection_FUN_00473bc0
// Address: 00473bc0
// Address Range: [[00473bc0, 00473cce]]
// Convention: __stack3_esi
// Signature: CVector3f * __stack3_esi core_dtrace_cpp_CDemonRaytrace_rayIntersection_FUN_00473bc0(CDemonRaytrace *this_ptr,CVector3f *ray_start,CVector3f *ray_end,CVector3f *output_point)

#include "nocturne.h"

CVector3f * __stack3_esi core_dtrace_cpp_CDemonRaytrace_rayIntersection_FUN_00473bc0(CDemonRaytrace *this_ptr,CVector3f *ray_start,CVector3f *ray_end,CVector3f *output_point)

{
  float fVar1;
  uint *puVar2;
  byte bVar3;
  float afStackY_1044 [1010];
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar3 = 0;
  fVar1 = core_dtrace_cpp_CDemonRaytrace_rayVoxelIntersection_FUN_00473cd0
                    (this_ptr,ray_start,ray_end,(CVector3f *)0x0,(int *)0x0);
  fStack_14 = fVar1;
  if ((0.0 <= fVar1) && (fVar1 < 1.0)) {
    fStack_38 = ray_end->x - ray_start->x;
    fStack_34 = ray_end->y - ray_start->y;
    fStack_30 = ray_end->z - ray_start->z;
    fStack_20 = fStack_38;
    *(uint *)((int)&stack0xffffffe4 + (uint)bVar3 * -8) =
         *(uint *)((int)&stack0xffffffcc + (uint)bVar3 * -8);
    *(uint *)((int)&stack0xffffffe8 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
         *(uint *)((int)&stack0xffffffd0 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
    fStack_2c = fStack_20 * fVar1;
    fStack_28 = fStack_1c * fVar1;
    fStack_24 = fStack_18 * fVar1;
    *(uint *)((int)&stack0xffffffa8 + (uint)bVar3 * -8) =
         *(uint *)((int)&stack0xffffffd8 + (uint)bVar3 * -8);
    *(uint *)((int)&stack0xffffffac + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
         *(uint *)((int)&stack0xffffffdc + (uint)bVar3 * -8 + (uint)bVar3 * -8);
    fStack_44 = ray_start->x + fStack_20 * fVar1;
    fStack_40 = ray_start->y + fStack_58;
    fStack_3c = ray_start->z + fStack_54;
    fStack_50 = fStack_44;
    *(uint *)(&stack0xffffffb4 + (uint)bVar3 * -8) =
         *(uint *)((int)&stack0xffffffc0 + (uint)bVar3 * -8);
    *(uint *)(&stack0xffffffb8 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
         *(uint *)((int)&stack0xffffffc4 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
    puVar2 = (uint *)((int)output_point + (uint)bVar3 * -8 + 4);
    output_point->x = fStack_50;
    *puVar2 = *(uint *)(&stack0xffffffb4 + (uint)bVar3 * -8);
    puVar2[(uint)bVar3 * -2 + 1] =
         *(uint *)(&stack0xffffffb8 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
    return output_point;
  }
  puVar2 = (uint *)((int)ray_end + (uint)bVar3 * -8 + 4);
  fStack_50 = ray_end->x;
  *(uint *)(&stack0xffffffb4 + (uint)bVar3 * -8) = *puVar2;
  *(uint *)(&stack0xffffffb8 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
       puVar2[(uint)bVar3 * -2 + 1];
  puVar2 = (uint *)((int)output_point + (uint)bVar3 * -8 + 4);
  output_point->x = fStack_50;
  *puVar2 = *(uint *)(&stack0xffffffb4 + (uint)bVar3 * -8);
  puVar2[(uint)bVar3 * -2 + 1] =
       *(uint *)(&stack0xffffffb8 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
  return output_point;
}
