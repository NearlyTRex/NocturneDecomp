// Name: core_fire.cpp_CFireEffect_createTrailFromPoints_FUN_0048c590
// Address: 0048c590
// Address Range: [[0048c590, 0048c6a6]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createTrailFromPoints_FUN_0048c590(CFireEffect *this_ptr,CVector3f *start_point,CVector3f *end_point,float size,float alpha,float lifetime,SMRGLTextureBasic *texture_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_createTrailFromPoints_FUN_0048c590(CFireEffect *this_ptr,CVector3f *start_point,CVector3f *end_point,float size,float alpha,float lifetime,SMRGLTextureBasic *texture_ptr)

{
  int iVar1;
  float fVar2;
  int iVar3;
  double dVar4;
  CVector3f local_38;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  int iStack_1c;
  
  local_28 = end_point->x - start_point->x;
  local_24 = end_point->y - start_point->y;
  local_20 = end_point->z - start_point->z;
  local_38.y = start_point->x;
  local_38.z = start_point->y;
  local_2c = start_point->z;
  dVar4 = round
                    ((double)((SQRT(local_20 * local_20 + local_28 * local_28 + local_24 * local_24)
                              * (float)8) / size + 1.0));
  iVar1 = (int)ROUND(dVar4);
  fVar2 = 1.0 / (float)iVar1;
  local_2c = local_2c * fVar2;
  local_28 = local_28 * fVar2;
  local_24 = local_24 * fVar2;
  iVar3 = 0;
  iStack_1c = iVar1;
  if (0 < iVar1) {
    do {
      core_fire_cpp_CFireEffect_createTrailSegment_FUN_0048c530
                (this_ptr,&local_38,size,alpha,lifetime,texture_ptr);
      iVar3 = iVar3 + 1;
      local_38.x = local_38.x + local_2c;
      local_38.y = local_38.y + local_28;
      local_38.z = local_38.z + local_24;
    } while (iVar3 < iVar1);
  }
  return;
}
