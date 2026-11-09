// Name: core_charactr.cpp_FUN_0042ea10
// Address: 0042ea10
// Address Range: [[0042ea10, 0042f23e]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_FUN_0042ea10(CCharacter *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_charactr_cpp_FUN_0042ea10(CCharacter *this_ptr)

{
  char cVar1;
  CDemonRenderer *pCVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  byte bVar7;
  float10 fVar8;
  float10 fVar9;
  float afStackY_10d8 [1003];
  float local_120;
  float local_11c;
  SMRGLHeaderPrimitive local_118 [4];
  uint local_114;
  int local_110;
  int local_10c;
  int local_108;
  int local_104;
  int local_100;
  int local_fc;
  int local_f8;
  int local_f4;
  float local_f0;
  float afStack_ec [4];
  float local_dc;
  int local_d8;
  int local_d4;
  int local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  float local_84;
  float afStack_80 [4];
  float local_70;
  float local_5c;
  byte *local_58;
  byte *local_54;
  float local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  byte *local_38;
  byte *local_34;
  int local_30;
  int local_2c;
  byte *local_28;
  byte *local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  bVar7 = 0;
  local_110 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_00483e60(DAT_00612560);
  if (local_110 != 0) {
    return;
  }
  pcVar4 = "7headlite.raw" + 1;
  pcVar5 = &DAT_007c6168;
  do {
    cVar1 = *pcVar4;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  local_10c = local_110;
  local_108 = local_110;
  local_104 = local_110;
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00484f00
            (DAT_00612560,(SMRGLTextureBasic *)&DAT_007c6160);
  iVar3 = 0;
  do {
    pCVar2 = DAT_00612560;
    *(uint *)(*(int *)DAT_00612560 + 0x18 + iVar3) = 0x800000;
    iVar3 = iVar3 + 0x30;
    *(uint *)(*(int *)pCVar2 + -0x14 + iVar3) = 0x800000;
  } while (iVar3 != 0x12c0);
  local_40 = 0x267;
  local_114 = 3;
  local_100 = 0;
  local_fc = 1;
  local_f8 = 2;
  local_f4 = 3;
  local_38 = &this_ptr->field_0x2e68;
  local_58 = &this_ptr->field_0x2f1c;
  local_3c = 0x28000;
  do {
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0(DAT_00612560,local_3c / 5);
    local_1c = 0;
    local_28 = local_38;
    do {
      pCVar2 = DAT_00612560;
      *(uint *)(*(int *)DAT_00612560 + local_1c + 0x20) = 0;
      *(uint *)(*(int *)pCVar2 + local_1c + 0x24) = 0xffff;
      *(uint *)(*(int *)pCVar2 + local_1c + 0x28) = 0;
      core_actor_cpp_FUN_00408bb0(this_ptr,local_28);
      afStack_80[2] = local_f0;
      afStack_80[(uint)bVar7 * -2 + 3] = afStack_ec[(uint)bVar7 * -2];
      iVar3 = local_1c;
      afStack_80[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
           afStack_ec[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
      if (&local_c0 != afStack_80 + 2) {
        local_c0 = afStack_80[2];
        local_bc = afStack_80[3];
        local_b8 = local_70;
      }
      local_a8 = (int)ROUND(local_c0 * _DAT_005fd5f0);
      local_a4 = (int)ROUND(local_bc * _DAT_005fd5f0);
      local_a0 = (int)ROUND(local_b8 * _DAT_005fd5f0);
      engine_special_cpp_FUN_00580173
                ((SProjectedVertex *)(*(int *)DAT_00612560 + local_1c),(CVector3i *)&local_a8);
      local_1c = iVar3 + 0x30;
      local_28 = local_28 + 0xc;
    } while (local_1c != 0x90);
    engine_drender_cpp_CDemonRenderer_renderTexturedDirect_FUN_00482170
              (DAT_00612560,local_118,0x267);
    local_38 = local_38 + 0x24;
    local_3c = local_3c + -0x8000;
  } while (local_38 != local_58);
  local_34 = &this_ptr->field_0x2f1c;
  local_54 = &this_ptr->field_0x2fd0;
  local_44 = 0x28000;
  do {
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0(DAT_00612560,local_44 / 5);
    local_20 = 0;
    local_24 = local_34;
    do {
      pCVar2 = DAT_00612560;
      *(uint *)(*(int *)DAT_00612560 + local_20 + 0x20) = 0;
      *(uint *)(*(int *)pCVar2 + local_20 + 0x24) = 0;
      *(uint *)(*(int *)pCVar2 + local_20 + 0x28) = 0xffff;
      core_actor_cpp_FUN_00408bb0(this_ptr,local_24);
      afStack_ec[2] = local_84;
      afStack_ec[(uint)bVar7 * -2 + 3] = afStack_80[(uint)bVar7 * -2];
      iVar3 = local_20;
      afStack_ec[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
           afStack_80[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
      if (&local_c0 != afStack_ec + 2) {
        local_c0 = afStack_ec[2];
        local_bc = afStack_ec[3];
        local_b8 = local_dc;
      }
      local_cc = (int)ROUND(local_c0 * _DAT_005fd5f0);
      local_c8 = (int)ROUND(local_bc * _DAT_005fd5f0);
      local_c4 = (int)ROUND(local_b8 * _DAT_005fd5f0);
      engine_special_cpp_FUN_00580173
                ((SProjectedVertex *)(*(int *)DAT_00612560 + local_20),(CVector3i *)&local_cc);
      local_20 = iVar3 + 0x30;
      local_24 = local_24 + 0xc;
    } while (local_20 != 0x90);
    engine_drender_cpp_CDemonRenderer_renderTexturedDirect_FUN_00482170
              (DAT_00612560,local_118,local_40);
    local_34 = local_34 + 0x24;
    local_44 = local_44 + -0x8000;
  } while (local_34 != local_54);
  local_50 = *(float *)&this_ptr->field_0x3000 * *(float *)&this_ptr->field_0x27b8;
  if (local_50 < *(float *)&this_ptr->field_0x2ffc * *(float *)&this_ptr->field_0x27b8) {
    local_50 = *(float *)&this_ptr->field_0x2490;
  }
  local_11c = *(float *)&this_ptr->field_0x2ffc * *(float *)&this_ptr->field_0x27b8;
  if (local_50 < local_11c) {
    local_50 = *(float *)&this_ptr->field_0x27b8 * (float)_DAT_005d59a7 + local_11c;
  }
  local_5c = *(float *)&this_ptr->field_0x2ffc * *(float *)&this_ptr->field_0x27b8;
  local_120 = *(float *)&this_ptr->field_0x2ff0 * *(float *)&this_ptr->field_0x27b8;
  iVar6 = 0x30;
  iVar3 = 0;
  local_30 = 0;
  do {
    local_2c = local_30 * 2;
    fVar8 = (float10)local_2c * (float10)_DAT_005d59af * (float10)_DAT_005d59b3;
    fVar9 = (float10)fsin(fVar8);
    fVar8 = (float10)fcos(fVar8);
    local_bc = local_5c;
    local_c0 = (float)(fVar9 * (float10)local_120);
    local_b8 = (float)(fVar8 * (float10)local_120);
    local_b4 = (int)ROUND(local_c0 * _DAT_005fd5f0);
    local_b0 = (int)ROUND(local_5c * _DAT_005fd5f0);
    local_ac = (int)ROUND(local_b8 * _DAT_005fd5f0);
    local_18 = local_2c;
    engine_special_cpp_FUN_00580173
              ((SProjectedVertex *)(*(int *)DAT_00612560 + iVar3),(CVector3i *)&local_b4);
    pCVar2 = DAT_00612560;
    *(uint *)(iVar3 + 0x20 + *(int *)DAT_00612560) = 0xffff;
    *(uint *)(iVar3 + 0x24 + *(int *)pCVar2) = 0;
    *(uint *)(iVar3 + 0x28 + *(int *)pCVar2) = 0;
    local_bc = local_50;
    local_4c = local_2c + 1;
    local_9c = (int)ROUND(local_c0 * _DAT_005fd5f0);
    local_98 = (int)ROUND(local_50 * _DAT_005fd5f0);
    local_94 = (int)ROUND(local_b8 * _DAT_005fd5f0);
    engine_special_cpp_FUN_00580173
              ((SProjectedVertex *)(*(int *)pCVar2 + iVar6),(CVector3i *)&local_9c);
    pCVar2 = DAT_00612560;
    *(uint *)(*(int *)DAT_00612560 + 0x20 + iVar6) = 0xffff;
    *(uint *)(*(int *)pCVar2 + 0x24 + iVar6) = 0;
    *(uint *)(*(int *)pCVar2 + 0x28 + iVar6) = 0;
    if (0 < local_30) {
      local_114 = 4;
      local_100 = local_2c + -2;
      local_fc = local_2c + -1;
      local_f8 = local_4c;
      local_f4 = local_2c;
      engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0(pCVar2,0x4000);
      engine_drender_cpp_CDemonRenderer_renderTexturedDirect_FUN_00482170
                (DAT_00612560,local_118,local_40);
    }
    iVar3 = iVar3 + 0x60;
    local_30 = local_30 + 1;
    iVar6 = iVar6 + 0x60;
  } while (local_30 < 0x19);
  local_90 = (int)ROUND(_DAT_02c8af28 * _DAT_005fd5f0);
  local_8c = (int)ROUND(_DAT_02c8af2c * _DAT_005fd5f0);
  local_88 = (int)ROUND(_DAT_02c8af30 * _DAT_005fd5f0);
  engine_special_cpp_FUN_00580173(*(SProjectedVertex **)DAT_00612560,(CVector3i *)&local_90);
  pCVar2 = DAT_00612560;
  *(uint *)(*(int *)DAT_00612560 + 0x20) = 0xffff;
  iVar3 = 0;
  *(uint *)(*(int *)pCVar2 + 0x24) = 0;
  iVar6 = 0x30;
  local_48 = 0;
  *(uint *)(*(int *)pCVar2 + 0x28) = 0;
  do {
    local_18 = local_48;
    fVar8 = (float10)local_48 * (float10)_DAT_005d59af * (float10)_DAT_005d59b3;
    fVar9 = (float10)fsin(fVar8);
    fVar8 = (float10)fcos(fVar8);
    local_c0 = (float)((float10)*(float *)&this_ptr->field_0x27b8 *
                      (float10)*(float *)&this_ptr->field_0x2fec * fVar9);
    local_bc = 0.0;
    local_b8 = (float)(fVar8 * (float10)*(float *)&this_ptr->field_0x2fec *
                      (float10)*(float *)&this_ptr->field_0x27b8);
    local_d8 = (int)ROUND(local_c0 * _DAT_005fd5f0);
    local_d4 = (int)ROUND(_DAT_005fd5f0 * 0.0);
    local_d0 = (int)ROUND(local_b8 * _DAT_005fd5f0);
    engine_special_cpp_FUN_00580173
              ((SProjectedVertex *)(*(int *)DAT_00612560 + iVar6),(CVector3i *)&local_d8);
    pCVar2 = DAT_00612560;
    *(uint *)(*(int *)DAT_00612560 + 0x20 + iVar6) = 0xffff;
    *(uint *)(*(int *)pCVar2 + 0x24 + iVar6) = 0;
    *(uint *)(*(int *)pCVar2 + 0x28 + iVar6) = 0;
    if (0 < iVar3) {
      local_114 = 3;
      local_100 = 0;
      local_fc = iVar3 + -1;
      local_f8 = iVar3;
      engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0(pCVar2,0x4000);
      engine_drender_cpp_CDemonRenderer_renderTexturedDirect_FUN_00482170
                (DAT_00612560,local_118,local_40);
    }
    iVar3 = iVar3 + 1;
    local_48 = local_48 + 2;
    iVar6 = iVar6 + 0x30;
  } while (iVar3 < 0x19);
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0(DAT_00612560,0xffff);
  return;
}
