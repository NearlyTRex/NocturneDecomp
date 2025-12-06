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
  int iVar1;
  uint extraout_EAX_00;
  uint extraout_EAX_01;
  int extraout_EAX_02;
  uint extraout_EDX;
  uint extraout_EDX_00;
  uint extraout_EDX_01;
  uint extraout_EDX_02;
  int iVar2;
  BADSPACEBASE *in_ESP;
  uint *puVar3;
  byte bVar4;
  float10 in_ST0;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  double dVar11;
  int aiStackY_1058 [1010];
  uint local_84;
  uint local_80;
  uint local_7c;
  int local_6c;
  int local_68;
  int local_60;
  uint local_5c;
  int local_58;
  uint local_54;
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
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float fStack_14;
  int iVar12;
  
  bVar4 = 0;
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  engine_2d_c_drawText_FUN_00401fd0("Realign object",0,0);
  local_84 = 0x47c61a;
  wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
  fVar5 = (float10)0.31830988619288902;
  fVar6 = (float10)32768;
  fVar7 = (float10)rotation_angles->x * fVar5 * fVar6;
  fVar8 = (float10)rotation_angles->z * fVar5 * fVar6;
  fVar6 = (float10)rotation_angles->y * fVar5 * fVar6;
  local_80 = 0x47c649;
  dVar11 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(extraout_EDX,extraout_EAX));
  local_60 = (int)ROUND(fVar7);
  local_7c = 0x47c65d;
  dVar11 = crt_math_c_round_FUN_005fe6b0
                     ((double)CONCAT44 /* combine 2-byte values */((int)((ulonglong)dVar11 >> 0x20),local_60 + 0x2000));
  local_5c = SUB84 /* extract 2-byte value */(dVar11,0) & 0xc000;
  local_58 = (int)ROUND(fVar8);
  dVar11 = crt_math_c_round_FUN_005fe6b0
                     ((double)CONCAT44 /* combine 2-byte values */((int)((ulonglong)dVar11 >> 0x20),local_58 + 0x2000));
  local_54 = SUB84 /* extract 2-byte value */(dVar11,0) & 0xc000;
  local_5c = (int)ROUND(fVar6) + 0x2000U & 0xc000;
  fVar5 = (float10)3.0517578125e-05;
  fVar7 = (float10)3.1415926535000001;
  fVar8 = (float10)local_58 * fVar5 * fVar7;
  fVar6 = (float10)fsin(fVar8);
  fVar8 = (float10)fcos(fVar8);
  fVar9 = (float10)local_54 * fVar5 * fVar7;
  fVar10 = (float10)fsin(fVar9);
  fVar9 = (float10)fcos(fVar9);
  fVar7 = (float10)local_5c * fVar5 * fVar7;
  fVar5 = (float10)fsin(fVar7);
  fVar7 = (float10)fcos(fVar7);
  local_3c = (float)fVar8;
  local_34 = (float)fVar10;
  local_44 = (float)fVar6;
  local_30 = (float)fVar9;
  local_40 = (float)fVar5;
  local_20 = local_40 * local_3c;
  local_38 = (float)fVar7;
  local_1c = local_38 * local_3c;
  fStack_14 = -local_44;
  local_48 = (float)(fVar7 * (float10)local_44);
  local_28 = (float)(fVar10 * (float10)local_3c);
  iVar12 = 0;
  local_18 = -local_38 * local_34 + (float)(fVar5 * (float10)local_44) * local_30;
  local_2c = local_34 * local_40 + local_48 * local_30;
  local_24 = (float)(fVar7 * (float10)local_44 * (float10)local_34 +
                    -(float10)local_40 * (float10)local_30);
  iVar2 = 0;
  while( true ) {
    iVar1 = this_ptr->vertex_count * this_ptr->frame_count;
    if (iVar1 - iVar12 == 0 || iVar1 < iVar12) break;
    puVar3 = (uint *)((int)this_ptr->vertex_list + (uint)bVar4 * -8 + iVar2 + 4);
    *(uint *)((int)&stack0xffffff94 + (uint)bVar4 * -8) = *puVar3;
    *(uint *)((int)&stack0xffffff98 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
         puVar3[(uint)bVar4 * -2 + 1];
    local_4c = (float)local_6c;
    local_50 = (float)local_68;
    local_7c = 0x47c842;
    dVar11 = crt_math_c_floor_FUN_005feb90((double)in_ST0);
    fVar5 = (float10)dVar11;
    fVar7 = (float10)(double)CONCAT44 /* combine 2-byte values */(extraout_EDX_00,extraout_EAX_00);
    crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(extraout_EDX_00,extraout_EAX_00));
    *(int *)((int)this_ptr->vertex_list + iVar2) = (int)ROUND(fVar7);
    local_7c = 0x47c899;
    dVar11 = crt_math_c_floor_FUN_005feb90((double)fVar5);
    fVar5 = (float10)dVar11;
    fVar7 = (float10)(double)CONCAT44 /* combine 2-byte values */(extraout_EDX_01,extraout_EAX_01);
    dVar11 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(extraout_EDX_01,this_ptr->vertex_list));
    *(int *)(SUB84 /* extract 2-byte value */(dVar11,0) + iVar2 + 4) = (int)ROUND(fVar7);
    local_7c = 0x47c8f3;
    dVar11 = crt_math_c_floor_FUN_005feb90((double)fVar5);
    in_ST0 = (float10)dVar11;
    fVar5 = (float10)(double)CONCAT44 /* combine 2-byte values */(extraout_EDX_02,extraout_EAX_02);
    local_68 = extraout_EAX_02;
    crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(extraout_EDX_02,extraout_EAX_02));
    iVar12 = iVar12 + 1;
    *(int *)((int)this_ptr->vertex_list + iVar2 + 8) = (int)ROUND(fVar5);
    iVar2 = iVar2 + 0xc;
  }
  return;
}
