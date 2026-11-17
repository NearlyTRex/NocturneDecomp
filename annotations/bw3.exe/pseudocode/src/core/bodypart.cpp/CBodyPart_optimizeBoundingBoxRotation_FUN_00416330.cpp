// Name: core_bodypart.cpp_CBodyPart_optimizeBoundingBoxRotation_FUN_00416330
// Address: 00416330
// Address Range: [[00416330, 004166c4]]
// Convention: __cdecl
// Signature: void __cdecl core_bodypart_cpp_CBodyPart_optimizeBoundingBoxRotation_FUN_00416330(CBodyPart *this_ptr,CVector3i *out_bbox_min,CVector3i *out_bbox_max)

#include "nocturne.h"

void __cdecl core_bodypart_cpp_CBodyPart_optimizeBoundingBoxRotation_FUN_00416330(CBodyPart *this_ptr,CVector3i *out_bbox_min,CVector3i *out_bbox_max)

{
  CVector3i *pCVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  int unaff_EBX;
  float fVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  byte bVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  float afStackY_109c [12];
  int aiStackY_106c [994];
  uint uStack_d8;
  uint uStack_d4;
  uint uStack_d0;
  uint uStack_cc;
  uint uStack_c8;
  uint uStack_c4;
  byte local_b8 [32];
  float local_98;
  uint uStack_94;
  float local_90;
  float fStack_8c;
  uint uStack_88;
  float local_84;
  int aiStack_80 [2];
  float local_78;
  int local_74 [2];
  CVector3f local_6c;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_24;
  CBodyPart *local_20;
  float *local_1c;
  float *local_18;
  int local_14;
  
  bVar16 = 0;
  local_40 = 0x7fffffff;
  local_48 = 0;
  do {
    local_44 = local_48;
    local_3c = 0;
    do {
      local_14 = local_44;
      local_6c.x = (float)local_3c * 3.141593f * 0.08333334f;
      local_6c.y = (float)local_44 * 3.141593f * 0.08333334f;
      local_6c.z = 0.0;
      uStack_c4 = 0x4163b4;
      core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045b550
                ((CMatrix3x3f *)local_b8,&local_6c);
      fVar12 = (float)local_b8._4_4_ * 65536.0f;
      fVar5 = (float)local_b8._8_4_ * 65536.0f;
      fVar6 = (float)local_b8._12_4_ * 65536.0f;
      fVar7 = (float)local_b8._16_4_ * 65536.0f;
      fVar8 = (float)local_b8._20_4_ * 65536.0f;
      fVar9 = (float)local_b8._24_4_ * 65536.0f;
      dVar17 = round((double)((float)local_b8._0_4_ * 65536.0f));
      local_24 = (int)ROUND(dVar17);
      fVar10 = (float)local_b8._24_4_ * 65536.0f;
      dVar17 = round((double)fVar12);
      local_24 = (int)ROUND(dVar17);
      fVar12 = (float)local_b8._24_4_ * 65536.0f;
      iVar13 = 0;
      local_60 = 0x7fffffff;
      local_6c.z = NAN;
      local_6c.y = NAN;
      local_54 = 0x80000001;
      local_58 = 0x80000001;
      local_5c = 0x80000001;
      iVar15 = *(int *)(unaff_EBX + 0x174);
      uStack_c4 = 0x416466;
      dVar17 = round((double)fVar5);
      uStack_c8 = 0x41646d;
      dVar18 = round((double)fVar6);
      uStack_cc = 0x416474;
      dVar19 = round((double)fVar7);
      uStack_d0 = 0x41647b;
      dVar20 = round((double)fVar8);
      uStack_d4 = 0x416482;
      dVar21 = round((double)fVar9);
      uStack_d8 = 0x416489;
      dVar22 = round((double)fVar10);
      local_b8._0_4_ = 6.005382e-39;
      dVar23 = round((double)fVar12);
      local_54 = (int)ROUND(dVar17);
      local_50 = (int)ROUND(dVar18);
      local_4c = (int)ROUND(dVar19);
      local_48 = (int)ROUND(dVar20);
      local_58 = (int)ROUND(dVar21);
      local_5c = (int)ROUND(dVar22);
      local_3c = (int)ROUND(dVar23);
      if (0 < iVar15) {
        iVar15 = 0;
        do {
          pCVar1 = local_20->vertices;
          lVar2 = (longlong)local_44 * (longlong)*(int *)((int)&pCVar1->x + iVar15);
          lVar3 = (longlong)(int)ROUND(dVar18) * (longlong)*(int *)((int)&pCVar1->y + iVar15);
          lVar4 = (longlong)(int)ROUND(dVar21) * (longlong)*(int *)((int)&pCVar1->z + iVar15);
          fVar12 = (float)(((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
                           ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10) +
                          ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10));
          lVar2 = (longlong)local_40 * (longlong)*(int *)((int)&pCVar1->x + iVar15);
          lVar3 = (longlong)(int)ROUND(dVar19) * (longlong)*(int *)((int)&pCVar1->y + iVar15);
          lVar4 = (longlong)(int)ROUND(dVar22) * (longlong)*(int *)((int)&pCVar1->z + iVar15);
          iVar14 = ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
                   ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10) +
                   ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10);
          lVar2 = (longlong)(int)ROUND(dVar17) * (longlong)*(int *)((int)&pCVar1->x + iVar15);
          lVar3 = (longlong)(int)ROUND(dVar20) * (longlong)*(int *)((int)&pCVar1->y + iVar15);
          local_38 = ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
                     ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
          lVar2 = (longlong)(int)ROUND(dVar23) * (longlong)*(int *)((int)&pCVar1->z + iVar15);
          iVar11 = ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) + local_38;
          if ((int)fVar12 < (int)local_84) {
            local_84 = fVar12;
          }
          if ((int)local_78 < (int)fVar12) {
            local_78 = fVar12;
          }
          if (iVar14 < aiStack_80[0]) {
            aiStack_80[0] = iVar14;
          }
          if (local_74[0] < iVar14) {
            local_74[0] = iVar14;
          }
          if (iVar11 < aiStack_80[1]) {
            aiStack_80[1] = iVar11;
          }
          if (local_74[1] < iVar11) {
            local_74[1] = iVar11;
          }
          iVar13 = iVar13 + 1;
          iVar15 = iVar15 + 0xc;
        } while (iVar13 < local_20->vertex_count);
      }
      fVar12 = (float)((int)local_78 - (int)local_84);
      if ((int)local_78 - (int)local_84 < local_74[0] - aiStack_80[0]) {
        fVar12 = (float)(local_74[0] - aiStack_80[0]);
      }
      if ((int)fVar12 < (int)local_6c.z) {
        local_b8._4_4_ = local_84;
        *(int *)(local_b8 + (uint)bVar16 * -8 + 8) = aiStack_80[(uint)bVar16 * -2];
        *(int *)(local_b8 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 0xc) =
             aiStack_80[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1];
        local_6c.z = fVar12;
        local_b8._16_4_ = local_78;
        *(int *)(local_b8 + (uint)bVar16 * -8 + 0x14) = local_74[(uint)bVar16 * -2];
        *(int *)(local_b8 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 0x18) =
             local_74[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1];
        if ((float *)(local_b8 + 0x1c) != &local_90) {
          local_b8._28_4_ = local_90;
          local_98 = fStack_8c;
          uStack_94 = uStack_88;
        }
      }
      local_60 = local_60 + 2;
    } while (local_60 != 0x18);
    local_6c.x = (float)((int)local_6c.x + 2);
  } while (local_6c.x != 3.36312e-44);
  *local_1c = (float)local_b8._4_4_;
  local_1c[(uint)bVar16 * -2 + 1] = *(float *)(local_b8 + (uint)bVar16 * -8 + 8);
  (local_1c + (uint)bVar16 * -2 + 1)[(uint)bVar16 * -2 + 1] =
       *(float *)(local_b8 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 0xc);
  *local_18 = (float)local_b8._16_4_;
  local_18[(uint)bVar16 * -2 + 1] = *(float *)(local_b8 + (uint)bVar16 * -8 + 0x14);
  (local_18 + (uint)bVar16 * -2 + 1)[(uint)bVar16 * -2 + 1] =
       *(float *)(local_b8 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 0x18);
  core_bodypart_cpp_CBodyPart_applyRotation_FUN_00415e30(local_20,(CVector3f *)(local_b8 + 0x1c));
  return;
}
