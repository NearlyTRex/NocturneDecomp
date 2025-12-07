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
  CVector3i **ppCVar2;
  CVector3i **ppCVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  BADSPACEBASE *in_ESP;
  int *piVar8;
  int *piVar9;
  byte bVar10;
  float10 in_ST0;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  double dVar17;
  int aiStackY_1070 [1016];
  CVector3i **local_84;
  int local_80;
  CKeyFramedModel *local_7c;
  uint local_74;
  int local_70;
  uint local_6c;
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
  int local_20;
  float local_1c;
  float local_18;
  
  bVar10 = 0;
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  engine_2d_c_drawText_FUN_00401fd0("Realign object",0,0);
  local_84 = (CVector3i **)0x47c61a;
  wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
  fVar11 = (float10)0.31830988619288902;
  fVar1 = rotation_angles->y;
  fVar12 = (float10)32768;
  fVar13 = (float10)rotation_angles->z * fVar11 * fVar12;
  local_80 = 0x47c649;
  dVar17 = crt_math_c_round_FUN_005fe6b0((double)((float10)rotation_angles->x * fVar11 * fVar12));
  local_68 = (float)(int)ROUND(dVar17);
  uVar5 = (int)local_68 + 0x2000;
  local_84 = (CVector3i **)0x47c65d;
  dVar17 = crt_math_c_round_FUN_005fe6b0((double)fVar13);
  local_6c = uVar5 & 0xc000;
  local_68 = (float)(int)ROUND(dVar17);
  uVar5 = (int)local_68 + 0x2000;
  dVar17 = crt_math_c_round_FUN_005fe6b0((double)((float10)fVar1 * fVar11 * fVar12));
  local_6c = uVar5 & 0xc000;
  local_74 = (int)ROUND(dVar17) + 0x2000U & 0xc000;
  fVar11 = (float10)3.0517578125e-05;
  fVar12 = (float10)3.1415926535000001;
  fVar13 = (float10)local_70 * fVar11 * fVar12;
  fVar14 = (float10)fsin(fVar13);
  fVar13 = (float10)fcos(fVar13);
  fVar15 = (float10)local_6c * fVar11 * fVar12;
  fVar16 = (float10)fsin(fVar15);
  fVar15 = (float10)fcos(fVar15);
  fVar12 = (float10)local_74 * fVar11 * fVar12;
  fVar11 = (float10)fsin(fVar12);
  fVar12 = (float10)fcos(fVar12);
  local_54 = (float)fVar13;
  local_4c = (float)fVar16;
  local_5c = (float)fVar14;
  local_48 = (float)fVar15;
  local_58 = (float)fVar11;
  local_38 = local_58 * local_54;
  local_50 = (float)fVar12;
  local_34 = local_50 * local_54;
  local_28 = (float)((float10)local_50 * (float10)local_48 +
                    fVar11 * (float10)local_5c * (float10)local_4c);
  local_2c = -local_5c;
  local_60 = (float)(fVar12 * (float10)local_5c);
  local_40 = (float)(fVar16 * (float10)local_54);
  local_18 = (float)(fVar15 * (float10)local_54);
  local_24 = 0;
  local_30 = -local_50 * local_4c + (float)(fVar11 * (float10)local_5c) * local_48;
  local_44 = local_4c * local_58 + local_60 * local_48;
  local_3c = (float)(fVar12 * (float10)local_5c * (float10)local_4c +
                    -(float10)local_58 * (float10)local_48);
  iVar7 = 0;
  while( true ) {
    iVar6 = this_ptr->vertex_count * this_ptr->frame_count;
    if (iVar6 - local_24 == 0 || iVar6 < local_24) break;
    piVar8 = (int *)((int)this_ptr->vertex_list + iVar7);
    piVar9 = piVar8 + (uint)bVar10 * -2 + 1;
    iVar6 = *piVar8;
    (&local_84)[(uint)bVar10 * -2] = (CVector3i **)*piVar9;
    (&local_80)[(uint)bVar10 * -2 + (uint)bVar10 * -2] = piVar9[(uint)bVar10 * -2 + 1];
    iVar4 = local_80;
    local_64 = (float)(int)local_84;
    local_1c = (float)iVar6;
    local_20 = local_80;
    local_68 = (float)local_80;
    dVar17 = crt_math_c_floor_FUN_005feb90((double)in_ST0);
    fVar11 = (float10)dVar17;
    local_7c = this_ptr;
    local_80 = iVar4;
    dVar17 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(this_ptr,iVar4));
    fVar1 = (float)(int)ROUND(dVar17);
    ppCVar2 = this_ptr->vertex_list;
    *(float *)((int)ppCVar2 + iVar7) = fVar1;
    local_28 = fVar1;
    dVar17 = crt_math_c_floor_FUN_005feb90((double)fVar11);
    fVar11 = (float10)dVar17;
    ppCVar3 = this_ptr->vertex_list;
    local_84 = ppCVar2;
    dVar17 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(ppCVar2,fVar1));
    iVar6 = (int)ppCVar3 + iVar7;
    fVar1 = (float)(int)ROUND(dVar17);
    *(float *)(iVar6 + 4) = fVar1;
    local_30 = fVar1;
    dVar17 = crt_math_c_floor_FUN_005feb90((double)fVar11);
    in_ST0 = (float10)dVar17;
    dVar17 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(iVar6,fVar1));
    local_24 = local_24 + 1;
    *(int *)((int)this_ptr->vertex_list + iVar7 + 8) = (int)ROUND(dVar17);
    iVar7 = iVar7 + 0xc;
  }
  return;
}
