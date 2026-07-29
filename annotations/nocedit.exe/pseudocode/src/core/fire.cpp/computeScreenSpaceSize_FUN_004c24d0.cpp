// Name: core_fire.cpp_computeScreenSpaceSize_FUN_004c24d0
// Address: 004c24d0
// Address Range: [[004c24d0, 004c25b7]]
// Convention: __cdecl
// Signature: float __cdecl core_fire_cpp_computeScreenSpaceSize_FUN_004c24d0(float depth,float min_size)

#include "nocturne.h"

float __cdecl core_fire_cpp_computeScreenSpaceSize_FUN_004c24d0(float depth,float min_size)

{
  float fVar4;
  CVector3i local_34;
  float local_20;
  float local_8;
  float fVar2;
  float fVar3;
  float fVar1;
  
  local_34.x = (int)ROUND(256.0f * 0.0);
  local_34.y = (int)ROUND(256.0f * 0.0);
  local_34.z = (int)ROUND(depth * 256.0f);
  engine_special_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex,&local_34);
  fVar2 = (float)1.52587890625e-05;
  fVar1 = (((float)(g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex).transformed_z *
           (float)0.00390625) / ((float)g_ProjectionScale * fVar2)) * 0.2f;
  local_8 = min_size;
  fVar3 = ABS(fVar1 / ((float)g_Projection.half_width_fixed * fVar2));
  fVar4 = ABS(fVar1 / ((float)g_Projection.neg_half_height_fixed * fVar2));
  if (min_size < fVar3) {
    local_8 = fVar3;
  }
  if (fVar4 <= local_8) {
    return local_8;
  }
  return fVar4;
}
