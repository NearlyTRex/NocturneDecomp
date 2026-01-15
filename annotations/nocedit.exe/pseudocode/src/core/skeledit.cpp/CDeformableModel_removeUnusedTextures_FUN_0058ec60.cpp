// Name: core_skeledit.cpp_CDeformableModel_removeUnusedTextures_FUN_0058ec60
// Address: 0058ec60
// Address Range: [[0058ec60, 0058edd7]]
// Convention: __cdecl
// Signature: void core_skeledit.cpp_CDeformableModel_removeUnusedTextures_FUN_0058ec60(CDeformableModel * this_ptr)

#include "nocturne.h"

void __cdecl
core_skeledit_cpp_CDeformableModel_removeUnusedTextures_FUN_0058ec60(CDeformableModel *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *in_stack_00000004;
  int *local_20;
  int *local_1c;
  int *local_18;
  int local_14;
  
  crt_stack_c_stack_probe_FUN_005ff9f3(0x34);
  if (in_stack_00000004[0x2e] != 1) {
    g_CurrentFilename = "..\\core\\skeledit.cpp";
    g_CurrentLineNumber = 0xa72;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDeformableModel::removeUnusedTextures() - textureSetCount must be 1.");
  }
  iVar3 = 0;
  if (0 < in_stack_00000004[0x2f]) {
    local_1c = in_stack_00000004 + 0x30;
    local_20 = in_stack_00000004 + 0x42;
    do {
      iVar4 = 0;
      if (0 < *in_stack_00000004) {
        local_18 = in_stack_00000004;
        do {
          iVar1 = 0;
          for (iVar2 = 0; iVar2 < local_18[0x15] + local_18[0x1a]; iVar2 = iVar2 + 1) {
            if (iVar3 == *(int *)(iVar1 + local_18[0x24])) {
              iVar3 = iVar3 + 1;
              local_20 = local_20 + 0x12;
              local_1c = local_1c + 0x12;
              goto LAB_0058ed3a;
            }
            iVar1 = iVar1 + 4;
          }
          iVar4 = iVar4 + 1;
          local_18 = local_18 + 1;
        } while (iVar4 < *in_stack_00000004);
      }
      iVar4 = in_stack_00000004[0x2f];
      in_stack_00000004[0x2f] = iVar4 + -1;
      crt_string_c_memmove_FUN_005fe5e0(local_1c,local_20,((iVar4 + -1) - iVar3) * 0x48);
      local_14 = 0;
      piVar5 = in_stack_00000004;
      if (0 < *in_stack_00000004) {
        do {
          iVar1 = 0;
          iVar4 = 0;
          while (iVar4 < piVar5[0x15] + piVar5[0x1a]) {
            iVar2 = *(int *)(piVar5[0x24] + iVar1);
            if (iVar3 < iVar2) {
              *(int *)(piVar5[0x24] + iVar1) = iVar2 + -1;
              iVar4 = iVar4 + 1;
              iVar1 = iVar1 + 4;
            }
            else {
              iVar4 = iVar4 + 1;
              iVar1 = iVar1 + 4;
            }
          }
          piVar5 = piVar5 + 1;
          local_14 = local_14 + 1;
        } while (local_14 < *in_stack_00000004);
      }
LAB_0058ed3a:
    } while (iVar3 < in_stack_00000004[0x2f]);
  }
  return;
}
