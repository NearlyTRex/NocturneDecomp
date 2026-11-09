// Name: core_fire.cpp_FUN_0049e850
// Address: 0049e850
// Address Range: [[0049e850, 0049e966]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_FUN_0049e850(CFireEffect *this_ptr,CVector3f *start_point,CVector3f *end_point,float size,float alpha,float lifetime,SMRGLTextureBasic *texture_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_FUN_0049e850(CFireEffect *this_ptr,CVector3f *start_point,CVector3f *end_point,float size,float alpha,float lifetime,SMRGLTextureBasic *texture_ptr)

{
  int iVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  byte bVar5;
  float10 fVar6;
  float afStackY_1024 [1011];
  byte local_3c [4];
  float local_38 [4];
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  int local_14;
  
  bVar5 = 0;
  local_38[2] = *(float *)end_point - *(float *)start_point;
  local_38[3] = *(float *)&end_point->field_0x4 - *(float *)&start_point->field_0x4;
  local_28 = *(float *)&end_point->field_0x8 - *(float *)&start_point->field_0x8;
  fVar6 = (float10)1 +
          (SQRT((float10)local_28 * (float10)local_28 +
                (float10)local_38[2] * (float10)local_38[2] +
                (float10)local_38[3] * (float10)local_38[3]) * (float10)_DAT_005d582a) /
          (float10)size;
  local_24 = local_38[2];
  local_20 = local_38[3];
  local_1c = local_28;
  round();
  iVar1 = (int)ROUND(fVar6);
  fVar2 = 1.0 / (float)iVar1;
  iVar3 = 0;
  pfVar4 = (float *)((int)start_point + (uint)bVar5 * -8 + 4);
  local_3c = *(byte (*) [4])start_point;
  local_14 = iVar1;
  local_38[(uint)bVar5 * -2] = *pfVar4;
  local_38[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] = pfVar4[(uint)bVar5 * -2 + 1];
  local_38[2] = local_38[2] * fVar2;
  local_38[3] = local_38[3] * fVar2;
  local_28 = local_28 * fVar2;
  if (0 < iVar1) {
    do {
      core_fire_cpp_CFireEffect_createTrailSegment_FUN_0049e7f0
                (this_ptr,(CVector3f *)local_3c,size,alpha,lifetime,texture_ptr);
      iVar3 = iVar3 + 1;
      local_3c = (byte  [4])((float)local_3c + local_38[2]);
      local_38[0] = local_38[0] + local_38[3];
      local_38[1] = local_38[1] + local_28;
    } while (iVar3 < iVar1);
  }
  return;
}
