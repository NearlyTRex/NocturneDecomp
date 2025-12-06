// Name: core_fire.cpp_CFireEffect_createGlassParticle_FUN_004c7d00
// Address: 004c7d00
// Address Range: [[004c7d00, 004c7d5d]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CFireEffect_createGlassParticle_FUN_004c7d00(CFireEffect * this_ptr, STriangleVertices * triangle_vertices, CVector3f * uv_u_per_vertex, CVector3f * uv_v_per_vertex, SMRGLTextureBasic * texture, int lifetime)

#include "nocturne.h"

void __cdecl
core_fire_cpp_CFireEffect_createGlassParticle_FUN_004c7d00
          (CFireEffect *this_ptr,STriangleVertices *triangle_vertices,CVector3f *uv_u_per_vertex,
          CVector3f *uv_v_per_vertex,SMRGLTextureBasic *texture,int lifetime)

{
  CGlassParticle *this_ptr_00;
  int iVar1;
  
  iVar1 = g_GlassParticleNextIndex + 1;
  this_ptr_00 = g_GlassParticlePool + g_GlassParticleNextIndex;
  g_GlassParticleNextIndex = iVar1;
  if (0xff < iVar1) {
    g_GlassParticleNextIndex = 0;
  }
  core_fire_cpp_CGlassParticle_init_FUN_004c1c00
            (this_ptr_00,triangle_vertices,uv_u_per_vertex,uv_v_per_vertex,texture,lifetime);
  return;
}
