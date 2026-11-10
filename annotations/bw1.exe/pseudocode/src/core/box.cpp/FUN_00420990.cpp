// Name: core_box.cpp_FUN_00420990
// Address: 00420990
// Address Range: [[00420990, 00420db4]]
// Convention: unknown
// Signature: undefined4 core_box_cpp_FUN_00420990(float *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_box_cpp_FUN_00420990(float *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  float afStackY_1034 [1003];
  SMRGLHeaderPrimitive SStack_80;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  int local_58;
  UIntegerFloat local_54;
  UIntegerFloat local_50;
  float local_4c;
  float afStack_48 [4];
  float local_38;
  int local_34;
  int local_30;
  int local_2c;
  CVector3i local_28;
  int local_1c;
  uint local_18;
  int local_14;
  
  bVar5 = 0;
  iVar2 = 0;
  local_1c = 0;
  local_14 = 0;
  local_18 = 0xff;
  do {
    core_box_cpp_FUN_00420570(param_1,local_14);
    afStack_48[2] = local_4c;
    afStack_48[(uint)bVar5 * -2 + 3] = afStack_48[(uint)bVar5 * -2];
    afStack_48[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
         afStack_48[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
    local_28.x = (int)ROUND(afStack_48[2] * _DAT_005fce08);
    local_28.y = (int)ROUND(afStack_48[3] * _DAT_005fce08);
    local_28.z = (int)ROUND(local_38 * _DAT_005fce08);
    engine_special_cpp_FUN_00580173((SProjectedVertex *)(*0x01BC120C + iVar2),&local_28);
    if (((byte)DAT_00612560->vertex_buffer_ptr[iVar2 + 0x13] & 0x80) == 0) {
      local_18 = 0;
    }
    else {
      local_18 = local_18 & *(uint *)(*0x01BC120C + 0x10 + iVar2);
      local_1c = 1;
    }
    uVar1 = local_18;
    local_14 = local_14 + 1;
    iVar2 = iVar2 + 0x30;
  } while (local_14 < 8);
  if (local_18 != 0) {
    return 0;
  }
  engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_00483e20(DAT_00612560,local_1c);
  SStack_80.base.count = 4;
  engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_00483d70(DAT_00612560,0);
  uVar4 = 1;
  local_34 = (int)ROUND(*param_1 * _DAT_005fce08);
  local_30 = (int)ROUND(param_1[1] * _DAT_005fce08);
  local_2c = (int)ROUND(param_1[2] * _DAT_005fce08);
  uVar3 = 1;
  local_58 = (int)ROUND(param_1[3] * _DAT_005fce08);
  local_54.i = (int)ROUND(param_1[4] * _DAT_005fce08);
  local_50.i = (int)ROUND(param_1[5] * _DAT_005fce08);
  SStack_80.surface_normal.B.i = uVar1;
  SStack_80.surface_normal.C.i = uVar1;
  SStack_80.surface_normal.D.i = -local_34;
  SStack_80.surface_normal.A.i = -1;
  iVar2 = engine_3d_c_isVisiblePlane_FUN_00403920(&SStack_80.surface_normal);
  if (iVar2 != 0) {
    local_68 = uVar1;
    local_64 = 4;
    local_60 = 6;
    local_5c = 2;
    iVar2 = core_set_cpp_CDemonSet_renderSinglePrimitive_FUN_005558c0(g_CDemonSetPtr,&SStack_80);
    uVar4 = uVar3;
    if (iVar2 != 0) goto LAB_00420d5c;
    uVar4 = 0;
  }
  SStack_80.surface_normal.D.i = local_58;
  SStack_80.surface_normal.A.i = 1;
  SStack_80.surface_normal.B.i = 0;
  SStack_80.surface_normal.C.i = 0;
  iVar2 = engine_3d_c_isVisiblePlane_FUN_00403920(&SStack_80.surface_normal);
  if (iVar2 != 0) {
    local_60 = 7;
    local_68 = 1;
    local_64 = 3;
    local_5c = 5;
    iVar2 = core_set_cpp_CDemonSet_renderSinglePrimitive_FUN_005558c0(g_CDemonSetPtr,&SStack_80);
    uVar4 = uVar3;
    if (iVar2 != 0) goto LAB_00420d5c;
    uVar4 = 0;
  }
  SStack_80.surface_normal.A.i = 0;
  SStack_80.surface_normal.B.i = 0xffffffff;
  SStack_80.surface_normal.D.i = -local_30;
  SStack_80.surface_normal.C.i = 0;
  iVar2 = engine_3d_c_isVisiblePlane_FUN_00403920(&SStack_80.surface_normal);
  if (iVar2 != 0) {
    local_68 = 0;
    local_60 = 5;
    local_5c = 4;
    local_64 = 1;
    iVar2 = core_set_cpp_CDemonSet_renderSinglePrimitive_FUN_005558c0(g_CDemonSetPtr,&SStack_80);
    uVar4 = uVar3;
    if (iVar2 != 0) goto LAB_00420d5c;
    uVar4 = 0;
  }
  SStack_80.surface_normal.D = local_54;
  SStack_80.surface_normal.A.i = 0;
  SStack_80.surface_normal.B.i = 1;
  SStack_80.surface_normal.C.i = 0;
  iVar2 = engine_3d_c_isVisiblePlane_FUN_00403920(&SStack_80.surface_normal);
  if (iVar2 != 0) {
    local_60 = 7;
    local_68 = 2;
    local_64 = 6;
    local_5c = 3;
    iVar2 = core_set_cpp_CDemonSet_renderSinglePrimitive_FUN_005558c0(g_CDemonSetPtr,&SStack_80);
    uVar4 = uVar3;
    if (iVar2 != 0) goto LAB_00420d5c;
    uVar4 = 0;
  }
  SStack_80.surface_normal.C.i = 0xffffffff;
  SStack_80.surface_normal.A.i = 0;
  SStack_80.surface_normal.D.i = -local_2c;
  SStack_80.surface_normal.B.i = 0;
  iVar2 = engine_3d_c_isVisiblePlane_FUN_00403920(&SStack_80.surface_normal);
  if (iVar2 != 0) {
    local_68 = 0;
    local_60 = 3;
    local_5c = 1;
    local_64 = 2;
    iVar2 = core_set_cpp_CDemonSet_renderSinglePrimitive_FUN_005558c0(g_CDemonSetPtr,&SStack_80);
    uVar4 = uVar3;
    if (iVar2 != 0) goto LAB_00420d5c;
    uVar4 = 0;
  }
  SStack_80.surface_normal.D = local_50;
  SStack_80.surface_normal.A.i = 0;
  SStack_80.surface_normal.B.i = 0;
  SStack_80.surface_normal.C.i = 1;
  iVar2 = engine_3d_c_isVisiblePlane_FUN_00403920(&SStack_80.surface_normal);
  if (iVar2 != 0) {
    local_60 = 7;
    local_68 = 4;
    local_64 = 5;
    local_5c = 6;
    iVar2 = core_set_cpp_CDemonSet_renderSinglePrimitive_FUN_005558c0(g_CDemonSetPtr,&SStack_80);
    uVar4 = uVar3;
    if (iVar2 == 0) {
      uVar4 = 0;
    }
  }
LAB_00420d5c:
  engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_00483e20(DAT_00612560,1);
  engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_00483d70(DAT_00612560,1);
  return uVar4;
}
