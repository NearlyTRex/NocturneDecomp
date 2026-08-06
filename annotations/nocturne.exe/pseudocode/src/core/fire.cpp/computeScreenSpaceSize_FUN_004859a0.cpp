// Name: core_fire.cpp_computeScreenSpaceSize_FUN_004859a0
// Address: 004859a0
// Address Range: [[004859a0, 00485a87]]
// Convention: __cdecl
// Signature: float __cdecl core_fire_cpp_computeScreenSpaceSize_FUN_004859a0(float depth,float min_size)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __cdecl core_fire_cpp_computeScreenSpaceSize_FUN_004859a0(float depth,float min_size)

{
  float fVar1;
  float fVar2;
  float fVar3;
  CVector3i local_34;
  uint local_28;
  uint local_24;
  float local_20;
  float local_8;
  
  local_28 = 0;
  local_24 = 0;
  local_20 = depth;
  local_34.x = (int)ROUND(256.0f * 0.0);
  local_34.y = (int)ROUND(256.0f * 0.0);
  local_34.z = (int)ROUND(depth * 256.0f);
  engine_special_cpp_transformAndProjectPoint_FUN_0053075c
            (&g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr->projected_vertex,&local_34);
  fVar2 = (float)1.52587890625e-05;
  fVar1 = (((float)(g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr->projected_vertex).
                   transformed_z * (float)0.00390625) / ((float)DAT_005b7648 * fVar2)) *
          5.1640756954075245e-315._0_4_;
  local_8 = min_size;
  fVar3 = ABS(fVar1 / ((float)_DAT_01c00c48 * fVar2));
  fVar1 = ABS(fVar1 / ((float)_DAT_01c00c4c * fVar2));
  if (min_size < fVar3) {
    local_8 = fVar3;
  }
  if (fVar1 <= local_8) {
    return local_8;
  }
  return fVar1;
}
