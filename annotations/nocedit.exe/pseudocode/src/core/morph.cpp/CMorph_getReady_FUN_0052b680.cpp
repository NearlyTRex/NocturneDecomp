// Name: core_morph.cpp_CMorph_getReady_FUN_0052b680
// Address: 0052b680
// Address Range: [[0052b680, 0052bad7]]
// Convention: __cdecl
// Signature: void core_morph.cpp_CMorph_getReady_FUN_0052b680(CMorph * this_ptr)

#include "nocturne.h"

void __cdecl core_morph_cpp_CMorph_getReady_FUN_0052b680(CMorph *this_ptr)

{
  int iVar1;
  CBoundingBox3D *pCVar2;
  int iVar3;
  CBoundingBox3D *pCVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  BADSPACEBASE *in_ESP;
  int unaff_ESI;
  int iVar9;
  int in_stack_0000000c;
  CBoundingBox3D local_c0;
  float local_9c [3];
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
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
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  CBoundingBox3D *local_1c;
  CVector3f *local_18;
  float *local_14;
  
  if ((*(int *)(this_ptr + 0x54) < 3) || (*(int *)(this_ptr + 0x65c) < 3)) {
    g_CurrentFilename = "..\\core\\morph.cpp";
    g_CurrentLineNumber = 799;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CMorph::getReady - can't do this unless we have setup both models!");
  }
  crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
            (&stack0xffffff3c,2,&g_CBoundingBox3DTypeInfo);
  local_1c = &local_c0;
  local_30 = in_stack_0000000c;
  local_24 = 0;
  do {
    pCVar4 = local_1c;
    iVar1 = *(int *)(local_30 + 0x58);
    pCVar2 = (CBoundingBox3D *)(iVar1 + 4);
    if (pCVar2 != local_1c) {
      (local_1c->min).x = (pCVar2->min).x;
      (pCVar4->min).y = *(float *)(iVar1 + 8);
      (pCVar4->min).z = *(float *)(iVar1 + 0xc);
    }
    if ((CBoundingBox3D *)&pCVar4->max != pCVar2) {
      (pCVar4->max).x = (pCVar2->min).x;
      (pCVar4->max).y = *(float *)(iVar1 + 8);
      (pCVar4->max).z = *(float *)(iVar1 + 0xc);
    }
    pCVar4 = local_1c;
    iVar1 = local_24;
    iVar7 = 0x10;
    for (iVar9 = 1; iVar9 < *(int *)(in_stack_0000000c + iVar1 + 0x54); iVar9 = iVar9 + 1) {
      iVar3 = *(int *)(in_stack_0000000c + iVar1 + 0x58) + iVar7;
      iVar7 = iVar7 + 0x10;
      core_box_cpp_CBoundingBox3D_expand_FUN_00420240(pCVar4,(CVector3f *)(iVar3 + 4));
    }
    local_24 = local_24 + 0x608;
    local_1c = local_1c + 1;
    local_30 = local_30 + 0x608;
  } while (local_24 != 0xc10);
  local_18 = &local_c0.max;
  local_14 = local_9c;
  local_2c = in_stack_0000000c + 0x608;
  local_20 = 0;
  local_28 = in_stack_0000000c;
  do {
    iVar7 = local_20;
    iVar1 = local_28;
    iVar9 = 1 - local_20;
    pCVar2 = &local_c0 + iVar9;
    local_84 = *local_14 - (pCVar2->min).x;
    local_80 = local_14[1] - (&local_c0)[iVar9].min.y;
    pCVar4 = &local_c0 + local_20;
    local_7c = local_14[2] - (&local_c0)[iVar9].min.z;
    local_54 = local_18->x - (pCVar4->min).x;
    local_50 = local_18->y - (&local_c0)[local_20].min.y;
    local_4c = local_18->z - (&local_c0)[local_20].min.z;
    local_60 = local_84 / local_54;
    local_3c = *local_14 - (pCVar2->min).x;
    local_38 = local_14[1] - (&local_c0)[iVar9].min.y;
    local_34 = local_14[2] - (&local_c0)[iVar9].min.z;
    local_6c = local_18->x - (pCVar4->min).x;
    local_68 = local_18->y - (&local_c0)[local_20].min.y;
    local_64 = local_18->z - (&local_c0)[local_20].min.z;
    local_5c = local_38 / local_68;
    local_90 = *local_14 - (pCVar2->min).x;
    local_8c = local_14[1] - (&local_c0)[iVar9].min.y;
    local_88 = local_14[2] - (&local_c0)[iVar9].min.z;
    local_78 = local_18->x - (pCVar4->min).x;
    local_74 = local_18->y - (&local_c0)[local_20].min.y;
    local_70 = local_18->z - (&local_c0)[local_20].min.z;
    local_58 = local_88 / local_70;
    iVar3 = 0;
    if (0 < *(int *)(local_28 + 0x54)) {
      iVar8 = 0;
      do {
        iVar6 = *(int *)(iVar1 + 0x58) + iVar8;
        local_48 = *(float *)(iVar6 + 4);
        local_44 = *(float *)(iVar6 + 8);
        local_40 = *(float *)(iVar6 + 0xc);
        if (*(int *)(in_stack_0000000c + 0xc28) != 0) {
          local_48 = *(float *)(iVar6 + 4) - (pCVar4->min).x;
          local_48 = local_48 * local_60;
          local_44 = *(float *)(iVar6 + 8) - (&local_c0)[iVar7].min.y;
          local_44 = local_44 * local_5c;
          local_40 = (*(float *)(iVar6 + 0xc) - (&local_c0)[iVar7].min.z) * local_58;
          local_48 = local_48 + (pCVar2->min).x;
          local_44 = local_44 + (&local_c0)[iVar9].min.y;
          local_40 = local_40 + (&local_c0)[iVar9].min.z;
        }
        uVar5 = core_morph_cpp_FUN_0052b280();
        *(uint *)(*(int *)(unaff_ESI + 0x58) + iVar8) = uVar5;
        iVar3 = iVar3 + 1;
        iVar8 = iVar8 + 0x10;
      } while (iVar3 < *(int *)(unaff_ESI + 0x54));
    }
    local_20 = local_20 + 1;
    local_14 = local_14 + -6;
    local_2c = local_2c + -0x608;
    local_28 = local_28 + 0x608;
    local_18 = local_18 + 2;
  } while (local_20 < 2);
  return;
}
