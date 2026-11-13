// Name: engine_mini3d.cpp_polyListSurface_FUN_004f7e00
// Address: 004f7e00
// Address Range: [[004f7e00, 004f7f73]]
// Convention: __cdecl
// Signature: int __cdecl engine_mini3d_cpp_polyListSurface_FUN_004f7e00(float *vertices,int vertex_count,ushort *indices,int triangle_count)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_mini3d_cpp_polyListSurface_FUN_004f7e00(float *vertices,int vertex_count,ushort *indices,int triangle_count)

{
  float fVar1;
  float extraout_EAX;
  int extraout_EAX_00;
  float *pfVar2;
  int iVar3;
  uint local_14;
  
  _DAT_01e61b58 = _DAT_01e61b58 + triangle_count;
  _DAT_01d09854 = _DAT_01d09854 + vertex_count;
  engine_mini3d_cpp_allocVertexList_FUN_004f38c0();
  if (10000 < vertex_count) {
    _DAT_01d046a0 = "..\\engine\\mini3d.cpp";
    _DAT_01d046a4 = 0x12e4;
    core_main_c_FUN_004e4500("CMini3D::polyList - Too many verticies : %d",vertex_count);
  }
  iVar3 = 0;
  local_14 = 0;
  fVar1 = _DAT_01d0d2b4;
  if (_DAT_01d0d2b4 == 1.4013e-45) {
    pfVar2 = _DAT_01d09b80;
    if (0 < vertex_count) {
      do {
        iVar3 = iVar3 + 1;
        engine_mini3d_cpp_transformVertexSurface_FUN_004f4620((CVector3f *)vertices,pfVar2);
        fVar1 = pfVar2[4];
        pfVar2 = pfVar2 + 8;
        local_14 = local_14 | (uint)fVar1;
        vertices = &((CVector3f *)((int)vertices + 0x18))->z;
      } while (iVar3 < vertex_count);
    }
  }
  else {
    pfVar2 = _DAT_01d09b80;
    if (0 < vertex_count) {
      do {
        iVar3 = iVar3 + 1;
        engine_mini3d_cpp_transformVertexOrtho_FUN_004f4730((CVector3f *)vertices,pfVar2);
        pfVar2 = pfVar2 + 8;
        vertices = &((CVector3f *)((int)vertices + 0x18))->z;
        fVar1 = extraout_EAX;
      } while (iVar3 < vertex_count);
    }
  }
  if (local_14 == 0) {
    iVar3 = 0;
    if (0 < triangle_count) {
      do {
        engine_mini3d_cpp_fillSurfaceTriangle_FUN_004f8110
                  (_DAT_01d09b80 + (uint)*indices * 8,_DAT_01d09b80 + (uint)indices[1] * 8,
                   _DAT_01d09b80 + (uint)indices[2] * 8);
        iVar3 = iVar3 + 1;
        indices = indices + 3;
        fVar1 = (float)triangle_count;
      } while (iVar3 < triangle_count);
    }
  }
  else {
    iVar3 = 0;
    if (0 < triangle_count) {
      do {
        engine_mini3d_cpp_drawSurfaceTriangle_FUN_004f8330
                  (_DAT_01d09b80 + (uint)*indices * 8,_DAT_01d09b80 + (uint)indices[1] * 8,
                   _DAT_01d09b80 + (uint)indices[2] * 8);
        iVar3 = iVar3 + 1;
        indices = indices + 3;
      } while (iVar3 < triangle_count);
      return extraout_EAX_00;
    }
  }
  return (int)fVar1;
}
