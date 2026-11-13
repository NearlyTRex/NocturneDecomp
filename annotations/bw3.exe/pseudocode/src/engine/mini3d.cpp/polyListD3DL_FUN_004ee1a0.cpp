// Name: engine_mini3d.cpp_polyListD3DL_FUN_004ee1a0
// Address: 004ee1a0
// Address Range: [[004ee1a0, 004ee39a]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_polyListD3DL_FUN_004ee1a0(float *vertices,int vertex_count,ushort *indices,int triangle_count)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_mini3d_cpp_polyListD3DL_FUN_004ee1a0(float *vertices,int vertex_count,ushort *indices,int triangle_count)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *out;
  uint clip_flags;
  int unaff_ESI;
  int iVar5;
  int iVar6;
  
  _DAT_01ed3198 = _DAT_01ed3198 + triangle_count;
  _DAT_01d76c34 = _DAT_01d76c34 + vertex_count;
  if (_DAT_01d7a694 == 0) {
    engine_mini3d_cpp_updateTransform_FUN_004edcc0();
    engine_mini3d_cpp_updateRenderState_FUN_004f2430();
    if ((_DAT_02cf60c0 == (code *)0x0) || (_DAT_01c6cee8 == 0)) {
      engine_mini3d_cpp_allocVertexList_FUN_004ede40();
      if (10000 < vertex_count) {
        _DAT_01d71de0 = "..\\engine\\mini3d.cpp";
        _DAT_01d71de4 = 0x75f;
        core_main_c_FUN_004e4330("CMini3D::polyList - Too many verticies : %d",vertex_count);
      }
      clip_flags = 0;
      if (0 < vertex_count) {
        out = _DAT_01d76f60;
        iVar5 = 0;
        do {
          engine_mini3d_cpp_transformVertex_FUN_004eea30((CVector3f *)vertices,out);
          fVar1 = ((CVector3f *)((int)vertices + 0xc))->y;
          fVar2 = (float)((uint)fVar1 >> 8 & 0xff) * _DAT_005c80a5;
          fVar3 = (float)((uint)fVar1 >> 0x10 & 0xff) * _DAT_005c80a5;
          fVar4 = (float)((uint)fVar1 >> 0x18) * _DAT_005c80a5;
          iVar6 = iVar5 + 0x40;
          out[9] = (float)((uint)fVar1 & 0xff) * _DAT_005c80a5;
          out[10] = fVar2;
          out[0xb] = fVar3;
          out[0xc] = fVar4;
          out[7] = ((CVector3f *)((int)vertices + 0x18))->x;
          out[8] = ((CVector3f *)((int)vertices + 0x18))->y;
          engine_mini3d_cpp_computeVertexFog_FUN_004ef890(out);
          out = out + 0x10;
          clip_flags = clip_flags | *(uint *)(iVar5 + 0x10 + (int)_DAT_01d76f60);
          vertices = &((CVector3f *)((int)vertices + 0x18))->z;
          iVar5 = iVar6;
        } while (iVar6 < unaff_ESI);
      }
      if (_DAT_01d7a698 == 0) {
        engine_mini3d_cpp_drawTransformedList_FUN_004f12b0
                  (_DAT_01d76f60,vertex_count,indices,triangle_count,clip_flags);
        return;
      }
      engine_mini3d_cpp_userClipPolyList_FUN_004f2e30
                (_DAT_01d76f60,vertex_count,indices,triangle_count);
    }
    else {
      (*_DAT_02cf60c0)(vertices,vertex_count,indices,triangle_count,_DAT_01c6e2b4);
    }
  }
  else {
    engine_mini3d_cpp_polyListSurface_FUN_004f2490(vertices,vertex_count,indices,triangle_count);
  }
  return;
}
