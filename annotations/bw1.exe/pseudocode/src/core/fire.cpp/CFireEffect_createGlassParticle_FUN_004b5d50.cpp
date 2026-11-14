// Name: core_fire.cpp_CFireEffect_createGlassParticle_FUN_004b5d50
// Address: 004b5d50
// Address Range: [[004b5d50, 004b5dad]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createGlassParticle_FUN_004b5d50(CFireEffect *this_ptr,STriangleVertices *triangle_vertices,CVector3i *uv_u_per_vertex,CVector3i *uv_v_per_vertex,SMRGLTextureBasic *texture,int lifetime)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CFireEffect_createGlassParticle_FUN_004b5d50(CFireEffect *this_ptr,STriangleVertices *triangle_vertices,CVector3i *uv_u_per_vertex,CVector3i *uv_v_per_vertex,SMRGLTextureBasic *texture,int lifetime)

{
  CGlassParticle *this_ptr_00;
  int iVar1;
  
  iVar1 = _DAT_01c9f8ec + 1;
  this_ptr_00 = g_GlassParticlePool + _DAT_01c9f8ec;
  _DAT_01c9f8ec = iVar1;
  if (0xff < iVar1) {
    _DAT_01c9f8ec = 0;
  }
  core_fire_cpp_CGlassParticle_init_FUN_004af600
            (this_ptr_00,triangle_vertices,uv_u_per_vertex,uv_v_per_vertex,texture,lifetime);
  return;
}
