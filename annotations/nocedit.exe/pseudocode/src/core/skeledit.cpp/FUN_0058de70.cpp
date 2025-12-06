// Name: core_skeledit.cpp_FUN_0058de70
// Address: 0058de70
// Address Range: [[0058de70, 0058e0aa]]
// Convention: unknown
// Signature: undefined core_skeledit.cpp_FUN_0058de70()

#include "nocturne.h"

void core_skeledit_cpp_FUN_0058de70(void)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  BADSPACEBASE *in_ESP;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  int in_stack_00000014;
  char *in_stack_0000001c;
  int in_stack_00000020;
  int in_stack_00000024;
  int in_stack_0000002c;
  SCramConfig SStack_84;
  int iStack_10;
  int iStack_c;
  int iVar9;
  int iVar10;
  
  crt_stack_c_stack_probe_FUN_005ff9f3(0xb0);
  shape_design_c_initializeTextureManager_FUN_0046a880(1);
  shape_design_c_setTextureQualityParameter_FUN_0046a8e0(0x40);
  iStack_10 = 0;
  if (0 < *(int *)(in_stack_00000014 + 0xbc)) {
    SStack_84.final_mode = in_stack_00000014 + in_stack_00000024 * 0x1680 + 200;
    do {
      uVar2 = 0x7fffffff;
      uVar3 = 0x80000001;
      uVar6 = 0x7fffffff;
      uVar7 = 0x80000001;
      iVar10 = 0;
      iVar9 = 0;
      for (iStack_c = 0;
          iStack_c < *(int *)(in_stack_00000014 + 0x54) + *(int *)(in_stack_00000014 + 0x68);
          iStack_c = iStack_c + 1) {
        iVar4 = *(int *)(in_stack_00000014 + 0x7c) + iVar9;
        if (iStack_10 == *(int *)(*(int *)(in_stack_00000014 + 0x90) + iVar10)) {
          iVar5 = iVar4 + 6;
          do {
            if (*(ushort *)(iVar4 + 6) < uVar2) {
              uVar2 = (uint)*(ushort *)(iVar4 + 6);
            }
            if ((int)uVar3 < (int)(uint)*(ushort *)(iVar4 + 6)) {
              uVar3 = (uint)*(ushort *)(iVar4 + 6);
            }
            if (*(ushort *)(iVar4 + 0xc) < uVar6) {
              uVar6 = (uint)*(ushort *)(iVar4 + 0xc);
            }
            if ((int)uVar7 < (int)(uint)*(ushort *)(iVar4 + 0xc)) {
              uVar7 = (uint)*(ushort *)(iVar4 + 0xc);
            }
            iVar4 = iVar4 + 2;
          } while (iVar4 != iVar5);
        }
        iVar9 = iVar9 + 0x12;
        iVar10 = iVar10 + 4;
      }
      if ((int)uVar2 <= (int)uVar3) {
        shape_design_c_cramTextures_FUN_0046a970
                  ((char *)SStack_84.final_mode,uVar2 << 8,uVar6 << 8,uVar3 << 8,uVar7 << 8);
      }
      SStack_84.final_mode = SStack_84.final_mode + 0x48;
      iStack_10 = iStack_10 + 1;
    } while (iStack_10 < *(int *)(in_stack_00000014 + 0xbc));
  }
  pcVar8 = &stack0xffffff78;
  shape_design_c_initializeCramConfig_FUN_0046b6e0((SCramConfig *)&stack0xffffff78);
  do {
    cVar1 = *in_stack_0000001c;
    *pcVar8 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = in_stack_0000001c[1];
    in_stack_0000001c = in_stack_0000001c + 2;
    pcVar8[1] = cVar1;
    pcVar8 = pcVar8 + 2;
  } while (cVar1 != '\0');
  SStack_84.coverage_threshold = 0x5f;
  SStack_84.initial_value = in_stack_00000024;
  SStack_84.enable_optimization = 1;
  SStack_84.enable_gap_filling = in_stack_00000020;
  SStack_84.enable_scaling = 1;
  SStack_84.final_mode = in_stack_0000002c;
  SStack_84.enable_rotation = 1;
  SStack_84.enable_flipping = 1;
  SStack_84.algorithm_mode = 2;
  shape_design_c_cramTextureList_FUN_0046bb80(&SStack_84);
  SStack_84.filename[8] = -0x60;
  SStack_84.filename[9] = -0x20;
  SStack_84.filename[10] = 'X';
  SStack_84.filename[0xb] = '\0';
  engine_texture_cpp_clearTextureCache_FUN_005dd8e0();
  return;
}
