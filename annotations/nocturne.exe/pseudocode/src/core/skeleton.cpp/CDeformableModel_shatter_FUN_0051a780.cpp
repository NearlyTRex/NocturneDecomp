// Name: core_skeleton.cpp_CDeformableModel_shatter_FUN_0051a780
// Address: 0051a780
// Address Range: [[0051a780, 0051ad14]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModel_shatter_FUN_0051a780(CDeformableModel *this_ptr,CVector3f *center_position,CVector3f *orientation_vector,int lod_index,CVector3i *skinned_vertices,int *part_visibility_flags,int *texture_set_indices)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_skeleton_cpp_CDeformableModel_shatter_FUN_0051a780(CDeformableModel *this_ptr,CVector3f *center_position,CVector3f *orientation_vector,int lod_index,CVector3i *skinned_vertices,int *part_visibility_flags,int *texture_set_indices)

{
  ushort *puVar1;
  float *pfVar2;
  CVector3f *pCVar3;
  ushort *puVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  CMatrix3x3f local_e0;
  STriangleVertices local_b8;
  CVector3i local_94;
  CVector3i local_88;
  float local_7c;
  float local_78;
  float local_74;
  byte local_70 [12];
  STextureSet *local_64;
  STextureSet *local_60;
  int local_5c;
  int *local_58;
  int local_54;
  int local_50;
  byte *local_4c;
  byte *local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  SMRGLTextureLod *local_2c;
  SMRGLTextureLod *local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  local_1c = 0xffff;
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0(&local_e0,orientation_vector);
  if ((DAT_0268ced4 & 1) == 0) {
    DAT_0268ced4 = DAT_0268ced4 | 1;
    __arrinit(&DAT_02684234,3000,&g_CVectorTypeInfo_005993b0);
  }
  if (3000 < this_ptr->vertex_count[lod_index]) {
    PTR_01cc4800 = "..\\core\\skeleton.cpp";
    INT_01cc4804 = 0x748;
    core_main_c_FUN_004c8440("CDeformableModel::shatter - too many vertices!");
  }
  pfVar7 = (float *)&DAT_02684234;
  local_5c = (int)this_ptr->lod_info + lod_index * 4 + -4;
  iVar6 = 0;
  if (0 < *(int *)(local_5c + 0x2c)) {
    do {
      *pfVar7 = (float)skinned_vertices->x * _DAT_005a1eb0;
      pfVar7[1] = (float)skinned_vertices->y * _DAT_005a1eb0;
      pfVar7[2] = (float)skinned_vertices->z * _DAT_005a1eb0;
      pfVar2 = (float *)core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0044da40
                                  (&local_e0,local_70,pfVar7);
      local_7c = center_position->x + *pfVar2;
      local_78 = center_position->y + pfVar2[1];
      local_74 = center_position->z + pfVar2[2];
      if (pfVar7 != &local_7c) {
        *pfVar7 = local_7c;
        pfVar7[1] = local_78;
        pfVar7[2] = local_74;
      }
      pfVar7 = pfVar7 + 3;
      iVar6 = iVar6 + 1;
      skinned_vertices = skinned_vertices + 1;
    } while (iVar6 < *(int *)(local_5c + 0x2c));
  }
  __arrinit(&local_b8,3,&g_CVectorTypeInfo_005993b0);
  local_24 = 0;
  local_44 = 0;
  if (0 < this_ptr->texture_sets[0].textures[0x28].textures[0].base.type) {
    local_38 = (int)this_ptr->lod_info + lod_index * 4 + -4;
    local_60 = this_ptr->texture_sets;
    local_54 = (int)this_ptr->lod_info + lod_index * 4 + -4;
    local_4c = (byte *)part_visibility_flags;
    local_58 = texture_set_indices;
    local_34 = local_38;
    do {
      local_40 = *(int *)(local_54 + 0xc24) + local_24;
      local_2c = local_60->textures + *local_58 * 8;
      if (((*local_4c & 1) != 0) && (local_24 < local_40)) {
        iVar8 = local_24 * 0x12;
        iVar6 = local_24 * 4;
        local_20 = local_40 * 4;
        do {
          puVar4 = (ushort *)(*(int *)(local_38 + 0x7c) + iVar8);
          pCVar3 = local_b8.vertices;
          iVar9 = 0;
          do {
            iVar5 = (uint)*puVar4 * 0xc;
            if (pCVar3 != (CVector3f *)(&DAT_02684234 + iVar5)) {
              ((CVector3f *)&pCVar3->x)->x =
                   ((STriangleVertices *)(&DAT_02684234 + iVar5))->vertices[0].x;
              pCVar3->y = *(float *)(&DAT_02684238 + iVar5);
              pCVar3->z = *(float *)(&DAT_0268423c + iVar5);
            }
            pCVar3 = pCVar3 + 1;
            *(uint *)((int)&local_94.x + iVar9) = (uint)puVar4[3];
            iVar5 = iVar9 + 4;
            puVar1 = puVar4 + 6;
            puVar4 = puVar4 + 1;
            *(uint *)((int)&local_88.x + iVar9) = (uint)*puVar1;
            iVar9 = iVar5;
          } while (iVar5 != 0xc);
          core_fire_cpp_CFireEffect_createGlassParticle_FUN_0048b1c0
                    (0x01C08D04,&local_b8,&local_94,&local_88,
                     local_2c[*(int *)(iVar6 + *(int *)(local_34 + 0x90))].textures,local_1c);
          iVar6 = iVar6 + 4;
          iVar8 = iVar8 + 0x12;
        } while (iVar6 < local_20);
      }
      local_4c = local_4c + 4;
      local_54 = local_54 + 0x60;
      local_44 = local_44 + 1;
      local_58 = local_58 + 1;
      local_24 = local_40;
    } while (local_44 < this_ptr->texture_sets[0].textures[0x28].textures[0].base.type);
  }
  local_3c = 0;
  if (0 < this_ptr->texture_sets[0].textures[0x28].textures[0].base.type) {
    local_30 = (int)this_ptr->lod_info + lod_index * 4 + -4;
    local_64 = this_ptr->texture_sets;
    local_50 = (int)this_ptr->lod_info + lod_index * 4 + -4;
    local_48 = (byte *)part_visibility_flags;
    local_18 = local_30;
    do {
      iVar6 = *(int *)(local_50 + 0xc38) + local_24;
      if (((*local_48 & 1) != 0) &&
         (local_28 = local_64->textures + texture_set_indices[local_3c] * 8, local_24 < iVar6)) {
        iVar9 = local_24 * 0x12;
        local_14 = local_24 << 2;
        iVar8 = local_24;
        local_24 = iVar6;
        do {
          puVar4 = (ushort *)(*(int *)(local_18 + 0x7c) + iVar9);
          if ((*(byte *)(part_visibility_flags +
                        *(int *)(*(int *)(local_18 + 0xa4) + (iVar8 - *(int *)(local_18 + 0x54)) * 4
                                )) & 1) == 0) {
            pCVar3 = local_b8.vertices;
            iVar6 = 0;
            do {
              iVar5 = (uint)*puVar4 * 0xc;
              if (pCVar3 != (CVector3f *)(&DAT_02684234 + iVar5)) {
                ((CVector3f *)&pCVar3->x)->x =
                     ((STriangleVertices *)(&DAT_02684234 + iVar5))->vertices[0].x;
                pCVar3->y = *(float *)(&DAT_02684238 + iVar5);
                pCVar3->z = *(float *)(&DAT_0268423c + iVar5);
              }
              *(uint *)((int)&local_94.x + iVar6) = (uint)puVar4[3] << 8;
              pCVar3 = pCVar3 + 1;
              puVar1 = puVar4 + 6;
              iVar5 = iVar6 + 4;
              puVar4 = puVar4 + 1;
              *(uint *)((int)&local_88.x + iVar6) = (uint)*puVar1 << 8;
              iVar6 = iVar5;
            } while (iVar5 != 0xc);
            core_fire_cpp_CFireEffect_createGlassParticle_FUN_0048b1c0
                      (0x01C08D04,&local_b8,&local_94,&local_88,
                       local_28[*(int *)(*(int *)(local_30 + 0x90) + local_14)].textures,local_1c);
          }
          iVar9 = iVar9 + 0x12;
          local_14 = local_14 + 4;
          iVar8 = iVar8 + 1;
          iVar6 = local_24;
        } while (iVar8 < local_24);
      }
      local_24 = iVar6;
      local_50 = local_50 + 0x60;
      local_48 = local_48 + 4;
      local_3c = local_3c + 1;
    } while (local_3c < this_ptr->texture_sets[0].textures[0x28].textures[0].base.type);
  }
  return;
}
