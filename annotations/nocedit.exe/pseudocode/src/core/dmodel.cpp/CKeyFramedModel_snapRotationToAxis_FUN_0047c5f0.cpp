// Name: core_dmodel.cpp_CKeyFramedModel_snapRotationToAxis_FUN_0047c5f0
// Address: 0047c5f0
// Address Range: [[0047c5f0, 0047c92c]]
// Convention: __cdecl
// Signature: void __cdecl core_dmodel_cpp_CKeyFramedModel_snapRotationToAxis_FUN_0047c5f0 (CKeyFramedModel *this_ptr,CVector3f *rotation_angles)

#include "nocturne.h"

void __cdecl
core_dmodel_cpp_CKeyFramedModel_snapRotationToAxis_FUN_0047c5f0
          (CKeyFramedModel *this_ptr,CVector3f *rotation_angles)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  CVector3i **ppCVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  int extraout_EBX;
  int extraout_EBX_00;
  int extraout_EBX_01;
  int *piVar9;
  int *piVar10;
  byte bVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  float10 fVar17;
  double value;
  double dVar18;
  double dVar19;
  int aiStackY_107c [1012];
  uint uVar21;
  ulonglong uVar20;
  int iVar22;
  float fVar23;
  float local_7c;
  float local_48;
  float local_44;
  float local_34;
  
  bVar11 = 0;
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  engine_2d_c_drawText_FUN_00401fd0("Realign object",0,0);
  wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
  fVar12 = (float10)0.31830988619288902;
  fVar1 = rotation_angles->y;
  fVar13 = (float10)32768;
  fVar14 = (float10)rotation_angles->z * fVar12 * fVar13;
  value = 2.32399438402403e-317;
  crt_math_c_round_FUN_005fe6b0((double)((float10)rotation_angles->x * fVar12 * fVar13));
  uVar21 = 0x47c65d;
  dVar18 = crt_math_c_round_FUN_005fe6b0((double)fVar14);
  uVar20 = CONCAT44(uVar21,0x47c678);
  dVar19 = crt_math_c_round_FUN_005fe6b0((double)((float10)fVar1 * fVar12 * fVar13));
  fVar6 = (float)((int)ROUND(dVar18) + 0x2000U & 0xc000);
  fVar7 = (float)((int)ROUND(dVar19) + 0x2000U & 0xc000);
  fVar12 = (float10)3.0517578125e-05;
  fVar13 = (float10)3.1415926535000001;
  fVar14 = (float10)(int)local_7c * fVar12 * fVar13;
  fVar15 = (float10)fsin(fVar14);
  fVar14 = (float10)fcos(fVar14);
  fVar16 = (float10)(int)fVar6 * fVar12 * fVar13;
  fVar17 = (float10)fsin(fVar16);
  fVar16 = (float10)fcos(fVar16);
  fVar13 = (float10)(int)fVar7 * fVar12 * fVar13;
  fVar12 = (float10)fsin(fVar13);
  fVar13 = (float10)fcos(fVar13);
  fVar1 = (float)fVar14;
  fVar2 = (float)fVar17;
  fVar3 = (float)fVar16;
  fVar4 = (float)fVar12;
  local_44 = fVar4 * fVar1;
  fVar14 = fVar13 * (float10)(float)fVar15;
  local_34 = (float)((float10)(float)fVar13 * (float10)fVar3 +
                    fVar12 * (float10)(float)fVar15 * (float10)fVar2);
  iVar8 = 0;
  local_48 = (float)(fVar14 * (float10)fVar2 + -(float10)fVar4 * (float10)fVar3);
  while( true ) {
    fVar23 = SUB84(value,0);
    if (this_ptr->vertex_count * this_ptr->frame_count < 1) break;
    piVar9 = (int *)((int)this_ptr->vertex_list + iVar8);
    piVar10 = piVar9 + (uint)bVar11 * -2 + 1;
    iVar8 = *piVar9;
    iVar22 = (int)((ulonglong)uVar20 >> 0x20);
    *(int *)(&stack0xffffff70 + (uint)bVar11 * -8) = *piVar10;
    *(int *)(&stack0xffffff74 + (uint)bVar11 * -8 + (uint)bVar11 * -8) =
         piVar10[(uint)bVar11 * -2 + 1];
    value = crt_math_c_floor_FUN_005feb90
                      ((double)((float)(int)fVar23 * local_48 +
                                (float)iVar8 * local_34 +
                                (float)iVar22 * (float)(fVar17 * (float10)fVar1) +
                               (float)0.5));
    fVar12 = (float10)fVar6 * (float10)fVar3;
    dVar18 = crt_math_c_round_FUN_005fe6b0(value);
    local_34 = (float)(int)ROUND(dVar18);
    *(float *)((int)this_ptr->vertex_list + extraout_EBX) = local_34;
    dVar18 = crt_math_c_floor_FUN_005feb90
                       ((double)((float10)fVar23 * (float10)((float)fVar13 * fVar1) +
                                 (float10)(int)fVar23 * (float10)iVar8 + fVar12 +
                                (float10)0.5));
    fVar12 = (float10)fVar7 * (float10)(float)(fVar17 * (float10)fVar1);
    ppCVar5 = this_ptr->vertex_list;
    dVar19 = crt_math_c_round_FUN_005fe6b0(dVar18);
    uVar21 = (uint)((ulonglong)dVar18 >> 0x20);
    *(int *)((int)ppCVar5 + extraout_EBX_00 + 4) = (int)ROUND(dVar19);
    dVar18 = crt_math_c_floor_FUN_005feb90
                       ((double)((float10)local_34 *
                                 (float10)(fVar2 * fVar4 + (float)fVar14 * fVar3) +
                                 (float10)local_7c * (float10)local_44 + fVar12 +
                                (float10)0.5));
    iVar8 = extraout_EBX_01 + 0xc;
    uVar20 = CONCAT44(uVar21,0x47c90a);
    dVar18 = crt_math_c_round_FUN_005fe6b0(dVar18);
    local_44 = (float)(int)ROUND(dVar18);
    local_48 = (float)((int)local_48 + 1);
    *(float *)((int)this_ptr->vertex_list + extraout_EBX_01 + 8) = local_44;
  }
  return;
}
