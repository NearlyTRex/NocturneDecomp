// Name: core_fire.cpp_CFireEffect_createTrailFromPoints_FUN_004a3d50
// Address: 004a3d50
// Address Range: [[004a3d50, 004a3e66]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createTrailFromPoints_FUN_004a3d50(CFireEffect *this_ptr,CVector3f *start_point,CVector3f *end_point,float size,float alpha,float lifetime,SMRGLTextureBasic *texture_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CFireEffect_createTrailFromPoints_FUN_004a3d50(CFireEffect *this_ptr,CVector3f *start_point,CVector3f *end_point,float size,float alpha,float lifetime,SMRGLTextureBasic *texture_ptr)

{
  int iVar1;
  float fVar2;
  int iVar3;
  uint *puVar4;
  byte bVar5;
  float10 fVar6;
  float afStackY_1024 [1011];
  CVector3f CStack_3c;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  int iStack_14;
  
  bVar5 = 0;
  fStack_30 = end_point->x - start_point->x;
  fStack_2c = end_point->y - start_point->y;
  fStack_28 = end_point->z - start_point->z;
  fVar6 = (float10)1 +
          (SQRT((float10)fStack_28 * (float10)fStack_28 +
                (float10)fStack_30 * (float10)fStack_30 + (float10)fStack_2c * (float10)fStack_2c) *
          (float10)_DAT_005c0a48) / (float10)size;
  fStack_24 = fStack_30;
  fStack_20 = fStack_2c;
  fStack_1c = fStack_28;
  round();
  iVar1 = (int)ROUND(fVar6);
  fVar2 = 1.0 / (float)iVar1;
  iVar3 = 0;
  puVar4 = (uint *)((int)start_point + (uint)bVar5 * -8 + 4);
  CStack_3c.x = start_point->x;
  iStack_14 = iVar1;
  *(uint *)((int)&CStack_3c + (uint)bVar5 * -8 + 4) = *puVar4;
  *(uint *)((int)&CStack_3c + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
       puVar4[(uint)bVar5 * -2 + 1];
  fStack_30 = fStack_30 * fVar2;
  fStack_2c = fStack_2c * fVar2;
  fStack_28 = fStack_28 * fVar2;
  if (0 < iVar1) {
    do {
      core_fire_cpp_CFireEffect_createTrailSegment_FUN_004a3cf0
                (this_ptr,&CStack_3c,size,alpha,lifetime,texture_ptr);
      iVar3 = iVar3 + 1;
      CStack_3c.x = CStack_3c.x + fStack_30;
      CStack_3c.y = CStack_3c.y + fStack_2c;
      CStack_3c.z = CStack_3c.z + fStack_28;
    } while (iVar3 < iVar1);
  }
  return;
}
