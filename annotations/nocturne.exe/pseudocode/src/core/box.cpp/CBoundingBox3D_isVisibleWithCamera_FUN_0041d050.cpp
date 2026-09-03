// Name: core_box.cpp_CBoundingBox3D_isVisibleWithCamera_FUN_0041d050
// Address: 0041d050
// Address Range: [[0041d050, 0041d445]]
// Convention: __cdecl
// Signature: int __cdecl core_box_cpp_CBoundingBox3D_isVisibleWithCamera_FUN_0041d050(CBoundingBox3D *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_box_cpp_CBoundingBox3D_isVisibleWithCamera_FUN_0041d050(CBoundingBox3D *this_ptr)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint corner_index;
  int iVar4;
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
  
  uVar2 = 0xff;
  corner_index = 0;
  iVar3 = 0;
  local_14 = 0;
  do {
    core_box_cpp_CBoundingBox3D_getCorner_FUN_0041cc70(this_ptr,&local_2c,corner_index);
    local_20.x = (int)ROUND(local_2c.x * _DAT_0059aa80);
    local_20.y = (int)ROUND(local_2c.y * _DAT_0059aa80);
    local_20.z = (int)ROUND(local_2c.z * _DAT_0059aa80);
    engine_special_cpp_transformAndProjectPoint_FUN_0053075c
              ((SProjectedVertex *)(*(int *)PTR_DAT_005ae700 + iVar3),&local_20);
    if ((*(byte *)((int)&(g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr->projected_vertex).
                         screen_x + iVar3 + 3) & 0x80) == 0) {
      uVar2 = 0;
    }
    else {
      local_14 = 1;
      uVar2 = uVar2 & *(uint *)(iVar3 + 0x10 + *(int *)PTR_DAT_005ae700);
    }
    corner_index = corner_index + 1;
    iVar3 = iVar3 + 0x30;
  } while ((int)corner_index < 8);
  if (uVar2 != 0) {
    return 0;
  }
  engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_00461050
            (g_CDemonRenderer_PTR_005ae704,local_14);
  SStack_6c.base.count = 4;
  engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_00460fa0
            (g_CDemonRenderer_PTR_005ae704,0);
  local_38 = (int)ROUND((this_ptr->min).x * _DAT_0059aa80);
  local_34 = (int)ROUND((this_ptr->min).y * _DAT_0059aa80);
  local_30 = (int)ROUND((this_ptr->min).z * _DAT_0059aa80);
  iVar3 = 1;
  local_44 = (int)ROUND((this_ptr->max).x * _DAT_0059aa80);
  local_40.i = (int)ROUND((this_ptr->max).y * _DAT_0059aa80);
  local_3c.i = (int)ROUND((this_ptr->max).z * _DAT_0059aa80);
  SStack_6c.surface_normal.B.i = 0;
  SStack_6c.surface_normal.C.i = 0;
  iVar4 = 1;
  SStack_6c.surface_normal.D.i = -local_38;
  SStack_6c.surface_normal.A.i = -1;
  iVar1 = engine_3d_c_isVisiblePlane_FUN_00404610(&SStack_6c.surface_normal);
  if (iVar1 != 0) {
    local_48 = 2;
    local_54 = 0;
    local_50 = 4;
    local_4c = 6;
    iVar1 = core_set_cpp_CDemonSet_renderSinglePrimitive_FUN_0050e490
                      (g_CDemonSet_PTR_005be368,&SStack_6c);
    iVar3 = iVar4;
    if (iVar1 != 0) goto LAB_0041d3f6;
    iVar3 = 0;
  }
  SStack_6c.surface_normal.D.i = local_44;
  SStack_6c.surface_normal.A.i = 1;
  SStack_6c.surface_normal.B.i = 0;
  SStack_6c.surface_normal.C.i = 0;
  iVar1 = engine_3d_c_isVisiblePlane_FUN_00404610(&SStack_6c.surface_normal);
  if (iVar1 != 0) {
    local_54 = 1;
    local_50 = 3;
    local_4c = 7;
    local_48 = 5;
    iVar1 = core_set_cpp_CDemonSet_renderSinglePrimitive_FUN_0050e490
                      (g_CDemonSet_PTR_005be368,&SStack_6c);
    iVar3 = iVar4;
    if (iVar1 != 0) goto LAB_0041d3f6;
    iVar3 = 0;
  }
  SStack_6c.surface_normal.B.i = -1;
  SStack_6c.surface_normal.A.i = 0;
  SStack_6c.surface_normal.D.i = -local_34;
  SStack_6c.surface_normal.C.i = 0;
  iVar1 = engine_3d_c_isVisiblePlane_FUN_00404610(&SStack_6c.surface_normal);
  if (iVar1 != 0) {
    local_48 = 4;
    local_54 = 0;
    local_50 = 1;
    local_4c = 5;
    iVar1 = core_set_cpp_CDemonSet_renderSinglePrimitive_FUN_0050e490
                      (g_CDemonSet_PTR_005be368,&SStack_6c);
    iVar3 = iVar4;
    if (iVar1 != 0) goto LAB_0041d3f6;
    iVar3 = 0;
  }
  SStack_6c.surface_normal.D = local_40;
  SStack_6c.surface_normal.A.i = 0;
  SStack_6c.surface_normal.B.i = 1;
  SStack_6c.surface_normal.C.i = 0;
  iVar1 = engine_3d_c_isVisiblePlane_FUN_00404610(&SStack_6c.surface_normal);
  if (iVar1 != 0) {
    local_54 = 2;
    local_50 = 6;
    local_4c = 7;
    local_48 = 3;
    iVar1 = core_set_cpp_CDemonSet_renderSinglePrimitive_FUN_0050e490
                      (g_CDemonSet_PTR_005be368,&SStack_6c);
    iVar3 = iVar4;
    if (iVar1 != 0) goto LAB_0041d3f6;
    iVar3 = 0;
  }
  SStack_6c.surface_normal.A.i = 0;
  SStack_6c.surface_normal.B.i = 0;
  SStack_6c.surface_normal.D.i = -local_30;
  SStack_6c.surface_normal.C.i = -1;
  iVar1 = engine_3d_c_isVisiblePlane_FUN_00404610(&SStack_6c.surface_normal);
  if (iVar1 != 0) {
    local_48 = 1;
    local_54 = 0;
    local_50 = 2;
    local_4c = 3;
    iVar1 = core_set_cpp_CDemonSet_renderSinglePrimitive_FUN_0050e490
                      (g_CDemonSet_PTR_005be368,&SStack_6c);
    iVar3 = iVar4;
    if (iVar1 != 0) goto LAB_0041d3f6;
    iVar3 = 0;
  }
  SStack_6c.surface_normal.D = local_3c;
  SStack_6c.surface_normal.A.i = 0;
  SStack_6c.surface_normal.B.i = 0;
  SStack_6c.surface_normal.C.i = 1;
  iVar1 = engine_3d_c_isVisiblePlane_FUN_00404610(&SStack_6c.surface_normal);
  if (iVar1 != 0) {
    local_54 = 4;
    local_50 = 5;
    local_4c = 7;
    local_48 = 6;
    iVar1 = core_set_cpp_CDemonSet_renderSinglePrimitive_FUN_0050e490
                      (g_CDemonSet_PTR_005be368,&SStack_6c);
    iVar3 = iVar4;
    if (iVar1 == 0) {
      iVar3 = 0;
    }
  }
LAB_0041d3f6:
  engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_00461050(g_CDemonRenderer_PTR_005ae704,1);
  engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_00460fa0
            (g_CDemonRenderer_PTR_005ae704,1);
  return iVar3;
}
