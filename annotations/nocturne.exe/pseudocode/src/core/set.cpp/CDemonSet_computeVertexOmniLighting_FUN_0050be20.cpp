// Name: core_set.cpp_CDemonSet_computeVertexOmniLighting_FUN_0050be20
// Address: 0050be20
// Address Range: [[0050be20, 0050c001]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_computeVertexOmniLighting_FUN_0050be20(CDemonSet *this_ptr,CVector3f *vertex_position,CVector3f *position_offset,int vertex_index)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_set_cpp_CDemonSet_computeVertexOmniLighting_FUN_0050be20(CDemonSet *this_ptr,CVector3f *vertex_position,CVector3f *position_offset,int vertex_index)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  double dVar7;
  double dVar8;
  float local_40;
  float local_3c;
  float local_38;
  
  fVar4 = CVector3f_01c70708.y;
  iVar6 = 0;
  local_3c = 0.0;
  local_40 = 0.0;
  local_38 = 0.0;
  if (0 < _DAT_01fba9a4) {
    do {
      iVar1 = *(int *)(&DAT_01fba9a8 + iVar6);
      if ((*(uint *)(iVar1 + 0x11d4) & 0x7fffffff) != 0) {
        fVar5 = *(float *)(iVar1 + 0x104) - (vertex_position->x + position_offset->x);
        fVar2 = *(float *)(iVar1 + 0x108) - (vertex_position->y + position_offset->y);
        fVar3 = *(float *)(iVar1 + 0x10c) - (vertex_position->z + position_offset->z);
        fVar5 = (float)(((int)(fVar3 * fVar3 + fVar5 * fVar5 + fVar2 * fVar2) >> 1) +
                       (int)CVector3f_01c70708.y);
        if (fVar5 <= *(float *)(iVar1 + 0x11d4)) {
          fVar5 = 1.0 - fVar5 / *(float *)(iVar1 + 0x11d4);
          local_3c = *(float *)(iVar1 + 0x11c4) * fVar5 + local_3c;
          local_40 = *(float *)(iVar1 + 0x11c8) * fVar5 + local_40;
          local_38 = *(float *)(iVar1 + 0x11cc) * fVar5 + local_38;
        }
      }
      iVar6 = iVar6 + 4;
    } while (iVar6 < _DAT_01fba9a4 * 4);
  }
  if (_DAT_01fba9a4 == 0) {
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
  dVar7 = round((double)local_3c);
  dVar8 = round((double)local_40);
  (&DAT_005c5034)[vertex_index * 0xc] = (int)ROUND(dVar7) << 8;
  dVar7 = round((double)local_38);
  (&DAT_005c5038)[vertex_index * 0xc] = (int)ROUND(dVar8) << 8;
  (&DAT_005c503c)[vertex_index * 0xc] = (int)ROUND(dVar7) << 8;
  CVector3f_01c70708.y = fVar4;
  return;
}
