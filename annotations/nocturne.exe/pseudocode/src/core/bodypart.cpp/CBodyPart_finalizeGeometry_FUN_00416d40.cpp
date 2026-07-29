// Name: core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_00416d40
// Address: 00416d40
// Address Range: [[00416d40, 00417318]]
// Convention: __cdecl
// Signature: void __cdecl core_bodypart_cpp_CBodyPart_finalizeGeometry_FUN_00416d40(CBodyPart *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_bodypart_cpp_CBodyPart_finalizeGeometry_FUN_00416d40(CBodyPart *this_ptr)

{
  double dVar1;
  CVector3f *pCVar2;
  SBodyPartModel *pSVar3;
  CVector3i *pCVar4;
  CVector3f *pCVar5;
  float fVar6;
  int iVar7;
  SMRGLPrimitiveTriangle *pSVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  CLocation *pCVar12;
  SMRGLPrimitiveTriangle *texture;
  int iVar13;
  double dVar14;
  double dVar15;
  double dVar16;
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
    core_bodypart_cpp_CBodyPart_optimizeBoundingBoxRotation_FUN_00417730
              (this_ptr,&local_54,&local_60);
    local_18 = (float)-((local_54.x + local_60.x) / 2);
    iVar11 = -((local_54.y + local_60.y) / 2);
    iVar7 = 0;
    iVar13 = -((local_54.z + local_60.z) / 2);
    if (0 < this_ptr->vertex_count) {
      iVar9 = 0;
      do {
        pCVar4 = this_ptr->vertices;
        piVar10 = (int *)((int)&pCVar4->x + iVar9);
        *piVar10 = *piVar10 + (int)local_18;
        piVar10 = (int *)((int)&pCVar4->y + iVar9);
        *piVar10 = *piVar10 + iVar11;
        piVar10 = (int *)((int)&pCVar4->z + iVar9);
        *piVar10 = *piVar10 + iVar13;
        iVar7 = iVar7 + 1;
        iVar9 = iVar9 + 0xc;
      } while (iVar7 < this_ptr->vertex_count);
    }
    local_54.x = local_54.x + (int)local_18;
    local_54.y = local_54.y + iVar11;
    local_54.z = local_54.z + iVar13;
    local_60.x = local_60.x + (int)local_18;
    local_60.z = local_60.z + iVar13;
    local_60.y = local_60.y + iVar11;
    local_6c.x = (float)0.00390625;
    (this_ptr->bounding_box).min.x = (float)local_54.x * local_6c.x;
    (this_ptr->bounding_box).min.y = (float)local_54.y * local_6c.x;
    (this_ptr->bounding_box).min.z = (float)local_54.z * local_6c.x;
    (this_ptr->bounding_box).max.x = (float)local_60.x * local_6c.x;
    local_6c.y = (float)iVar11 * local_6c.x;
    (this_ptr->bounding_box).max.y = (float)local_60.y * local_6c.x;
    local_6c.z = (float)iVar13 * local_6c.x;
    (this_ptr->bounding_box).max.z = (float)local_60.z * local_6c.x;
    local_6c.x = (float)(int)local_18 * local_6c.x;
    local_1c = local_6c.z;
    pCVar2 = core_actor_cpp_CDemonActor_transformVector_FUN_0040a200
                       (&this_ptr->base,&local_48,&local_6c);
    pCVar12 = &(this_ptr->base).location;
    (pCVar12->position).x = (pCVar12->position).x - pCVar2->x;
    (this_ptr->base).location.position.y = (this_ptr->base).location.position.y - pCVar2->y;
    (this_ptr->base).location.position.z = (this_ptr->base).location.position.z - pCVar2->z;
    iVar7 = 0;
    if (0 < this_ptr->attached_model_count) {
      pSVar3 = this_ptr->attached_models;
      do {
        (pSVar3->scale).x = (pSVar3->scale).x + local_6c.x;
        (pSVar3->scale).y = (pSVar3->scale).y + local_6c.y;
        iVar7 = iVar7 + 1;
        (pSVar3->scale).z = (pSVar3->scale).z + local_6c.z;
        pSVar3 = pSVar3 + 1;
      } while (iVar7 < this_ptr->attached_model_count);
    }
    iVar7 = 0;
    if (0 < this_ptr->fire_count) {
      local_28 = this_ptr->fires;
      pCVar12 = &this_ptr->fires[0].flame.base.location;
      do {
        pCVar2 = &local_28[iVar7].local_position;
        pCVar2->x = pCVar2->x + local_6c.x;
        pCVar2->y = pCVar2->y + local_6c.y;
        pCVar2->z = pCVar2->z + local_6c.z;
        iVar7 = iVar7 + 1;
        pCVar2 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                           (&this_ptr->base,&local_3c,pCVar2);
        (pCVar12->position).x = pCVar2->x;
        (pCVar12->position).y = pCVar2->y;
        (pCVar12->position).z = pCVar2->z;
        pCVar12 = (CLocation *)((int)(pCVar12 + 0x2a) + 8);
      } while (iVar7 < this_ptr->fire_count);
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
        engine_keyframe_c_calculateSurfaceNormal_FUN_004c3920(this_ptr->vertices,texture);
        iVar7 = 0;
        pSVar8 = texture;
        if (0 < (texture->base).base.count) {
          do {
            pCVar4 = this_ptr->normals + pSVar8->vertices[0].vertex_index;
            pCVar4->x = pCVar4->x + (texture->base).surface_normal.A.i;
            pCVar4->y = pCVar4->y + (texture->base).surface_normal.B.i;
            pCVar4->z = pCVar4->z + (texture->base).surface_normal.C.i;
            iVar7 = iVar7 + 1;
            pSVar8 = (SMRGLPrimitiveTriangle *)&(pSVar8->base).surface_normal.B;
          } while (iVar7 < (texture->base).base.count);
        }
        local_24 = local_24 + 0x3c;
        local_20 = local_20 + 1;
      } while (local_20 < this_ptr->tri_count);
    }
    iVar7 = 0;
    if (0 < this_ptr->vertex_count) {
      iVar11 = 0;
      do {
        piVar10 = (int *)((int)&this_ptr->normals->x + iVar11);
        dVar14 = (double)*piVar10;
        dVar15 = (double)piVar10[1];
        dVar1 = (double)piVar10[2];
        dVar16 = SQRT(dVar1 * dVar1 + dVar15 * dVar15 + dVar14 * dVar14);
        if (dVar16 <= 0.0) {
          piVar10[2] = 0;
          piVar10[1] = piVar10[2];
          *piVar10 = piVar10[2];
        }
        else {
          dVar16 = 65535 / dVar16;
          dVar14 = round(dVar14 * dVar16);
          dVar15 = round(dVar15 * dVar16);
          dVar16 = round(dVar1 * dVar16);
          *piVar10 = (int)ROUND(dVar14);
          piVar10[1] = (int)ROUND(dVar15);
          piVar10[2] = (int)ROUND(dVar16);
        }
        iVar7 = iVar7 + 1;
        iVar11 = iVar11 + 0xc;
      } while (iVar7 < this_ptr->vertex_count);
    }
    core_bodypart_cpp_CBodyPart_setupPhysicsBox_FUN_00417d70(this_ptr);
    pCVar2 = &(this_ptr->physics_box).linear_velocity;
    if (pCVar2 != &this_ptr->initial_velocity) {
      pCVar2->x = (this_ptr->initial_velocity).x;
      (this_ptr->physics_box).linear_velocity.y = (this_ptr->initial_velocity).y;
      (this_ptr->physics_box).linear_velocity.z = (this_ptr->initial_velocity).z;
    }
    pCVar5 = core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0
                       (&(this_ptr->physics_box).rotation_matrix,&local_78,
                        &this_ptr->initial_velocity);
    pCVar2 = &(this_ptr->physics_box).linear_velocity_local;
    if (pCVar2 != pCVar5) {
      pCVar2->x = pCVar5->x;
      (this_ptr->physics_box).linear_velocity_local.y = pCVar5->y;
      (this_ptr->physics_box).linear_velocity_local.z = pCVar5->z;
    }
    local_18 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(-3.1415927,3.1415927);
    (this_ptr->physics_box).angular_velocity.x = local_18;
    local_18 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(-3.1415927,3.1415927);
    (this_ptr->physics_box).angular_velocity.z = local_18;
    fVar6 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(-9.424778,9.424778);
    (this_ptr->physics_box).angular_velocity.y = fVar6;
    return;
  }
  (this_ptr->base).lifecycle_state = ACTOR_DESTROYED;
  core_bodypart_cpp_CBodyPart_setCounts_FUN_00415ee0(this_ptr,0,0);
  pCVar2 = &(this_ptr->bounding_box).max;
  if (pCVar2 != (CVector3f *)&DAT_02dd1184) {
    pCVar2->x = _DAT_02dd1184;
    (this_ptr->bounding_box).max.y = _DAT_02dd1188;
    (this_ptr->bounding_box).max.z = _DAT_02dd118c;
  }
  if (&this_ptr->bounding_box != (CBoundingBox3D *)pCVar2) {
    (this_ptr->bounding_box).min.x = pCVar2->x;
    (this_ptr->bounding_box).min.y = (this_ptr->bounding_box).max.y;
    (this_ptr->bounding_box).min.z = (this_ptr->bounding_box).max.z;
  }
  return;
}
