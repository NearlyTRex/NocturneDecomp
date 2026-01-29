// Name: core_skeledit.cpp_FUN_0058de70
// Address: 0058de70
// Address Range: [[0058de70, 0058e0aa]]
// Convention: unknown
// Signature: void core_skeledit_cpp_FUN_0058de70(void)

#include "nocturne.h"

void core_skeledit_cpp_FUN_0058de70(void)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  SCramConfig *pSVar8;
  int in_stack_00000004;
  char *in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  int in_stack_00000018;
  SCramConfig local_98;
  char *local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  __STK(0xb0);
  shape_design_c_initializeTextureManager_FUN_0046a880(1);
  shape_design_c_setTextureQualityParameter_FUN_0046a8e0(0x40);
  pSVar8 = &local_98;
  local_20 = 0;
  if (0 < *(int *)(in_stack_00000004 + 0xbc)) {
    local_24 = (char *)(in_stack_00000004 + in_stack_00000014 * 0x1680 + 200);
    do {
      uVar2 = 0x7fffffff;
      uVar3 = 0x80000001;
      uVar6 = 0x7fffffff;
      uVar7 = 0x80000001;
      local_14 = 0;
      local_18 = 0;
      for (local_1c = 0;
          local_1c < *(int *)(in_stack_00000004 + 0x54) + *(int *)(in_stack_00000004 + 0x68);
          local_1c = local_1c + 1) {
        iVar4 = *(int *)(in_stack_00000004 + 0x7c) + local_18;
        if (local_20 == *(int *)(*(int *)(in_stack_00000004 + 0x90) + local_14)) {
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
        local_18 = local_18 + 0x12;
        local_14 = local_14 + 4;
      }
      if ((int)uVar2 <= (int)uVar3) {
        shape_design_c_cramTextures_FUN_0046a970
                  (local_24,uVar2 << 8,uVar6 << 8,uVar3 << 8,uVar7 << 8);
      }
      local_24 = local_24 + 0x48;
      local_20 = local_20 + 1;
    } while (local_20 < *(int *)(in_stack_00000004 + 0xbc));
  }
  shape_design_c_initializeCramConfig_FUN_0046b6e0(&local_98);
  do {
    cVar1 = *in_stack_00000008;
    pSVar8->filename[0] = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = in_stack_00000008[1];
    in_stack_00000008 = in_stack_00000008 + 2;
    *(char *)((int)pSVar8 + 1) = cVar1;
    pSVar8 = (SCramConfig *)((int)pSVar8 + 2);
  } while (cVar1 != '\0');
  local_98.coverage_threshold = 0x5f;
  local_98.initial_value = in_stack_00000010;
  local_98.enable_optimization = 1;
  local_98.enable_gap_filling = in_stack_0000000c;
  local_98.enable_scaling = 1;
  local_98.final_mode = in_stack_00000018;
  local_98.enable_rotation = 1;
  local_98.enable_flipping = 1;
  local_98.algorithm_mode = 2;
  shape_design_c_cramTextureList_FUN_0046bb80(&local_98);
  local_98.filename[0] = -0x60;
  local_98.filename[1] = -0x20;
  local_98.filename[2] = 'X';
  local_98.filename[3] = '\0';
  engine_texture_cpp_clearTextureCache_FUN_005dd8e0();
  return;
}
