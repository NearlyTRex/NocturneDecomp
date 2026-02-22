// Name: core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_0041a050
// Address: 0041a050
// Address Range: [[0041a050, 0041a5aa] [0041a615, 0041a628]]
// Convention: __cdecl
// Signature: void __cdecl core_bodypart_cpp_CBodyPart_finalizeGeometry_FUN_0041a050(CBodyPart *this_ptr)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl core_bodypart_cpp_CBodyPart_finalizeGeometry_FUN_0041a050(CBodyPart *this_ptr)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  CVector3f *pCVar5;
  SBodyPartModel *pSVar6;
  CVector3i *pCVar7;
  CVector3f *pCVar8;
  float fVar9;
  int iVar10;
  SMRGLPrimitiveTriangle *pSVar11;
  int iVar12;
  int *piVar13;
  int iVar14;
  CLocation *pCVar15;
  SMRGLPrimitiveTriangle *texture;
  int iVar16;
  CVector3f local_78;
  CVector3f local_6c;
  CVector3i local_60;
  CVector3i local_54;
  CVector3f local_48;
  CVector3f local_3c;
  SBodyPartFire *local_28;
  int local_24;
  int local_20;
  float local_1c;
  float local_18;
  
  if ((2 < this_ptr->vertex_count) && (0 < this_ptr->tri_count)) {
    core_bodypart_cpp_CBodyPart_optimizeBoundingBoxRotation_FUN_0041aa40
              (this_ptr,&local_54,&local_60);
    local_18 = (float)-((local_54.x + local_60.x) / 2);
    iVar14 = -((local_54.y + local_60.y) / 2);
    iVar10 = 0;
    iVar16 = -((local_54.z + local_60.z) / 2);
    if (0 < this_ptr->vertex_count) {
      iVar12 = 0;
      do {
        pCVar7 = this_ptr->vertices;
        piVar13 = (int *)((int)&pCVar7->x + iVar12);
        *piVar13 = *piVar13 + (int)local_18;
        piVar13 = (int *)((int)&pCVar7->y + iVar12);
        *piVar13 = *piVar13 + iVar14;
        piVar13 = (int *)((int)&pCVar7->z + iVar12);
        *piVar13 = *piVar13 + iVar16;
        iVar10 = iVar10 + 1;
        iVar12 = iVar12 + 0xc;
      } while (iVar10 < this_ptr->vertex_count);
    }
    local_54.x = local_54.x + (int)local_18;
    local_54.y = local_54.y + iVar14;
    local_54.z = local_54.z + iVar16;
    local_60.x = local_60.x + (int)local_18;
    local_60.z = local_60.z + iVar16;
    local_60.y = local_60.y + iVar14;
    local_6c.x = (float)0.00390625;
    (this_ptr->bounding_box).min.x = (float)local_54.x * local_6c.x;
    (this_ptr->bounding_box).min.y = (float)local_54.y * local_6c.x;
    (this_ptr->bounding_box).min.z = (float)local_54.z * local_6c.x;
    (this_ptr->bounding_box).max.x = (float)local_60.x * local_6c.x;
    local_6c.y = (float)iVar14 * local_6c.x;
    (this_ptr->bounding_box).max.y = (float)local_60.y * local_6c.x;
    local_6c.z = (float)iVar16 * local_6c.x;
    (this_ptr->bounding_box).max.z = (float)local_60.z * local_6c.x;
    local_6c.x = (float)(int)local_18 * local_6c.x;
    local_1c = local_6c.z;
    pCVar5 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                       (&this_ptr->base,&local_48,&local_6c);
    pCVar15 = &(this_ptr->base).location;
    (pCVar15->position).x = (pCVar15->position).x - pCVar5->x;
    (this_ptr->base).location.position.y = (this_ptr->base).location.position.y - pCVar5->y;
    (this_ptr->base).location.position.z = (this_ptr->base).location.position.z - pCVar5->z;
    iVar10 = 0;
    if (0 < this_ptr->attached_model_count) {
      pSVar6 = this_ptr->attached_models;
      do {
        (pSVar6->scale).x = (int)((float)(pSVar6->scale).x + local_6c.x);
        (pSVar6->scale).y = (int)((float)(pSVar6->scale).y + local_6c.y);
        iVar10 = iVar10 + 1;
        (pSVar6->scale).z = (int)((float)(pSVar6->scale).z + local_6c.z);
        pSVar6 = pSVar6 + 1;
      } while (iVar10 < this_ptr->attached_model_count);
    }
    iVar10 = 0;
    if (0 < this_ptr->fire_count) {
      local_28 = this_ptr->fires;
      pCVar15 = &this_ptr->fires[0].flame.base.location;
      do {
        pCVar5 = &local_28[iVar10].local_position;
        pCVar5->x = pCVar5->x + local_6c.x;
        pCVar5->y = pCVar5->y + local_6c.y;
        pCVar5->z = pCVar5->z + local_6c.z;
        iVar10 = iVar10 + 1;
        pCVar5 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                           (&this_ptr->base,&local_3c,pCVar5);
        (pCVar15->position).x = pCVar5->x;
        (pCVar15->position).y = pCVar5->y;
        (pCVar15->position).z = pCVar5->z;
        pCVar15 = pCVar15 + 0x2b;
      } while (iVar10 < this_ptr->fire_count);
    }
    memset(this_ptr->normals,0,this_ptr->vertex_count * 0xc);
    local_20 = 0;
    if (0 < this_ptr->tri_count) {
      local_24 = 0;
      do {
        texture = (SMRGLPrimitiveTriangle *)
                  ((int)&(((SMRGLPrimitiveTriangle *)(this_ptr->faces->vertices + -2))->base).base.
                         type + local_24);
        (texture->base).base.count = 3;
        engine_keyframe_c_calculateSurfaceNormal_FUN_00501bc0(this_ptr->vertices,texture);
        iVar10 = 0;
        pSVar11 = texture;
        if (0 < (texture->base).base.count) {
          do {
            pCVar7 = this_ptr->normals + pSVar11->vertices[0].vertex_index;
            pCVar7->x = pCVar7->x + (texture->base).surface_normal.A;
            pCVar7->y = pCVar7->y + (texture->base).surface_normal.B;
            pCVar7->z = pCVar7->z + (texture->base).surface_normal.C;
            iVar10 = iVar10 + 1;
            pSVar11 = (SMRGLPrimitiveTriangle *)&(pSVar11->base).surface_normal.B;
          } while (iVar10 < (texture->base).base.count);
        }
        local_24 = local_24 + 0x3c;
        local_20 = local_20 + 1;
      } while (local_20 < this_ptr->tri_count);
    }
    iVar10 = 0;
    if (0 < this_ptr->vertex_count) {
      iVar14 = 0;
      do {
        piVar13 = (int *)((int)&this_ptr->normals->x + iVar14);
        dVar1 = (double)*piVar13;
        dVar4 = (double)piVar13[1];
        dVar3 = (double)piVar13[2];
        dVar2 = SQRT(dVar3 * dVar3 + dVar4 * dVar4 + dVar1 * dVar1);
        if (dVar2 <= 0.0) {
          piVar13[2] = 0;
          piVar13[1] = piVar13[2];
          *piVar13 = piVar13[2];
        }
        else {
          dVar2 = 65535 / dVar2;
          *piVar13 = (int)ROUND(ROUND(dVar1 * dVar2));
          piVar13[1] = (int)ROUND(ROUND(dVar4 * dVar2));
          piVar13[2] = (int)ROUND(ROUND(dVar3 * dVar2));
        }
        iVar10 = iVar10 + 1;
        iVar14 = iVar14 + 0xc;
      } while (iVar10 < this_ptr->vertex_count);
    }
    core_bodypart_cpp_CBodyPart_setupPhysicsBox_FUN_0041b070(this_ptr);
    pCVar5 = &(this_ptr->physics_box).linear_velocity;
    if (pCVar5 != &this_ptr->initial_velocity) {
      pCVar5->x = (this_ptr->initial_velocity).x;
      (this_ptr->physics_box).linear_velocity.y = (this_ptr->initial_velocity).y;
      (this_ptr->physics_box).linear_velocity.z = (this_ptr->initial_velocity).z;
    }
    pCVar8 = core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                       (&(this_ptr->physics_box).rotation_matrix,&local_78,
                        &this_ptr->initial_velocity);
    pCVar5 = &(this_ptr->physics_box).linear_velocity_local;
    if (pCVar5 != pCVar8) {
      pCVar5->x = pCVar8->x;
      (this_ptr->physics_box).linear_velocity_local.y = pCVar8->y;
      (this_ptr->physics_box).linear_velocity_local.z = pCVar8->z;
    }
    local_18 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-3.1415927,3.1415927);
    (this_ptr->physics_box).angular_velocity.x = local_18;
    local_18 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-3.1415927,3.1415927);
    (this_ptr->physics_box).angular_velocity.z = local_18;
    fVar9 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-9.424778,9.424778);
    (this_ptr->physics_box).angular_velocity.y = fVar9;
    return;
  }
  (this_ptr->base).was_created = 2;
  core_bodypart_cpp_CBodyPart_setCounts_FUN_004191d0(this_ptr,0,0);
  pCVar5 = &(this_ptr->bounding_box).max;
  if (pCVar5 != &g_ZeroVector) {
    pCVar5->x = g_ZeroVector.x;
    (this_ptr->bounding_box).max.y = g_ZeroVector.y;
    (this_ptr->bounding_box).max.z = g_ZeroVector.z;
  }
  if (&this_ptr->bounding_box != (CBoundingBox3D *)pCVar5) {
    (this_ptr->bounding_box).min.x = pCVar5->x;
    (this_ptr->bounding_box).min.y = (this_ptr->bounding_box).max.y;
    (this_ptr->bounding_box).min.z = (this_ptr->bounding_box).max.z;
  }
  return;
}
