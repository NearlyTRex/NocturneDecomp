// Name: core_box.cpp_FUN_0041d050
// Address: 0041d050
// Address Range: [[0041d050, 0041d445]]
// Convention: unknown
// Signature: undefined4 core_box_cpp_FUN_0041d050(CBoundingBox3D *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_box_cpp_FUN_0041d050(CBoundingBox3D *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint corner_index;
  uint uVar4;
  SMRGLHeaderPrimitive SStack_6c;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  int local_44;
  UIntegerFloat local_40;
  UIntegerFloat local_3c;
  int local_38;
  int local_34;
  int local_30;
  CVector3f local_2c;
  CVector3i local_20;
  int local_14;
  
  uVar1 = 0xff;
  corner_index = 0;
  iVar2 = 0;
  local_14 = 0;
  do {
    core_box_cpp_CBoundingBox3D_getCorner_FUN_0041cc70(param_1,&local_2c,corner_index);
    local_20.x = (int)ROUND(local_2c.x * _DAT_0059aa80);
    local_20.y = (int)ROUND(local_2c.y * _DAT_0059aa80);
    local_20.z = (int)ROUND(local_2c.z * _DAT_0059aa80);
    engine_special_cpp_transformAndProjectPoint_FUN_0053075c
              ((SProjectedVertex *)(*(int *)PTR_DAT_005ae700 + iVar2),&local_20);
    if ((*(byte *)((int)&(DAT_005ae704->vertex_buffer_ptr->projected_vertex).screen_x + iVar2 + 3) &
        0x80) == 0) {
      uVar1 = 0;
    }
    else {
      local_14 = 1;
      uVar1 = uVar1 & *(uint *)(iVar2 + 0x10 + *(int *)PTR_DAT_005ae700);
    }
    corner_index = corner_index + 1;
    iVar2 = iVar2 + 0x30;
  } while ((int)corner_index < 8);
  if (uVar1 != 0) {
    return 0;
  }
  engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_00461050(DAT_005ae704,local_14);
  SStack_6c.base.count = 4;
  engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_00460fa0(DAT_005ae704,0);
  local_38 = (int)ROUND((param_1->min).x * _DAT_0059aa80);
  local_34 = (int)ROUND((param_1->min).y * _DAT_0059aa80);
  local_30 = (int)ROUND((param_1->min).z * _DAT_0059aa80);
  uVar3 = 1;
  local_44 = (int)ROUND((param_1->max).x * _DAT_0059aa80);
  local_40.i = (int)ROUND((param_1->max).y * _DAT_0059aa80);
  local_3c.i = (int)ROUND((param_1->max).z * _DAT_0059aa80);
  SStack_6c.surface_normal.B.i = 0;
  SStack_6c.surface_normal.C.i = 0;
  uVar4 = 1;
  SStack_6c.surface_normal.D.i = -local_38;
  SStack_6c.surface_normal.A.i = -1;
  iVar2 = engine_3d_c_isVisiblePlane_FUN_00404610(&SStack_6c.surface_normal);
  if (iVar2 != 0) {
    local_48 = 2;
    local_54 = 0;
    local_50 = 4;
    local_4c = 6;
    iVar2 = core_set_cpp_CDemonSet_renderSinglePrimitive_FUN_0050e490
                      (g_CDemonSet_PTR_005be368,&SStack_6c);
    uVar3 = uVar4;
    if (iVar2 != 0) goto LAB_0041d3f6;
    uVar3 = 0;
  }
  SStack_6c.surface_normal.D.i = local_44;
  SStack_6c.surface_normal.A.i = 1;
  SStack_6c.surface_normal.B.i = 0;
  SStack_6c.surface_normal.C.i = 0;
  iVar2 = engine_3d_c_isVisiblePlane_FUN_00404610(&SStack_6c.surface_normal);
  if (iVar2 != 0) {
    local_54 = 1;
    local_50 = 3;
    local_4c = 7;
    local_48 = 5;
    iVar2 = core_set_cpp_CDemonSet_renderSinglePrimitive_FUN_0050e490
                      (g_CDemonSet_PTR_005be368,&SStack_6c);
    uVar3 = uVar4;
    if (iVar2 != 0) goto LAB_0041d3f6;
    uVar3 = 0;
  }
  SStack_6c.surface_normal.B.i = -1;
  SStack_6c.surface_normal.A.i = 0;
  SStack_6c.surface_normal.D.i = -local_34;
  SStack_6c.surface_normal.C.i = 0;
  iVar2 = engine_3d_c_isVisiblePlane_FUN_00404610(&SStack_6c.surface_normal);
  if (iVar2 != 0) {
    local_48 = 4;
    local_54 = 0;
    local_50 = 1;
    local_4c = 5;
    iVar2 = core_set_cpp_CDemonSet_renderSinglePrimitive_FUN_0050e490
                      (g_CDemonSet_PTR_005be368,&SStack_6c);
    uVar3 = uVar4;
    if (iVar2 != 0) goto LAB_0041d3f6;
    uVar3 = 0;
  }
  SStack_6c.surface_normal.D = local_40;
  SStack_6c.surface_normal.A.i = 0;
  SStack_6c.surface_normal.B.i = 1;
  SStack_6c.surface_normal.C.i = 0;
  iVar2 = engine_3d_c_isVisiblePlane_FUN_00404610(&SStack_6c.surface_normal);
  if (iVar2 != 0) {
    local_54 = 2;
    local_50 = 6;
    local_4c = 7;
    local_48 = 3;
    iVar2 = core_set_cpp_CDemonSet_renderSinglePrimitive_FUN_0050e490
                      (g_CDemonSet_PTR_005be368,&SStack_6c);
    uVar3 = uVar4;
    if (iVar2 != 0) goto LAB_0041d3f6;
    uVar3 = 0;
  }
  SStack_6c.surface_normal.A.i = 0;
  SStack_6c.surface_normal.B.i = 0;
  SStack_6c.surface_normal.D.i = -local_30;
  SStack_6c.surface_normal.C.i = -1;
  iVar2 = engine_3d_c_isVisiblePlane_FUN_00404610(&SStack_6c.surface_normal);
  if (iVar2 != 0) {
    local_48 = 1;
    local_54 = 0;
    local_50 = 2;
    local_4c = 3;
    iVar2 = core_set_cpp_CDemonSet_renderSinglePrimitive_FUN_0050e490
                      (g_CDemonSet_PTR_005be368,&SStack_6c);
    uVar3 = uVar4;
    if (iVar2 != 0) goto LAB_0041d3f6;
    uVar3 = 0;
  }
  SStack_6c.surface_normal.D = local_3c;
  SStack_6c.surface_normal.A.i = 0;
  SStack_6c.surface_normal.B.i = 0;
  SStack_6c.surface_normal.C.i = 1;
  iVar2 = engine_3d_c_isVisiblePlane_FUN_00404610(&SStack_6c.surface_normal);
  if (iVar2 != 0) {
    local_54 = 4;
    local_50 = 5;
    local_4c = 7;
    local_48 = 6;
    iVar2 = core_set_cpp_CDemonSet_renderSinglePrimitive_FUN_0050e490
                      (g_CDemonSet_PTR_005be368,&SStack_6c);
    uVar3 = uVar4;
    if (iVar2 == 0) {
      uVar3 = 0;
    }
  }
LAB_0041d3f6:
  engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_00461050(DAT_005ae704,1);
  engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_00460fa0(DAT_005ae704,1);
  return uVar3;
}
