// Name: core_skeleton.cpp_CDeformableModel_shatter_FUN_0054afb0
// Address: 0054afb0
// Address Range: [[0054afb0, 0054b5aa]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModel_shatter_FUN_0054afb0(CDeformableModel *this_ptr,CVector3f *center_position,CVector3f *orientation_vector,int lod_index,CVector3i *skinned_vertices,int *part_visibility_flags,int *texture_set_indices)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_skeleton_cpp_CDeformableModel_shatter_FUN_0054afb0(CDeformableModel *this_ptr,CVector3f *center_position,CVector3f *orientation_vector,int lod_index,CVector3i *skinned_vertices,int *part_visibility_flags,int *texture_set_indices)

{
  ushort *puVar1;
  CVector3f *pCVar2;
  ushort *puVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  byte bVar9;
  float afStackY_1090 [990];
  CMatrix3x3f local_100;
  STriangleVertices local_d8;
  CVector3i local_b4;
  float local_a8;
  float local_a4 [4];
  float local_94;
  float local_90;
  CVector3i local_84;
  float local_78;
  float local_74 [2];
  STextureSet *local_6c;
  STextureSet *local_68;
  int local_64;
  byte *local_60;
  int local_5c;
  byte *local_58;
  int local_54;
  int *local_50;
  CVector3i *local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  STextureSet *local_2c;
  STextureSet *local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  bVar9 = 0;
  local_1c = 0xffff;
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045b550(&local_100,orientation_vector);
  if ((DAT_0272af40 & 1) == 0) {
    DAT_0272af40 = DAT_0272af40 | 1;
    __arrinit(&DAT_027222a0,3000,&g_CVectorTypeInfo);
  }
  if (3000 < this_ptr->vertex_count[lod_index]) {
    _DAT_01d71de0 = "..\\core\\skeleton.cpp";
    _DAT_01d71de4 = 0x75e;
    core_main_c_FUN_004e4330("CDeformableModel::shatter - too many vertices!");
  }
  local_48 = 0;
  pfVar5 = (float *)&DAT_027222a0;
  local_64 = (int)this_ptr->lod_info + lod_index * 4 + -4;
  local_4c = skinned_vertices;
  if (0 < *(int *)(local_64 + 0x2c)) {
    do {
      *pfVar5 = (float)local_4c->x * _DAT_005e4760;
      pfVar5[1] = (float)local_4c->y * _DAT_005e4760;
      pfVar5[2] = (float)local_4c->z * _DAT_005e4760;
      core_dirmat_cpp_FUN_0045b800(&local_100,pfVar5);
      local_a8 = local_90;
      local_a4[(uint)bVar9 * -2] = local_a4[(uint)bVar9 * -2 + 6];
      local_a4[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
           local_a4[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7];
      local_78 = center_position->x + local_a8;
      local_74[0] = center_position->y + local_a4[0];
      local_74[1] = center_position->z + local_a4[1];
      local_a4[2] = local_78;
      local_a4[(uint)bVar9 * -2 + 3] = local_74[(uint)bVar9 * -2];
      local_a4[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
           local_74[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
      if (pfVar5 != local_a4 + 2) {
        *pfVar5 = local_a4[2];
        pfVar5[1] = local_a4[3];
        pfVar5[2] = local_94;
      }
      pfVar5 = pfVar5 + 3;
      local_4c = local_4c + 1;
      local_48 = local_48 + 1;
    } while (local_48 < *(int *)(local_64 + 0x2c));
  }
  __arrinit(&local_d8,3,&g_CVectorTypeInfo);
  local_24 = 0;
  local_44 = 0;
  if (0 < this_ptr->num_parts) {
    local_38 = (int)this_ptr->lod_info + lod_index * 4 + -4;
    local_68 = this_ptr->texture_sets;
    local_54 = (int)this_ptr->lod_info + lod_index * 4 + -4;
    local_60 = (byte *)part_visibility_flags;
    local_50 = texture_set_indices;
    local_30 = local_38;
    do {
      local_40 = *(int *)(local_54 + 0xc24) + local_24;
      local_2c = local_68 + *local_50;
      if (((*local_60 & 1) != 0) && (local_24 < local_40)) {
        iVar7 = local_24 * 0x12;
        iVar6 = local_24 * 4;
        local_20 = local_40 * 4;
        do {
          puVar3 = (ushort *)(*(int *)(local_38 + 0x7c) + iVar7);
          pCVar2 = local_d8.vertices;
          iVar8 = 0;
          do {
            iVar4 = (uint)*puVar3 * 0xc;
            if (pCVar2 != (CVector3f *)(&DAT_027222a0 + iVar4)) {
              ((CVector3f *)&pCVar2->x)->x =
                   ((STriangleVertices *)(&DAT_027222a0 + iVar4))->vertices[0].x;
              pCVar2->y = *(float *)(&DAT_027222a4 + iVar4);
              pCVar2->z = *(float *)(&DAT_027222a8 + iVar4);
            }
            pCVar2 = pCVar2 + 1;
            *(uint *)((int)&local_b4.x + iVar8) = (uint)puVar3[3];
            iVar4 = iVar8 + 4;
            puVar1 = puVar3 + 6;
            puVar3 = puVar3 + 1;
            *(uint *)((int)&local_84.x + iVar8) = (uint)*puVar1;
            iVar8 = iVar4;
          } while (iVar4 != 0xc);
          core_fire_cpp_CFireEffect_createGlassParticle_FUN_004a2780
                    (0x01C73654,&local_d8,&local_b4,&local_84,
                     (SMRGLTextureBasic *)
                     (local_2c->textures + *(int *)(iVar6 + *(int *)(local_30 + 0x90))),local_1c);
          iVar6 = iVar6 + 4;
          iVar7 = iVar7 + 0x12;
        } while (iVar6 < local_20);
      }
      local_60 = local_60 + 4;
      local_50 = local_50 + 1;
      local_54 = local_54 + 0x60;
      local_44 = local_44 + 1;
      local_24 = local_40;
    } while (local_44 < this_ptr->num_parts);
  }
  local_3c = 0;
  if (0 < this_ptr->num_parts) {
    local_34 = (int)this_ptr->lod_info + lod_index * 4 + -4;
    local_6c = this_ptr->texture_sets;
    local_5c = (int)this_ptr->lod_info + lod_index * 4 + -4;
    local_58 = (byte *)part_visibility_flags;
    local_18 = local_34;
    do {
      iVar6 = *(int *)(local_5c + 0xc38) + local_24;
      if (((*local_58 & 1) != 0) &&
         (local_28 = local_6c + texture_set_indices[local_3c], local_24 < iVar6)) {
        iVar8 = local_24 * 0x12;
        local_14 = local_24 << 2;
        iVar7 = local_24;
        local_24 = iVar6;
        do {
          puVar3 = (ushort *)(*(int *)(local_18 + 0x7c) + iVar8);
          if ((*(byte *)(part_visibility_flags +
                        *(int *)(*(int *)(local_18 + 0xa4) + (iVar7 - *(int *)(local_18 + 0x54)) * 4
                                )) & 1) == 0) {
            pCVar2 = local_d8.vertices;
            iVar6 = 0;
            do {
              iVar4 = (uint)*puVar3 * 0xc;
              if (pCVar2 != (CVector3f *)(&DAT_027222a0 + iVar4)) {
                ((CVector3f *)&pCVar2->x)->x =
                     ((STriangleVertices *)(&DAT_027222a0 + iVar4))->vertices[0].x;
                pCVar2->y = *(float *)(&DAT_027222a4 + iVar4);
                pCVar2->z = *(float *)(&DAT_027222a8 + iVar4);
              }
              *(uint *)((int)&local_b4.x + iVar6) = (uint)puVar3[3] << 8;
              pCVar2 = pCVar2 + 1;
              puVar1 = puVar3 + 6;
              iVar4 = iVar6 + 4;
              puVar3 = puVar3 + 1;
              *(uint *)((int)&local_84.x + iVar6) = (uint)*puVar1 << 8;
              iVar6 = iVar4;
            } while (iVar4 != 0xc);
            core_fire_cpp_CFireEffect_createGlassParticle_FUN_004a2780
                      (0x01C73654,&local_d8,&local_b4,&local_84,
                       (SMRGLTextureBasic *)
                       (local_28->textures + *(int *)(*(int *)(local_34 + 0x90) + local_14)),
                       local_1c);
          }
          iVar8 = iVar8 + 0x12;
          local_14 = local_14 + 4;
          iVar7 = iVar7 + 1;
          iVar6 = local_24;
        } while (iVar7 < local_24);
      }
      local_24 = iVar6;
      local_5c = local_5c + 0x60;
      local_58 = local_58 + 4;
      local_3c = local_3c + 1;
    } while (local_3c < this_ptr->num_parts);
  }
  return;
}
