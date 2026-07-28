// Name: core_bodypart.cpp_CBodyPart_optimizeBoundingBoxRotation_FUN_00417730
// Address: 00417730
// Address Range: [[00417730, 00417abb]]
// Convention: __cdecl
// Signature: void __cdecl core_bodypart_cpp_CBodyPart_optimizeBoundingBoxRotation_FUN_00417730(CBodyPart *this_ptr,CVector3i *out_bbox_min,CVector3i *out_bbox_max)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Removing unreachable block (ram,0x00417a74) */
/* WARNING: Removing unreachable block (ram,0x00417a87) */

void __cdecl core_bodypart_cpp_CBodyPart_optimizeBoundingBoxRotation_FUN_00417730(CBodyPart *this_ptr,CVector3i *out_bbox_min,CVector3i *out_bbox_max)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  int *piVar9;
  float fVar10;
  float fVar11;
  int iVar12;
  byte bVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  float afStackY_1090 [1001];
  uint uStack_e0;
  uint uStack_dc;
  uint uStack_d8;
  uint uStack_d4;
  uint uStack_d0;
  uint uStack_cc;
  int local_c0;
  CMatrix3x3f local_b8;
  float afStack_94 [4];
  float local_84;
  float fStack_80;
  float fStack_7c;
  float local_78;
  float local_74;
  float local_70;
  int iStack_68;
  int iStack_64;
  int local_60;
  int local_5c;
  int local_58;
  CVector3f local_54;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_2c;
  int local_18;
  
  local_44 = 0x7fffffff;
  local_48 = 0;
  bVar13 = 0;
  local_c0 = 0;
  do {
    local_18 = 0;
    local_54.x = (float)local_c0 * (float)3.1415926535000001 * (float)0.083333333333333301;
    local_54.y = (float)3.1415926535000001 * 0.0 * (float)0.083333333333333301;
    local_54.z = 0.0;
    uStack_cc = 0x4177b7;
    core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0(&local_b8,&local_54);
    fVar7 = local_b8.m[0].y * 65536.0f;
    fVar10 = local_b8.m[0].z * 65536.0f;
    fVar11 = local_b8.m[1].x * 65536.0f;
    fVar3 = local_b8.m[1].y * 65536.0f;
    fVar4 = local_b8.m[1].z * 65536.0f;
    fVar5 = local_b8.m[2].x * 65536.0f;
    dVar14 = round((double)(local_b8.m[0].x * 65536.0f));
    local_2c = (int)ROUND(dVar14);
    fVar6 = local_b8.m[2].x * 65536.0f;
    dVar14 = round((double)fVar7);
    local_2c = (int)ROUND(dVar14);
    fVar7 = local_b8.m[2].x * 65536.0f;
    local_60 = 0x7fffffff;
    iStack_64 = 0x7fffffff;
    iStack_68 = 0x7fffffff;
    local_78 = -1.4013e-45;
    fStack_7c = -1.4013e-45;
    fStack_80 = -1.4013e-45;
    iVar8 = this_ptr->vertex_count;
    iVar12 = 0;
    uStack_cc = 0x417864;
    dVar14 = round((double)fVar10);
    uStack_d0 = 0x41786b;
    dVar15 = round((double)fVar11);
    uStack_d4 = 0x417872;
    dVar16 = round((double)fVar3);
    uStack_d8 = 0x417879;
    dVar17 = round((double)fVar4);
    uStack_dc = 0x417880;
    dVar18 = round((double)fVar5);
    uStack_e0 = 0x417887;
    dVar19 = round((double)fVar6);
    dVar20 = round((double)fVar7);
    local_60 = (int)ROUND(dVar14);
    local_44 = (int)ROUND(dVar15);
    local_58 = (int)ROUND(dVar16);
    local_54.y = (float)(int)ROUND(dVar17);
    local_54.x = (float)(int)ROUND(dVar18);
    local_5c = (int)ROUND(dVar19);
    iStack_64 = (int)ROUND(dVar20);
    if (0 < iVar8) {
      local_40 = 0;
      do {
        piVar9 = (int *)((int)&this_ptr->vertices->x + local_40);
        lVar1 = (longlong)(int)ROUND(dVar15) * (longlong)piVar9[1];
        lVar2 = (longlong)(int)ROUND(dVar18) * (longlong)piVar9[2];
        fVar10 = (float)(((uint)((longlong)(int)local_54.z * (longlong)*piVar9) >> 0x10 |
                         (int)((ulonglong)((longlong)(int)local_54.z * (longlong)*piVar9) >> 0x20)
                         << 0x10) + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10)
                        + ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10));
        lVar1 = (longlong)(int)ROUND(dVar16) * (longlong)piVar9[1];
        lVar2 = (longlong)(int)ROUND(dVar19) * (longlong)piVar9[2];
        fVar11 = (float)(((uint)((longlong)local_48 * (longlong)*piVar9) >> 0x10 |
                         (int)((ulonglong)((longlong)local_48 * (longlong)*piVar9) >> 0x20) << 0x10)
                         + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
                        ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10));
        lVar1 = (longlong)(int)ROUND(dVar14) * (longlong)*piVar9;
        lVar2 = (longlong)(int)ROUND(dVar17) * (longlong)piVar9[1];
        local_3c = ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
                   ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
        lVar1 = (longlong)(int)ROUND(dVar20) * (longlong)piVar9[2];
        fVar7 = (float)(((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) + local_3c);
        if ((int)fVar10 < (int)local_84) {
          local_84 = fVar10;
        }
        if ((int)local_b8.m[2].y < (int)fVar10) {
          local_b8.m[2].y = fVar10;
        }
        if ((int)fVar11 < (int)fStack_80) {
          fStack_80 = fVar11;
        }
        if ((int)local_b8.m[2].z < (int)fVar11) {
          local_b8.m[2].z = fVar11;
        }
        if ((int)fVar7 < (int)fStack_7c) {
          fStack_7c = fVar7;
        }
        if ((int)afStack_94[0] < (int)fVar7) {
          afStack_94[0] = fVar7;
        }
        iVar12 = iVar12 + 1;
        local_40 = local_40 + 0xc;
      } while (iVar12 < this_ptr->vertex_count);
    }
    iVar8 = (int)local_b8.m[2].y - (int)local_84;
    if ((int)local_b8.m[2].y - (int)local_84 < (int)local_b8.m[2].z - (int)fStack_80) {
      iVar8 = (int)local_b8.m[2].z - (int)fStack_80;
    }
    if (iVar8 < iStack_68) {
      local_b8.m[1].y = local_84;
      *(float *)((int)&local_b8 + (uint)bVar13 * -8 + 0x14) = afStack_94[(uint)bVar13 * -2 + 5];
      *(float *)((int)&local_b8 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 0x18) =
           (&fStack_7c)[(uint)bVar13 * -2 + (uint)bVar13 * -2];
      iStack_68 = iVar8;
      afStack_94[1] = local_b8.m[2].y;
      afStack_94[(uint)bVar13 * -2 + 2] = *(float *)((int)&local_b8 + (uint)bVar13 * -8 + 0x20);
      afStack_94[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 3] =
           afStack_94[(uint)bVar13 * -2 + (uint)bVar13 * -2];
      if (&local_b8.m[0].y != &local_78) {
        local_b8.m[0].y = local_78;
        local_b8.m[0].z = local_74;
        local_b8.m[1].x = local_70;
      }
    }
    local_c0 = 0x417890;
  } while( true );
}
