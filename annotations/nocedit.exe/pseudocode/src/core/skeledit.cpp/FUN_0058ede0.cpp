// Name: core_skeledit.cpp_FUN_0058ede0
// Address: 0058ede0
// Address Range: [[0058ede0, 0058f033]]
// Convention: unknown
// Signature: undefined core_skeledit.cpp_FUN_0058ede0()

#include "nocturne.h"

void core_skeledit_cpp_FUN_0058ede0(void)

{
  int *n;
  int iVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  int *in_stack_00000010;
  int *piVar5;
  int local_44;
  int local_30;
  int local_2c;
  int local_24;
  int local_14;
  int iStack_10;
  
  crt_stack_c_stack_probe_FUN_005ff9f3(100);
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Searching for duplicate faces.");
  local_44 = 0;
  piVar5 = in_stack_00000010;
  if (0 < *in_stack_00000010) {
    do {
      local_30 = 0x24;
      local_24 = 1;
      local_2c = 0x12;
      n = piVar5;
LAB_0058ee5a:
      if (local_24 < in_stack_00000010[local_44 + 0x15]) {
        if (0 < local_24) {
          iStack_10 = 0;
          local_14 = 0;
          do {
            if (*(int *)(local_24 * 4 + piVar5[0x24]) == *(int *)(iStack_10 + piVar5[0x24])) {
              iVar3 = 0;
              do {
                iVar2 = 0;
                iVar1 = iVar3;
                psVar4 = (short *)(local_2c + in_stack_00000010[local_44 + 0x1f]);
                do {
                  if (*psVar4 != *(short *)(piVar5[0x1f] + local_14 + (iVar1 % 3) * 2)) break;
                  iVar1 = iVar1 + 1;
                  iVar2 = iVar2 + 1;
                  psVar4 = psVar4 + 1;
                } while (iVar2 < 3);
                if (iVar2 == 3) {
                  iVar3 = piVar5[0x15];
                  piVar5[0x15] = iVar3 + -1;
                  crt_string_c_memmove_FUN_005fe5e0
                            ((void *)(piVar5[0x1f] + local_2c),(void *)(local_30 + piVar5[0x1f]),
                             ((iVar3 + -1) - local_24) * 0x12);
                  n = (int *)((*(int *)(local_24 + 0x54) + local_24 * -4) * 4);
                  crt_string_c_memmove_FUN_005fe5e0
                            ((void *)(*(int *)(local_24 + 0x90) + local_24 * 0x10),
                             (void *)(local_30 + *(int *)(local_24 + 0x90)),(SIZE_T)n);
                  local_30 = local_30 + 1;
                  goto LAB_0058ee5a;
                }
                iVar3 = iVar3 + 1;
              } while (iVar3 < 3);
            }
            local_14 = local_14 + 0x12;
            iStack_10 = iStack_10 + 4;
          } while (iStack_10 < local_24 * 4);
        }
        local_2c = local_2c + 0x12;
        local_30 = local_30 + 0x12;
        local_24 = local_24 + 1;
        goto LAB_0058ee5a;
      }
      local_44 = local_44 + 1;
      piVar5 = n + 1;
    } while (local_44 < *in_stack_00000010);
  }
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"%d duplicate faces removed.");
  return;
}
