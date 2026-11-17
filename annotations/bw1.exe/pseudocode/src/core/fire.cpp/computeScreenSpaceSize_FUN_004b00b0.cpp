// Name: core_fire.cpp_computeScreenSpaceSize_FUN_004b00b0
// Address: 004b00b0
// Address Range: [[004b00b0, 004b0197]]
// Convention: __cdecl
// Signature: float __cdecl core_fire_cpp_computeScreenSpaceSize_FUN_004b00b0(float depth,float min_size)

#include "nocturne.h"

float __cdecl core_fire_cpp_computeScreenSpaceSize_FUN_004b00b0(float depth,float min_size)

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
  engine_special_cpp_transformAndProjectPoint_FUN_00580173
            (&g_CDemonRenderer_PTR_00612560->vertex_buffer_ptr->projected_vertex,&local_34);
  fVar2 = (float)1.52587890625e-05;
  fVar1 = (((float)(g_CDemonRenderer_PTR_00612560->vertex_buffer_ptr->projected_vertex).
                   transformed_z * (float)0.00390625) / ((float)g_INT_0061b4c4 * fVar2)) *
          0.2f;
  local_8 = min_size;
  fVar3 = ABS(fVar1 / ((float)g_INT_01c4eff8 * fVar2));
  fVar1 = ABS(fVar1 / ((float)g_INT_01c4effc * fVar2));
  if (min_size < fVar3) {
    local_8 = fVar3;
  }
  if (fVar1 <= local_8) {
    return local_8;
  }
  return fVar1;
}
