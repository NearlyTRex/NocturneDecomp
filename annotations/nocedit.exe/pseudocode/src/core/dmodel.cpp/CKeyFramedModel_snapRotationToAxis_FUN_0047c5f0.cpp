// Name: core_dmodel.cpp_CKeyFramedModel_snapRotationToAxis_FUN_0047c5f0
// Address: 0047c5f0
// Address Range: [[0047c5f0, 0047c92c]]
// Convention: __cdecl
// Signature: void __cdecl core_dmodel_cpp_CKeyFramedModel_snapRotationToAxis_FUN_0047c5f0(CKeyFramedModel *this_ptr,CVector3f *rotation_angles)

#include "nocturne.h"

void __cdecl core_dmodel_cpp_CKeyFramedModel_snapRotationToAxis_FUN_0047c5f0(CKeyFramedModel *this_ptr,CVector3f *rotation_angles)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  CVector3i **ppCVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  byte bVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  float10 fVar17;
  float10 fVar18;
  float10 fVar19;
  double dVar20;
  double dVar21;
  int aiStackY_107c [1014];
  int iVar22;
  float fVar23;
  uint local_88;
  int local_7c;
  float local_3c;
  float local_34;
  int local_30;
  
  bVar12 = 0;
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  engine_2d_c_drawText_FUN_00401fd0("Realign object",0,0);
  wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
  dVar20 = (double)rotation_angles->z * 0.31830988619288902 * 32768;
  dVar21 = (double)rotation_angles->y * 0.31830988619288902 * 32768;
  fVar23 = 6.591452e-39;
  round((double)rotation_angles->x * 0.31830988619288902 * 32768);
  iVar22 = 0x47c65d;
  dVar20 = round(dVar20);
  dVar21 = round(dVar21);
  fVar7 = (float)((int)ROUND(dVar20) + 0x2000U & 0xc000);
  fVar13 = (float10)3.0517578125e-05;
  fVar14 = (float10)3.1415926535000001;
  fVar15 = (float10)local_7c * fVar13 * fVar14;
  fVar16 = (float10)fsin(fVar15);
  fVar15 = (float10)fcos(fVar15);
  fVar17 = (float10)(int)fVar7 * fVar13 * fVar14;
  fVar18 = (float10)fsin(fVar17);
  fVar17 = (float10)fcos(fVar17);
  fVar14 = (float10)((int)ROUND(dVar21) + 0x2000U & 0xc000) * fVar13 * fVar14;
  fVar19 = (float10)fsin(fVar14);
  fVar13 = (float10)fcos(fVar14);
  fVar1 = (float)fVar15;
  fVar2 = (float)fVar18;
  fVar3 = (float)fVar17;
  fVar4 = (float)fVar19;
  fVar19 = fVar19 * (float10)(float)fVar16;
  fVar14 = fVar13 * (float10)(float)fVar16;
  local_34 = (float)((float10)(float)fVar13 * (float10)fVar3 + fVar19 * (float10)fVar2);
  local_30 = 0;
  local_3c = -(float)fVar13 * fVar2 + (float)fVar19 * fVar3;
  fVar5 = (float)(fVar14 * (float10)fVar2 + -(float10)fVar4 * (float10)fVar3);
  iVar9 = 0;
  while( true ) {
    iVar8 = this_ptr->vertex_count * this_ptr->frame_count;
    if (iVar8 - local_30 == 0 || iVar8 < local_30) break;
    piVar10 = (int *)((int)this_ptr->vertex_list + iVar9);
    piVar11 = piVar10 + (uint)bVar12 * -2 + 1;
    iVar8 = *piVar10;
    *(int *)(&stack0xffffff70 + (uint)bVar12 * -8) = *piVar11;
    *(int *)(&stack0xffffff74 + (uint)bVar12 * -8 + (uint)bVar12 * -8) =
         piVar11[(uint)bVar12 * -2 + 1];
    dVar21 = floor
                       ((double)((float)(int)fVar23 * fVar5 +
                                 (float)iVar8 * local_34 +
                                 (float)iVar22 * (float)(fVar18 * (float10)fVar1) +
                                (float)0.5));
    local_88 = SUB84(dVar21,0);
    dVar21 = round(dVar21);
    local_30 = (int)ROUND(dVar21);
    *(int *)((int)this_ptr->vertex_list + iVar9) = local_30;
    dVar21 = floor
                       ((double)((float)iVar8 * local_3c +
                                 (float)iVar22 * (float)(fVar17 * (float10)fVar1) +
                                 (float)(int)fVar23 * (fVar2 * fVar4 + (float)fVar14 * fVar3) +
                                (float)0.5));
    local_88 = (uint)((ulonglong)dVar21 >> 0x20);
    ppCVar6 = this_ptr->vertex_list;
    dVar21 = round(dVar21);
    local_34 = (float)(int)ROUND(dVar21);
    *(float *)((int)ppCVar6 + iVar9 + 4) = local_34;
    dVar21 = floor
                       ((double)(fVar23 * fVar5 + (float)(int)fVar23 * local_3c +
                                 fVar7 * fVar4 * fVar1 + (float)0.5));
    iVar22 = SUB84(dVar21,0);
    fVar23 = (float)((ulonglong)dVar21 >> 0x20);
    dVar21 = round(dVar21);
    local_3c = (float)((int)local_3c + 1);
    *(int *)((int)this_ptr->vertex_list + iVar9 + 8) = (int)ROUND(dVar21);
    iVar9 = iVar9 + 0xc;
  }
  return;
}
