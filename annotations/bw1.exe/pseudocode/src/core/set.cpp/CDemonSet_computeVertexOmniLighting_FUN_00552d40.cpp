// Name: core_set.cpp_CDemonSet_computeVertexOmniLighting_FUN_00552d40
// Address: 00552d40
// Address Range: [[00552d40, 00552f4a]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_computeVertexOmniLighting_FUN_00552d40(CDemonSet *this_ptr,CVector3f *vertex_position,CVector3f *position_offset,int vertex_index)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_set_cpp_CDemonSet_computeVertexOmniLighting_FUN_00552d40(CDemonSet *this_ptr,CVector3f *vertex_position,CVector3f *position_offset,int vertex_index)

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
  if (0 < _DAT_01fe5c88) {
    do {
      iVar1 = *(int *)(&DAT_01fe5c8c + iVar5);
      if ((*(uint *)(iVar1 + 0x11d4) & 0x7fffffff) != 0) {
        fVar4 = *(float *)(iVar1 + 0x104) - (vertex_position->x + position_offset->x);
        fVar2 = *(float *)(iVar1 + 0x108) - (vertex_position->y + position_offset->y);
        fVar3 = *(float *)(iVar1 + 0x10c) - (vertex_position->z + position_offset->z);
        fVar4 = (float)(((int)(fVar3 * fVar3 + fVar4 * fVar4 + fVar2 * fVar2) >> 1) + _DAT_01cc804c)
        ;
        if (fVar4 <= *(float *)(iVar1 + 0x11d4)) {
          fVar4 = 1.0 - fVar4 / *(float *)(iVar1 + 0x11d4);
          local_5c = *(float *)(iVar1 + 0x11c4) * fVar4 + local_5c;
          local_60 = *(float *)(iVar1 + 0x11c8) * fVar4 + local_60;
          local_58 = *(float *)(iVar1 + 0x11cc) * fVar4 + local_58;
        }
      }
      iVar5 = iVar5 + 4;
    } while (iVar5 < _DAT_01fe5c88 * 4);
  }
  if (_DAT_01fe5c88 == 0) {
    local_60 = 128.0;
    local_58 = 128.0;
    local_5c = 128.0;
  }
  if ((float)_DAT_005f0a06 < local_5c) {
    local_5c = 255.0;
  }
  if ((float)_DAT_005f0a06 < local_60) {
    local_60 = 255.0;
  }
  if ((float)_DAT_005f0a06 < local_58) {
    local_58 = 255.0;
  }
  dVar6 = round((double)local_5c);
  dVar7 = round((double)local_60);
  (&DAT_00629034)[vertex_index * 0xc] = (int)ROUND(dVar6) << 8;
  dVar6 = round((double)local_58);
  (&DAT_00629038)[vertex_index * 0xc] = (int)ROUND(dVar7) << 8;
  (&DAT_0062903c)[vertex_index * 0xc] = (int)ROUND(dVar6) << 8;
  return;
}
