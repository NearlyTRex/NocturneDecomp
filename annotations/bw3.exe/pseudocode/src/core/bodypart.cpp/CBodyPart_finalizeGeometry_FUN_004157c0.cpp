// Name: core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_004157c0
// Address: 004157c0
// Address Range: [[004157c0, 00415e2a]]
// Convention: __cdecl
// Signature: void __cdecl core_bodypart_cpp_CBodyPart_finalizeGeometry_FUN_004157c0(CBodyPart *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_bodypart_cpp_CBodyPart_finalizeGeometry_FUN_004157c0(CBodyPart *this_ptr)

{
  CVector3f *pCVar1;
  CLocation *pCVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  SBodyPartModel *pSVar7;
  SBodyPartFire *pSVar8;
  CVector3i *pCVar9;
  float fVar10;
  int iVar11;
  int *piVar12;
  int *extraout_EDX;
  int iVar13;
  int iVar14;
  int iVar15;
  byte bVar16;
  float10 fVar17;
  float10 fVar18;
  float10 fVar19;
  float afStackY_1088 [1005];
  float local_a0;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  CVector3i local_7c;
  float local_70;
  float local_6c [5];
  CVector3i local_58;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c [4];
  SBodyPartFire *local_2c;
  int local_28;
  int local_24;
  int local_20;
  CLocation *local_1c;
  float local_18;
  float local_14;
  
  bVar16 = 0;
  if ((2 < this_ptr->vertex_count) && (0 < this_ptr->tri_count)) {
    core_bodypart_cpp_CBodyPart_optimizeBoundingBoxRotation_FUN_00416330
              (this_ptr,&local_58,&local_7c);
    local_14 = (float)-((local_58.y + local_7c.y) / 2);
    iVar15 = -((local_58.x + local_7c.x) / 2);
    iVar11 = 0;
    iVar13 = -((local_58.z + local_7c.z) / 2);
    if (0 < this_ptr->vertex_count) {
      iVar14 = 0;
      do {
        pCVar9 = this_ptr->vertices;
        piVar12 = (int *)((int)&pCVar9->x + iVar14);
        *piVar12 = *piVar12 + iVar15;
        piVar12 = (int *)((int)&pCVar9->y + iVar14);
        *piVar12 = *piVar12 + (int)local_14;
        piVar12 = (int *)((int)&pCVar9->z + iVar14);
        *piVar12 = *piVar12 + iVar13;
        iVar11 = iVar11 + 1;
        iVar14 = iVar14 + 0xc;
      } while (iVar11 < this_ptr->vertex_count);
    }
    local_58.x = local_58.x + iVar15;
    local_58.y = local_58.y + (int)local_14;
    local_58.z = local_58.z + iVar13;
    local_7c.x = local_7c.x + iVar15;
    local_7c.y = local_7c.y + (int)local_14;
    local_7c.z = local_7c.z + iVar13;
    fVar10 = (float)_DAT_005b6c7a;
    (this_ptr->bounding_box).min.x = (float)local_58.x * fVar10;
    (this_ptr->bounding_box).min.y = (float)local_58.y * fVar10;
    (this_ptr->bounding_box).min.z = (float)local_58.z * fVar10;
    (this_ptr->bounding_box).max.x = (float)local_7c.x * fVar10;
    local_4c = (float)iVar15 * fVar10;
    (this_ptr->bounding_box).max.y = (float)local_7c.y * fVar10;
    local_44 = (float)iVar13 * fVar10;
    local_48 = (float)(int)local_14 * fVar10;
    (this_ptr->bounding_box).max.z = (float)local_7c.z * fVar10;
    local_18 = local_44;
    core_actor_cpp_FUN_00408b00(this_ptr,&local_4c);
    pCVar2 = &(this_ptr->base).location;
    local_94 = local_a0;
    *(uint *)((int)&stack0xffffff70 + (uint)bVar16 * -8) =
         *(uint *)(&stack0xffffff64 + (uint)bVar16 * -8);
    *(uint *)((int)&stack0xffffff74 + (uint)bVar16 * -8 + (uint)bVar16 * -8) =
         *(uint *)(&stack0xffffff68 + (uint)bVar16 * -8 + (uint)bVar16 * -8);
    fVar10 = (this_ptr->base).location.position.y;
    fVar3 = (this_ptr->base).location.position.z;
    (pCVar2->position).x = (pCVar2->position).x - local_94;
    (this_ptr->base).location.position.y = fVar10 - local_90;
    (this_ptr->base).location.position.z = fVar3 - local_8c;
    iVar11 = 0;
    if (0 < this_ptr->attached_model_count) {
      pSVar7 = this_ptr->attached_models;
      do {
        (pSVar7->position_offset).x = (pSVar7->position_offset).x + local_4c;
        (pSVar7->position_offset).y = (pSVar7->position_offset).y + local_48;
        iVar11 = iVar11 + 1;
        (pSVar7->position_offset).z = (pSVar7->position_offset).z + local_44;
        pSVar7 = pSVar7 + 1;
      } while (iVar11 < this_ptr->attached_model_count);
    }
    local_20 = 0;
    if (0 < this_ptr->fire_count) {
      local_2c = this_ptr->fires;
      local_1c = &this_ptr->fires[0].flame.base.location;
      do {
        pSVar8 = local_2c + local_20;
        (pSVar8->local_position).x = (pSVar8->local_position).x + local_4c;
        (pSVar8->local_position).y = (pSVar8->local_position).y + local_48;
        (pSVar8->local_position).z = (pSVar8->local_position).z + local_44;
        core_actor_cpp_FUN_00408b80(this_ptr,pSVar8);
        local_40 = local_6c[2];
        local_3c[(uint)bVar16 * -2] = local_6c[(uint)bVar16 * -2 + 3];
        local_3c[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1] =
             local_6c[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 4];
        (local_1c->position).x = local_40;
        (local_1c->position).y = local_3c[0];
        pCVar2 = local_1c + 0x2b;
        (local_1c->position).z = local_3c[1];
        local_20 = local_20 + 1;
        local_1c = pCVar2;
      } while (local_20 < this_ptr->fire_count);
    }
    memset(this_ptr->normals,0,this_ptr->vertex_count * 0xc);
    local_24 = 0;
    if (0 < this_ptr->tri_count) {
      local_28 = 0;
      do {
        iVar13 = (int)&(((SMRGLPrimitiveTriangle *)(this_ptr->faces->vertices + -2))->base).base.
                       type + local_28;
        *(uint *)(iVar13 + 4) = 3;
        iVar15 = 0;
        engine_keyframe_c_calculateSurfaceNormal_FUN_004dece0(this_ptr->vertices,iVar13);
        iVar11 = iVar13;
        if (0 < *(int *)(iVar13 + 4)) {
          do {
            pCVar9 = this_ptr->normals + *(int *)(iVar11 + 0x18);
            pCVar9->x = pCVar9->x + *(int *)(iVar13 + 8);
            pCVar9->y = pCVar9->y + *(int *)(iVar13 + 0xc);
            pCVar9->z = pCVar9->z + *(int *)(iVar13 + 0x10);
            iVar15 = iVar15 + 1;
            iVar11 = iVar11 + 0xc;
          } while (iVar15 < *(int *)(iVar13 + 4));
        }
        local_28 = local_28 + 0x3c;
        local_24 = local_24 + 1;
      } while (local_24 < this_ptr->tri_count);
    }
    iVar11 = 0;
    if (0 < this_ptr->vertex_count) {
      iVar13 = 0;
      do {
        piVar12 = (int *)((int)&this_ptr->normals->x + iVar13);
        dVar4 = (double)*piVar12;
        dVar6 = (double)piVar12[1];
        dVar5 = (double)piVar12[2];
        dVar4 = SQRT(dVar5 * dVar5 + dVar6 * dVar6 + dVar4 * dVar4);
        if (dVar4 <= 0.0) {
          piVar12[2] = 0;
          piVar12[1] = piVar12[2];
          *piVar12 = piVar12[2];
        }
        else {
          fVar17 = (float10)_DAT_005b6c82 / (float10)dVar4;
          fVar18 = (float10)*piVar12 * fVar17;
          fVar19 = (float10)piVar12[1] * fVar17;
          fVar17 = (float10)piVar12[2] * fVar17;
          round();
          round();
          round();
          *extraout_EDX = (int)ROUND(fVar18);
          extraout_EDX[1] = (int)ROUND(fVar19);
          extraout_EDX[2] = (int)ROUND(fVar17);
        }
        iVar11 = iVar11 + 1;
        iVar13 = iVar13 + 0xc;
      } while (iVar11 < this_ptr->vertex_count);
    }
    core_bodypart_cpp_FUN_00416970(this_ptr);
    pCVar1 = &(this_ptr->physics_box).linear_velocity;
    if (pCVar1 != &this_ptr->initial_velocity) {
      pCVar1->x = (this_ptr->initial_velocity).x;
      (this_ptr->physics_box).linear_velocity.y = (this_ptr->initial_velocity).y;
      (this_ptr->physics_box).linear_velocity.z = (this_ptr->initial_velocity).z;
    }
    core_dirmat_cpp_FUN_0045b870
              (&(this_ptr->physics_box).rotation_matrix,&this_ptr->initial_velocity);
    pCVar1 = &(this_ptr->physics_box).linear_velocity_local;
    local_70 = local_88;
    local_6c[(uint)bVar16 * -2] = *(float *)(&stack0xffffff7c + (uint)bVar16 * -8);
    local_6c[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1] =
         *(float *)(&stack0xffffff80 + (uint)bVar16 * -8 + (uint)bVar16 * -8);
    if (pCVar1 != (CVector3f *)&local_70) {
      pCVar1->x = local_70;
      (this_ptr->physics_box).linear_velocity_local.y = local_6c[0];
      (this_ptr->physics_box).linear_velocity_local.z = local_6c[1];
    }
    local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(-3.1415927,3.1415927);
    (this_ptr->physics_box).angular_velocity.x = local_14;
    local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(-3.1415927,3.1415927);
    (this_ptr->physics_box).angular_velocity.z = local_14;
    fVar10 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(-9.424778,9.424778);
    (this_ptr->physics_box).angular_velocity.y = fVar10;
    return;
  }
  (this_ptr->base).lifecycle_state = ACTOR_DESTROYED;
  core_bodypart_cpp_FUN_00414910(this_ptr,0,0);
  pCVar1 = &(this_ptr->bounding_box).max;
  if (pCVar1 != (CVector3f *)&DAT_02cfd900) {
    pCVar1->x = _DAT_02cfd900;
    (this_ptr->bounding_box).max.y = _DAT_02cfd904;
    (this_ptr->bounding_box).max.z = _DAT_02cfd908;
  }
  if (&this_ptr->bounding_box != (CBoundingBox3D *)pCVar1) {
    (this_ptr->bounding_box).min.x = pCVar1->x;
    (this_ptr->bounding_box).min.y = (this_ptr->bounding_box).max.y;
    (this_ptr->bounding_box).min.z = (this_ptr->bounding_box).max.z;
  }
  return;
}
