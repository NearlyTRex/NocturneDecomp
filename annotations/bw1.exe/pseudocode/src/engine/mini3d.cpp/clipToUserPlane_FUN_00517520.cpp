// Name: engine_mini3d.cpp_clipToUserPlane_FUN_00517520
// Address: 00517520
// Address Range: [[00517520, 0051765a]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_clipToUserPlane_FUN_00517520(float *vertices,int vertex_count,float *out,int *out_count)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_mini3d_cpp_clipToUserPlane_FUN_00517520(float *vertices,int vertex_count,float *out,int *out_count)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  float *from;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  byte bVar7;
  int iStack_18;
  
  bVar7 = 0;
  *out_count = 0;
  iStack_18 = 0;
  from = vertices;
  if (0 < vertex_count) {
    do {
      uVar2 = iStack_18 + 1;
      if (uVar2 == vertex_count) {
        uVar2 = uVar2 ^ vertex_count;
      }
      pfVar4 = vertices + uVar2 * 9;
      bVar1 = 0.0 < _DAT_01d25f24 * from[2] + _DAT_01d25f1c * *from + _DAT_01d25f20 * from[1] +
                    _DAT_01d25f28;
      if (0.0 < _DAT_01d25f24 * pfVar4[2] + _DAT_01d25f1c * *pfVar4 + _DAT_01d25f20 * pfVar4[1] +
                _DAT_01d25f28) {
        bVar1 = bVar1 | 2;
      }
      switch(bVar1) {
      case 0:
        pfVar4 = from;
        pfVar5 = out + *out_count * 9;
        for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
          *pfVar5 = *pfVar4;
          pfVar4 = pfVar4 + (uint)bVar7 * -2 + 1;
          pfVar5 = pfVar5 + (uint)bVar7 * -2 + 1;
        }
        *out_count = *out_count + 1;
        break;
      case 1:
        engine_mini3d_cpp_intersectUserClipPlane_FUN_005173e0(pfVar4,from,out + *out_count * 9);
        *out_count = *out_count + 1;
        break;
      case 2:
        pfVar5 = from;
        pfVar6 = out + *out_count * 9;
        for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
          *pfVar6 = *pfVar5;
          pfVar5 = pfVar5 + (uint)bVar7 * -2 + 1;
          pfVar6 = pfVar6 + (uint)bVar7 * -2 + 1;
        }
        iVar3 = *out_count;
        *out_count = iVar3 + 1;
        engine_mini3d_cpp_intersectUserClipPlane_FUN_005173e0(from,pfVar4,out + (iVar3 + 1) * 9);
        *out_count = *out_count + 1;
      }
      iStack_18 = iStack_18 + 1;
      from = from + 9;
    } while (iStack_18 < vertex_count);
  }
  return;
}
