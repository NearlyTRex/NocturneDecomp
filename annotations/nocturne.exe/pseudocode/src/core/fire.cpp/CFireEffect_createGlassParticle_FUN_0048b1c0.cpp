// Name: core_fire.cpp_CFireEffect_createGlassParticle_FUN_0048b1c0
// Address: 0048b1c0
// Address Range: [[0048b1c0, 0048b21d]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createGlassParticle_FUN_0048b1c0(CFireEffect *this_ptr,STriangleVertices *triangle_vertices,CVector3i *uv_u_per_vertex,CVector3i *uv_v_per_vertex,SMRGLTextureBasic *texture,int lifetime)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CFireEffect_createGlassParticle_FUN_0048b1c0(CFireEffect *this_ptr,STriangleVertices *triangle_vertices,CVector3i *uv_u_per_vertex,CVector3i *uv_v_per_vertex,SMRGLTextureBasic *texture,int lifetime)

{
  int iVar1;
  
  iVar1 = _DAT_01c4f088 * 0x9c;
  _DAT_01c4f088 = _DAT_01c4f088 + 1;
  if (0xff < _DAT_01c4f088) {
    _DAT_01c4f088 = 0;
  }
  core_fire_cpp_CGlassParticle_init_FUN_004850d0
            ((CGlassParticle *)(&DAT_01c4f08c + iVar1),triangle_vertices,uv_u_per_vertex,
             uv_v_per_vertex,texture,lifetime);
  return;
}
