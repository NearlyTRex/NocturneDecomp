// Name: core_set.cpp_CDemonSet_computeVertexOmniLighting_FUN_00531a90
// Address: 00531a90
// Address Range: [[00531a90, 00531c9a]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_computeVertexOmniLighting_FUN_00531a90(CDemonSet *this_ptr,CVector3f *vertex_position,CVector3f *position_offset,int vertex_index)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_computeVertexOmniLighting_FUN_00531a90(CDemonSet *this_ptr,CVector3f *vertex_position,CVector3f *position_offset,int vertex_index)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  double dVar6;
  double dVar7;
  float local_60;
  float local_5c;
  float local_58;
  
  iVar5 = 0;
  local_60 = 0.0;
  local_58 = 0.0;
  local_5c = 0.0;
  if (0 < g_INT_01fc9cd4) {
    do {
      iVar1 = *(int *)((int)&g_INT_01fc9cd8 + iVar5);
      if ((*(uint *)(iVar1 + 0x11d4) & 0x7fffffff) != 0) {
        fVar4 = *(float *)(iVar1 + 0x104) - (vertex_position->x + position_offset->x);
        fVar2 = *(float *)(iVar1 + 0x108) - (vertex_position->y + position_offset->y);
        fVar3 = *(float *)(iVar1 + 0x10c) - (vertex_position->z + position_offset->z);
        fVar4 = (float)(((int)(fVar3 * fVar3 + fVar4 * fVar4 + fVar2 * fVar2) >> 1) + g_INT_01caf5b4
                       );
        if (fVar4 <= *(float *)(iVar1 + 0x11d4)) {
          fVar4 = 1.0 - fVar4 / *(float *)(iVar1 + 0x11d4);
          local_5c = *(float *)(iVar1 + 0x11c4) * fVar4 + local_5c;
          local_60 = *(float *)(iVar1 + 0x11c8) * fVar4 + local_60;
          local_58 = *(float *)(iVar1 + 0x11cc) * fVar4 + local_58;
        }
      }
      iVar5 = iVar5 + 4;
    } while (iVar5 < g_INT_01fc9cd4 * 4);
  }
  if (g_INT_01fc9cd4 == 0) {
    local_60 = 128.0;
    local_58 = 128.0;
    local_5c = 128.0;
  }
  if ((float)255 < local_5c) {
    local_5c = 255.0;
  }
  if ((float)255 < local_60) {
    local_60 = 255.0;
  }
  if ((float)255 < local_58) {
    local_58 = 255.0;
  }
  dVar6 = round((double)local_5c);
  dVar7 = round((double)local_60);
  g_SRenderVertex_ARRAY_00622014[vertex_index].r = (int)ROUND(dVar6) << 8;
  dVar6 = round((double)local_58);
  g_SRenderVertex_ARRAY_00622014[vertex_index].g = (int)ROUND(dVar7) << 8;
  g_SRenderVertex_ARRAY_00622014[vertex_index].b = (int)ROUND(dVar6) << 8;
  return;
}
