// Name: core_fire.cpp_CFireEffect_createTrailFromPoints_FUN_004b7150
// Address: 004b7150
// Address Range: [[004b7150, 004b7266]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createTrailFromPoints_FUN_004b7150(CFireEffect *this_ptr,CVector3f *start_point,CVector3f *end_point,float size,float alpha,float lifetime,SMRGLTextureBasic *texture_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CFireEffect_createTrailFromPoints_FUN_004b7150(CFireEffect *this_ptr,CVector3f *start_point,CVector3f *end_point,float size,float alpha,float lifetime,SMRGLTextureBasic *texture_ptr)

{
  int iVar1;
  float fVar2;
  int iVar3;
  uint *puVar4;
  byte bVar5;
  float10 fVar6;
  float afStackY_1024 [1011];
  CVector3f local_3c;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  int local_14;
  
  bVar5 = 0;
  local_30 = end_point->x - start_point->x;
  local_2c = end_point->y - start_point->y;
  local_28 = end_point->z - start_point->z;
  fVar6 = (float10)1 +
          (SQRT((float10)local_28 * (float10)local_28 +
                (float10)local_30 * (float10)local_30 + (float10)local_2c * (float10)local_2c) *
          (float10)_DAT_005df66c) / (float10)size;
  local_24 = local_30;
  local_20 = local_2c;
  local_1c = local_28;
  round();
  iVar1 = (int)ROUND(fVar6);
  fVar2 = 1.0 / (float)iVar1;
  iVar3 = 0;
  puVar4 = (uint *)((int)start_point + (uint)bVar5 * -8 + 4);
  local_3c.x = start_point->x;
  local_14 = iVar1;
  *(uint *)((int)&local_3c + (uint)bVar5 * -8 + 4) = *puVar4;
  *(uint *)((int)&local_3c + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
       puVar4[(uint)bVar5 * -2 + 1];
  local_30 = local_30 * fVar2;
  local_2c = local_2c * fVar2;
  local_28 = local_28 * fVar2;
  if (0 < iVar1) {
    do {
      core_fire_cpp_CFireEffect_createTrailSegment_FUN_004b70f0
                (this_ptr,&local_3c,size,alpha,lifetime,texture_ptr);
      iVar3 = iVar3 + 1;
      local_3c.x = local_3c.x + local_30;
      local_3c.y = local_3c.y + local_2c;
      local_3c.z = local_3c.z + local_28;
    } while (iVar3 < iVar1);
  }
  return;
}
