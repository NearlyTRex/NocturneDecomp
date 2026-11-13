// Name: engine_mini3d.cpp_polyList_FUN_004f3920
// Address: 004f3920
// Address Range: [[004f3920, 004f3ba0]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_polyList_FUN_004f3920(float *vertices,int vertex_count,ushort *indices,int triangle_count)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_mini3d_cpp_polyList_FUN_004f3920(float *vertices,int vertex_count,ushort *indices,int triangle_count)

{
  float *unaff_EBX;
  float *pfVar1;
  int iVar2;
  ushort *in_stack_00000014;
  int in_stack_00000018;
  uint clip_flags;
  CVector3f *pCVar3;
  
  _DAT_01d09854 = _DAT_01d09854 + vertex_count;
  _DAT_01e61b58 = _DAT_01e61b58 + triangle_count;
  if (_DAT_01d0d2b4 != 0) {
    engine_mini3d_cpp_polyListSurface_FUN_004f7e00(vertices,vertex_count,indices,triangle_count);
    return;
  }
  if (_DAT_01d09914 != 0) {
    in_stack_00000014 = engine_mini3d_cpp_mirrorFaces_FUN_004f34d0(indices,triangle_count);
  }
  engine_mini3d_cpp_updateTransform_FUN_004f3740();
  engine_mini3d_cpp_updateRenderState_FUN_004f7da0();
  if ((_DAT_0264bc88 != (code *)0x0) && (_DAT_01c37788 != 0)) {
    (*_DAT_0264bc88)(vertices,vertex_count,in_stack_00000014,in_stack_00000018,_DAT_01c38b54);
    return;
  }
  engine_mini3d_cpp_allocVertexList_FUN_004f38c0();
  if (10000 < vertex_count) {
    _DAT_01d046a0 = "..\\engine\\mini3d.cpp";
    _DAT_01d046a4 = 0x6db;
    core_main_c_FUN_004e4500("CMini3D::polyList - Too many verticies : %d",vertex_count);
  }
  engine_mini3d_cpp_buildLightMatrix_FUN_004f5900();
  if ((_DAT_0264bc90 != (code *)0x0) && (_DAT_01c37788 != 0)) {
    iVar2 = 0;
    pfVar1 = _DAT_01d09b7c;
    if (0 < vertex_count) {
      do {
        iVar2 = iVar2 + 1;
        engine_mini3d_cpp_convertVertexL_FUN_004f5d50(pfVar1,vertices);
        vertices = vertices + 8;
        pfVar1 = pfVar1 + 9;
      } while (iVar2 < vertex_count);
    }
    (*_DAT_0264bc90)(_DAT_01d09b7c,vertex_count,in_stack_00000014,in_stack_00000018,_DAT_01c38b54);
    return;
  }
  if ((_DAT_0264bc94 != (code *)0x0) && (_DAT_01c37788 != 0)) {
    iVar2 = 0;
    pfVar1 = _DAT_01d09b7c;
    if (0 < vertex_count) {
      do {
        iVar2 = iVar2 + 1;
        engine_mini3d_cpp_convertVertexD3DL_FUN_004f5c50(pfVar1,vertices);
        vertices = vertices + 8;
        pfVar1 = pfVar1 + 8;
      } while (iVar2 < vertex_count);
    }
    (*_DAT_0264bc94)(_DAT_01d09b7c,vertex_count,in_stack_00000014,in_stack_00000018,_DAT_01c38b54);
    return;
  }
  iVar2 = 0;
  clip_flags = 0;
  pfVar1 = _DAT_01d09b7c;
  if (0 < vertex_count) {
    do {
      engine_mini3d_cpp_transformVertex_FUN_004f4510((CVector3f *)vertices,pfVar1);
      pfVar1[7] = ((CVector3f *)((int)vertices + 0x18))->x;
      pfVar1[8] = ((CVector3f *)((int)vertices + 0x18))->y;
      pCVar3 = (CVector3f *)vertices;
      engine_mini3d_cpp_lightVertex_FUN_004f4f50(vertices,unaff_EBX);
      iVar2 = iVar2 + 1;
      unaff_EBX = pfVar1;
      engine_mini3d_cpp_computeVertexFog_FUN_004f5370(pfVar1);
      vertices = &((CVector3f *)((int)vertices + 0x18))->z;
      clip_flags = (uint)pCVar3 | (uint)pfVar1[4];
      pfVar1 = pfVar1 + 0x10;
    } while (iVar2 < vertex_count);
  }
  if (_DAT_01d0d2b8 == 0) {
    engine_mini3d_cpp_drawTransformedList_FUN_004f6d00
              (_DAT_01d09b7c,vertex_count,in_stack_00000014,in_stack_00000018,clip_flags);
    return;
  }
  engine_mini3d_cpp_userClipPolyList_FUN_004f8750
            (_DAT_01d09b7c,vertex_count,in_stack_00000014,in_stack_00000018);
  return;
}
