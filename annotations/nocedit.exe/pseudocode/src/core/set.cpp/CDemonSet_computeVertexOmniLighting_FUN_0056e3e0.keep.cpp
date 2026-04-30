// Name: core_set.cpp_CDemonSet_computeVertexOmniLighting_FUN_0056e3e0
// Address: 0056e3e0
// MANUAL RECONSTRUCTION
// Address Range: [[0056e3e0, 0056e5c1]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_computeVertexOmniLighting_FUN_0056e3e0(CDemonSet *this_ptr,CVector3f *vertex_position,CVector3f *position_offset,int vertex_index)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_computeVertexOmniLighting_FUN_0056e3e0(CDemonSet *this_ptr,CVector3f *vertex_position,CVector3f *position_offset,int vertex_index)

{
  float fVar1;
  float fVar4;
  int iVar5;
  float local_40;
  float local_3c;
  float local_38;
  float fVar2;
  C3DSLight *iVar1;
  float fVar3;

  local_3c = 0.0;
  local_40 = 0.0;
  local_38 = 0.0;
  for (iVar5 = 0; iVar5 < g_OmniLightCount; iVar5 = iVar5 + 1) {
    iVar1 = g_OmniLights[iVar5];
    if (iVar1->atten_end != 0.0f) {
      fVar1 = iVar1->pos.x - (vertex_position->x + position_offset->x);
      fVar2 = iVar1->pos.y - (vertex_position->y + position_offset->y);
      fVar3 = iVar1->pos.z - (vertex_position->z + position_offset->z);
      fVar4 = core_chain_cpp_fastSqrt_FUN_00431350(fVar3 * fVar3 + fVar1 * fVar1 + fVar2 * fVar2);
      if (fVar4 <= iVar1->atten_end) {
        fVar1 = 1.0 - fVar4 / iVar1->atten_end;
        local_3c = *(float *)&iVar1->color.r * fVar1 + local_3c;
        local_40 = *(float *)&iVar1->color.g * fVar1 + local_40;
        local_38 = *(float *)&iVar1->color.b * fVar1 + local_38;
      }
    }
  }
  if (g_OmniLightCount == 0) {
    local_40 = 128.0;
    local_38 = 128.0;
    local_3c = 128.0;
  }
  if ((float)255 < local_3c) {
    local_3c = 255.0;
  }
  if ((float)255 < local_40) {
    local_40 = 255.0;
  }
  if ((float)255 < local_38) {
    local_38 = 255.0;
  }
  g_RenderVertexBuffer[vertex_index].r = (int)ROUND(ROUND(local_3c)) << 8;
  g_RenderVertexBuffer[vertex_index].g = (int)ROUND(ROUND(local_40)) << 8;
  g_RenderVertexBuffer[vertex_index].b = (int)ROUND(ROUND(local_38)) << 8;
  return;
}
