// Name: core_motion.cpp_CMotionController_render_FUN_004e22b0
// Address: 004e22b0
// Address Range: [[004e22b0, 004e247a]]
// Convention: __cdecl
// Signature: void __cdecl core_motion_cpp_CMotionController_render_FUN_004e22b0(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_motion_cpp_CMotionController_render_FUN_004e22b0(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  int iVar6;
  char *pcVar7;
  char local_a8 [100];
  byte local_44 [24];
  int local_2c;
  int local_28;
  int local_24;
  float local_20;
  float local_1c;
  uint local_18;
  int local_14;
  
  if ((_DAT_01cd4318 == 0) ||
     (local_20 = (float)engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090(),
     local_20 != 0.0)) {
    return;
  }
  iVar2 = (**(code **)(*(int *)(param_2 + 0x14c) + 0x14))(param_2,local_44);
  local_1c = *(float *)(iVar2 + 0x10);
  local_18 = 0;
  local_2c = (int)ROUND(local_20 * _DAT_005a0d00);
  local_28 = (int)ROUND(local_1c * _DAT_005a0d00);
  local_24 = (int)ROUND(_DAT_005a0d00 * 0.0);
  wincore_windll_cpp_transformAndProjectPoint_FUN_0053075c(*DAT_005ae704 + 0xea5d0,&local_2c);
  iVar2 = *DAT_005ae704;
  if ((*(byte *)(iVar2 + 0xea5e3) & 0x80) != 0) {
    return;
  }
  iVar6 = *(int *)(iVar2 + 0xea5e4) >> 0x10;
  local_14 = (*(int *)(iVar2 + 0xea5e0) >> 0x10) + -0x23;
  engine_2d_c_drawText_FUN_00402600(param_2,local_14,iVar6 + -0x21);
  if (-1 < *(int *)(param_1 + 0x28)) {
    iVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660();
    iVar2 = *(int *)(param_1 + 0x28);
    if (*(int *)(iVar3 + 0x24) != iVar2) {
      iVar3 = core_motion_cpp_CMotionController_getMotionList_FUN_004e1890();
      uVar4 = core_motion_cpp_CMotionController_getCurrentStateName_FUN_004e18a0
                        (param_1,iVar3 + 4 + iVar2 * 0x1e);
      _sprintf(local_a8,"%s -> %s",uVar4);
      goto LAB_004e23ee;
    }
  }
  pcVar5 = (char *)core_motion_cpp_CMotionController_getCurrentStateName_FUN_004e18a0();
  pcVar7 = local_a8;
  do {
    cVar1 = *pcVar5;
    *pcVar7 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar7[1] = cVar1;
    pcVar7 = pcVar7 + 2;
  } while (cVar1 != '\0');
LAB_004e23ee:
  engine_2d_c_drawText_FUN_00402600(local_a8,local_14,iVar6 + -0x16);
  uVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                    (param_1,(double)*(float *)(param_1 + 8));
  _sprintf(local_a8,"%s : %5.2f",uVar4);
  engine_2d_c_drawText_FUN_00402600(local_a8,local_14,iVar6 + -0xb);
  return;
}
