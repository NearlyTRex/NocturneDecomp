// Name: core_bodypart.cpp_CBodyPart_FUN_0041aa40
// Address: 0041aa40
// Address Range: [[0041aa40, 0041adcb]]
// Convention: __cdecl
// Signature: void __cdecl core_bodypart_cpp_CBodyPart_FUN_0041aa40(CBodyPart *this_ptr)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x0041ad84) */
/* WARNING: Removing unreachable block (ram,0x0041ad97) */
/* WARNING: Type propagation algorithm not settling */

void __cdecl core_bodypart_cpp_CBodyPart_FUN_0041aa40(CBodyPart *this_ptr)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  int iVar4;
  int *piVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  byte bVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  double dVar16;
  double dVar17;
  float afStackY_1090 [1001];
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
  uint local_18;
  
  local_44 = 0x7fffffff;
  local_48 = 0;
  bVar9 = 0;
  local_c0 = 0;
  do {
    local_18 = 0;
    local_54.x = (float)local_c0 * (float)3.1415926535000001 * (float)0.083333333333333301;
    local_54.y = (float)3.1415926535000001 * 0.0 * (float)0.083333333333333301;
    local_54.z = 0.0;
    core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(&local_b8,&local_54);
    fVar10 = (float10)local_b8.m[0].y * (float10)65536.0f;
    fVar11 = (float10)local_b8.m[0].z * (float10)65536.0f;
    fVar12 = (float10)local_b8.m[1].x * (float10)65536.0f;
    fVar13 = (float10)local_b8.m[1].y * (float10)65536.0f;
    fVar3 = local_b8.m[1].z * 65536.0f;
    fVar14 = (float10)local_b8.m[2].x * (float10)65536.0f;
    dVar16 = round((double)(local_b8.m[0].x * 65536.0f));
    local_2c = (int)ROUND(dVar16);
    fVar15 = (float10)local_b8.m[2].x * (float10)65536.0f;
    dVar16 = round((double)fVar10);
    local_2c = (int)ROUND(dVar16);
    fVar10 = (float10)local_b8.m[2].x * (float10)65536.0f;
    local_60 = 0x7fffffff;
    iStack_64 = 0x7fffffff;
    iStack_68 = 0x7fffffff;
    local_78 = -1.4013e-45;
    fStack_7c = -1.4013e-45;
    fStack_80 = -1.4013e-45;
    iVar4 = *(int *)(this_ptr->unk + 0x1c);
    iVar8 = 0;
    dVar16 = round((double)fVar11);
    fVar11 = (float10)dVar16;
    dVar16 = round((double)fVar12);
    fVar12 = (float10)dVar16;
    dVar16 = round((double)fVar13);
    dVar17 = round((double)fVar3);
    fVar13 = (float10)dVar17;
    dVar17 = round((double)fVar14);
    fVar14 = (float10)dVar17;
    dVar17 = round((double)fVar15);
    fVar15 = (float10)dVar17;
    dVar17 = round((double)fVar10);
    local_60 = (int)ROUND(fVar11);
    local_44 = (int)ROUND(fVar12);
    local_58 = (int)ROUND(dVar16);
    local_54.y = (float)(int)ROUND(fVar13);
    local_54.x = (float)(int)ROUND(fVar14);
    local_5c = (int)ROUND(fVar15);
    iStack_64 = (int)ROUND(dVar17);
    if (0 < iVar4) {
      local_40 = 0;
      do {
        piVar5 = (int *)(*(int *)(this_ptr->unk + 0x20) + local_40);
        lVar1 = (longlong)(int)ROUND(fVar12) * (longlong)piVar5[1];
        lVar2 = (longlong)(int)ROUND(fVar14) * (longlong)piVar5[2];
        fVar6 = (float)(((uint)((longlong)(int)local_54.z * (longlong)*piVar5) >> 0x10 |
                        (int)((ulonglong)((longlong)(int)local_54.z * (longlong)*piVar5) >> 0x20) <<
                        0x10) + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
                       ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10));
        lVar1 = (longlong)(int)ROUND(dVar16) * (longlong)piVar5[1];
        lVar2 = (longlong)(int)ROUND(fVar15) * (longlong)piVar5[2];
        fVar7 = (float)(((uint)((longlong)local_48 * (longlong)*piVar5) >> 0x10 |
                        (int)((ulonglong)((longlong)local_48 * (longlong)*piVar5) >> 0x20) << 0x10)
                        + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
                       ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10));
        lVar1 = (longlong)(int)ROUND(fVar11) * (longlong)*piVar5;
        lVar2 = (longlong)(int)ROUND(fVar13) * (longlong)piVar5[1];
        local_3c = ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
                   ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
        lVar1 = (longlong)(int)ROUND(dVar17) * (longlong)piVar5[2];
        fVar3 = (float)(((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) + local_3c);
        if ((int)fVar6 < (int)local_84) {
          local_84 = fVar6;
        }
        if ((int)local_b8.m[2].y < (int)fVar6) {
          local_b8.m[2].y = fVar6;
        }
        if ((int)fVar7 < (int)fStack_80) {
          fStack_80 = fVar7;
        }
        if ((int)local_b8.m[2].z < (int)fVar7) {
          local_b8.m[2].z = fVar7;
        }
        if ((int)fVar3 < (int)fStack_7c) {
          fStack_7c = fVar3;
        }
        if ((int)afStack_94[0] < (int)fVar3) {
          afStack_94[0] = fVar3;
        }
        iVar8 = iVar8 + 1;
        local_40 = local_40 + 0xc;
      } while (iVar8 < *(int *)(this_ptr->unk + 0x1c));
    }
    iVar4 = (int)local_b8.m[2].y - (int)local_84;
    if ((int)local_b8.m[2].y - (int)local_84 < (int)local_b8.m[2].z - (int)fStack_80) {
      iVar4 = (int)local_b8.m[2].z - (int)fStack_80;
    }
    if (iVar4 < iStack_68) {
      local_b8.m[1].y = local_84;
      *(float *)((int)&local_b8 + (uint)bVar9 * -8 + 0x14) = afStack_94[(uint)bVar9 * -2 + 5];
      *(float *)((int)&local_b8 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 0x18) =
           (&fStack_7c)[(uint)bVar9 * -2 + (uint)bVar9 * -2];
      iStack_68 = iVar4;
      afStack_94[1] = local_b8.m[2].y;
      afStack_94[(uint)bVar9 * -2 + 2] = *(float *)((int)&local_b8 + (uint)bVar9 * -8 + 0x20);
      afStack_94[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 3] =
           afStack_94[(uint)bVar9 * -2 + (uint)bVar9 * -2];
      if (&local_b8.m[0].y != &local_78) {
        local_b8.m[0].y = local_78;
        local_b8.m[0].z = local_74;
        local_b8.m[1].x = local_70;
      }
    }
    local_c0 = 0x41aba0;
  } while( true );
}
