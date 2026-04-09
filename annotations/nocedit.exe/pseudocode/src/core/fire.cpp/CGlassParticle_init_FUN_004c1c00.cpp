// Name: core_fire.cpp_CGlassParticle_init_FUN_004c1c00
// Address: 004c1c00
// Address Range: [[004c1c00, 004c1ee1]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CGlassParticle_init_FUN_004c1c00(CGlassParticle *this_ptr,STriangleVertices *triangle_vertices,CVector3f *uv_u_per_vertex,CVector3f *uv_v_per_vertex,SMRGLTextureBasic *texture,int lifetime)

#include "nocturne.h"

void __cdecl core_fire_cpp_CGlassParticle_init_FUN_004c1c00(CGlassParticle *this_ptr,STriangleVertices *triangle_vertices,CVector3f *uv_u_per_vertex,CVector3f *uv_v_per_vertex,SMRGLTextureBasic *texture,int lifetime)

{
  CVector3f *pCVar2;
  float fVar3;
  float fVar4;
  float fVar9;
  int iVar2;
  SMRGLTextureBasic *pSVar3;
  byte bVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  CVector3f local_80;
  float local_74;
  float local_70;
  float local_6c;
  CVector3f local_68;
  float local_5c;
  float local_58;
  float local_54;
  CVector3f local_50;
  float local_44;
  float local_40;
  float local_3c;
  float local_28;
  float local_1c;
  float local_10;
  CVector3f *pCVar1;
  
  bVar4 = 0;
  local_80.x = (triangle_vertices->vertices[0].x + triangle_vertices->vertices[1].x +
               triangle_vertices->vertices[2].x) / 3.0f;
  local_80.y = (triangle_vertices->vertices[0].y + triangle_vertices->vertices[1].y +
               triangle_vertices->vertices[2].y) * 0.3333333f;
  local_80.z = (triangle_vertices->vertices[0].z + triangle_vertices->vertices[1].z +
               triangle_vertices->vertices[2].z) * 0.3333333f;
  if (&local_50 != &local_80) {
    local_50.x = local_80.x;
    local_50.y = local_80.y;
    local_50.z = local_80.z;
  }
  (this_ptr->uv_u_per_vertex).x = uv_u_per_vertex->x;
  (this_ptr->uv_u_per_vertex).y = uv_u_per_vertex->y;
  (this_ptr->uv_u_per_vertex).z = uv_u_per_vertex->z;
  (this_ptr->uv_v_per_vertex).x = uv_v_per_vertex->x;
  (this_ptr->uv_v_per_vertex).y = uv_v_per_vertex->y;
  (this_ptr->uv_v_per_vertex).z = uv_v_per_vertex->z;
  fVar3 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(0.0,3.1415927);
  (this_ptr->euler_angles).z = 0.0;
  (this_ptr->euler_angles).x = fVar3;
  fVar3 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(0.0,6.2831855);
  (this_ptr->euler_angles).y = fVar3;
  local_5c = triangle_vertices->vertices[0].x - local_50.x;
  local_58 = triangle_vertices->vertices[0].y - local_50.y;
  local_54 = triangle_vertices->vertices[0].z - local_50.z;
  if (&this_ptr->triangle_delta != (STriangleVertices *)&local_5c) {
    (this_ptr->triangle_delta).vertices[0].x = local_5c;
    (this_ptr->triangle_delta).vertices[0].y = local_58;
    (this_ptr->triangle_delta).vertices[0].z = local_54;
  }
  local_a4 = triangle_vertices->vertices[1].x - local_50.x;
  local_a0 = triangle_vertices->vertices[1].y - local_50.y;
  pCVar1 = (this_ptr->triangle_delta).vertices + 1;
  local_9c = triangle_vertices->vertices[1].z - local_50.z;
  if (pCVar1 != (CVector3f *)&local_a4) {
    pCVar1->x = local_a4;
    (this_ptr->triangle_delta).vertices[1].y = local_a0;
    (this_ptr->triangle_delta).vertices[1].z = local_9c;
  }
  local_98 = triangle_vertices->vertices[2].x - local_50.x;
  local_94 = triangle_vertices->vertices[2].y - local_50.y;
  local_90 = triangle_vertices->vertices[2].z - local_50.z;
  pCVar2 = (this_ptr->triangle_delta).vertices + 2;
  if (pCVar2 != (CVector3f *)&local_98) {
    pCVar2->x = local_98;
    (this_ptr->triangle_delta).vertices[2].y = local_94;
    (this_ptr->triangle_delta).vertices[2].z = local_90;
  }
  pSVar3 = &this_ptr->texture;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    pSVar3 = (SMRGLTextureBasic *)((int)pSVar3 + (uint)bVar4 * -8 + 4);
    (pSVar3->base).type = (texture->base).type;
    texture = (SMRGLTextureBasic *)((int)texture + (uint)bVar4 * -8 + 4);
    pSVar3 = pSVar3;
  }
  this_ptr->lifetime = lifetime;
  local_8c = (this_ptr->triangle_delta).vertices[2].x - (this_ptr->triangle_delta).vertices[0].x;
  local_88 = (this_ptr->triangle_delta).vertices[2].y - (this_ptr->triangle_delta).vertices[0].y;
  local_84 = (this_ptr->triangle_delta).vertices[2].z - (this_ptr->triangle_delta).vertices[0].z;
  fVar3 = SQRT(local_84 * local_84 + local_8c * local_8c + local_88 * local_88) *
          (float)10;
  fVar4 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(0.7853982,1.5707964);
  fVar9 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(0.0,6.2831855);
  fVar5 = (float10)fcos((float10)fVar9);
  fVar6 = (float10)fcos((float10)fVar4);
  fVar7 = (float10)fsin((float10)fVar9);
  fVar8 = (float10)fsin((float10)fVar4);
  local_68.y = (float)(fVar8 * (float10)fVar3);
  local_68.x = (float)((float10)fVar3 * fVar5 * fVar6);
  local_68.z = (float)((float10)fVar3 * fVar7 * fVar6);
  core_particle_cpp_CParticle_setup_FUN_00545680(&this_ptr->base,&local_50,&local_68);
  return;
}
