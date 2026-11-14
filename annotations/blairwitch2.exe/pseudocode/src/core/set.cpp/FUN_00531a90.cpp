// Name: core_set.cpp_FUN_00531a90
// Address: 00531a90
// Address Range: [[00531a90, 00531c9a]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_FUN_00531a90(CDemonSet *this_ptr,CVector3f *vertex_position,CVector3f *position_offset,int vertex_index)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_set_cpp_FUN_00531a90(CDemonSet *this_ptr,CVector3f *vertex_position,CVector3f *position_offset,int vertex_index)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float10 fVar6;
  float fVar7;
  float fVar8;
  float local_58;
  
  iVar5 = 0;
  fVar7 = 0.0;
  local_58 = 0.0;
  fVar8 = 0.0;
  if (0 < _DAT_01fc9cd4) {
    do {
      iVar1 = *(int *)(&DAT_01fc9cd8 + iVar5);
      if ((*(uint *)(iVar1 + 0x11d4) & 0x7fffffff) != 0) {
        fVar4 = *(float *)(iVar1 + 0x104) - (vertex_position->x + position_offset->x);
        fVar2 = *(float *)(iVar1 + 0x108) - (vertex_position->y + position_offset->y);
        fVar3 = *(float *)(iVar1 + 0x10c) - (vertex_position->z + position_offset->z);
        fVar4 = (float)(((int)(fVar3 * fVar3 + fVar4 * fVar4 + fVar2 * fVar2) >> 1) + _DAT_01caf5b4)
        ;
        if (fVar4 <= *(float *)(iVar1 + 0x11d4)) {
          fVar4 = 1.0 - fVar4 / *(float *)(iVar1 + 0x11d4);
          fVar8 = *(float *)(iVar1 + 0x11c4) * fVar4 + fVar8;
          fVar7 = *(float *)(iVar1 + 0x11c8) * fVar4 + fVar7;
          local_58 = *(float *)(iVar1 + 0x11cc) * fVar4 + local_58;
        }
      }
      iVar5 = iVar5 + 4;
    } while (iVar5 < _DAT_01fc9cd4 * 4);
  }
  if (_DAT_01fc9cd4 == 0) {
    fVar7 = 128.0;
    local_58 = 128.0;
    fVar8 = 128.0;
  }
  if ((float)_DAT_005e59e2 < fVar8) {
    fVar8 = 255.0;
  }
  if ((float)_DAT_005e59e2 < fVar7) {
    fVar7 = 255.0;
  }
  if ((float)_DAT_005e59e2 < local_58) {
    local_58 = 255.0;
  }
  fVar6 = (float10)local_58;
  round(fVar7,fVar8);
  iVar5 = round();
  (&DAT_00622034)[vertex_index * 0xc] = iVar5 << 8;
  iVar5 = round();
  (&DAT_00622038)[vertex_index * 0xc] = iVar5 << 8;
  (&DAT_0062203c)[vertex_index * 0xc] = (int)ROUND(fVar6) << 8;
  return;
}
