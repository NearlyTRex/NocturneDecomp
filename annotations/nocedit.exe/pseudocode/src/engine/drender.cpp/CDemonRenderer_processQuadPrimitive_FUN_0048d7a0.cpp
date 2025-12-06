// Name: engine_drender.cpp_CDemonRenderer_processQuadPrimitive_FUN_0048d7a0
// Address: 0048d7a0
// Address Range: [[0048d7a0, 0048d89c]]
// Convention: __cdecl
// Signature: void engine_drender.cpp_CDemonRenderer_processQuadPrimitive_FUN_0048d7a0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * quad_primitive, int render_flags)

#include "nocturne.h"

void __cdecl
engine_drender_cpp_CDemonRenderer_processQuadPrimitive_FUN_0048d7a0
          (CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *quad_primitive,int render_flags)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  int in_stack_00000010;
  int in_stack_00000014;
  STrianglePackedIndices local_1c;
  ushort local_16;
  ushort local_14;
  ushort uStack_12;
  
  if ((this_ptr->plane_culling_enabled != 0) &&
     (iVar1 = engine_3d_c_isVisiblePlane_FUN_00403950(&quad_primitive->surface_normal), iVar1 == 0))
  {
    return;
  }
  local_1c.vertex_index_0 = (ushort)quad_primitive[2].base.type;
  local_1c.vertex_index_1 = (ushort)((uint)quad_primitive[1].base.count >> 8);
  local_1c.vertex_index_2 = (ushort)((uint)quad_primitive[1].surface_normal.C >> 8);
  local_16 = (ushort)((uint)quad_primitive[2].base.count >> 8);
  local_14 = (ushort)((uint)quad_primitive[1].surface_normal.A >> 8);
  uStack_12 = (ushort)((uint)quad_primitive[1].surface_normal.D >> 8);
  engine_drender_cpp_CDemonRenderer_captureFace_FUN_0048d8a0
            (this_ptr,(STrianglePackedIndices *)&stack0xffffffe0,in_stack_00000010);
  if ((quad_primitive->base).count < 4) {
    return;
  }
  local_1c.vertex_index_1 = (ushort)quad_primitive[2].base.type;
  local_1c.vertex_index_2 = (ushort)quad_primitive[2].surface_normal.B;
  local_14 = (ushort)((uint)quad_primitive[2].base.count >> 8);
  uStack_12 = (ushort)((uint)quad_primitive[2].surface_normal.C >> 8);
  engine_drender_cpp_CDemonRenderer_captureFace_FUN_0048d8a0(this_ptr,&local_1c,in_stack_00000014);
  return;
}
