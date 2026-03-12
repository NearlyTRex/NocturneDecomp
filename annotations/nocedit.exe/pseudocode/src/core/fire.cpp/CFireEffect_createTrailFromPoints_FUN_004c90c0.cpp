// Name: core_fire.cpp_CFireEffect_createTrailFromPoints_FUN_004c90c0
// Address: 004c90c0
// Address Range: [[004c90c0, 004c91d6]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createTrailFromPoints_FUN_004c90c0(CFireEffect *this_ptr,CVector3f *start_point,CVector3f *end_point,float size,float alpha,float lifetime,SMRGLTextureBasic *texture_ptr)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl core_fire_cpp_CFireEffect_createTrailFromPoints_FUN_004c90c0(CFireEffect *this_ptr,CVector3f *start_point,CVector3f *end_point,float size,float alpha,float lifetime,SMRGLTextureBasic *texture_ptr)

{
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar3;
  CVector3f local_34;
  float local_28;
  float local_24;
  float local_20;
  int local_18;
  float fVar2;
  int iVar1;
  
  fVar3 = end_point->x - start_point->x;
  fVar5 = end_point->y - start_point->y;
  fVar4 = end_point->z - start_point->z;
  local_34.x = start_point->x;
  local_34.y = start_point->y;
  local_34.z = start_point->z;
  iVar2 = (int)ROUND(ROUND((SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar5 * fVar5) *
                           (float)8) / size + 1.0));
  fVar2 = 1.0 / (float)iVar2;
  iVar3 = 0;
  if (0 < iVar2) {
    do {
      core_fire_cpp_CFireEffect_createTrailSegment_FUN_004c9060
                (this_ptr,&local_34,size,alpha,lifetime,texture_ptr);
      iVar3 = iVar3 + 1;
      local_34.x = local_34.x + fVar3 * fVar2;
      local_34.y = local_34.y + fVar5 * fVar2;
      local_34.z = local_34.z + fVar4 * fVar2;
    } while (iVar3 < iVar2);
  }
  return;
}
