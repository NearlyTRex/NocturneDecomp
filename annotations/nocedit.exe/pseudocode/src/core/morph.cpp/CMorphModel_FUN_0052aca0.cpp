// Name: core_morph.cpp_CMorphModel_FUN_0052aca0
// Address: 0052aca0
// Address Range: [[0052aca0, 0052ae5e]]
// Convention: __cdecl
// Signature: void core_morph.cpp_CMorphModel_FUN_0052aca0(CMorphModel * this_ptr)

#include "nocturne.h"

void __cdecl core_morph_cpp_CMorphModel_FUN_0052aca0(CMorphModel *this_ptr)

{
  int *piVar1;
  int iVar2;
  ushort *puVar3;
  int iVar4;
  int iVar5;
  int unaff_EDI;
  int iVar6;
  int in_stack_00000008;
  int in_stack_00000014;
  ushort *in_stack_00000018;
  int in_stack_00000020;
  int in_stack_00000024;
  ushort *local_1c;
  char *local_14;
  
  if ((in_stack_00000008 < 0) || (*(int *)this_ptr->field0_0x0 <= in_stack_00000008)) {
    g_CurrentFilename = "..\\core\\morph.cpp";
    g_CurrentLineNumber = 0x191;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CMorphModel::setFaceList - invalid part index");
  }
  iVar6 = (int)in_stack_00000018 + *(int *)(this_ptr->field0_0x0 + in_stack_00000008 * 0x10 + 0x10);
  if (*(int *)(this_ptr->field0_0x0 + in_stack_00000008 * 0x10 + 0x10) +
      *(int *)(this_ptr->field0_0x0 + in_stack_00000008 * 0x10 + 8) < in_stack_00000020 + iVar6) {
    g_CurrentFilename = "..\\core\\morph.cpp";
    g_CurrentLineNumber = 0x198;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CMorphModel::setFaceList - invalid vertex range");
  }
  if (0 < in_stack_00000020) {
    local_14 = this_ptr->field0_0x0 + in_stack_00000008 * 0x10;
    iVar6 = iVar6 * 0x3c;
    local_1c = in_stack_00000018;
    do {
      iVar2 = core_morph_cpp_CMorphModel_findOrAddTexture_FUN_0052ae60
                        (this_ptr,(char *)(*(int *)local_1c * 0x48 + in_stack_00000014 + 8));
      iVar5 = 0;
      *(uint *)(*(int *)(this_ptr->field2_0x58 + 8) + unaff_EDI + 4) = 3;
      puVar3 = local_1c;
      do {
        iVar4 = iVar5;
        if (DAT_02f43974 != 0) {
          iVar4 = 2 - iVar5;
        }
        iVar4 = iVar4 * 0xc;
        *(uint *)(iVar4 + 0x18 + *(int *)(this_ptr->field2_0x58 + 8) + unaff_EDI) = (uint)*puVar3;
        iVar5 = iVar5 + 1;
        *(uint *)(iVar4 + 0x1c + *(int *)(this_ptr->field2_0x58 + 8) + unaff_EDI) =
             (uint)puVar3[3] << 8;
        *(uint *)(iVar4 + *(int *)(this_ptr->field2_0x58 + 8) + unaff_EDI + 0x20) =
             (uint)puVar3[6] << 8;
        puVar3 = puVar3 + 1;
      } while (iVar5 < 3);
      *(int *)(unaff_EDI + *(int *)(this_ptr->field2_0x58 + 8)) = iVar2;
      piVar1 = (int *)(unaff_EDI + 0x18 + *(int *)(this_ptr->field2_0x58 + 8));
      *piVar1 = *piVar1 + *(int *)(iVar6 + 0xc);
      *(int *)(unaff_EDI + 0x24 + *(int *)(this_ptr->field2_0x58 + 8)) =
           *(int *)(unaff_EDI + 0x24 + *(int *)(this_ptr->field2_0x58 + 8)) + *(int *)(iVar6 + 0xc);
      iVar2 = unaff_EDI + *(int *)(this_ptr->field2_0x58 + 8);
      local_14 = local_14 + 1;
      *(int *)(iVar2 + 0x30) = *(int *)(iVar2 + 0x30) + *(int *)(iVar6 + 0xc);
      local_1c = local_1c + 9;
      unaff_EDI = unaff_EDI + 0x3c;
    } while ((int)local_14 < in_stack_00000024);
  }
  return;
}
