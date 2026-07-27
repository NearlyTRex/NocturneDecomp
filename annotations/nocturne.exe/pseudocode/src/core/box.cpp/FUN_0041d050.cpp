// Name: core_box.cpp_FUN_0041d050
// Address: 0041d050
// Address Range: [[0041d050, 0041d445]]
// Convention: unknown
// Signature: undefined4 core_box_cpp_FUN_0041d050(float *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_box_cpp_FUN_0041d050(float *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  byte auStack_6c [4];
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  int local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  float local_2c;
  float local_28;
  float local_24;
  int local_20;
  int local_1c;
  int local_18;
  uint local_14;
  
  uVar1 = 0xff;
  iVar4 = 0;
  iVar2 = 0;
  local_14 = 0;
  do {
    core_box_cpp_CBoundingBox3D_getCorner_FUN_0041cc70(param_1,&local_2c,iVar4);
    local_20 = (int)ROUND(local_2c * _DAT_0059aa80);
    local_1c = (int)ROUND(local_28 * _DAT_0059aa80);
    local_18 = (int)ROUND(local_24 * _DAT_0059aa80);
    engine_special_cpp_transformAndProjectPoint_FUN_0053075c(*0x01B4D738 + iVar2,&local_20);
    if ((*(byte *)(iVar2 + 0x13 + *DAT_005ae704) & 0x80) == 0) {
      uVar1 = 0;
    }
    else {
      local_14 = 1;
      uVar1 = uVar1 & *(uint *)(iVar2 + 0x10 + *0x01B4D738);
    }
    iVar4 = iVar4 + 1;
    iVar2 = iVar2 + 0x30;
  } while (iVar4 < 8);
  if (uVar1 != 0) {
    return 0;
  }
  engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_00461050(DAT_005ae704,local_14);
  local_68 = 4;
  engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_00460fa0(DAT_005ae704,0);
  local_38 = (int)ROUND(*param_1 * _DAT_0059aa80);
  local_34 = (int)ROUND(param_1[1] * _DAT_0059aa80);
  local_30 = (int)ROUND(param_1[2] * _DAT_0059aa80);
  uVar3 = 1;
  local_44 = (int)ROUND(param_1[3] * _DAT_0059aa80);
  local_40 = (int)ROUND(param_1[4] * _DAT_0059aa80);
  local_3c = (int)ROUND(param_1[5] * _DAT_0059aa80);
  local_60 = 0;
  local_5c = 0;
  uVar5 = 1;
  local_58 = -local_38;
  local_64 = 0xffffffff;
  iVar2 = engine_3d_c_isVisiblePlane_FUN_00404610(&local_64);
  if (iVar2 != 0) {
    local_48 = 2;
    local_54 = 0;
    local_50 = 4;
    local_4c = 6;
    iVar2 = core_set_cpp_CDemonSet_renderSinglePrimitive_FUN_0050e490(0x01E57284,auStack_6c);
    uVar3 = uVar5;
    if (iVar2 != 0) goto LAB_0041d3f6;
    uVar3 = 0;
  }
  local_58 = local_44;
  local_64 = 1;
  local_60 = 0;
  local_5c = 0;
  iVar2 = engine_3d_c_isVisiblePlane_FUN_00404610(&local_64);
  if (iVar2 != 0) {
    local_54 = 1;
    local_50 = 3;
    local_4c = 7;
    local_48 = 5;
    iVar2 = core_set_cpp_CDemonSet_renderSinglePrimitive_FUN_0050e490(0x01E57284,auStack_6c);
    uVar3 = uVar5;
    if (iVar2 != 0) goto LAB_0041d3f6;
    uVar3 = 0;
  }
  local_60 = 0xffffffff;
  local_64 = 0;
  local_58 = -local_34;
  local_5c = 0;
  iVar2 = engine_3d_c_isVisiblePlane_FUN_00404610(&local_64);
  if (iVar2 != 0) {
    local_48 = 4;
    local_54 = 0;
    local_50 = 1;
    local_4c = 5;
    iVar2 = core_set_cpp_CDemonSet_renderSinglePrimitive_FUN_0050e490(0x01E57284,auStack_6c);
    uVar3 = uVar5;
    if (iVar2 != 0) goto LAB_0041d3f6;
    uVar3 = 0;
  }
  local_58 = local_40;
  local_64 = 0;
  local_60 = 1;
  local_5c = 0;
  iVar2 = engine_3d_c_isVisiblePlane_FUN_00404610(&local_64);
  if (iVar2 != 0) {
    local_54 = 2;
    local_50 = 6;
    local_4c = 7;
    local_48 = 3;
    iVar2 = core_set_cpp_CDemonSet_renderSinglePrimitive_FUN_0050e490(0x01E57284,auStack_6c);
    uVar3 = uVar5;
    if (iVar2 != 0) goto LAB_0041d3f6;
    uVar3 = 0;
  }
  local_64 = 0;
  local_60 = 0;
  local_58 = -local_30;
  local_5c = 0xffffffff;
  iVar2 = engine_3d_c_isVisiblePlane_FUN_00404610(&local_64);
  if (iVar2 != 0) {
    local_48 = 1;
    local_54 = 0;
    local_50 = 2;
    local_4c = 3;
    iVar2 = core_set_cpp_CDemonSet_renderSinglePrimitive_FUN_0050e490(0x01E57284,auStack_6c);
    uVar3 = uVar5;
    if (iVar2 != 0) goto LAB_0041d3f6;
    uVar3 = 0;
  }
  local_58 = local_3c;
  local_64 = 0;
  local_60 = 0;
  local_5c = 1;
  iVar2 = engine_3d_c_isVisiblePlane_FUN_00404610(&local_64);
  if (iVar2 != 0) {
    local_54 = 4;
    local_50 = 5;
    local_4c = 7;
    local_48 = 6;
    iVar2 = core_set_cpp_CDemonSet_renderSinglePrimitive_FUN_0050e490(0x01E57284,auStack_6c);
    uVar3 = uVar5;
    if (iVar2 == 0) {
      uVar3 = 0;
    }
  }
LAB_0041d3f6:
  engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_00461050(DAT_005ae704,1);
  engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_00460fa0(DAT_005ae704,1);
  return uVar3;
}
