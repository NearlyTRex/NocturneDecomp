// Name: engine_mini3d.cpp_polyListD3DTL_FUN_004ee5b0
// Address: 004ee5b0
// Address Range: [[004ee5b0, 004ee92d]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_polyListD3DTL_FUN_004ee5b0(float *vertices,int vertex_count,ushort *indices,int triangle_count)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_mini3d_cpp_polyListD3DTL_FUN_004ee5b0(float *vertices,int vertex_count,ushort *indices,int triangle_count)

{
  float fVar1;
  char cVar2;
  ushort uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  float *pfVar8;
  int iVar9;
  uint clip_flags;
  float *pfVar10;
  byte bVar11;
  float local_124 [48];
  float local_64 [16];
  uint local_24;
  uint uStack_20;
  uint local_1c;
  uint uStack_18;
  uint local_14;
  
  bVar11 = 0;
  _DAT_01ed3198 = _DAT_01ed3198 + triangle_count;
  _DAT_01d76c34 = _DAT_01d76c34 + vertex_count;
  if (_DAT_01d7a694 == 0) {
    engine_mini3d_cpp_updateTransform_FUN_004edcc0();
    engine_mini3d_cpp_updateRenderState_FUN_004f2430();
    if ((_DAT_02cf60c8 == (code *)0x0) || (_DAT_01c6cee8 == 0)) {
      engine_mini3d_cpp_allocVertexList_FUN_004ede40();
      if (10000 < vertex_count) {
        _DAT_01d71de0 = "..\\engine\\mini3d.cpp";
        _DAT_01d71de4 = 0x844;
        core_main_c_FUN_004e4330("CMini3D::polyList - Too many verticies : %d",vertex_count);
      }
      clip_flags = 0;
      iVar9 = 0;
      pfVar8 = _DAT_01d76f60;
      if (0 < vertex_count) {
        do {
          fVar1 = _DAT_01d76cc4;
          *pfVar8 = ((*vertices * _DAT_01d76cc4 - _DAT_01d76c64) * vertices[2]) / _DAT_01d76c5c;
          pfVar8[1] = ((fVar1 * vertices[1] - _DAT_01d76c68) * vertices[2]) / _DAT_01d76c60;
          pfVar8[2] = vertices[2];
          fVar1 = vertices[3];
          pfVar8[4] = 0.0;
          pfVar8[3] = fVar1;
          if (pfVar8[2] < *pfVar8) {
            *(byte *)(pfVar8 + 4) = *(byte *)(pfVar8 + 4) | 1;
          }
          if (*pfVar8 < -pfVar8[2]) {
            *(byte *)(pfVar8 + 4) = *(byte *)(pfVar8 + 4) | 2;
          }
          if (pfVar8[2] < pfVar8[1]) {
            *(byte *)(pfVar8 + 4) = *(byte *)(pfVar8 + 4) | 4;
          }
          if (pfVar8[1] < -pfVar8[2]) {
            *(byte *)(pfVar8 + 4) = *(byte *)(pfVar8 + 4) | 8;
          }
          if (pfVar8[2] <= 0.0) {
            *(byte *)(pfVar8 + 4) = *(byte *)(pfVar8 + 4) | 0x10;
          }
          fVar1 = _DAT_01d76cc4;
          pfVar8[5] = *vertices * _DAT_01d76cc4;
          clip_flags = clip_flags | (uint)pfVar8[4];
          pfVar8[6] = fVar1 * vertices[1];
          pfVar8[7] = vertices[6];
          pfVar8[8] = vertices[7];
          fVar1 = vertices[4];
          fVar6 = (float)((uint)fVar1 & 0xff) * _DAT_005c817d;
          fVar4 = (float)((uint)fVar1 >> 8 & 0xff) * _DAT_005c817d;
          uStack_20 = 0;
          uStack_18 = 0;
          local_1c = (uint)fVar1 >> 0x18;
          local_24 = (uint)fVar1 >> 0x10 & 0xff;
          fVar1 = (float)local_24 * _DAT_005c817d;
          fVar5 = (float)local_1c * _DAT_005c817d;
          iVar9 = iVar9 + 1;
          vertices = vertices + 8;
          pfVar8[0xd] = 0.0;
          pfVar8[9] = fVar6;
          pfVar8[10] = fVar4;
          pfVar8[0xb] = fVar1;
          pfVar8[0xc] = fVar5;
          pfVar8 = pfVar8 + 0x10;
        } while (iVar9 < vertex_count);
      }
      if (((_DAT_01c6cee8 != 0) || (vertex_count != 4)) || (triangle_count != 2)) {
        engine_mini3d_cpp_drawTransformedList_FUN_004f12b0
                  (_DAT_01d76f60,vertex_count,indices,triangle_count,clip_flags);
        return;
      }
      local_14 = _DAT_01d7f57c;
      iVar9 = 0;
      do {
        uVar3 = *indices;
        pfVar8 = _DAT_01d76f60 + (uint)uVar3 * 0x10;
        pfVar10 = (float *)((int)local_124 + iVar9);
        for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
          *pfVar10 = *pfVar8;
          pfVar8 = pfVar8 + (uint)bVar11 * -2 + 1;
          pfVar10 = pfVar10 + (uint)bVar11 * -2 + 1;
        }
        iVar9 = iVar9 + 0x40;
        indices = indices + 1;
        *(byte *)((int)&local_14 + (uint)uVar3) = 1;
      } while (iVar9 != 0xc0);
      iVar9 = 0;
      cVar2 = (char)local_14;
      while (cVar2 != '\0') {
        if (3 < iVar9 + 1) goto LAB_004ee87c;
        cVar2 = *(char *)((int)&local_14 + iVar9 + 1);
        iVar9 = iVar9 + 1;
      }
      pfVar8 = _DAT_01d76f60 + iVar9 * 0x10;
      pfVar10 = local_64;
      for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
        *pfVar10 = *pfVar8;
        pfVar8 = pfVar8 + (uint)bVar11 * -2 + 1;
        pfVar10 = pfVar10 + (uint)bVar11 * -2 + 1;
      }
LAB_004ee87c:
      if (clip_flags != 0) {
        engine_mini3d_cpp_clipAndFillPolygon_FUN_004f1190(local_124,4);
        return;
      }
      engine_mini3d_cpp_fillPolygon_FUN_004f2090(local_124,4);
    }
    else {
      (*_DAT_02cf60c8)(vertices,vertex_count,indices,triangle_count,_DAT_01c6e2b4);
    }
  }
  else {
    engine_mini3d_cpp_polyListSurface_FUN_004f2490(vertices,vertex_count,indices,triangle_count);
  }
  return;
}
