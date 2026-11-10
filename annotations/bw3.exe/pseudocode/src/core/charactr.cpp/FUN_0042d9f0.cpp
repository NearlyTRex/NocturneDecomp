// Name: core_charactr.cpp_FUN_0042d9f0
// Address: 0042d9f0
// Address Range: [[0042d9f0, 0042e21e]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_FUN_0042d9f0(CCharacter *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_charactr_cpp_FUN_0042d9f0(CCharacter *this_ptr)

{
  char cVar1;
  CDemonRenderer *pCVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  char *pcVar6;
  byte bVar7;
  float10 fVar8;
  float10 fVar9;
  float afStackY_10d8 [1003];
  float local_120;
  float local_11c;
  SMRGLHeaderPrimitive local_118;
  int local_100;
  int local_fc;
  int local_f8;
  int local_f4;
  float local_f0;
  float afStack_ec [4];
  float local_dc;
  CVector3i local_d8;
  CVector3i local_cc;
  float local_c0;
  float local_bc;
  float local_b8;
  CVector3i local_b4;
  CVector3i local_a8;
  CVector3i local_9c;
  CVector3i local_90;
  float local_84;
  float afStack_80 [4];
  float local_70;
  float local_5c;
  CVector3f *local_58;
  float *local_54;
  float local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  CVector3f *local_38;
  CVector3f *local_34;
  int local_30;
  int local_2c;
  CVector3f *local_28;
  CVector3f *local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  bVar7 = 0;
  local_118.surface_normal.A.i =
       engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046d540(DAT_005f2afc);
  if (local_118.surface_normal.A.i != 0) {
    return;
  }
  pcVar4 = "7headlite.raw" + 1;
  pcVar6 = &DAT_007e2ad8;
  do {
    cVar1 = *pcVar4;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  local_118.surface_normal.B.i = local_118.surface_normal.A.i;
  local_118.surface_normal.C.i = local_118.surface_normal.A.i;
  local_118.surface_normal.D.i = local_118.surface_normal.A.i;
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
            (DAT_005f2afc,(SMRGLTextureBasic *)&DAT_007e2ad0);
  iVar5 = 0;
  do {
    pCVar2 = DAT_005f2afc;
    *(uint *)(DAT_005f2afc->vertex_buffer_ptr + iVar5 + 0x18) = 0x800000;
    iVar3 = iVar5 + 0x30;
    *(uint *)(pCVar2->vertex_buffer_ptr + iVar5 + 0x1c) = 0x800000;
    iVar5 = iVar3;
  } while (iVar3 != 0x12c0);
  local_40 = 0x267;
  local_118.base.count = 3;
  local_100 = 0;
  local_fc = 1;
  local_f8 = 2;
  local_f4 = 3;
  local_38 = this_ptr->collision_test_points;
  local_58 = this_ptr->collision_test_normals;
  local_3c = 0x28000;
  do {
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0(DAT_005f2afc,local_3c / 5);
    local_1c = 0;
    local_28 = local_38;
    do {
      pCVar2 = DAT_005f2afc;
      *(uint *)(DAT_005f2afc->vertex_buffer_ptr + local_1c + 0x20) = 0;
      *(uint *)(pCVar2->vertex_buffer_ptr + local_1c + 0x24) = 0xffff;
      *(uint *)(pCVar2->vertex_buffer_ptr + local_1c + 0x28) = 0;
      core_actor_cpp_FUN_00408bf0(this_ptr,local_28);
      afStack_80[2] = local_f0;
      afStack_80[(uint)bVar7 * -2 + 3] = afStack_ec[(uint)bVar7 * -2];
      iVar5 = local_1c;
      afStack_80[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
           afStack_ec[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
      if (&local_c0 != afStack_80 + 2) {
        local_c0 = afStack_80[2];
        local_bc = afStack_80[3];
        local_b8 = local_70;
      }
      local_a8.x = (int)ROUND(local_c0 * _DAT_005dd210);
      local_a8.y = (int)ROUND(local_bc * _DAT_005dd210);
      local_a8.z = (int)ROUND(local_b8 * _DAT_005dd210);
      engine_special_cpp_FUN_005632a3
                ((SProjectedVertex *)(DAT_005f2afc->vertex_buffer_ptr + local_1c),&local_a8);
      local_1c = iVar5 + 0x30;
      local_28 = local_28 + 1;
    } while (local_1c != 0x90);
    engine_drender_cpp_CDemonRenderer_renderTexturedDirect_FUN_0046b850
              (DAT_005f2afc,&local_118,0x267);
    local_38 = local_38 + 3;
    local_3c = local_3c + -0x8000;
  } while (local_38 != local_58);
  local_34 = this_ptr->collision_test_normals;
  local_54 = &this_ptr->hero_proximity_timer;
  local_44 = 0x28000;
  do {
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0(DAT_005f2afc,local_44 / 5);
    local_20 = 0;
    local_24 = local_34;
    do {
      pCVar2 = DAT_005f2afc;
      *(uint *)(DAT_005f2afc->vertex_buffer_ptr + local_20 + 0x20) = 0;
      *(uint *)(pCVar2->vertex_buffer_ptr + local_20 + 0x24) = 0;
      *(uint *)(pCVar2->vertex_buffer_ptr + local_20 + 0x28) = 0xffff;
      core_actor_cpp_FUN_00408bf0(this_ptr,local_24);
      afStack_ec[2] = local_84;
      afStack_ec[(uint)bVar7 * -2 + 3] = afStack_80[(uint)bVar7 * -2];
      iVar5 = local_20;
      afStack_ec[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
           afStack_80[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
      if (&local_c0 != afStack_ec + 2) {
        local_c0 = afStack_ec[2];
        local_bc = afStack_ec[3];
        local_b8 = local_dc;
      }
      local_cc.x = (int)ROUND(local_c0 * _DAT_005dd210);
      local_cc.y = (int)ROUND(local_bc * _DAT_005dd210);
      local_cc.z = (int)ROUND(local_b8 * _DAT_005dd210);
      engine_special_cpp_FUN_005632a3
                ((SProjectedVertex *)(DAT_005f2afc->vertex_buffer_ptr + local_20),&local_cc);
      local_20 = iVar5 + 0x30;
      local_24 = local_24 + 1;
    } while (local_20 != 0x90);
    engine_drender_cpp_CDemonRenderer_renderTexturedDirect_FUN_0046b850
              (DAT_005f2afc,&local_118,local_40);
    local_34 = local_34 + 3;
    local_44 = local_44 + -0x8000;
  } while (local_34 != (CVector3f *)local_54);
  local_50 = *(float *)&this_ptr->field_0x3280 * *(float *)&this_ptr->field_0x27b8;
  if (local_50 < *(float *)&this_ptr->field_0x327c * *(float *)&this_ptr->field_0x27b8) {
    local_50 = (this_ptr->model).bounding_box.max.y;
  }
  local_11c = *(float *)&this_ptr->field_0x327c * *(float *)&this_ptr->field_0x27b8;
  if (local_50 < local_11c) {
    local_50 = *(float *)&this_ptr->field_0x27b8 * (float)_DAT_005b82e6 + local_11c;
  }
  local_5c = *(float *)&this_ptr->field_0x327c * *(float *)&this_ptr->field_0x27b8;
  local_120 = *(float *)&this_ptr->field_0x3270 * *(float *)&this_ptr->field_0x27b8;
  iVar3 = 0x30;
  iVar5 = 0;
  local_30 = 0;
  do {
    local_2c = local_30 * 2;
    fVar8 = (float10)local_2c * (float10)_DAT_005b82ee * (float10)_DAT_005b82f2;
    fVar9 = (float10)fsin(fVar8);
    fVar8 = (float10)fcos(fVar8);
    local_bc = local_5c;
    local_c0 = (float)(fVar9 * (float10)local_120);
    local_b8 = (float)(fVar8 * (float10)local_120);
    local_b4.x = (int)ROUND(local_c0 * _DAT_005dd210);
    local_b4.y = (int)ROUND(local_5c * _DAT_005dd210);
    local_b4.z = (int)ROUND(local_b8 * _DAT_005dd210);
    local_18 = local_2c;
    engine_special_cpp_FUN_005632a3
              ((SProjectedVertex *)(DAT_005f2afc->vertex_buffer_ptr + iVar5),&local_b4);
    pCVar2 = DAT_005f2afc;
    *(uint *)(DAT_005f2afc->vertex_buffer_ptr + iVar5 + 0x20) = 0xffff;
    *(uint *)(pCVar2->vertex_buffer_ptr + iVar5 + 0x24) = 0;
    *(uint *)(pCVar2->vertex_buffer_ptr + iVar5 + 0x28) = 0;
    local_bc = local_50;
    local_4c = local_2c + 1;
    local_9c.x = (int)ROUND(local_c0 * _DAT_005dd210);
    local_9c.y = (int)ROUND(local_50 * _DAT_005dd210);
    local_9c.z = (int)ROUND(local_b8 * _DAT_005dd210);
    engine_special_cpp_FUN_005632a3
              ((SProjectedVertex *)(pCVar2->vertex_buffer_ptr + iVar3),&local_9c);
    pCVar2 = DAT_005f2afc;
    *(uint *)(DAT_005f2afc->vertex_buffer_ptr + iVar3 + 0x20) = 0xffff;
    *(uint *)(pCVar2->vertex_buffer_ptr + iVar3 + 0x24) = 0;
    *(uint *)(pCVar2->vertex_buffer_ptr + iVar3 + 0x28) = 0;
    if (0 < local_30) {
      local_118.base.count = 4;
      local_100 = local_2c + -2;
      local_fc = local_2c + -1;
      local_f8 = local_4c;
      local_f4 = local_2c;
      engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0(pCVar2,0x4000);
      engine_drender_cpp_CDemonRenderer_renderTexturedDirect_FUN_0046b850
                (DAT_005f2afc,&local_118,local_40);
    }
    iVar5 = iVar5 + 0x60;
    local_30 = local_30 + 1;
    iVar3 = iVar3 + 0x60;
  } while (local_30 < 0x19);
  local_90.x = (int)ROUND(_DAT_02cfd900 * _DAT_005dd210);
  local_90.y = (int)ROUND(_DAT_02cfd904 * _DAT_005dd210);
  local_90.z = (int)ROUND(_DAT_02cfd908 * _DAT_005dd210);
  engine_special_cpp_FUN_005632a3((SProjectedVertex *)DAT_005f2afc->vertex_buffer_ptr,&local_90);
  pCVar2 = DAT_005f2afc;
  *(uint *)(DAT_005f2afc->vertex_buffer_ptr + 0x20) = 0xffff;
  iVar5 = 0;
  *(uint *)(pCVar2->vertex_buffer_ptr + 0x24) = 0;
  iVar3 = 0x30;
  local_48 = 0;
  *(uint *)(pCVar2->vertex_buffer_ptr + 0x28) = 0;
  do {
    local_18 = local_48;
    fVar8 = (float10)local_48 * (float10)_DAT_005b82ee * (float10)_DAT_005b82f2;
    fVar9 = (float10)fsin(fVar8);
    fVar8 = (float10)fcos(fVar8);
    local_c0 = (float)((float10)*(float *)&this_ptr->field_0x27b8 *
                      (float10)*(float *)&this_ptr->field_0x326c * fVar9);
    local_bc = 0.0;
    local_b8 = (float)(fVar8 * (float10)*(float *)&this_ptr->field_0x326c *
                      (float10)*(float *)&this_ptr->field_0x27b8);
    local_d8.x = (int)ROUND(local_c0 * _DAT_005dd210);
    local_d8.y = (int)ROUND(_DAT_005dd210 * 0.0);
    local_d8.z = (int)ROUND(local_b8 * _DAT_005dd210);
    engine_special_cpp_FUN_005632a3
              ((SProjectedVertex *)(DAT_005f2afc->vertex_buffer_ptr + iVar3),&local_d8);
    pCVar2 = DAT_005f2afc;
    *(uint *)(DAT_005f2afc->vertex_buffer_ptr + iVar3 + 0x20) = 0xffff;
    *(uint *)(pCVar2->vertex_buffer_ptr + iVar3 + 0x24) = 0;
    *(uint *)(pCVar2->vertex_buffer_ptr + iVar3 + 0x28) = 0;
    if (0 < iVar5) {
      local_118.base.count = 3;
      local_100 = 0;
      local_fc = iVar5 + -1;
      local_f8 = iVar5;
      engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0(pCVar2,0x4000);
      engine_drender_cpp_CDemonRenderer_renderTexturedDirect_FUN_0046b850
                (DAT_005f2afc,&local_118,local_40);
    }
    iVar5 = iVar5 + 1;
    local_48 = local_48 + 2;
    iVar3 = iVar3 + 0x30;
  } while (iVar5 < 0x19);
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0(DAT_005f2afc,0xffff);
  return;
}
