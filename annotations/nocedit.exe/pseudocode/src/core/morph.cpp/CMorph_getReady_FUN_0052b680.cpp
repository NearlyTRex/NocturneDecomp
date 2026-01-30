// Name: core_morph.cpp_CMorph_getReady_FUN_0052b680
// Address: 0052b680
// Address Range: [[0052b680, 0052bad7]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_CMorph_getReady_FUN_0052b680(CMorph *this_ptr)

#include "nocturne.h"

void __cdecl core_morph_cpp_CMorph_getReady_FUN_0052b680(CMorph *this_ptr)

{
  int iVar1;
  CBoundingBox3D *pCVar2;
  int iVar3;
  CBoundingBox3D *pCVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  CBoundingBox3D local_c8;
  float local_a4 [3];
  float local_98;
  float local_94;
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
  CMorph *local_38;
  CMorph *local_34;
  CMorph *local_30;
  int local_2c;
  int local_28;
  CBoundingBox3D *local_24;
  CVector3f *local_20;
  float *local_1c;
  CMorph *local_18;
  CMorph *local_14;
  
  if ((this_ptr[0x15].unk < 3) || (this_ptr[0x197].unk < 3)) {
    g_CurrentFilename = "..\\core\\morph.cpp";
    g_CurrentLineNumber = 799;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CMorph::getReady - can't do this unless we have setup both models!");
  }
  __arrinit(&local_c8,2,&g_CBoundingBox3DTypeInfo);
  local_38 = this_ptr;
  local_2c = 0;
  local_24 = &local_c8;
  do {
    pCVar4 = local_24;
    iVar1 = local_38[0x16].unk;
    pCVar2 = (CBoundingBox3D *)(iVar1 + 4);
    if (pCVar2 != local_24) {
      (local_24->min).x = (pCVar2->min).x;
      (pCVar4->min).y = *(float *)(iVar1 + 8);
      (pCVar4->min).z = *(float *)(iVar1 + 0xc);
    }
    if ((CBoundingBox3D *)&pCVar4->max != pCVar2) {
      (pCVar4->max).x = (pCVar2->min).x;
      (pCVar4->max).y = *(float *)(iVar1 + 8);
      (pCVar4->max).z = *(float *)(iVar1 + 0xc);
    }
    pCVar4 = local_24;
    iVar1 = local_2c;
    iVar6 = 0x10;
    for (iVar7 = 1; iVar7 < *(int *)((int)&this_ptr[0x15].unk + iVar1); iVar7 = iVar7 + 1) {
      iVar3 = *(int *)((int)&this_ptr[0x16].unk + iVar1) + iVar6;
      iVar6 = iVar6 + 0x10;
      core_box_cpp_CBoundingBox3D_expand_FUN_00420240(pCVar4,(CVector3f *)(iVar3 + 4));
    }
    local_2c = local_2c + 0x608;
    local_24 = local_24 + 1;
    local_38 = local_38 + 0x182;
  } while (local_2c != 0xc10);
  local_20 = &local_c8.max;
  local_1c = local_a4;
  local_34 = this_ptr + 0x182;
  local_28 = 0;
  local_30 = this_ptr;
  do {
    iVar1 = local_28;
    local_14 = local_30;
    iVar6 = 1 - local_28;
    local_18 = local_34;
    pCVar2 = &local_c8 + iVar6;
    local_8c = *local_1c - (pCVar2->min).x;
    local_88 = local_1c[1] - (&local_c8)[iVar6].min.y;
    pCVar4 = &local_c8 + local_28;
    local_84 = local_1c[2] - (&local_c8)[iVar6].min.z;
    local_5c = local_20->x - (pCVar4->min).x;
    local_58 = local_20->y - (&local_c8)[local_28].min.y;
    local_54 = local_20->z - (&local_c8)[local_28].min.z;
    local_68 = local_8c / local_5c;
    local_44 = *local_1c - (pCVar2->min).x;
    local_40 = local_1c[1] - (&local_c8)[iVar6].min.y;
    local_3c = local_1c[2] - (&local_c8)[iVar6].min.z;
    local_74 = local_20->x - (pCVar4->min).x;
    local_70 = local_20->y - (&local_c8)[local_28].min.y;
    local_6c = local_20->z - (&local_c8)[local_28].min.z;
    local_64 = local_40 / local_70;
    local_98 = *local_1c - (pCVar2->min).x;
    local_94 = local_1c[1] - (&local_c8)[iVar6].min.y;
    local_90 = local_1c[2] - (&local_c8)[iVar6].min.z;
    local_80 = local_20->x - (pCVar4->min).x;
    local_7c = local_20->y - (&local_c8)[local_28].min.y;
    local_78 = local_20->z - (&local_c8)[local_28].min.z;
    local_60 = local_90 / local_78;
    iVar7 = 0;
    if (0 < local_30[0x15].unk) {
      iVar3 = 0;
      do {
        iVar5 = local_14[0x16].unk + iVar3;
        local_50 = *(float *)(iVar5 + 4);
        local_4c = *(float *)(iVar5 + 8);
        local_48 = *(float *)(iVar5 + 0xc);
        if (this_ptr[0x30a].unk != 0) {
          local_50 = *(float *)(iVar5 + 4) - (pCVar4->min).x;
          local_50 = local_50 * local_68;
          local_4c = *(float *)(iVar5 + 8) - (&local_c8)[iVar1].min.y;
          local_4c = local_4c * local_64;
          local_48 = (*(float *)(iVar5 + 0xc) - (&local_c8)[iVar1].min.z) * local_60;
          local_50 = local_50 + (pCVar2->min).x;
          local_4c = local_4c + (&local_c8)[iVar6].min.y;
          local_48 = local_48 + (&local_c8)[iVar6].min.z;
        }
        iVar5 = core_morph_cpp_FUN_0052b280();
        *(int *)(local_14[0x16].unk + iVar3) = iVar5;
        iVar7 = iVar7 + 1;
        iVar3 = iVar3 + 0x10;
      } while (iVar7 < local_14[0x15].unk);
    }
    local_28 = local_28 + 1;
    local_1c = local_1c + -6;
    local_34 = local_34 + -0x182;
    local_30 = local_30 + 0x182;
    local_20 = local_20 + 2;
  } while (local_28 < 2);
  return;
}
