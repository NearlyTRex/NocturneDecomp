// Name: engine_mini3d.cpp_polyList_FUN_004edea0
// Address: 004edea0
// Address Range: [[004edea0, 004ee100]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_polyList_FUN_004edea0(float *vertices,int vertex_count,ushort *indices,int triangle_count)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_mini3d_cpp_polyList_FUN_004edea0(float *vertices,int vertex_count,ushort *indices,int triangle_count)

{
  float *pfVar1;
  int iVar2;
  float *unaff_EDI;
  uint clip_flags;
  CVector3f *pCVar3;
  
  _DAT_01d76c34 = _DAT_01d76c34 + vertex_count;
  _DAT_01ed3198 = _DAT_01ed3198 + triangle_count;
  if (_DAT_01d7a694 != 0) {
    engine_mini3d_cpp_polyListSurface_FUN_004f2490(vertices,vertex_count,indices,triangle_count);
    return;
  }
  engine_mini3d_cpp_updateTransform_FUN_004edcc0();
  engine_mini3d_cpp_updateRenderState_FUN_004f2430();
  if ((_DAT_02cf60b4 != (code *)0x0) && (_DAT_01c6cee8 != 0)) {
    (*_DAT_02cf60b4)(vertices,vertex_count,indices,triangle_count,_DAT_01c6e2b4);
    return;
  }
  engine_mini3d_cpp_allocVertexList_FUN_004ede40();
  if (10000 < vertex_count) {
    _DAT_01d71de0 = "..\\engine\\mini3d.cpp";
    _DAT_01d71de4 = 0x6c0;
    core_main_c_FUN_004e4330("CMini3D::polyList - Too many verticies : %d",vertex_count);
  }
  engine_mini3d_cpp_buildLightMatrix_FUN_004efe20();
  if ((_DAT_02cf60bc != (code *)0x0) && (_DAT_01c6cee8 != 0)) {
    iVar2 = 0;
    pfVar1 = _DAT_01d76f60;
    if (0 < vertex_count) {
      do {
        iVar2 = iVar2 + 1;
        engine_mini3d_cpp_convertVertexL_FUN_004f0270(pfVar1,vertices);
        vertices = vertices + 8;
        pfVar1 = pfVar1 + 9;
      } while (iVar2 < vertex_count);
    }
    (*_DAT_02cf60bc)(_DAT_01d76f60,vertex_count,indices,triangle_count,_DAT_01c6e2b4);
    return;
  }
  if ((_DAT_02cf60c0 != (code *)0x0) && (_DAT_01c6cee8 != 0)) {
    iVar2 = 0;
    pfVar1 = _DAT_01d76f60;
    if (0 < vertex_count) {
      do {
        iVar2 = iVar2 + 1;
        engine_mini3d_cpp_convertVertexD3DL_FUN_004f0170(pfVar1,vertices);
        vertices = vertices + 8;
        pfVar1 = pfVar1 + 8;
      } while (iVar2 < vertex_count);
    }
    (*_DAT_02cf60c0)(_DAT_01d76f60,vertex_count,indices,triangle_count,_DAT_01c6e2b4);
    return;
  }
  iVar2 = 0;
  clip_flags = 0;
  pfVar1 = _DAT_01d76f60;
  if (0 < vertex_count) {
    do {
      engine_mini3d_cpp_transformVertex_FUN_004eea30((CVector3f *)vertices,pfVar1);
      pfVar1[7] = ((CVector3f *)((int)vertices + 0x18))->x;
      pfVar1[8] = ((CVector3f *)((int)vertices + 0x18))->y;
      pCVar3 = (CVector3f *)vertices;
      engine_mini3d_cpp_lightVertex_FUN_004ef470(vertices,unaff_EDI);
      iVar2 = iVar2 + 1;
      vertices = &((CVector3f *)((int)vertices + 0x18))->z;
      unaff_EDI = pfVar1;
      engine_mini3d_cpp_computeVertexFog_FUN_004ef890(pfVar1);
      clip_flags = (uint)pCVar3 | (uint)pfVar1[4];
      pfVar1 = pfVar1 + 0x10;
    } while (iVar2 < vertex_count);
  }
  if (_DAT_01d7a698 == 0) {
    engine_mini3d_cpp_drawTransformedList_FUN_004f12b0
              (_DAT_01d76f60,vertex_count,indices,triangle_count,clip_flags);
    return;
  }
  engine_mini3d_cpp_userClipPolyList_FUN_004f2e30(_DAT_01d76f60,vertex_count,indices,triangle_count)
  ;
  return;
}
