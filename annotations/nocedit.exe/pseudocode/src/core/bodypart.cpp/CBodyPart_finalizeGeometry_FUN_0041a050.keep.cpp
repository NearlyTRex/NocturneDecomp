// Name: core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_0041a050
// Address: 0041a050
// MANUAL RECONSTRUCTION
// Address Range: [[0041a050, 0041a628]]
// Convention: __cdecl
// Signature: void __cdecl core_bodypart_cpp_CBodyPart_finalizeGeometry_FUN_0041a050(CBodyPart *this_ptr)

#include "nocturne.h"

void __cdecl core_bodypart_cpp_CBodyPart_finalizeGeometry_FUN_0041a050(CBodyPart *this_ptr)

{
  CLocation *pCVar1;
  CVector3i *pCVar3;
  double dVar5;
  CVector3f *pCVar5;
  SBodyPartModel *pSVar6;
  CVector3f *pCVar6;
  CVector3i *pCVar7;
  CVector3f *pCVar8;
  float fVar7;
  float fVar9;
  int iVar10;
  int iVar14;
  CLocation *pCVar15;
  SMRGLPrimitiveTriangle *texture;
  int iVar9;
  int iVar16;
  CVector3f local_78;
  CVector3f local_6c;
  CVector3i local_60;
  CVector3i local_54;
  CVector3f local_48;
  CVector3f local_3c;
  int local_20;
  double dVar2;
  double dVar1;
  double dVar4;
  double dVar3;
  
  if ((2 < this_ptr->vertex_count) && (0 < this_ptr->tri_count)) {
    core_bodypart_cpp_CBodyPart_optimizeBoundingBoxRotation_FUN_0041aa40
              (this_ptr,&local_54,&local_60);
    iVar9 = -((local_54.x + local_60.x) / 2);
    iVar14 = -((local_54.y + local_60.y) / 2);
    iVar10 = 0;
    iVar16 = -((local_54.z + local_60.z) / 2);
    if (0 < this_ptr->vertex_count) {
      do {
        pCVar3 = this_ptr->vertices;
        pCVar3[iVar10].x = pCVar3[iVar10].x + iVar9;
        pCVar3[iVar10].y = pCVar3[iVar10].y + iVar14;
        pCVar3[iVar10].z = pCVar3[iVar10].z + iVar16;
        iVar10 = iVar10 + 1;
      } while (iVar10 < this_ptr->vertex_count);
    }
    local_54.x = local_54.x + iVar9;
    local_54.y = local_54.y + iVar14;
    local_54.z = local_54.z + iVar16;
    local_60.x = local_60.x + iVar9;
    local_60.z = local_60.z + iVar16;
    local_60.y = local_60.y + iVar14;
    fVar7 = (float)0.00390625;
    (this_ptr->bounding_box).min.x = (float)local_54.x * fVar7;
    (this_ptr->bounding_box).min.y = (float)local_54.y * fVar7;
    (this_ptr->bounding_box).min.z = (float)local_54.z * fVar7;
    (this_ptr->bounding_box).max.x = (float)local_60.x * fVar7;
    local_6c.y = (float)iVar14 * fVar7;
    (this_ptr->bounding_box).max.y = (float)local_60.y * fVar7;
    local_6c.z = (float)iVar16 * fVar7;
    (this_ptr->bounding_box).max.z = (float)local_60.z * fVar7;
    local_6c.x = (float)iVar9 * fVar7;
    pCVar5 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                       (&this_ptr->base,&local_48,&local_6c);
    pCVar1 = &(this_ptr->base).location;
    (pCVar1->position).x = (pCVar1->position).x - pCVar5->x;
    (this_ptr->base).location.position.y = (this_ptr->base).location.position.y - pCVar5->y;
    (this_ptr->base).location.position.z = (this_ptr->base).location.position.z - pCVar5->z;
    iVar9 = 0;
    if (0 < this_ptr->attached_model_count) {
      pSVar6 = this_ptr->attached_models;
      do {
        (pSVar6->scale).x = (int)((float)(pSVar6->scale).x + local_6c.x);
        (pSVar6->scale).y = (int)((float)(pSVar6->scale).y + local_6c.y);
        iVar9 = iVar9 + 1;
        (pSVar6->scale).z = (int)((float)(pSVar6->scale).z + local_6c.z);
        pSVar6 = pSVar6 + 1;
      } while (iVar9 < this_ptr->attached_model_count);
    }
    iVar9 = 0;
    if (0 < this_ptr->fire_count) {
      pCVar15 = &this_ptr->fires[0].flame.base.location;
      do {
        pCVar6 = &this_ptr->fires[iVar9].local_position;
        pCVar6->x = pCVar6->x + local_6c.x;
        pCVar6->y = pCVar6->y + local_6c.y;
        pCVar6->z = pCVar6->z + local_6c.z;
        iVar9 = iVar9 + 1;
        pCVar6 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                           (&this_ptr->base,&local_3c,pCVar6);
        pCVar15->position = *pCVar6;
        pCVar15 = pCVar15 + 0x2b;
      } while (iVar9 < this_ptr->fire_count);
    }
    memset(this_ptr->normals,0,this_ptr->vertex_count * 0xc);
    local_20 = 0;
    if (0 < this_ptr->tri_count) {
      do {
        texture = &this_ptr->faces[local_20];
        (texture->base).base.count = 3;
        engine_keyframe_c_calculateSurfaceNormal_FUN_00501bc0(this_ptr->vertices,texture);
        iVar9 = 0;
        if (0 < (texture->base).base.count) {
          do {
            pCVar7 = this_ptr->normals + texture->vertices[iVar9].vertex_index;
            pCVar7->x = pCVar7->x + (texture->base).surface_normal.A.i;
            pCVar7->y = pCVar7->y + (texture->base).surface_normal.B.i;
            pCVar7->z = pCVar7->z + (texture->base).surface_normal.C.i;
            iVar9 = iVar9 + 1;
          } while (iVar9 < (texture->base).base.count);
        }
        local_20 = local_20 + 1;
      } while (local_20 < this_ptr->tri_count);
    }
    iVar9 = 0;
    if (0 < this_ptr->vertex_count) {
      do {
        pCVar3 = &this_ptr->normals[iVar9];
        dVar1 = (double)pCVar3->x;
        dVar4 = (double)pCVar3->y;
        dVar3 = (double)pCVar3->z;
        dVar2 = SQRT(dVar3 * dVar3 + dVar4 * dVar4 + dVar1 * dVar1);
        if (dVar2 <= 0.0) {
          pCVar3->z = 0;
          pCVar3->y = pCVar3->z;
          pCVar3->x = pCVar3->z;
        }
        else {
          dVar5 = 65535 / dVar2;
          pCVar3->x = (int)ROUND(ROUND(dVar1 * dVar5));
          pCVar3->y = (int)ROUND(ROUND(dVar4 * dVar5));
          pCVar3->z = (int)ROUND(ROUND(dVar3 * dVar5));
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < this_ptr->vertex_count);
    }
    core_bodypart_cpp_CBodyPart_setupPhysicsBox_FUN_0041b070(this_ptr);
    pCVar6 = &(this_ptr->physics_box).linear_velocity;
    if (pCVar6 != &this_ptr->initial_velocity) {
      (this_ptr->physics_box).linear_velocity = this_ptr->initial_velocity;
    }
    pCVar8 = core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                       (&(this_ptr->physics_box).rotation_matrix,&local_78,
                        &this_ptr->initial_velocity);
    pCVar6 = &(this_ptr->physics_box).linear_velocity_local;
    if (pCVar6 != pCVar8) {
      (this_ptr->physics_box).linear_velocity_local = *pCVar8;
    }
    fVar7 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(-3.1415927,3.1415927);
    (this_ptr->physics_box).angular_velocity.x = fVar7;
    fVar7 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(-3.1415927,3.1415927);
    (this_ptr->physics_box).angular_velocity.z = fVar7;
    fVar9 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(-9.424778,9.424778);
    (this_ptr->physics_box).angular_velocity.y = fVar9;
    return;
  }
  (this_ptr->base).lifecycle_state = ACTOR_DESTROYED;
  core_bodypart_cpp_CBodyPart_setCounts_FUN_004191d0(this_ptr,0,0);
  pCVar6 = &(this_ptr->bounding_box).max;
  if ((UVector3 *)pCVar6 != &g_ZeroVector) {
    (this_ptr->bounding_box).max = g_ZeroVector.f;
  }
  if (&this_ptr->bounding_box != (CBoundingBox3D *)pCVar6) {
    (this_ptr->bounding_box).min = (this_ptr->bounding_box).max;
  }
  return;
}
