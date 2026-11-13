// Name: engine_mini3d.cpp_polyListD3DL_FUN_005129d0
// Address: 005129d0
// Address Range: [[005129d0, 00512bca]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_polyListD3DL_FUN_005129d0(float *vertices,int vertex_count,ushort *indices,int triangle_count)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_mini3d_cpp_polyListD3DL_FUN_005129d0(float *vertices,int vertex_count,ushort *indices,int triangle_count)

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
  
  _DAT_01e7dac8 = _DAT_01e7dac8 + triangle_count;
  _DAT_01d224b4 = _DAT_01d224b4 + vertex_count;
  if (_DAT_01d25f14 == 0) {
    engine_mini3d_cpp_updateTransform_FUN_005124f0();
    engine_mini3d_cpp_updateRenderState_FUN_00516c60();
    if ((_DAT_02c83464 == (code *)0x0) || (_DAT_01c50948 == 0)) {
      engine_mini3d_cpp_allocVertexList_FUN_00512670();
      if (10000 < vertex_count) {
        _DAT_01d1d400 = "..\\engine\\mini3d.cpp";
        _DAT_01d1d404 = 0x75f;
        core_main_c_FUN_005030e0("CMini3D::polyList - Too many verticies : %d",vertex_count);
      }
      clip_flags = 0;
      if (0 < vertex_count) {
        out = _DAT_01d227e0;
        iVar5 = 0;
        do {
          engine_mini3d_cpp_transformVertex_FUN_00513260((CVector3f *)vertices,out);
          fVar1 = ((CVector3f *)((int)vertices + 0xc))->y;
          fVar2 = (float)((uint)fVar1 >> 8 & 0xff) * _DAT_005e8da3;
          fVar3 = (float)((uint)fVar1 >> 0x10 & 0xff) * _DAT_005e8da3;
          fVar4 = (float)((uint)fVar1 >> 0x18) * _DAT_005e8da3;
          iVar6 = iVar5 + 0x40;
          out[9] = (float)((uint)fVar1 & 0xff) * _DAT_005e8da3;
          out[10] = fVar2;
          out[0xb] = fVar3;
          out[0xc] = fVar4;
          out[7] = ((CVector3f *)((int)vertices + 0x18))->x;
          out[8] = ((CVector3f *)((int)vertices + 0x18))->y;
          engine_mini3d_cpp_computeVertexFog_FUN_005140c0(out);
          out = out + 0x10;
          clip_flags = clip_flags | *(uint *)(iVar5 + 0x10 + (int)_DAT_01d227e0);
          vertices = &((CVector3f *)((int)vertices + 0x18))->z;
          iVar5 = iVar6;
        } while (iVar6 < unaff_ESI);
      }
      if (_DAT_01d25f18 == 0) {
        engine_mini3d_cpp_drawTransformedList_FUN_00515ae0
                  (_DAT_01d227e0,vertex_count,indices,triangle_count,clip_flags);
        return;
      }
      engine_mini3d_cpp_userClipPolyList_FUN_00517660
                (_DAT_01d227e0,vertex_count,indices,triangle_count);
    }
    else {
      (*_DAT_02c83464)(vertices,vertex_count,indices,triangle_count,_DAT_01c51d14);
    }
  }
  else {
    engine_mini3d_cpp_polyListSurface_FUN_00516cc0(vertices,vertex_count,indices,triangle_count);
  }
  return;
}
