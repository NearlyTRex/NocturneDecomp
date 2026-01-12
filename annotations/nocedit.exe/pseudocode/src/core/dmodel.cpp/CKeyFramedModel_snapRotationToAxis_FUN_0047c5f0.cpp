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
  uint extraout_EAX;
  int iVar4;
  int extraout_EAX_00;
  int iVar5;
  int extraout_EBX;
  int extraout_EBX_00;
  int extraout_EBX_01;
  BADSPACEBASE *in_ESP;
  int *piVar6;
  int *piVar7;
  byte bVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  double value;
  double dVar15;
  int aiStackY_1078 [1016];
  uint uVar17;
  ulonglong uVar16;
  float fVar18;
  ulonglong uVar19;
  uint local_7c;
  int iStack_78;
  float local_2c;
  float local_18;
  float fStack_14;
  
  bVar8 = 0;
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  engine_2d_c_drawText_FUN_00401fd0("Realign object",0,0);
  wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
  fVar9 = (float10)0.31830988619288902;
  fVar10 = (float10)32768;
  fVar11 = (float10)rotation_angles->z * fVar9 * fVar10;
  fVar14 = (float10)rotation_angles->y * fVar9 * fVar10;
  uVar19 = 0x47c649;
  crt_math_c_round_FUN_005fe6b0((double)((float10)rotation_angles->x * fVar9 * fVar10));
  uVar17 = 0x47c65d;
  crt_math_c_round_FUN_005fe6b0((double)fVar11);
  uVar16 = CONCAT44 /* combine 2-byte values */(uVar17,0x47c678);
  dVar15 = crt_math_c_round_FUN_005fe6b0((double)fVar14);
  local_7c = (int)ROUND(dVar15) + 0x2000U & 0xc000;
  fVar9 = (float10)3.0517578125e-05;
  fVar10 = (float10)3.1415926535000001;
  fVar11 = (float10)iStack_78 * fVar9 * fVar10;
  fVar14 = (float10)fsin(fVar11);
  fVar11 = (float10)fcos(fVar11);
  fVar12 = (float10)(extraout_EAX & 0xc000) * fVar9 * fVar10;
  fVar13 = (float10)fsin(fVar12);
  fVar12 = (float10)fcos(fVar12);
  fVar10 = (float10)local_7c * fVar9 * fVar10;
  fVar9 = (float10)fsin(fVar10);
  fVar10 = (float10)fcos(fVar10);
  fVar1 = (float)fVar14;
  fVar2 = (float)fVar9;
  fVar3 = (float)((float10)(float)fVar10 * (float10)(float)fVar12 +
                 fVar9 * (float10)fVar1 * (float10)(float)fVar13);
  iVar5 = 0;
  local_2c = 0.0;
  while( true ) {
    fVar18 = (float)uVar19;
    iVar4 = this_ptr->vertex_count * this_ptr->frame_count;
    if (iVar4 - (int)local_2c == 0 || iVar4 < (int)local_2c) break;
    piVar6 = (int *)((int)this_ptr->vertex_list + iVar5);
    piVar7 = piVar6 + (uint)bVar8 * -2 + 1;
    iVar5 = *piVar6;
    iVar4 = (int)((ulonglong)uVar16 >> 0x20);
    *(int *)(&stack0xffffff74 + (uint)bVar8 * -8) = *piVar7;
    *(int *)(&stack0xffffff78 + (uint)bVar8 * -8 + (uint)bVar8 * -8) = piVar7[(uint)bVar8 * -2 + 1];
    dVar15 = crt_math_c_floor_FUN_005feb90
                       ((double)((float)(int)fVar18 *
                                 (float)(fVar10 * (float10)fVar1 * (float10)(float)fVar13 +
                                        -(float10)fVar2 * (float10)(float)fVar12) +
                                 (float)iVar5 * fVar3 +
                                 (float)iVar4 * (float)(fVar13 * (float10)(float)fVar11) +
                                (float)0.5));
    fVar14 = (float10)local_18 * (float10)local_2c + (float10)fVar2 * (float10)fStack_14;
    fVar9 = (float10)fVar1 * (float10)(fVar2 * (float)fVar11);
    dVar15 = crt_math_c_round_FUN_005fe6b0(dVar15);
    *(int *)((int)this_ptr->vertex_list + extraout_EBX) = (int)ROUND(dVar15);
    dVar15 = crt_math_c_floor_FUN_005feb90((double)(fVar14 + fVar9 + (float10)0.5));
    fVar14 = (float10)local_18 * (float10)-fVar1 + (float10)fVar2 * (float10)fVar18;
    fVar9 = (float10)fVar1 * (float10)fVar3;
    uVar19 = 0x47c8d2;
    dVar15 = crt_math_c_round_FUN_005fe6b0(dVar15);
    *(int *)(extraout_EAX_00 + extraout_EBX_00 + 4) = (int)ROUND(dVar15);
    dVar15 = (double)(fVar14 + fVar9 + (float10)0.5);
    value = crt_math_c_floor_FUN_005feb90(dVar15);
    iVar5 = extraout_EBX_01 + 0xc;
    uVar16 = CONCAT44 /* combine 2-byte values */((int)((ulonglong)dVar15 >> 0x20),0x47c90a);
    dVar15 = crt_math_c_round_FUN_005fe6b0(value);
    local_2c = (float)((int)local_2c + 1);
    *(int *)((int)this_ptr->vertex_list + extraout_EBX_01 + 8) = (int)ROUND(dVar15);
  }
  return;
}
