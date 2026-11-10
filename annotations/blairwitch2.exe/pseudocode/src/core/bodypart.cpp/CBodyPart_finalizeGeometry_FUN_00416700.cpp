// Name: core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_00416700
// Address: 00416700
// Address Range: [[00416700, 00416d6a]]
// Convention: __cdecl
// Signature: void __cdecl core_bodypart_cpp_CBodyPart_finalizeGeometry_FUN_00416700(CBodyPart *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_bodypart_cpp_CBodyPart_finalizeGeometry_FUN_00416700(CBodyPart *this_ptr)

{
  byte *puVar1;
  CVector3f *pCVar2;
  uint *puVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  SBodyPartModel *pSVar7;
  SBodyPartFire *pSVar8;
  CVector3i *pCVar9;
  float fVar10;
  int iVar11;
  SMRGLPrimitiveTriangle *pSVar12;
  int *piVar13;
  int *extraout_EDX;
  int iVar14;
  int iVar15;
  SMRGLPrimitiveTriangle *pSVar16;
  int iVar17;
  byte bVar18;
  float10 fVar19;
  float10 fVar20;
  float10 fVar21;
  float afStackY_1088 [24];
  SBodyPartFire *apSStackY_1028 [981];
  float local_a0;
  float afStack_9c [4];
  float local_8c;
  float local_88;
  CVector3i local_7c;
  float local_70;
  float local_6c [5];
  CVector3i local_58;
  float local_4c;
  float local_48;
  float local_44;
  uint local_40;
  SBodyPartFire *local_3c [4];
  SBodyPartFire *local_2c;
  int local_28;
  int local_24;
  int local_20;
  uint *local_1c;
  float local_18;
  float local_14;
  
  bVar18 = 0;
  if ((2 < this_ptr->vertex_count) && (0 < this_ptr->tri_count)) {
    core_bodypart_cpp_CBodyPart_optimizeBoundingBoxRotation_FUN_00417270
              (this_ptr,&local_58,&local_7c);
    local_14 = (float)-((local_58.y + local_7c.y) / 2);
    iVar17 = -((local_58.x + local_7c.x) / 2);
    iVar11 = 0;
    iVar14 = -((local_58.z + local_7c.z) / 2);
    if (0 < this_ptr->vertex_count) {
      iVar15 = 0;
      do {
        pCVar9 = this_ptr->vertices;
        piVar13 = (int *)((int)&pCVar9->x + iVar15);
        *piVar13 = *piVar13 + iVar17;
        piVar13 = (int *)((int)&pCVar9->y + iVar15);
        *piVar13 = *piVar13 + (int)local_14;
        piVar13 = (int *)((int)&pCVar9->z + iVar15);
        *piVar13 = *piVar13 + iVar14;
        iVar11 = iVar11 + 1;
        iVar15 = iVar15 + 0xc;
      } while (iVar11 < this_ptr->vertex_count);
    }
    local_58.x = local_58.x + iVar17;
    local_58.y = local_58.y + (int)local_14;
    local_58.z = local_58.z + iVar14;
    local_7c.x = local_7c.x + iVar17;
    local_7c.y = local_7c.y + (int)local_14;
    local_7c.z = local_7c.z + iVar14;
    fVar10 = (float)_DAT_005cbf5a;
    (this_ptr->bounding_box).min.x = (float)local_58.x * fVar10;
    (this_ptr->bounding_box).min.y = (float)local_58.y * fVar10;
    (this_ptr->bounding_box).min.z = (float)local_58.z * fVar10;
    (this_ptr->bounding_box).max.x = (float)local_7c.x * fVar10;
    local_4c = (float)iVar17 * fVar10;
    (this_ptr->bounding_box).max.y = (float)local_7c.y * fVar10;
    local_44 = (float)iVar14 * fVar10;
    local_48 = (float)(int)local_14 * fVar10;
    (this_ptr->bounding_box).max.z = (float)local_7c.z * fVar10;
    local_18 = local_44;
    core_actor_cpp_FUN_00408cf0(this_ptr,&local_4c);
    puVar1 = &(this_ptr->base).field_0x20;
    afStack_9c[2] = local_a0;
    afStack_9c[(uint)bVar18 * -2 + 3] = afStack_9c[(uint)bVar18 * -2];
    afStack_9c[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 4] =
         afStack_9c[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 1];
    *(float *)puVar1 = *(float *)puVar1 - afStack_9c[2];
    *(float *)&(this_ptr->base).field_0x24 = *(float *)&(this_ptr->base).field_0x24 - afStack_9c[3];
    *(float *)&(this_ptr->base).field_0x28 = *(float *)&(this_ptr->base).field_0x28 - local_8c;
    iVar11 = 0;
    if (0 < this_ptr->attached_model_count) {
      pSVar7 = this_ptr->attached_models;
      do {
        *(float *)pSVar7 = *(float *)pSVar7 + local_4c;
        *(float *)&pSVar7->field_0x4 = *(float *)&pSVar7->field_0x4 + local_48;
        iVar11 = iVar11 + 1;
        *(float *)&pSVar7->field_0x8 = *(float *)&pSVar7->field_0x8 + local_44;
        pSVar7 = pSVar7 + 1;
      } while (iVar11 < this_ptr->attached_model_count);
    }
    local_20 = 0;
    if (0 < this_ptr->fire_count) {
      local_2c = this_ptr->fires;
      local_1c = (uint *)&this_ptr->fires[0].field_0x2c;
      do {
        pSVar8 = local_2c + local_20;
        *(float *)pSVar8 = *(float *)pSVar8 + local_4c;
        *(float *)&pSVar8->field_0x4 = *(float *)&pSVar8->field_0x4 + local_48;
        *(float *)&pSVar8->field_0x8 = *(float *)&pSVar8->field_0x8 + local_44;
        core_actor_cpp_FUN_00408d70(this_ptr,pSVar8);
        local_40 = local_6c[2];
        local_3c[(uint)bVar18 * -2] = (SBodyPartFire *)local_6c[(uint)bVar18 * -2 + 3];
        local_3c[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 1] =
             (SBodyPartFire *)local_6c[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 4];
        *local_1c = local_40;
        local_1c[1] = local_3c[0];
        puVar3 = local_1c + 0x103;
        local_1c[2] = local_3c[1];
        local_20 = local_20 + 1;
        local_1c = puVar3;
      } while (local_20 < this_ptr->fire_count);
    }
    memset(this_ptr->normals,0,this_ptr->vertex_count * 0xc);
    local_24 = 0;
    if (0 < this_ptr->tri_count) {
      local_28 = 0;
      do {
        pSVar16 = this_ptr->faces + local_28;
        *(uint *)(pSVar16 + 4) = 3;
        iVar11 = 0;
        engine_keyframe_c_calculateSurfaceNormal_FUN_004df5f0(this_ptr->vertices,pSVar16);
        pSVar12 = pSVar16;
        if (0 < *(int *)(pSVar16 + 4)) {
          do {
            pCVar9 = this_ptr->normals + *(int *)(pSVar12 + 0x18);
            pCVar9->x = pCVar9->x + *(int *)(pSVar16 + 8);
            pCVar9->y = pCVar9->y + *(int *)(pSVar16 + 0xc);
            pCVar9->z = pCVar9->z + *(int *)(pSVar16 + 0x10);
            iVar11 = iVar11 + 1;
            pSVar12 = pSVar12 + 0xc;
          } while (iVar11 < *(int *)(pSVar16 + 4));
        }
        local_28 = local_28 + 0x3c;
        local_24 = local_24 + 1;
      } while (local_24 < this_ptr->tri_count);
    }
    iVar11 = 0;
    if (0 < this_ptr->vertex_count) {
      iVar14 = 0;
      do {
        piVar13 = (int *)((int)&this_ptr->normals->x + iVar14);
        dVar4 = (double)*piVar13;
        dVar6 = (double)piVar13[1];
        dVar5 = (double)piVar13[2];
        dVar4 = SQRT(dVar5 * dVar5 + dVar6 * dVar6 + dVar4 * dVar4);
        if (dVar4 <= 0.0) {
          piVar13[2] = 0;
          piVar13[1] = piVar13[2];
          *piVar13 = piVar13[2];
        }
        else {
          fVar19 = (float10)_DAT_005cbf62 / (float10)dVar4;
          fVar20 = (float10)*piVar13 * fVar19;
          fVar21 = (float10)piVar13[1] * fVar19;
          fVar19 = (float10)piVar13[2] * fVar19;
          round();
          round();
          round();
          *extraout_EDX = (int)ROUND(fVar20);
          extraout_EDX[1] = (int)ROUND(fVar21);
          extraout_EDX[2] = (int)ROUND(fVar19);
        }
        iVar11 = iVar11 + 1;
        iVar14 = iVar14 + 0xc;
      } while (iVar11 < this_ptr->vertex_count);
    }
    core_bodypart_cpp_FUN_004178c0(this_ptr);
    pCVar2 = &(this_ptr->physics_box).linear_velocity;
    if (pCVar2 != &this_ptr->initial_velocity) {
      pCVar2->x = (this_ptr->initial_velocity).x;
      (this_ptr->physics_box).linear_velocity.y = (this_ptr->initial_velocity).y;
      (this_ptr->physics_box).linear_velocity.z = (this_ptr->initial_velocity).z;
    }
    core_dirmat_cpp_FUN_004495a0
              (&(this_ptr->physics_box).rotation_matrix,&this_ptr->initial_velocity);
    pCVar2 = &(this_ptr->physics_box).linear_velocity_local;
    local_70 = local_88;
    local_6c[(uint)bVar18 * -2] = afStack_9c[(uint)bVar18 * -2 + 6];
    local_6c[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 1] =
         afStack_9c[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 7];
    if (pCVar2 != (CVector3f *)&local_70) {
      pCVar2->x = local_70;
      (this_ptr->physics_box).linear_velocity_local.y = local_6c[0];
      (this_ptr->physics_box).linear_velocity_local.z = local_6c[1];
    }
    local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(-3.1415927,3.1415927);
    (this_ptr->physics_box).angular_velocity.x = local_14;
    local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(-3.1415927,3.1415927);
    (this_ptr->physics_box).angular_velocity.z = local_14;
    fVar10 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(-9.424778,9.424778);
    (this_ptr->physics_box).angular_velocity.y = fVar10;
    return;
  }
  (this_ptr->base).lifecycle_state = ACTOR_DESTROYED;
  core_bodypart_cpp_FUN_00415890(this_ptr,0,0);
  pCVar2 = &(this_ptr->bounding_box).max;
  if (pCVar2 != (CVector3f *)&DAT_0265370c) {
    pCVar2->x = _DAT_0265370c;
    (this_ptr->bounding_box).max.y = _DAT_02653710;
    (this_ptr->bounding_box).max.z = _DAT_02653714;
  }
  if (&this_ptr->bounding_box != (CBoundingBox3D *)pCVar2) {
    (this_ptr->bounding_box).min.x = pCVar2->x;
    (this_ptr->bounding_box).min.y = (this_ptr->bounding_box).max.y;
    (this_ptr->bounding_box).min.z = (this_ptr->bounding_box).max.z;
  }
  return;
}
