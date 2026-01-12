// Name: core_skeledit.cpp_FUN_0058eaa0
// Address: 0058eaa0
// Address Range: [[0058eaa0, 0058ec5c]]
// Convention: unknown
// Signature: undefined core_skeledit.cpp_FUN_0058eaa0()

#include "nocturne.h"

void core_skeledit_cpp_FUN_0058eaa0(void)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  float *pfVar5;
  int *in_stack_0000000c;
  int local_38;
  int local_34;
  int local_2c;
  float *local_24;
  float *local_20;
  float local_1c;
  float *local_18;
  int local_14;
  int iStack_c;
  
  crt_stack_c_stack_probe_FUN_005ff9f3(0x4c);
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Optimizing deformable model vertices...");
  local_34 = 0;
  if (0 < *in_stack_0000000c) {
    local_38 = 0;
    do {
      iStack_c = 0;
      for (local_2c = 0; local_2c < *(int *)((int)in_stack_0000000c + local_38 + 0x2c);
          local_2c = local_2c + 1) {
        pfVar1 = (float *)(iStack_c + *(int *)((int)in_stack_0000000c + local_38 + 0x40));
        if (1 < *(byte *)pfVar1) {
          pfVar2 = pfVar1 + 4;
          iVar4 = 0;
          local_14 = 0;
          pfVar3 = pfVar2;
          pfVar5 = pfVar1;
          local_24 = pfVar1;
          local_20 = pfVar1;
          local_18 = pfVar1;
          while( true ) {
            if ((int)(uint)*(byte *)pfVar1 <= iVar4) break;
            if ((float)0.01 < pfVar5[1]) {
              if (local_14 < iVar4) {
                *(byte *)((int)local_24 + 1) = *(byte *)((int)local_20 + 1);
                local_18[1] = pfVar5[1];
                if (pfVar3 != pfVar2) {
                  *pfVar3 = *pfVar2;
                  pfVar3[1] = pfVar2[1];
                  pfVar3[2] = pfVar2[2];
                }
              }
              local_18 = local_18 + 1;
              pfVar3 = pfVar3 + 3;
              local_24 = (float *)((int)local_24 + 1);
              local_14 = local_14 + 1;
            }
            pfVar2 = pfVar2 + 3;
            iVar4 = iVar4 + 1;
            local_20 = (float *)((int)local_20 + 1);
            pfVar5 = pfVar5 + 1;
          }
          if (local_14 < (int)(uint)*(byte *)pfVar1) {
            local_1c = 0.0;
            *(byte *)pfVar1 = (byte)local_14;
            pfVar2 = pfVar1;
            for (iVar4 = 0; iVar4 < (int)(uint)*(byte *)pfVar1; iVar4 = iVar4 + 1) {
              pfVar2 = pfVar2 + 1;
              local_1c = local_1c + *pfVar2;
            }
            pfVar2 = pfVar1;
            for (iVar4 = 0; iVar4 < (int)(uint)*(byte *)pfVar1; iVar4 = iVar4 + 1) {
              pfVar3 = pfVar2 + 1;
              pfVar2 = pfVar2 + 1;
              *pfVar2 = *pfVar3 / local_1c;
            }
          }
        }
        iStack_c = iStack_c + 0x34;
      }
      local_38 = local_38 + 4;
      local_34 = local_34 + 1;
    } while (local_34 < *in_stack_0000000c);
  }
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Optimized deformable model vertices OK");
  return;
}
