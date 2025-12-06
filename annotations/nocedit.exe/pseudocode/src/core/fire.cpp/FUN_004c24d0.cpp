// Name: core_fire.cpp_FUN_004c24d0
// Address: 004c24d0
// Address Range: [[004c24d0, 004c25b7]]
// Convention: unknown
// Signature: undefined core_fire.cpp_FUN_004c24d0()

#include "nocturne.h"

float core_fire_cpp_FUN_004c24d0(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  BADSPACEBASE *in_ESP;
  float in_stack_00000004;
  float in_stack_0000000c;
  CVector3i local_34;
  uint local_28;
  uint local_24;
  float local_20;
  
  local_28 = 0;
  local_24 = 0;
  local_20 = in_stack_00000004;
  local_34.x = (int)ROUND(256f * 0.0);
  local_34.y = (int)ROUND(256f * 0.0);
  local_34.z = (int)ROUND(in_stack_00000004 * 256f);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,&local_34);
  fVar2 = (float)1.52587890625e-05;
  fVar1 = (((float)(g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex).transformed_z *
           (float)0.00390625) / ((float)g_ProjectionScale * fVar2)) * 0.2f;
  fVar3 = ABS(fVar1 / ((float)g_ViewportCenterXFixed * fVar2));
  fVar1 = ABS(fVar1 / ((float)g_ViewportCenterYFixed * fVar2));
  if (in_stack_0000000c < fVar3) {
    in_stack_0000000c = fVar3;
  }
  if (fVar1 <= in_stack_0000000c) {
    return in_stack_0000000c;
  }
  return fVar1;
}
