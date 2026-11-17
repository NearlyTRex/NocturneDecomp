// Name: core_fire.cpp_CFireEffect_createGlassParticle_FUN_0049d450
// Address: 0049d450
// Address Range: [[0049d450, 0049d4ad]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createGlassParticle_FUN_0049d450(CFireEffect *this_ptr,STriangleVertices *triangle_vertices,CVector3i *uv_u_per_vertex,CVector3i *uv_v_per_vertex,SMRGLTextureBasic *texture,int lifetime)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_createGlassParticle_FUN_0049d450(CFireEffect *this_ptr,STriangleVertices *triangle_vertices,CVector3i *uv_u_per_vertex,CVector3i *uv_v_per_vertex,SMRGLTextureBasic *texture,int lifetime)

{
  CGlassParticle *this_ptr_00;
  int iVar1;
  
  iVar1 = g_GlassParticleAllocIndex + 1;
  this_ptr_00 = g_GlassParticlePool + g_GlassParticleAllocIndex;
  g_GlassParticleAllocIndex = iVar1;
  if (0xff < iVar1) {
    g_GlassParticleAllocIndex = 0;
  }
  core_fire_cpp_CGlassParticle_init_FUN_00496c60
            (this_ptr_00,triangle_vertices,uv_u_per_vertex,uv_v_per_vertex,texture,lifetime);
  return;
}
