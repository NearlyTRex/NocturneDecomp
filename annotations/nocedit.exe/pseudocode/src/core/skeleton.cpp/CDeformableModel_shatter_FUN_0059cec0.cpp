// Name: core_skeleton.cpp_CDeformableModel_shatter_FUN_0059cec0
// Address: 0059cec0
// Address Range: [[0059cec0, 0059d454]]
// Convention: __cdecl
// Signature: void core_skeleton.cpp_CDeformableModel_shatter_FUN_0059cec0(CDeformableModel * this_ptr, CVector3f * center_position, CVector3f * orientation_vector, int lod_index, CVector3i * skinned_vertices, int * part_visibility_flags, int * texture_set_indices, int particle_lifetime)

#include "nocturne.h"

void __cdecl
core_skeleton_cpp_CDeformableModel_shatter_FUN_0059cec0
          (CDeformableModel *this_ptr,CVector3f *center_position,CVector3f *orientation_vector,
          int lod_index,CVector3i *skinned_vertices,int *part_visibility_flags,
          int *texture_set_indices,int particle_lifetime)

{
  ushort *puVar1;
  ushort uVar2;
  CVector3f *pCVar3;
  ushort *puVar4;
  int iVar5;
  int iVar6;
  BADSPACEBASE *in_ESP;
  int unaff_EBP;
  int iVar7;
  CVector3f *pCVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  byte *in_stack_00000024;
  int *in_stack_00000028;
  char local_b8;
  byte local_b0 [4];
  STriangleVertices SStack_ac;
  CVector3f local_88;
  byte local_7c [12];
  float local_70;
  float fStack_6c;
  CVector3f CStack_68;
  int local_58;
  float *local_54;
  int *local_4c;
  int local_48;
  int local_44;
  byte *local_40;
  byte *local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  float *local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  local_1c = 0xffff;
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
            ((CMatrix3x3f *)&stack0xffffff20,orientation_vector);
  if ((g_ShatterVertexArrayInitialized & 1) == 0) {
    g_ShatterVertexArrayInitialized = g_ShatterVertexArrayInitialized | 1;
    crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
              (g_ShatterVertexArray,3000,&g_CVectorTypeInfo);
  }
  if (3000 < (int)(&orientation_vector[3].z)[(int)part_visibility_flags]) {
    g_CurrentFilename = "..\\core\\skeleton.cpp";
    g_CurrentLineNumber = 0x748;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDeformableModel::shatter - too many vertices!");
  }
  pCVar8 = g_ShatterVertexArray;
  local_54 = &orientation_vector->x + (int)part_visibility_flags;
  iVar7 = 0;
  piVar10 = texture_set_indices;
  if (0 < (int)local_54[0xb]) {
    do {
      pCVar8->x = (float)*piVar10 * 0.00390625f;
      pCVar8->y = (float)piVar10[1] * 0.00390625f;
      pCVar8->z = (float)piVar10[2] * 0.00390625f;
      pCVar3 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                         ((CMatrix3x3f *)&stack0xffffff28,&CStack_68,pCVar8);
      local_7c._8_4_ = *(float *)lod_index + pCVar3->x;
      local_70 = *(float *)(lod_index + 4) + pCVar3->y;
      fStack_6c = *(float *)(lod_index + 8) + pCVar3->z;
      if (pCVar8 != (CVector3f *)(local_7c + 8)) {
        pCVar8->x = (float)local_7c._8_4_;
        pCVar8->y = local_70;
        pCVar8->z = fStack_6c;
      }
      pCVar8 = pCVar8 + 1;
      iVar7 = iVar7 + 1;
      piVar10 = piVar10 + 3;
    } while (iVar7 < (int)local_54[0xb]);
  }
  crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667(local_b0,3,&g_CVectorTypeInfo);
  local_18 = 0;
  local_38 = 0;
  if (0 < *(int *)(lod_index + 0x7140)) {
    local_2c = lod_index + (int)texture_set_indices * 4;
    local_54 = (float *)(lod_index + 0xc0);
    local_48 = (int)texture_set_indices * 4 + lod_index;
    local_40 = in_stack_00000024;
    local_4c = in_stack_00000028;
    local_28 = local_2c;
    do {
      local_34 = *(int *)(local_48 + 0x7164) + local_18;
      local_20 = local_54 + *local_4c * 0x5a0;
      if (((*local_40 & 1) != 0) && (local_18 < local_34)) {
        iVar11 = local_18 * 0x12;
        iVar7 = local_18 * 4;
        local_14 = local_34 * 4;
        do {
          puVar4 = (ushort *)(*(int *)(local_2c + 0x7c) + iVar11);
          pCVar8 = SStack_ac.vertices;
          iVar9 = 0;
          do {
            uVar2 = *puVar4;
            if (pCVar8 != g_ShatterVertexArray + uVar2) {
              pCVar8->x = g_ShatterVertexArray[uVar2].x;
              pCVar8->y = g_ShatterVertexArray[uVar2].y;
              pCVar8->z = g_ShatterVertexArray[uVar2].z;
            }
            pCVar8 = pCVar8 + 1;
            *(uint *)((int)&local_88.x + iVar9) = (uint)puVar4[3];
            iVar5 = iVar9 + 4;
            puVar1 = puVar4 + 6;
            puVar4 = puVar4 + 1;
            *(uint *)(local_7c + iVar9) = (uint)*puVar1;
            iVar9 = iVar5;
          } while (iVar5 != 0xc);
          core_fire_cpp_CFireEffect_createGlassParticle_FUN_004c7d00
                    (g_CFireEffectPtr,&SStack_ac,&local_88,(CVector3f *)local_7c,
                     (SMRGLTextureBasic *)
                     (local_20 + *(int *)(iVar7 + *(int *)(local_28 + 0x90)) * 0x12),unaff_EBP);
          iVar7 = iVar7 + 4;
          iVar11 = iVar11 + 0x12;
        } while (iVar7 < local_14);
      }
      local_40 = local_40 + 4;
      local_48 = local_48 + 0x60;
      local_38 = local_38 + 1;
      local_4c = local_4c + 1;
      local_18 = local_34;
    } while (local_38 < *(int *)(lod_index + 0x7140));
  }
  local_30 = 0;
  if (0 < *(int *)(lod_index + 0x7140)) {
    iVar7 = lod_index + (int)texture_set_indices * 4;
    local_58 = lod_index + 0xc0;
    local_44 = (int)texture_set_indices * 4 + lod_index;
    local_3c = in_stack_00000024;
    local_24 = iVar7;
    do {
      iVar11 = *(int *)(local_44 + 0x7178) + local_18;
      if (((*local_3c & 1) != 0) &&
         (local_1c = local_58 + in_stack_00000028[local_30] * 0x1680, local_18 < iVar11)) {
        iVar12 = local_18 * 0x12;
        iVar5 = local_18 << 2;
        iVar9 = local_18;
        local_18 = iVar11;
        do {
          puVar4 = (ushort *)(*(int *)(iVar7 + 0x7c) + iVar12);
          if ((in_stack_00000024
               [*(int *)(*(int *)(iVar7 + 0xa4) + (iVar9 - *(int *)(iVar7 + 0x54)) * 4) * 4] & 1) ==
              0) {
            pCVar8 = SStack_ac.vertices;
            iVar11 = 0;
            do {
              uVar2 = *puVar4;
              if (pCVar8 != g_ShatterVertexArray + uVar2) {
                pCVar8->x = g_ShatterVertexArray[uVar2].x;
                pCVar8->y = g_ShatterVertexArray[uVar2].y;
                pCVar8->z = g_ShatterVertexArray[uVar2].z;
              }
              *(uint *)((int)&local_88.x + iVar11) = (uint)puVar4[3] << 8;
              pCVar8 = pCVar8 + 1;
              puVar1 = puVar4 + 6;
              iVar6 = iVar11 + 4;
              puVar4 = puVar4 + 1;
              *(uint *)(local_7c + iVar11) = (uint)*puVar1 << 8;
              iVar11 = iVar6;
            } while (iVar6 != 0xc);
            core_fire_cpp_CFireEffect_createGlassParticle_FUN_004c7d00
                      (g_CFireEffectPtr,&SStack_ac,&local_88,(CVector3f *)local_7c,
                       (SMRGLTextureBasic *)
                       (*(int *)(*(int *)(local_24 + 0x90) + iVar5) * 0x48 + local_1c),unaff_EBP);
          }
          iVar12 = iVar12 + 0x12;
          iVar5 = iVar5 + 4;
          iVar9 = iVar9 + 1;
          iVar11 = local_18;
        } while (iVar9 < local_18);
      }
      local_18 = iVar11;
      local_44 = local_44 + 0x60;
      local_3c = local_3c + 4;
      local_30 = local_30 + 1;
    } while (local_30 < *(int *)(lod_index + 0x7140));
  }
  return;
}
