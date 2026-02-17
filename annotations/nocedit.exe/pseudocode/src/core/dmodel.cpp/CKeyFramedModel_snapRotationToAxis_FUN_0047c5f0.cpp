// Name: core_dmodel.cpp_CKeyFramedModel_snapRotationToAxis_FUN_0047c5f0
// Address: 0047c5f0
// Address Range: [[0047c5f0, 0047c92c]]
// Convention: __cdecl
// Signature: void __cdecl core_dmodel_cpp_CKeyFramedModel_snapRotationToAxis_FUN_0047c5f0(CKeyFramedModel *this_ptr,CVector3f *rotation_angles)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl core_dmodel_cpp_CKeyFramedModel_snapRotationToAxis_FUN_0047c5f0(CKeyFramedModel *this_ptr,CVector3f *rotation_angles)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  byte bVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  int aiStackY_1070 [1015];
  int local_88;
  int local_84;
  int local_80;
  double local_7c;
  uint local_74;
  uint local_70;
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
  
  bVar5 = 0;
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  engine_2d_c_drawText_FUN_00401fd0("Realign object",0,0);
  wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
  local_70 = (int)ROUND(ROUND((double)rotation_angles->x * 0.31830988619288902 * 32768)) +
             0x2000U & 0xc000;
  local_6c = (int)ROUND(ROUND((double)rotation_angles->z * 0.31830988619288902 * 32768)) +
             0x2000U & 0xc000;
  local_74 = (int)ROUND(ROUND((double)rotation_angles->y * 0.31830988619288902 * 32768)) +
             0x2000U & 0xc000;
  fVar6 = (float10)3.0517578125e-05;
  fVar7 = (float10)3.1415926535000001;
  fVar8 = (float10)local_70 * fVar6 * fVar7;
  fVar9 = (float10)fsin(fVar8);
  fVar8 = (float10)fcos(fVar8);
  fVar10 = (float10)local_6c * fVar6 * fVar7;
  fVar11 = (float10)fsin(fVar10);
  fVar10 = (float10)fcos(fVar10);
  fVar7 = (float10)local_74 * fVar6 * fVar7;
  fVar6 = (float10)fsin(fVar7);
  fVar7 = (float10)fcos(fVar7);
  local_54 = (float)fVar8;
  local_4c = (float)fVar11;
  local_5c = (float)fVar9;
  local_48 = (float)fVar10;
  local_58 = (float)fVar6;
  local_38 = local_58 * local_54;
  local_50 = (float)fVar7;
  local_34 = local_50 * local_54;
  local_28 = (float)((float10)local_50 * (float10)local_48 +
                    fVar6 * (float10)local_5c * (float10)local_4c);
  local_2c = -local_5c;
  local_60 = (float)(fVar7 * (float10)local_5c);
  local_40 = (float)(fVar11 * (float10)local_54);
  local_18 = (float)(fVar10 * (float10)local_54);
  local_24 = 0;
  local_30 = -local_50 * local_4c + (float)(fVar6 * (float10)local_5c) * local_48;
  local_44 = local_4c * local_58 + local_60 * local_48;
  local_3c = (float)(fVar7 * (float10)local_5c * (float10)local_4c +
                    -(float10)local_58 * (float10)local_48);
  iVar2 = 0;
  while (iVar1 = this_ptr->vertex_count * this_ptr->frame_count,
        iVar1 - local_24 != 0 && local_24 <= iVar1) {
    piVar3 = (int *)((int)this_ptr->vertex_list + iVar2);
    piVar4 = piVar3 + (uint)bVar5 * -2 + 1;
    local_88 = *piVar3;
    *(int *)((int)&stack0xffffff7c + (uint)bVar5 * -8) = *piVar4;
    *(int *)((int)&stack0xffffff80 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
         piVar4[(uint)bVar5 * -2 + 1];
    local_64 = (float)local_84;
    local_1c = (float)local_88;
    local_20 = local_80;
    local_68 = (float)local_80;
    local_7c = floor
                         ((double)((float)local_80 * local_3c +
                                   (float)local_88 * local_28 + (float)local_84 * local_40 +
                                  (float)0.5));
    local_20 = (int)ROUND(ROUND(local_7c));
    *(int *)((int)this_ptr->vertex_list + iVar2) = local_20;
    local_7c = floor
                         ((double)(local_1c * local_30 + local_64 * local_18 + local_68 * local_44 +
                                  (float)0.5));
    local_20 = (int)ROUND(ROUND(local_7c));
    *(int *)((int)this_ptr->vertex_list + iVar2 + 4) = local_20;
    local_7c = floor
                         ((double)(local_1c * local_38 + local_64 * local_2c + local_68 * local_34 +
                                  (float)0.5));
    local_24 = local_24 + 1;
    *(int *)((int)this_ptr->vertex_list + iVar2 + 8) = (int)ROUND(ROUND(local_7c));
    iVar2 = iVar2 + 0xc;
  }
  return;
}
