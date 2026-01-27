// Name: core_morph.cpp_CMorphModel_setFaceList_FUN_0052aac0
// Address: 0052aac0
// Address Range: [[0052aac0, 0052ac97]]
// Convention: __cdecl
// Signature: void core_morph.cpp_CMorphModel_setFaceList_FUN_0052aac0(CMorphModel * this_ptr)

#include "nocturne.h"

void __cdecl core_morph_cpp_CMorphModel_setFaceList_FUN_0052aac0(CMorphModel *this_ptr)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  byte bVar11;
  int in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  int *in_stack_00000018;
  int in_stack_0000001c;
  int in_stack_00000020;
  int *local_24;
  int local_20;
  int local_18;
  
  bVar11 = 0;
  if ((in_stack_00000008 < 0) || (*(int *)this_ptr->unk1 <= in_stack_00000008)) {
    g_CurrentFilename = "..\\core\\morph.cpp";
    g_CurrentLineNumber = 0x152;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CMorphModel::setFaceList - invalid part index");
  }
  local_18 = in_stack_0000001c + *(int *)(this_ptr->unk1 + in_stack_00000008 * 0x10 + 0x10);
  if (*(int *)(this_ptr->unk1 + in_stack_00000008 * 0x10 + 0x10) +
      *(int *)(this_ptr->unk1 + in_stack_00000008 * 0x10 + 8) < in_stack_00000020 + local_18) {
    g_CurrentFilename = "..\\core\\morph.cpp";
    g_CurrentLineNumber = 0x159;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CMorphModel::setFaceList - invalid vertex range");
  }
  local_20 = 0;
  if (0 < in_stack_00000020) {
    local_24 = in_stack_00000018;
    do {
      iVar4 = core_morph_cpp_CMorphModel_findOrAddTexture_FUN_0052ae60
                        (this_ptr,(char *)(*local_24 * 0x48 + in_stack_00000014 + 8));
      iVar6 = 2;
      if (2 < *(int *)(in_stack_0000000c + 4)) {
        iVar7 = in_stack_0000000c + 0x18;
        iVar5 = local_18 * 0x3c;
        do {
          iVar2 = DAT_02f43974;
          *(uint *)(*(int *)(this_ptr->unk2 + 8) + 4 + iVar5) = 3;
          if (iVar2 == 0) {
            puVar9 = (uint *)(*(int *)(this_ptr->unk2 + 8) + 0x18 + iVar5);
            puVar10 = puVar9 + (uint)bVar11 * -2 + 1;
            puVar8 = (uint *)(in_stack_0000000c + 0x1c + (uint)bVar11 * -8);
            *puVar9 = *(uint *)(in_stack_0000000c + 0x18);
            *puVar10 = *puVar8;
            puVar10[(uint)bVar11 * -2 + 1] = puVar8[(uint)bVar11 * -2 + 1];
            puVar9 = (uint *)(*(int *)(this_ptr->unk2 + 8) + 0x24 + iVar5);
            puVar10 = puVar9 + (uint)bVar11 * -2 + 1;
            puVar8 = (uint *)(iVar7 + 0x10 + (uint)bVar11 * -8);
            *puVar9 = *(uint *)(iVar7 + 0xc);
            *puVar10 = *puVar8;
            puVar10[(uint)bVar11 * -2 + 1] = puVar8[(uint)bVar11 * -2 + 1];
            iVar2 = *(int *)(this_ptr->unk2 + 8);
            iVar3 = iVar7;
          }
          else {
            puVar9 = (uint *)(*(int *)(this_ptr->unk2 + 8) + 0x18 + iVar5);
            puVar10 = puVar9 + (uint)bVar11 * -2 + 1;
            puVar8 = (uint *)(iVar7 + 0x1c + (uint)bVar11 * -8);
            *puVar9 = *(uint *)(iVar7 + 0x18);
            *puVar10 = *puVar8;
            puVar10[(uint)bVar11 * -2 + 1] = puVar8[(uint)bVar11 * -2 + 1];
            puVar9 = (uint *)(*(int *)(this_ptr->unk2 + 8) + 0x24 + iVar5);
            puVar10 = puVar9 + (uint)bVar11 * -2 + 1;
            puVar8 = (uint *)(iVar7 + 0x10 + (uint)bVar11 * -8);
            *puVar9 = *(uint *)(iVar7 + 0xc);
            *puVar10 = *puVar8;
            puVar10[(uint)bVar11 * -2 + 1] = puVar8[(uint)bVar11 * -2 + 1];
            iVar2 = *(int *)(this_ptr->unk2 + 8);
            iVar3 = in_stack_0000000c;
          }
          puVar8 = (uint *)(iVar2 + 0x30 + iVar5);
          puVar10 = puVar8 + (uint)bVar11 * -2 + 1;
          puVar9 = (uint *)(iVar3 + 0x1c + (uint)bVar11 * -8);
          *puVar8 = *(uint *)(iVar3 + 0x18);
          *puVar10 = *puVar9;
          puVar10[(uint)bVar11 * -2 + 1] = puVar9[(uint)bVar11 * -2 + 1];
          *(int *)(*(int *)(this_ptr->unk2 + 8) + iVar5) = iVar4;
          piVar1 = (int *)(*(int *)(this_ptr->unk2 + 8) + iVar5 + 0x18);
          *piVar1 = *piVar1 + *(int *)(this_ptr->unk1 + in_stack_00000008 * 0x10 + 0xc);
          piVar1 = (int *)(*(int *)(this_ptr->unk2 + 8) + iVar5 + 0x24);
          *piVar1 = *piVar1 + *(int *)(this_ptr->unk1 + in_stack_00000008 * 0x10 + 0xc);
          iVar7 = iVar7 + 0xc;
          iVar6 = iVar6 + 1;
          piVar1 = (int *)(*(int *)(this_ptr->unk2 + 8) + iVar5 + 0x30);
          *piVar1 = *piVar1 + *(int *)(this_ptr->unk1 + in_stack_00000008 * 0x10 + 0xc);
          iVar5 = iVar5 + 0x3c;
          local_18 = local_18 + 1;
        } while (iVar6 < *(int *)(in_stack_0000000c + 4));
      }
      local_24 = local_24 + 1;
      local_20 = local_20 + 1;
      in_stack_0000000c = in_stack_0000000c + in_stack_00000010;
    } while (local_20 < in_stack_00000020);
  }
  return;
}
