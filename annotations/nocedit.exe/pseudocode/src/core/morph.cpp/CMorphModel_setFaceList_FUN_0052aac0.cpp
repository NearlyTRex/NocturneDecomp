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
  char *pcVar10;
  int unaff_EDI;
  uint *puVar11;
  byte bVar12;
  int in_stack_00000008;
  int in_stack_00000010;
  int in_stack_00000018;
  int *in_stack_0000001c;
  int in_stack_00000024;
  int in_stack_00000028;
  int local_18;
  
  bVar12 = 0;
  if ((in_stack_00000008 < 0) || (*(int *)this_ptr->field0_0x0 <= in_stack_00000008)) {
    g_CurrentFilename = "..\\core\\morph.cpp";
    g_CurrentLineNumber = 0x152;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CMorphModel::setFaceList - invalid part index");
  }
  if (*(int *)(this_ptr->field0_0x0 + in_stack_00000008 * 0x10 + 0x10) +
      *(int *)(this_ptr->field0_0x0 + in_stack_00000008 * 0x10 + 8) <
      (int)in_stack_0000001c +
      in_stack_00000024 + *(int *)(this_ptr->field0_0x0 + in_stack_00000008 * 0x10 + 0x10)) {
    g_CurrentFilename = "..\\core\\morph.cpp";
    g_CurrentLineNumber = 0x159;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CMorphModel::setFaceList - invalid vertex range");
  }
  if (0 < in_stack_00000024) {
    pcVar10 = this_ptr->field0_0x0 + in_stack_00000008 * 0x10;
    do {
      iVar4 = core_morph_cpp_CMorphModel_findOrAddTexture_FUN_0052ae60
                        (this_ptr,(char *)(*in_stack_0000001c * 0x48 + in_stack_00000018 + 8));
      iVar6 = 2;
      if (2 < *(int *)(in_stack_00000010 + 4)) {
        iVar7 = in_stack_00000010 + 0x18;
        iVar5 = (int)pcVar10 * 0x3c;
        do {
          iVar2 = DAT_02f43974;
          *(uint *)(*(int *)(this_ptr->field2_0x58 + 8) + 4 + iVar5) = 3;
          if (iVar2 == 0) {
            puVar9 = (uint *)(*(int *)(this_ptr->field2_0x58 + 8) + 0x18 + iVar5);
            puVar11 = puVar9 + (uint)bVar12 * -2 + 1;
            puVar8 = (uint *)(in_stack_00000010 + 0x1c + (uint)bVar12 * -8);
            *puVar9 = *(uint *)(in_stack_00000010 + 0x18);
            *puVar11 = *puVar8;
            puVar11[(uint)bVar12 * -2 + 1] = puVar8[(uint)bVar12 * -2 + 1];
            puVar9 = (uint *)(*(int *)(this_ptr->field2_0x58 + 8) + 0x24 + iVar5);
            puVar11 = puVar9 + (uint)bVar12 * -2 + 1;
            puVar8 = (uint *)(iVar7 + 0x10 + (uint)bVar12 * -8);
            *puVar9 = *(uint *)(iVar7 + 0xc);
            *puVar11 = *puVar8;
            puVar11[(uint)bVar12 * -2 + 1] = puVar8[(uint)bVar12 * -2 + 1];
            iVar2 = *(int *)(this_ptr->field2_0x58 + 8);
            iVar3 = iVar7;
          }
          else {
            puVar9 = (uint *)(*(int *)(this_ptr->field2_0x58 + 8) + 0x18 + iVar5);
            puVar11 = puVar9 + (uint)bVar12 * -2 + 1;
            puVar8 = (uint *)(iVar7 + 0x1c + (uint)bVar12 * -8);
            *puVar9 = *(uint *)(iVar7 + 0x18);
            *puVar11 = *puVar8;
            puVar11[(uint)bVar12 * -2 + 1] = puVar8[(uint)bVar12 * -2 + 1];
            puVar9 = (uint *)(*(int *)(this_ptr->field2_0x58 + 8) + 0x24 + iVar5);
            puVar11 = puVar9 + (uint)bVar12 * -2 + 1;
            puVar8 = (uint *)(iVar7 + 0x10 + (uint)bVar12 * -8);
            *puVar9 = *(uint *)(iVar7 + 0xc);
            *puVar11 = *puVar8;
            puVar11[(uint)bVar12 * -2 + 1] = puVar8[(uint)bVar12 * -2 + 1];
            iVar2 = *(int *)(this_ptr->field2_0x58 + 8);
            iVar3 = in_stack_00000010;
          }
          puVar8 = (uint *)(iVar2 + 0x30 + iVar5);
          puVar11 = puVar8 + (uint)bVar12 * -2 + 1;
          puVar9 = (uint *)(iVar3 + 0x1c + (uint)bVar12 * -8);
          *puVar8 = *(uint *)(iVar3 + 0x18);
          *puVar11 = *puVar9;
          puVar11[(uint)bVar12 * -2 + 1] = puVar9[(uint)bVar12 * -2 + 1];
          *(int *)(*(int *)(this_ptr->field2_0x58 + 8) + iVar5) = iVar4;
          piVar1 = (int *)(*(int *)(this_ptr->field2_0x58 + 8) + iVar5 + 0x18);
          *piVar1 = *piVar1 + *(int *)(unaff_EDI + 0xc);
          piVar1 = (int *)(*(int *)(this_ptr->field2_0x58 + 8) + iVar5 + 0x24);
          *piVar1 = *piVar1 + *(int *)(unaff_EDI + 0xc);
          iVar7 = iVar7 + 0xc;
          iVar6 = iVar6 + 1;
          piVar1 = (int *)(*(int *)(this_ptr->field2_0x58 + 8) + iVar5 + 0x30);
          *piVar1 = *piVar1 + *(int *)(unaff_EDI + 0xc);
          iVar5 = iVar5 + 0x3c;
          pcVar10 = pcVar10 + 1;
        } while (iVar6 < *(int *)(in_stack_00000010 + 4));
      }
      local_18 = local_18 + 1;
      in_stack_00000010 = in_stack_00000010 + in_stack_00000018;
    } while (local_18 < in_stack_00000028);
  }
  return;
}
