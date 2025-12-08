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
  uint extraout_EAX;
  uint extraout_EAX_00;
  int iVar1;
  int extraout_EAX_01;
  int iVar2;
  int extraout_EBX;
  int extraout_EBX_00;
  int extraout_EBX_01;
  BADSPACEBASE *in_ESP;
  int *piVar3;
  int *piVar4;
  byte bVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  double dVar12;
  double dVar13;
  int aiStackY_1070 [1012];
  int iVar14;
  int local_84;
  double local_80;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  int local_24;
  float local_20;
  float local_1c;
  float local_18;
  
  bVar5 = 0;
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  engine_2d_c_drawText_FUN_00401fd0("Realign object",0,0);
  wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
  fVar6 = (float10)0.31830988619288902;
  fVar7 = (float10)32768;
  fVar8 = (float10)rotation_angles->z * fVar6 * fVar7;
  fVar11 = (float10)rotation_angles->y * fVar6 * fVar7;
  local_80 = (double)CONCAT44 /* combine 2-byte values */(local_80._4_4_,0x47c649);
  dVar12 = crt_math_c_round_FUN_005fe6b0((double)((float10)rotation_angles->x * fVar6 * fVar7));
  local_68 = (float)(int)ROUND(dVar12);
  local_84 = 0x47c65d;
  dVar13 = crt_math_c_round_FUN_005fe6b0((double)fVar8);
  local_6c = (float)(extraout_EAX & 0xc000);
  local_68 = (float)(int)ROUND(dVar13);
  dVar12 = (double)CONCAT44 /* combine 2-byte values */(local_84,0x47c678);
  dVar13 = crt_math_c_round_FUN_005fe6b0((double)fVar11);
  local_6c = (float)(extraout_EAX_00 & 0xc000);
  local_74 = (float)((int)ROUND(dVar13) + 0x2000U & 0xc000);
  fVar6 = (float10)3.0517578125e-05;
  fVar7 = (float10)3.1415926535000001;
  fVar8 = (float10)(int)local_70 * fVar6 * fVar7;
  fVar11 = (float10)fsin(fVar8);
  fVar8 = (float10)fcos(fVar8);
  fVar9 = (float10)(int)local_6c * fVar6 * fVar7;
  fVar10 = (float10)fsin(fVar9);
  fVar9 = (float10)fcos(fVar9);
  fVar7 = (float10)(int)local_74 * fVar6 * fVar7;
  fVar6 = (float10)fsin(fVar7);
  fVar7 = (float10)fcos(fVar7);
  local_54 = (float)fVar8;
  local_4c = (float)fVar10;
  local_5c = (float)fVar11;
  local_48 = (float)fVar9;
  local_58 = (float)fVar6;
  local_38 = local_58 * local_54;
  local_50 = (float)fVar7;
  local_34 = local_50 * local_54;
  local_28 = (float)((float10)local_50 * (float10)local_48 +
                    fVar6 * (float10)local_5c * (float10)local_4c);
  local_2c = -local_5c;
  local_60 = (float)(fVar7 * (float10)local_5c);
  local_40 = (float)(fVar10 * (float10)local_54);
  local_18 = (float)(fVar9 * (float10)local_54);
  iVar2 = 0;
  local_24 = 0;
  local_30 = -local_50 * local_4c + (float)(fVar6 * (float10)local_5c) * local_48;
  local_44 = local_4c * local_58 + local_60 * local_48;
  local_3c = (float)(fVar7 * (float10)local_5c * (float10)local_4c +
                    -(float10)local_58 * (float10)local_48);
  while( true ) {
    iVar1 = this_ptr->vertex_count * this_ptr->frame_count;
    if (iVar1 - local_24 == 0 || iVar1 < local_24) break;
    piVar3 = (int *)((int)this_ptr->vertex_list + iVar2);
    piVar4 = piVar3 + (uint)bVar5 * -2 + 1;
    iVar2 = *piVar3;
    local_84 = (int)((ulonglong)dVar12 >> 0x20);
    *(int *)((int)&stack0xffffff7c + (uint)bVar5 * -8) = *piVar4;
    iVar14 = iVar2;
    *(int *)(&local_80 + (-(uint)bVar5 - (uint)bVar5)) = piVar4[(uint)bVar5 * -2 + 1];
    local_64 = (float)local_84;
    local_1c = (float)iVar14;
    local_20 = local_80._0_4_;
    local_68 = (float)(int)local_80._0_4_;
    local_80 = crt_math_c_floor_FUN_005feb90
                         ((double)((float)(int)local_80._0_4_ * local_3c +
                                   (float)iVar14 * local_28 + (float)local_84 * local_40 +
                                  (float)0.5));
    fVar7 = (float10)local_20 * (float10)local_34 + (float10)local_68 * (float10)local_1c;
    fVar6 = (float10)local_6c * (float10)local_48;
    dVar13 = crt_math_c_round_FUN_005fe6b0(local_80);
    local_28 = (float)(int)ROUND(dVar13);
    *(float *)((int)this_ptr->vertex_list + extraout_EBX) = local_28;
    dVar12 = crt_math_c_floor_FUN_005feb90((double)(fVar7 + fVar6 + (float10)0.5));
    fVar7 = (float10)local_28 * (float10)local_44 + (float10)local_70 * (float10)local_38;
    fVar6 = (float10)local_74 * (float10)local_40;
    dVar13 = crt_math_c_round_FUN_005fe6b0(dVar12);
    local_30 = (float)(int)ROUND(dVar13);
    *(float *)(extraout_EAX_01 + extraout_EBX_00 + 4) = local_30;
    dVar13 = crt_math_c_floor_FUN_005feb90((double)(fVar7 + fVar6 + (float10)0.5));
    iVar2 = extraout_EBX_01 + 0xc;
    dVar13 = crt_math_c_round_FUN_005fe6b0(dVar13);
    local_24 = local_24 + 1;
    *(int *)((int)this_ptr->vertex_list + extraout_EBX_01 + 8) = (int)ROUND(dVar13);
  }
  return;
}
