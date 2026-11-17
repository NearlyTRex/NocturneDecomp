// Name: core_box.cpp_CBoundingBox3D_isVisibleWithCamera_FUN_00420990
// Address: 00420990
// Address Range: [[00420990, 00420db4]]
// Convention: __cdecl
// Signature: int __cdecl core_box_cpp_CBoundingBox3D_isVisibleWithCamera_FUN_00420990(CBoundingBox3D *this_ptr)

#include "nocturne.h"

int __cdecl core_box_cpp_CBoundingBox3D_isVisibleWithCamera_FUN_00420990(CBoundingBox3D *this_ptr)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
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
  CVector3f local_4c;
  float local_40;
  float local_3c [2];
  int local_34;
  int local_30;
  int local_2c;
  CVector3i local_28;
  int local_1c;
  uint local_18;
  uint local_14;
  
  bVar5 = 0;
  iVar3 = 0;
  local_1c = 0;
  local_14 = 0;
  local_18 = 0xff;
  do {
    core_box_cpp_CBoundingBox3D_getCorner_FUN_00420570(this_ptr,local_14,&local_4c);
    local_40 = local_4c.x;
    local_3c[(uint)bVar5 * -2] = *(float *)((int)&local_4c + (uint)bVar5 * -8 + 4);
    local_3c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
         *(float *)((int)&local_4c + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
    local_28.x = (int)ROUND(local_40 * 256.0f);
    local_28.y = (int)ROUND(local_3c[0] * 256.0f);
    local_28.z = (int)ROUND(local_3c[1] * 256.0f);
    engine_special_cpp_transformAndProjectPoint_FUN_00580173
              ((SProjectedVertex *)
               ((int)&(g_CDemonRenderer_PTR_0061255c->vertex_buffer_ptr->projected_vertex).
                      transformed_x + iVar3),&local_28);
    if ((*(byte *)((int)&(g_CDemonRenderer_PTR_00612560->vertex_buffer_ptr->projected_vertex).
                         screen_x + iVar3 + 3) & 0x80) == 0) {
      local_18 = 0;
    }
    else {
      local_18 = local_18 &
                 *(uint *)((int)&(g_CDemonRenderer_PTR_0061255c->vertex_buffer_ptr->projected_vertex
                                 ).screen_x + iVar3);
      local_1c = 1;
    }
    uVar1 = local_18;
    local_14 = local_14 + 1;
    iVar3 = iVar3 + 0x30;
  } while ((int)local_14 < 8);
  if (local_18 != 0) {
    return 0;
  }
  engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_00483e20
            (g_CDemonRenderer_PTR_00612560,local_1c);
  SStack_80.base.count = 4;
  engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_00483d70
            (g_CDemonRenderer_PTR_00612560,0);
  iVar3 = 1;
  local_34 = (int)ROUND((this_ptr->min).x * 256.0f);
  local_30 = (int)ROUND((this_ptr->min).y * 256.0f);
  local_2c = (int)ROUND((this_ptr->min).z * 256.0f);
  iVar4 = 1;
  local_58 = (int)ROUND((this_ptr->max).x * 256.0f);
  local_54.i = (int)ROUND((this_ptr->max).y * 256.0f);
  local_50.i = (int)ROUND((this_ptr->max).z * 256.0f);
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
    iVar3 = iVar4;
    if (iVar2 != 0) goto LAB_00420d5c;
    iVar3 = 0;
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
    iVar3 = iVar4;
    if (iVar2 != 0) goto LAB_00420d5c;
    iVar3 = 0;
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
    iVar3 = iVar4;
    if (iVar2 != 0) goto LAB_00420d5c;
    iVar3 = 0;
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
    iVar3 = iVar4;
    if (iVar2 != 0) goto LAB_00420d5c;
    iVar3 = 0;
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
    iVar3 = iVar4;
    if (iVar2 != 0) goto LAB_00420d5c;
    iVar3 = 0;
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
    iVar3 = iVar4;
    if (iVar2 == 0) {
      iVar3 = 0;
    }
  }
LAB_00420d5c:
  engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_00483e20(g_CDemonRenderer_PTR_00612560,1);
  engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_00483d70
            (g_CDemonRenderer_PTR_00612560,1);
  return iVar3;
}
