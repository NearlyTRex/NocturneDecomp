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
  double dVar6;
  float afStackY_1028 [1011];
  CVector3f CStack_40;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  int iStack_18;
  
  bVar5 = 0;
  fStack_30 = end_point->x - start_point->x;
  fStack_2c = end_point->y - start_point->y;
  fStack_28 = end_point->z - start_point->z;
  fStack_24 = fStack_30;
  fStack_20 = fStack_2c;
  fStack_1c = fStack_28;
  dVar6 = round
                    ((double)((SQRT(fStack_28 * fStack_28 +
                                    fStack_30 * fStack_30 + fStack_2c * fStack_2c) *
                              (float)_DAT_005c0a48) / size + 1.0));
  iVar1 = (int)ROUND(dVar6);
  fVar2 = 1.0 / (float)iVar1;
  iVar3 = 0;
  puVar4 = (uint *)((int)start_point + (uint)bVar5 * -8 + 4);
  CStack_40.x = start_point->x;
  iStack_18 = iVar1;
  *(uint *)((int)&CStack_40 + (uint)bVar5 * -8 + 4) = *puVar4;
  *(uint *)((int)&CStack_40 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
       puVar4[(uint)bVar5 * -2 + 1];
  fStack_34 = fStack_34 * fVar2;
  fStack_30 = fStack_30 * fVar2;
  fStack_2c = fStack_2c * fVar2;
  if (0 < iVar1) {
    do {
      core_fire_cpp_CFireEffect_createTrailSegment_FUN_004a3cf0
                (this_ptr,&CStack_40,size,alpha,lifetime,texture_ptr);
      iVar3 = iVar3 + 1;
      CStack_40.x = CStack_40.x + fStack_34;
      CStack_40.y = CStack_40.y + fStack_30;
      CStack_40.z = CStack_40.z + fStack_2c;
    } while (iVar3 < iVar1);
  }
  return;
}
