// Name: core_skeledit.cpp_FUN_0058eaa0
// Address: 0058eaa0
// Address Range: [[0058eaa0, 0058ec5c]]
// Convention: __cdecl
// Signature: void __cdecl core_skeledit_cpp_FUN_0058eaa0(void)

#include "nocturne.h"

void __cdecl core_skeledit_cpp_FUN_0058eaa0(void)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  float *pfVar5;
  int *in_stack_00000004;
  int local_40;
  int local_3c;
  int local_34;
  float *local_2c;
  float *local_28;
  float local_24;
  float *local_20;
  int local_1c;
  int local_14;
  
  __STK();
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Optimizing deformable model vertices...");
  local_3c = 0;
  if (0 < *in_stack_00000004) {
    local_40 = 0;
    do {
      local_14 = 0;
      for (local_34 = 0; local_34 < *(int *)((int)in_stack_00000004 + local_40 + 0x2c);
          local_34 = local_34 + 1) {
        pfVar1 = (float *)(local_14 + *(int *)((int)in_stack_00000004 + local_40 + 0x40));
        if (1 < *(byte *)pfVar1) {
          pfVar2 = pfVar1 + 4;
          iVar4 = 0;
          local_1c = 0;
          pfVar3 = pfVar2;
          pfVar5 = pfVar1;
          local_2c = pfVar1;
          local_28 = pfVar1;
          local_20 = pfVar1;
          while( true ) {
            if ((int)(uint)*(byte *)pfVar1 <= iVar4) break;
            if ((float)0.01 < pfVar5[1]) {
              if (local_1c < iVar4) {
                *(byte *)((int)local_2c + 1) = *(byte *)((int)local_28 + 1);
                local_20[1] = pfVar5[1];
                if (pfVar3 != pfVar2) {
                  *pfVar3 = *pfVar2;
                  pfVar3[1] = pfVar2[1];
                  pfVar3[2] = pfVar2[2];
                }
              }
              local_20 = local_20 + 1;
              pfVar3 = pfVar3 + 3;
              local_2c = (float *)((int)local_2c + 1);
              local_1c = local_1c + 1;
            }
            pfVar2 = pfVar2 + 3;
            iVar4 = iVar4 + 1;
            local_28 = (float *)((int)local_28 + 1);
            pfVar5 = pfVar5 + 1;
          }
          if (local_1c < (int)(uint)*(byte *)pfVar1) {
            local_24 = 0.0;
            *(byte *)pfVar1 = (byte)local_1c;
            pfVar2 = pfVar1;
            for (iVar4 = 0; iVar4 < (int)(uint)*(byte *)pfVar1; iVar4 = iVar4 + 1) {
              pfVar2 = pfVar2 + 1;
              local_24 = local_24 + *pfVar2;
            }
            pfVar2 = pfVar1;
            for (iVar4 = 0; iVar4 < (int)(uint)*(byte *)pfVar1; iVar4 = iVar4 + 1) {
              pfVar3 = pfVar2 + 1;
              pfVar2 = pfVar2 + 1;
              *pfVar2 = *pfVar3 / local_24;
            }
          }
        }
        local_14 = local_14 + 0x34;
      }
      local_40 = local_40 + 4;
      local_3c = local_3c + 1;
    } while (local_3c < *in_stack_00000004);
  }
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Optimized deformable model vertices OK");
  return;
}
