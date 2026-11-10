// Name: core_fire.cpp_CFireEffect_createGlassParticle_FUN_0049d450
// Address: 0049d450
// Address Range: [[0049d450, 0049d4ad]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createGlassParticle_FUN_0049d450(CFireEffect *this_ptr,STriangleVertices *triangle_vertices,CVector3i *uv_u_per_vertex,CVector3i *uv_v_per_vertex,SMRGLTextureBasic *texture,int lifetime)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CFireEffect_createGlassParticle_FUN_0049d450(CFireEffect *this_ptr,STriangleVertices *triangle_vertices,CVector3i *uv_u_per_vertex,CVector3i *uv_v_per_vertex,SMRGLTextureBasic *texture,int lifetime)

{
  CGlassParticle *pCVar1;
  int iVar2;
  
  iVar2 = _DAT_01c86e60 + 1;
  pCVar1 = g_GlassParticlePool + _DAT_01c86e60;
  _DAT_01c86e60 = iVar2;
  if (0xff < iVar2) {
    _DAT_01c86e60 = 0;
  }
  core_fire_cpp_FUN_00496c60
            (pCVar1,triangle_vertices,uv_u_per_vertex,uv_v_per_vertex,texture,lifetime);
  return;
}
