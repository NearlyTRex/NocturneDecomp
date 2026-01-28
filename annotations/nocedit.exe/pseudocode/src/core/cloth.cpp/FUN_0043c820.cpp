// Name: core_cloth.cpp_FUN_0043c820
// Address: 0043c820
// Address Range: [[0043c820, 0043c877]]
// Convention: unknown
// Signature: void core_cloth_cpp_FUN_0043c820(void)

#include "nocturne.h"

void core_cloth_cpp_FUN_0043c820(void)

{
  float *in_stack_00000004;
  CVector3i local_10;
  
  local_10.x = (int)ROUND(*in_stack_00000004 * 256.0f);
  local_10.y = (int)ROUND(in_stack_00000004[1] * 256.0f);
  local_10.z = (int)ROUND(in_stack_00000004[2] * 256.0f);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr[19999].projected_vertex,&local_10);
  core_cloth_cpp_FUN_0043c6e0();
  return;
}
