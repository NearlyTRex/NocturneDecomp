// Name: engine_mini3d.cpp_polyListD3DL_FUN_004f3c40
// Address: 004f3c40
// Address Range: [[004f3c40, 004f3e5e]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_polyListD3DL_FUN_004f3c40(float *vertices,int vertex_count,ushort *indices,int triangle_count)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_mini3d_cpp_polyListD3DL_FUN_004f3c40(float *vertices,int vertex_count,ushort *indices,int triangle_count)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *out;
  uint clip_flags;
  int iVar5;
  int iVar6;
  int unaff_retaddr;
  ushort *in_stack_00000014;
  int in_stack_00000018;
  
  _DAT_01e61b58 = _DAT_01e61b58 + triangle_count;
  _DAT_01d09854 = _DAT_01d09854 + vertex_count;
  if (_DAT_01d0d2b4 == 0) {
    if (_DAT_01d09914 != 0) {
      in_stack_00000014 = engine_mini3d_cpp_mirrorFaces_FUN_004f34d0(indices,triangle_count);
    }
    engine_mini3d_cpp_updateTransform_FUN_004f3740();
    engine_mini3d_cpp_updateRenderState_FUN_004f7da0();
    if ((_DAT_0264bc94 == (code *)0x0) || (_DAT_01c37788 == 0)) {
      engine_mini3d_cpp_allocVertexList_FUN_004f38c0();
      if (10000 < triangle_count) {
        _DAT_01d046a0 = "..\\engine\\mini3d.cpp";
        _DAT_01d046a4 = 0x780;
        core_main_c_FUN_004e4500("CMini3D::polyList - Too many verticies : %d",triangle_count);
      }
      clip_flags = 0;
      if (0 < triangle_count) {
        out = _DAT_01d09b7c;
        iVar5 = 0;
        do {
          engine_mini3d_cpp_transformVertex_FUN_004f4510((CVector3f *)vertices,out);
          fVar1 = ((CVector3f *)((int)vertices + 0xc))->y;
          fVar2 = (float)((uint)fVar1 >> 8 & 0xff) * _DAT_005ddd5c;
          fVar3 = (float)((uint)fVar1 >> 0x10 & 0xff) * _DAT_005ddd5c;
          fVar4 = (float)((uint)fVar1 >> 0x18) * _DAT_005ddd5c;
          iVar6 = iVar5 + 0x40;
          out[9] = (float)((uint)fVar1 & 0xff) * _DAT_005ddd5c;
          out[10] = fVar2;
          out[0xb] = fVar3;
          out[0xc] = fVar4;
          out[7] = ((CVector3f *)((int)vertices + 0x18))->x;
          out[8] = ((CVector3f *)((int)vertices + 0x18))->y;
          engine_mini3d_cpp_computeVertexFog_FUN_004f5370(out);
          out = out + 0x10;
          clip_flags = clip_flags | *(uint *)(iVar5 + 0x10 + (int)_DAT_01d09b7c);
          vertices = &((CVector3f *)((int)vertices + 0x18))->z;
          iVar5 = iVar6;
        } while (iVar6 < unaff_retaddr);
      }
      if (_DAT_01d0d2b8 == 0) {
        engine_mini3d_cpp_drawTransformedList_FUN_004f6d00
                  (_DAT_01d09b7c,triangle_count,in_stack_00000014,in_stack_00000018,clip_flags);
        return;
      }
      engine_mini3d_cpp_userClipPolyList_FUN_004f8750
                (_DAT_01d09b7c,triangle_count,in_stack_00000014,in_stack_00000018);
    }
    else {
      (*_DAT_0264bc94)(vertices,triangle_count,in_stack_00000014,in_stack_00000018,_DAT_01c38b54);
    }
  }
  else {
    engine_mini3d_cpp_polyListSurface_FUN_004f7e00(vertices,vertex_count,indices,triangle_count);
  }
  return;
}
