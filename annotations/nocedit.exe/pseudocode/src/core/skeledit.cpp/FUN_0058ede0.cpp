// Name: core_skeledit.cpp_FUN_0058ede0
// Address: 0058ede0
// Address Range: [[0058ede0, 0058f033]]
// Convention: __cdecl
// Signature: void __cdecl core_skeledit_cpp_FUN_0058ede0(void)

#include "nocturne.h"

void __cdecl core_skeledit_cpp_FUN_0058ede0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  int *in_stack_00000004;
  int *local_54;
  int local_50;
  int local_40;
  int local_3c;
  int local_38;
  int local_30;
  int local_20;
  int local_1c;
  
  __STK(100);
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Searching for duplicate faces.");
  local_50 = 0;
  if (0 < *in_stack_00000004) {
    local_54 = in_stack_00000004;
    do {
      local_40 = 8;
      local_3c = 0x24;
      local_30 = 1;
      local_38 = 0x12;
LAB_0058ee5a:
      if (local_30 < in_stack_00000004[local_50 + 0x15]) {
        if (0 < local_30) {
          local_1c = 0;
          local_20 = 0;
          do {
            if (*(int *)(local_30 * 4 + local_54[0x24]) == *(int *)(local_1c + local_54[0x24])) {
              iVar3 = 0;
              do {
                iVar2 = 0;
                iVar1 = iVar3;
                psVar4 = (short *)(local_38 + in_stack_00000004[local_50 + 0x1f]);
                do {
                  if (*psVar4 != *(short *)(local_54[0x1f] + local_20 + (iVar1 % 3) * 2)) break;
                  iVar1 = iVar1 + 1;
                  iVar2 = iVar2 + 1;
                  psVar4 = psVar4 + 1;
                } while (iVar2 < 3);
                if (iVar2 == 3) {
                  iVar3 = local_54[0x15];
                  local_54[0x15] = iVar3 + -1;
                  memmove
                            ((void *)(local_54[0x1f] + local_38),(void *)(local_3c + local_54[0x1f])
                             ,((iVar3 + -1) - local_30) * 0x12);
                  memmove
                            ((void *)(local_54[0x24] + local_30 * 4),
                             (void *)(local_40 + local_54[0x24]),(local_54[0x15] - local_30) * 4);
                  goto LAB_0058ee5a;
                }
                iVar3 = iVar3 + 1;
              } while (iVar3 < 3);
            }
            local_20 = local_20 + 0x12;
            local_1c = local_1c + 4;
          } while (local_1c < local_30 * 4);
        }
        local_38 = local_38 + 0x12;
        local_3c = local_3c + 0x12;
        local_30 = local_30 + 1;
        local_40 = local_40 + 4;
        goto LAB_0058ee5a;
      }
      local_50 = local_50 + 1;
      local_54 = local_54 + 1;
    } while (local_50 < *in_stack_00000004);
  }
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"%d duplicate faces removed.");
  return;
}
