// Name: core_dmodel.cpp_CKeyFramedModel_snapRotationToAxis_FUN_0047c5f0
// Address: 0047c5f0
// Address Range: [[0047c5f0, 0047c92c] [0060c8a2, 0060c8c0]]
// Convention: __cdecl
// Signature: void __cdecl core_dmodel_cpp_CKeyFramedModel_snapRotationToAxis_FUN_0047c5f0(CKeyFramedModel *this_ptr,CVector3f *rotation_angles)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl core_dmodel_cpp_CKeyFramedModel_snapRotationToAxis_FUN_0047c5f0(CKeyFramedModel *this_ptr,CVector3f *rotation_angles)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  byte bVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar16;
  float10 fVar10;
  float10 fVar11;
  float10 fVar17;
  float10 fVar18;
  float10 fVar19;
  double dVar20;
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
  
  engine_special_cpp_clearScreen_FUN_005b3e70();
  engine_2d_c_drawText_FUN_00401fd0("Realign object",0,0);
  wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
  fVar6 = (float10)3.0517578125e-05;
  fVar7 = (float10)3.1415926535000001;
  fVar8 = (float10)((int)ROUND(ROUND((double)rotation_angles->x * 0.31830988619288902 * 32768)
                              ) + 0x2000U & 0xc000) * fVar6 * fVar7;
  fVar9 = (float10)fsin(fVar8);
  fVar16 = (float10)fcos(fVar8);
  fVar10 = (float10)((int)ROUND(ROUND((double)rotation_angles->z * 0.31830988619288902 * 32768
                                     )) + 0x2000U & 0xc000) * fVar6 * fVar7;
  fVar11 = (float10)fsin(fVar10);
  fVar17 = (float10)fcos(fVar10);
  fVar19 = (float10)((int)ROUND(ROUND((double)rotation_angles->y * 0.31830988619288902 * 32768
                                     )) + 0x2000U & 0xc000) * fVar6 * fVar7;
  fVar18 = (float10)fsin(fVar19);
  fVar19 = (float10)fcos(fVar19);
  fVar1 = (float)fVar16;
  fVar2 = (float)fVar11;
  fVar3 = (float)fVar9;
  fVar4 = (float)fVar17;
  fVar5 = (float)fVar18;
  fVar12 = (float)fVar19;
  local_24 = 0;
  iVar2 = 0;
  while (iVar1 = this_ptr->vertex_count * this_ptr->frame_count,
        iVar1 - local_24 != 0 && local_24 <= iVar1) {
    piVar3 = (int *)((int)&this_ptr->vertex_list->x + iVar2);
    fVar13 = (float)piVar3[1];
    fVar14 = (float)*piVar3;
    fVar15 = (float)piVar3[2];
    dVar20 = floor
                       ((double)((float)piVar3[2] *
                                 (float)(fVar19 * (float10)fVar3 * (float10)fVar2 +
                                        -(float10)fVar5 * (float10)fVar4) +
                                 (float)*piVar3 *
                                 (float)((float10)fVar12 * (float10)fVar4 +
                                        fVar18 * (float10)fVar3 * (float10)fVar2) +
                                 (float)piVar3[1] * (float)(fVar11 * (float10)fVar1) +
                                (float)0.5));
    *(int *)((int)&this_ptr->vertex_list->x + iVar2) = (int)ROUND(ROUND(dVar20));
    dVar20 = floor
                       ((double)(fVar14 * (-fVar12 * fVar2 +
                                          (float)(fVar18 * (float10)fVar3) * fVar4) +
                                 fVar13 * (float)(fVar17 * (float10)fVar1) +
                                 fVar15 * (fVar2 * fVar5 + (float)(fVar19 * (float10)fVar3) * fVar4)
                                + (float)0.5));
    *(int *)((int)&this_ptr->vertex_list->y + iVar2) = (int)ROUND(ROUND(dVar20));
    dVar20 = floor
                       ((double)(fVar14 * fVar5 * fVar1 + fVar13 * -fVar3 + fVar15 * fVar12 * fVar1
                                + (float)0.5));
    local_24 = local_24 + 1;
    *(int *)((int)&this_ptr->vertex_list->z + iVar2) = (int)ROUND(ROUND(dVar20));
    iVar2 = iVar2 + 0xc;
  }
  return;
}
