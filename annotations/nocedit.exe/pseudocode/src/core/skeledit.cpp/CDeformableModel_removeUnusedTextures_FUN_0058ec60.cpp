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
  int iVar5;
  int *piVar6;
  int in_stack_0000000c;
  int *in_stack_00000010;
  int *in_stack_00000014;
  int *local_14;
  int *piStack_10;
  int *piStack_c;
  
  crt_stack_c_stack_probe_FUN_005ff9f3(0x34);
  if (*(int *)(in_stack_0000000c + 0xb8) != 1) {
    g_CurrentFilename = "..\\core\\skeledit.cpp";
    g_CurrentLineNumber = 0xa72;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDeformableModel::removeUnusedTextures() - textureSetCount must be 1.");
  }
  iVar4 = 0;
  if (0 < in_stack_00000010[0x2f]) {
    piStack_10 = in_stack_00000010 + 0x30;
    local_14 = in_stack_00000010 + 0x42;
    do {
      iVar5 = 0;
      if (0 < *in_stack_00000010) {
        piStack_c = in_stack_00000010;
        do {
          iVar2 = 0;
          for (iVar3 = 0; iVar3 < piStack_c[0x15] + piStack_c[0x1a]; iVar3 = iVar3 + 1) {
            if (iVar4 == *(int *)(iVar2 + piStack_c[0x24])) {
              iVar4 = iVar4 + 1;
              local_14 = local_14 + 0x12;
              piStack_10 = piStack_10 + 0x12;
              goto LAB_0058ed3a;
            }
            iVar2 = iVar2 + 4;
          }
          iVar5 = iVar5 + 1;
          piStack_c = piStack_c + 1;
        } while (iVar5 < *in_stack_00000010);
      }
      iVar5 = in_stack_00000010[0x2f];
      in_stack_00000010[0x2f] = iVar5 + -1;
      crt_string_c_memmove_FUN_005fe5e0(piStack_10,local_14,((iVar5 + -1) - iVar4) * 0x48);
      iVar5 = 0;
      piVar6 = in_stack_00000014;
      if (0 < *in_stack_00000014) {
        do {
          iVar3 = 0;
          iVar2 = 0;
          while (iVar2 < piVar6[0x15] + piVar6[0x1a]) {
            iVar1 = *(int *)(piVar6[0x24] + iVar3);
            if (iVar4 < iVar1) {
              *(int *)(piVar6[0x24] + iVar3) = iVar1 + -1;
              iVar2 = iVar2 + 1;
              iVar3 = iVar3 + 4;
            }
            else {
              iVar2 = iVar2 + 1;
              iVar3 = iVar3 + 4;
            }
          }
          piVar6 = piVar6 + 1;
          iVar5 = iVar5 + 1;
        } while (iVar5 < *in_stack_00000014);
      }
LAB_0058ed3a:
    } while (iVar4 < in_stack_00000010[0x2f]);
  }
  return;
}
