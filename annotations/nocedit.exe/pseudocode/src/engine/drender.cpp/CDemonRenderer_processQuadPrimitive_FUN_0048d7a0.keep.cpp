// Name: engine_drender.cpp_CDemonRenderer_processQuadPrimitive_FUN_0048d7a0
// Address: 0048d7a0
// MANUAL RECONSTRUCTION
// Address Range: [[0048d7a0, 0048d89c]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_processQuadPrimitive_FUN_0048d7a0(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *quad_primitive,int render_flags)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_processQuadPrimitive_FUN_0048d7a0(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *quad_primitive,int render_flags)

{
  int iVar1;
  SInputFace local_24;
  SMRGLPrimitiveQuad *quad;

  if ((this_ptr->plane_culling_enabled != 0) &&
     (iVar1 = engine_3d_c_isVisiblePlane_FUN_00403950(&quad_primitive->surface_normal), iVar1 == 0))
  {
    return;
  }
  quad = (SMRGLPrimitiveQuad *)quad_primitive;
  local_24.vertex_indices.vertex_index_0 = (ushort)quad->vertices[0].vertex_index;
  local_24.vertex_indices.vertex_index_1 = (ushort)quad->vertices[1].vertex_index;
  local_24.vertex_indices.vertex_index_2 = (ushort)quad->vertices[2].vertex_index;
  local_24.u_coord_0 = (ushort)(quad->vertices[0].texture_u >> 8);
  local_24.u_coord_1 = (ushort)(quad->vertices[1].texture_u >> 8);
  local_24.u_coord_2 = (ushort)(quad->vertices[2].texture_u >> 8);
  local_24.v_coord_0 = (ushort)(quad->vertices[0].texture_v >> 8);
  local_24.v_coord_1 = (ushort)(quad->vertices[1].texture_v >> 8);
  local_24.v_coord_2 = (ushort)(quad->vertices[2].texture_v >> 8);
  engine_drender_cpp_CDemonRenderer_captureFace_FUN_0048d8a0(this_ptr,&local_24.vertex_indices,render_flags);
  if ((quad_primitive->base).count < 4) {
    return;
  }
  local_24.vertex_indices.vertex_index_1 = (ushort)quad->vertices[2].vertex_index;
  local_24.vertex_indices.vertex_index_2 = (ushort)quad->vertices[3].vertex_index;
  local_24.u_coord_1 = (ushort)(quad->vertices[2].texture_u >> 8);
  local_24.u_coord_2 = (ushort)(quad->vertices[3].texture_u >> 8);
  local_24.v_coord_1 = (ushort)(quad->vertices[2].texture_v >> 8);
  local_24.v_coord_2 = (ushort)(quad->vertices[3].texture_v >> 8);
  engine_drender_cpp_CDemonRenderer_captureFace_FUN_0048d8a0(this_ptr,&local_24.vertex_indices,render_flags);
  return;
}
