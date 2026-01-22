// Name: core_dmodel.cpp_CKeyFramedModel_snapRotationToAxis_FUN_0047c5f0
// Address: 0047c5f0
// Address Range: [[0047c5f0, 0047c92c]]
// Convention: __cdecl
// Signature: void core_dmodel.cpp_CKeyFramedModel_snapRotationToAxis_FUN_0047c5f0(CKeyFramedModel * this_ptr, CVector3f * rotation_angles)

#include "nocturne.h"

void __cdecl
core_dmodel_cpp_CKeyFramedModel_snapRotationToAxis_FUN_0047c5f0
          (CKeyFramedModel *this_ptr,CVector3f *rotation_angles)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint extraout_EAX;
  float fVar5;
  int extraout_EAX_00;
  int iVar6;
  int extraout_EBX;
  int extraout_EBX_00;
  int extraout_EBX_01;
  int *piVar7;
  int *piVar8;
  byte bVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  double value;
  double dVar16;
  double dVar17;
  int aiStackY_107c [1012];
  uint uVar19;
  ulonglong uVar18;
  int iVar20;
  float fVar21;
  float local_7c;
  float local_48;
  float local_44;
  float local_34;
  
  bVar9 = 0;
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  engine_2d_c_drawText_FUN_00401fd0("Realign object",0,0);
  wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
  fVar10 = (float10)0.31830988619288902;
  fVar11 = (float10)32768;
  fVar12 = (float10)rotation_angles->z * fVar10 * fVar11;
  fVar15 = (float10)rotation_angles->y * fVar10 * fVar11;
  value = 2.32399438402403e-317;
  crt_math_c_round_FUN_005fe6b0((double)((float10)rotation_angles->x * fVar10 * fVar11));
  uVar19 = 0x47c65d;
  crt_math_c_round_FUN_005fe6b0((double)fVar12);
  uVar18 = CONCAT44(uVar19,0x47c678);
  dVar16 = crt_math_c_round_FUN_005fe6b0((double)fVar15);
  fVar5 = (float)((int)ROUND(dVar16) + 0x2000U & 0xc000);
  fVar10 = (float10)3.0517578125e-05;
  fVar11 = (float10)3.1415926535000001;
  fVar12 = (float10)(int)local_7c * fVar10 * fVar11;
  fVar15 = (float10)fsin(fVar12);
  fVar12 = (float10)fcos(fVar12);
  fVar13 = (float10)(extraout_EAX & 0xc000) * fVar10 * fVar11;
  fVar14 = (float10)fsin(fVar13);
  fVar13 = (float10)fcos(fVar13);
  fVar11 = (float10)(int)fVar5 * fVar10 * fVar11;
  fVar10 = (float10)fsin(fVar11);
  fVar11 = (float10)fcos(fVar11);
  fVar1 = (float)fVar12;
  fVar2 = (float)fVar14;
  fVar3 = (float)fVar13;
  fVar4 = (float)fVar10;
  local_44 = fVar4 * fVar1;
  fVar12 = fVar11 * (float10)(float)fVar15;
  local_34 = (float)((float10)(float)fVar11 * (float10)fVar3 +
                    fVar10 * (float10)(float)fVar15 * (float10)fVar2);
  iVar6 = 0;
  local_48 = (float)(fVar12 * (float10)fVar2 + -(float10)fVar4 * (float10)fVar3);
  while( true ) {
    fVar21 = SUB84(value,0);
    if (this_ptr->vertex_count * this_ptr->frame_count < 1) break;
    piVar7 = (int *)((int)this_ptr->vertex_list + iVar6);
    piVar8 = piVar7 + (uint)bVar9 * -2 + 1;
    iVar6 = *piVar7;
    iVar20 = (int)((ulonglong)uVar18 >> 0x20);
    *(int *)(&stack0xffffff70 + (uint)bVar9 * -8) = *piVar8;
    *(int *)(&stack0xffffff74 + (uint)bVar9 * -8 + (uint)bVar9 * -8) = piVar8[(uint)bVar9 * -2 + 1];
    value = crt_math_c_floor_FUN_005feb90
                      ((double)((float)(int)fVar21 * local_48 +
                                (float)iVar6 * local_34 +
                                (float)iVar20 * (float)(fVar14 * (float10)fVar1) +
                               (float)0.5));
    fVar15 = (float10)fVar21 * (float10)((float)fVar11 * fVar1) +
             (float10)(int)fVar21 * (float10)iVar6;
    fVar10 = (float10)(float)(extraout_EAX & 0xc000) * (float10)fVar3;
    dVar16 = crt_math_c_round_FUN_005fe6b0(value);
    local_34 = (float)(int)ROUND(dVar16);
    *(float *)((int)this_ptr->vertex_list + extraout_EBX) = local_34;
    dVar16 = crt_math_c_floor_FUN_005feb90((double)(fVar15 + fVar10 + (float10)0.5));
    fVar15 = (float10)local_34 * (float10)(fVar2 * fVar4 + (float)fVar12 * fVar3) +
             (float10)local_7c * (float10)local_44;
    fVar10 = (float10)fVar5 * (float10)(float)(fVar14 * (float10)fVar1);
    dVar17 = crt_math_c_round_FUN_005fe6b0(dVar16);
    uVar19 = (uint)((ulonglong)dVar16 >> 0x20);
    *(int *)(extraout_EAX_00 + extraout_EBX_00 + 4) = (int)ROUND(dVar17);
    dVar16 = crt_math_c_floor_FUN_005feb90((double)(fVar15 + fVar10 + (float10)0.5));
    iVar6 = extraout_EBX_01 + 0xc;
    uVar18 = CONCAT44(uVar19,0x47c90a);
    dVar16 = crt_math_c_round_FUN_005fe6b0(dVar16);
    local_44 = (float)(int)ROUND(dVar16);
    local_48 = (float)((int)local_48 + 1);
    *(float *)((int)this_ptr->vertex_list + extraout_EBX_01 + 8) = local_44;
  }
  return;
}
