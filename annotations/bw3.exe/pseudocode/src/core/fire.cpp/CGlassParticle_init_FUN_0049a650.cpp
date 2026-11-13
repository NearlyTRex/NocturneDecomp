// Name: core_fire.cpp_CGlassParticle_init_FUN_0049a650
// Address: 0049a650
// Address Range: [[0049a650, 0049a9e7]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CGlassParticle_init_FUN_0049a650(CGlassParticle *this_ptr,STriangleVertices *triangle_vertices,CVector3i *uv_u_per_vertex,CVector3i *uv_v_per_vertex,SMRGLTextureBasic *texture,int lifetime)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CGlassParticle_init_FUN_0049a650(CGlassParticle *this_ptr,STriangleVertices *triangle_vertices,CVector3i *uv_u_per_vertex,CVector3i *uv_v_per_vertex,SMRGLTextureBasic *texture,int lifetime)

{
  CVector3f *pCVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  SMRGLTextureModel *pSVar6;
  byte bVar7;
  float afStackY_10a0 [1015];
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  CVector3f local_70;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48 [2];
  CVector3f local_40;
  float local_34;
  float local_30 [4];
  float local_20;
  float local_18;
  float local_14;
  
  bVar7 = 0;
  local_88 = triangle_vertices->vertices[0].x + triangle_vertices->vertices[1].x;
  local_84 = triangle_vertices->vertices[0].y + triangle_vertices->vertices[1].y;
  local_80 = triangle_vertices->vertices[0].z + triangle_vertices->vertices[1].z;
  local_ac = local_88 + triangle_vertices->vertices[2].x;
  local_a8 = local_84 + triangle_vertices->vertices[2].y;
  local_a4 = local_80 + triangle_vertices->vertices[2].z;
  local_a0 = local_ac * _DAT_005c05d0;
  local_9c = local_a8 * _DAT_005c05d0;
  local_98 = local_a4 * _DAT_005c05d0;
  if (&local_70 != (CVector3f *)(local_48 + 2)) {
    local_70.x = local_a0;
    local_70.y = local_9c;
    local_70.z = local_98;
  }
  (this_ptr->uv_u_per_vertex).x = uv_u_per_vertex->x;
  (this_ptr->uv_u_per_vertex).y = uv_u_per_vertex->y;
  (this_ptr->uv_u_per_vertex).z = uv_u_per_vertex->z;
  (this_ptr->uv_v_per_vertex).x = uv_v_per_vertex->x;
  (this_ptr->uv_v_per_vertex).y = uv_v_per_vertex->y;
  (this_ptr->uv_v_per_vertex).z = uv_v_per_vertex->z;
  local_64 = local_ac;
  local_60 = local_a8;
  local_5c = local_a4;
  local_58 = local_88;
  local_54 = local_84;
  local_50 = local_80;
  local_40.x = local_a0;
  local_40.y = local_9c;
  local_40.z = local_98;
  local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.0,3.1415927);
  (this_ptr->euler_angles).z = 0.0;
  (this_ptr->euler_angles).x = local_14;
  local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.0,6.2831855);
  (this_ptr->euler_angles).y = local_14;
  local_b8 = triangle_vertices->vertices[0].x - local_70.x;
  local_b4 = triangle_vertices->vertices[0].y - local_70.y;
  local_b0 = triangle_vertices->vertices[0].z - local_70.z;
  local_34 = local_b8;
  local_30[(uint)bVar7 * -2] = *(float *)((int)&stack0xffffff4c + (uint)bVar7 * -8);
  local_30[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
       *(float *)((int)&stack0xffffff50 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
  if (&this_ptr->triangle_delta != (STriangleVertices *)&local_34) {
    (this_ptr->triangle_delta).vertices[0].x = local_34;
    (this_ptr->triangle_delta).vertices[0].y = local_30[0];
    (this_ptr->triangle_delta).vertices[0].z = local_30[1];
  }
  pCVar1 = (this_ptr->triangle_delta).vertices + 1;
  local_7c = triangle_vertices->vertices[1].x - local_70.x;
  local_78 = triangle_vertices->vertices[1].y - local_70.y;
  local_74 = triangle_vertices->vertices[1].z - local_70.z;
  local_94 = local_7c;
  (&stack0xffffff70)[(uint)bVar7 * 0xfffffffe] = (&stack0xffffff88)[(uint)bVar7 * 0xfffffffe];
  *(uint *)((int)&stack0xffffff74 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
       *(uint *)((int)&stack0xffffff8c + (uint)bVar7 * -8 + (uint)bVar7 * -8);
  if (pCVar1 != (CVector3f *)&stack0xffffff6c) {
    pCVar1->x = local_94;
    (this_ptr->triangle_delta).vertices[1].y = local_90;
    (this_ptr->triangle_delta).vertices[1].z = local_8c;
  }
  pCVar1 = (this_ptr->triangle_delta).vertices + 2;
  local_30[2] = triangle_vertices->vertices[2].x - local_70.x;
  local_30[3] = triangle_vertices->vertices[2].y - local_70.y;
  local_20 = triangle_vertices->vertices[2].z - local_70.z;
  local_4c = local_30[2];
  local_48[(uint)bVar7 * -2] = local_30[(uint)bVar7 * -2 + 3];
  local_48[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
       local_30[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
  if (pCVar1 != (CVector3f *)&local_4c) {
    pCVar1->x = local_4c;
    (this_ptr->triangle_delta).vertices[2].y = local_48[0];
    (this_ptr->triangle_delta).vertices[2].z = local_48[1];
  }
  pSVar6 = &this_ptr->texture;
  for (iVar5 = 0x12; iVar5 != 0; iVar5 = iVar5 + -1) {
    (pSVar6->base).type = (texture->base).type;
    texture = (SMRGLTextureBasic *)((int)texture + (uint)bVar7 * -8 + 4);
    pSVar6 = (SMRGLTextureModel *)((int)pSVar6 + (uint)bVar7 * -8 + 4);
  }
  this_ptr->lifetime = lifetime;
  local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(-1.0,1.0);
  (this_ptr->base).velocity.x = local_14;
  local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.0,3.0);
  (this_ptr->base).velocity.y = local_14;
  local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(-1.0,1.0);
  pCVar1 = &(this_ptr->base).velocity;
  (this_ptr->base).velocity.z = local_14;
  fVar2 = (this_ptr->base).velocity.y;
  fVar3 = (this_ptr->base).velocity.z;
  local_18 = SQRT(fVar3 * fVar3 + pCVar1->x * pCVar1->x + fVar2 * fVar2);
  if (local_18 <= 0.0) {
    (this_ptr->base).velocity.z = 0.0;
    (this_ptr->base).velocity.y = (this_ptr->base).velocity.z;
    pCVar1->x = (this_ptr->base).velocity.y;
  }
  else {
    fVar4 = 1.0 / local_18;
    fVar2 = (this_ptr->base).velocity.y;
    fVar3 = (this_ptr->base).velocity.z;
    pCVar1->x = pCVar1->x * fVar4;
    (this_ptr->base).velocity.y = fVar2 * fVar4;
    (this_ptr->base).velocity.z = fVar3 * fVar4;
  }
  pCVar1 = &(this_ptr->base).velocity;
  fVar2 = (this_ptr->base).velocity.y * _DAT_005c05d4;
  fVar3 = (this_ptr->base).velocity.z * _DAT_005c05d4;
  pCVar1->x = pCVar1->x * _DAT_005c05d4;
  (this_ptr->base).velocity.y = fVar2;
  (this_ptr->base).velocity.z = fVar3;
  core_particle_cpp_CParticle_setup_FUN_00509e40(&this_ptr->base,&local_70,pCVar1);
  return;
}
