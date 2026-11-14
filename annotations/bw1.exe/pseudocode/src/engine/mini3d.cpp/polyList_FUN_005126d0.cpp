// Name: engine_mini3d.cpp_polyList_FUN_005126d0
// Address: 005126d0
// Address Range: [[005126d0, 00512930]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_polyList_FUN_005126d0(float *vertices,int vertex_count,ushort *indices,int triangle_count)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_mini3d_cpp_polyList_FUN_005126d0(float *vertices,int vertex_count,ushort *indices,int triangle_count)

{
  float *pfVar1;
  int iVar2;
  float *unaff_EDI;
  uint clip_flags;
  CVector3f *pCVar3;
  
  _DAT_01d224b4 = _DAT_01d224b4 + vertex_count;
  _DAT_01e7dac8 = _DAT_01e7dac8 + triangle_count;
  if (_DAT_01d25f14 != 0) {
    engine_mini3d_cpp_polyListSurface_FUN_00516cc0(vertices,vertex_count,indices,triangle_count);
    return;
  }
  engine_mini3d_cpp_updateTransform_FUN_005124f0();
  engine_mini3d_cpp_updateRenderState_FUN_00516c60();
  if ((_DAT_02c83458 != (code *)0x0) && (_DAT_01c50948 != 0)) {
    (*_DAT_02c83458)(vertices,vertex_count,indices,triangle_count,_DAT_01c51d14);
    return;
  }
  engine_mini3d_cpp_allocVertexList_FUN_00512670();
  if (10000 < vertex_count) {
    _DAT_01d1d400 = "..\\engine\\mini3d.cpp";
    _DAT_01d1d404 = 0x6c0;
    core_main_c_FUN_005030e0("CMini3D::polyList - Too many verticies : %d",vertex_count);
  }
  engine_mini3d_cpp_buildLightMatrix_FUN_00514650();
  if ((_DAT_02c83460 != (code *)0x0) && (_DAT_01c50948 != 0)) {
    iVar2 = 0;
    pfVar1 = _DAT_01d227e0;
    if (0 < vertex_count) {
      do {
        iVar2 = iVar2 + 1;
        engine_mini3d_cpp_convertVertexL_FUN_00514aa0(pfVar1,vertices);
        vertices = vertices + 8;
        pfVar1 = pfVar1 + 9;
      } while (iVar2 < vertex_count);
    }
    (*_DAT_02c83460)(_DAT_01d227e0,vertex_count,indices,triangle_count,_DAT_01c51d14);
    return;
  }
  if ((_DAT_02c83464 != (code *)0x0) && (_DAT_01c50948 != 0)) {
    iVar2 = 0;
    pfVar1 = _DAT_01d227e0;
    if (0 < vertex_count) {
      do {
        iVar2 = iVar2 + 1;
        engine_mini3d_cpp_convertVertexD3DL_FUN_005149a0(pfVar1,vertices);
        vertices = vertices + 8;
        pfVar1 = pfVar1 + 8;
      } while (iVar2 < vertex_count);
    }
    (*_DAT_02c83464)(_DAT_01d227e0,vertex_count,indices,triangle_count,_DAT_01c51d14);
    return;
  }
  iVar2 = 0;
  clip_flags = 0;
  pfVar1 = _DAT_01d227e0;
  if (0 < vertex_count) {
    do {
      engine_mini3d_cpp_transformVertex_FUN_00513260((CVector3f *)vertices,pfVar1);
      pfVar1[7] = ((CVector3f *)((int)vertices + 0x18))->x;
      pfVar1[8] = ((CVector3f *)((int)vertices + 0x18))->y;
      pCVar3 = (CVector3f *)vertices;
      engine_mini3d_cpp_lightVertex_FUN_00513ca0(vertices,unaff_EDI);
      iVar2 = iVar2 + 1;
      vertices = &((CVector3f *)((int)vertices + 0x18))->z;
      unaff_EDI = pfVar1;
      engine_mini3d_cpp_computeVertexFog_FUN_005140c0(pfVar1);
      clip_flags = (uint)pCVar3 | (uint)pfVar1[4];
      pfVar1 = pfVar1 + 0x10;
    } while (iVar2 < vertex_count);
  }
  if (_DAT_01d25f18 == 0) {
    engine_mini3d_cpp_drawTransformedList_FUN_00515ae0
              (_DAT_01d227e0,vertex_count,indices,triangle_count,clip_flags);
    return;
  }
  engine_mini3d_cpp_userClipPolyList_FUN_00517660(_DAT_01d227e0,vertex_count,indices,triangle_count)
  ;
  return;
}
