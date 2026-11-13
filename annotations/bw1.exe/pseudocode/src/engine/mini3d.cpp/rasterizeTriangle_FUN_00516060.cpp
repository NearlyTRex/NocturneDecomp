// Name: engine_mini3d.cpp_rasterizeTriangle_FUN_00516060
// Address: 00516060
// Address Range: [[00516060, 005168b1]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_rasterizeTriangle_FUN_00516060(float *v0,float *v1,float *v2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_mini3d_cpp_rasterizeTriangle_FUN_00516060(float *v0,float *v1,float *v2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  SSoftwareEdge *left_vertex;
  int iVar5;
  int iVar6;
  SRenderVertex local_c0;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  int local_18;
  SSoftwareEdge *local_14;
  
  local_28 = v1[6] - v0[6];
  local_2c = v2[5] - v1[5];
  local_20 = local_28 * local_2c;
  local_30 = v1[5] - v0[5];
  local_24 = v2[6] - v1[6];
  local_1c = local_30 * local_24;
  if (_DAT_01d22578 == 0) {
    if (local_1c <= local_20) {
      return;
    }
  }
  else if (local_20 <= local_1c) {
    return;
  }
  if (_DAT_01c50948 != 0) {
    local_c0.projected_vertex.transformed_x =
         engine_mini3d_cpp_roundFloat_FUN_00516040(*v0 * _DAT_005e8f2b);
    local_c0.projected_vertex.transformed_y =
         engine_mini3d_cpp_roundFloat_FUN_00516040(v0[1] * _DAT_005e8f2b);
    local_c0.projected_vertex.transformed_z =
         engine_mini3d_cpp_roundFloat_FUN_00516040(v0[2] * _DAT_005e8f2b);
    local_c0.projected_vertex.inv_z =
         engine_mini3d_cpp_roundFloat_FUN_00516040(v0[3] * _DAT_005e8f2f);
    local_c0.projected_vertex.screen_x =
         engine_mini3d_cpp_roundFloat_FUN_00516040(v0[5] * _DAT_005e8f33);
    local_c0.projected_vertex.screen_y =
         engine_mini3d_cpp_roundFloat_FUN_00516040(v0[6] * _DAT_005e8f33);
    local_c0.u = engine_mini3d_cpp_roundFloat_FUN_00516040(v0[7] * _DAT_005e8f2b * _DAT_005e8f33);
    local_c0.v = engine_mini3d_cpp_roundFloat_FUN_00516040(v0[8] * _DAT_005e8f2b * _DAT_005e8f33);
    local_c0.r = engine_mini3d_cpp_roundFloat_FUN_00516040(v0[0xb] * _DAT_005e8f37);
    local_c0.g = engine_mini3d_cpp_roundFloat_FUN_00516040(v0[10] * _DAT_005e8f37);
    local_c0.b = engine_mini3d_cpp_roundFloat_FUN_00516040(v0[9] * _DAT_005e8f37);
    if ((DAT_01d224b8 & 8) == 0) {
      fVar1 = v0[0xc];
    }
    else {
      fVar1 = v0[0xd];
    }
    local_c0.a = engine_mini3d_cpp_roundFloat_FUN_00516040(fVar1 * _DAT_005e8f37);
    local_90 = engine_mini3d_cpp_roundFloat_FUN_00516040(*v1 * _DAT_005e8f2b);
    local_8c = engine_mini3d_cpp_roundFloat_FUN_00516040(v1[1] * _DAT_005e8f2b);
    local_88 = engine_mini3d_cpp_roundFloat_FUN_00516040(v1[2] * _DAT_005e8f2b);
    local_84 = engine_mini3d_cpp_roundFloat_FUN_00516040(v1[3] * _DAT_005e8f2f);
    local_80 = engine_mini3d_cpp_roundFloat_FUN_00516040(v1[5] * _DAT_005e8f33);
    local_7c = engine_mini3d_cpp_roundFloat_FUN_00516040(v1[6] * _DAT_005e8f33);
    local_78 = engine_mini3d_cpp_roundFloat_FUN_00516040(v1[7] * _DAT_005e8f2b * _DAT_005e8f33);
    local_74 = engine_mini3d_cpp_roundFloat_FUN_00516040(v1[8] * _DAT_005e8f2b * _DAT_005e8f33);
    local_70 = engine_mini3d_cpp_roundFloat_FUN_00516040(v1[0xb] * _DAT_005e8f37);
    local_6c = engine_mini3d_cpp_roundFloat_FUN_00516040(v1[10] * _DAT_005e8f37);
    local_68 = engine_mini3d_cpp_roundFloat_FUN_00516040(v1[9] * _DAT_005e8f37);
    if ((DAT_01d224b8 & 8) == 0) {
      fVar1 = v1[0xc];
    }
    else {
      fVar1 = v1[0xd];
    }
    local_64 = engine_mini3d_cpp_roundFloat_FUN_00516040(fVar1 * _DAT_005e8f37);
    local_60 = engine_mini3d_cpp_roundFloat_FUN_00516040(*v2 * _DAT_005e8f2b);
    local_5c = engine_mini3d_cpp_roundFloat_FUN_00516040(v2[1] * _DAT_005e8f2b);
    local_58 = engine_mini3d_cpp_roundFloat_FUN_00516040(v2[2] * _DAT_005e8f2b);
    local_54 = engine_mini3d_cpp_roundFloat_FUN_00516040(v2[3] * _DAT_005e8f2f);
    local_50 = engine_mini3d_cpp_roundFloat_FUN_00516040(v2[5] * _DAT_005e8f33);
    local_4c = engine_mini3d_cpp_roundFloat_FUN_00516040(v2[6] * _DAT_005e8f33);
    local_48 = engine_mini3d_cpp_roundFloat_FUN_00516040
                         (v2[7] * (float)_DAT_005e8f3b * (float)_DAT_005e8f43);
    local_44 = engine_mini3d_cpp_roundFloat_FUN_00516040
                         (v2[8] * (float)_DAT_005e8f3b * (float)_DAT_005e8f43);
    local_40 = engine_mini3d_cpp_roundFloat_FUN_00516040(v2[0xb] * _DAT_005e8f37);
    local_3c = engine_mini3d_cpp_roundFloat_FUN_00516040(v2[10] * _DAT_005e8f37);
    local_38 = engine_mini3d_cpp_roundFloat_FUN_00516040(v2[9] * _DAT_005e8f37);
    if ((DAT_01d224b8 & 8) == 0) {
      fVar1 = v2[0xc];
    }
    else {
      fVar1 = v2[0xd];
    }
    local_34 = engine_mini3d_cpp_roundFloat_FUN_00516040(fVar1 * _DAT_005e8f37);
    engine_special_cpp_drawPolygon_FUN_00582340(&local_c0,3,_DAT_01c51d14);
    return;
  }
  _DAT_01d2c5cc = _DAT_01c50948;
  _DAT_01d2c0c4 = _DAT_01c50948;
  _DAT_01d2c5c8 = 0x4b0;
  engine_mini3d_cpp_setupScanEdge_FUN_00515bd0(v0,v1);
  engine_mini3d_cpp_setupScanEdge_FUN_00515bd0(v1,v2);
  engine_mini3d_cpp_setupScanEdge_FUN_00515bd0(v2,v0);
  local_14 = (SSoftwareEdge *)&DAT_01d2c0c8;
  iVar5 = 0;
  if (0 < _DAT_01d2c0c4) {
    do {
      if ((_DAT_01d2c5c8 == (local_14->base).y_min) && (local_14 != (SSoftwareEdge *)0x0))
      goto LAB_00516180;
      iVar5 = iVar5 + 1;
      local_14 = local_14 + 1;
    } while (iVar5 < _DAT_01d2c0c4);
  }
  local_14 = (SSoftwareEdge *)0x0;
LAB_00516180:
  if (local_14 != (SSoftwareEdge *)0x0) {
    iVar5 = 0;
    left_vertex = (SSoftwareEdge *)&DAT_01d2c0c8;
    if (0 < _DAT_01d2c0c4) {
      do {
        if ((_DAT_01d2c5c8 == (left_vertex->base).y_min) && (left_vertex != local_14))
        goto LAB_005161c2;
        iVar5 = iVar5 + 1;
        left_vertex = left_vertex + 1;
      } while (iVar5 < _DAT_01d2c0c4);
    }
    left_vertex = (SSoftwareEdge *)0x0;
LAB_005161c2:
    if (left_vertex != (SSoftwareEdge *)0x0) {
      local_18 = _DAT_01d2c5c8;
      do {
        iVar5 = _DAT_01d2c0c4;
        if ((local_14->base).y_max <= local_18) {
          (local_14->base).y_min = -1;
          local_14 = (SSoftwareEdge *)&DAT_01d2c0c8;
          iVar6 = 0;
          if (0 < iVar5) {
            do {
              if ((local_18 == (local_14->base).y_min) && (local_14 != left_vertex))
              goto LAB_00516220;
              iVar6 = iVar6 + 1;
              local_14 = local_14 + 1;
            } while (iVar6 < _DAT_01d2c0c4);
          }
          local_14 = (SSoftwareEdge *)0x0;
LAB_00516220:
          if (local_14 == (SSoftwareEdge *)0x0) {
            return;
          }
        }
        if ((left_vertex->base).y_max <= local_18) {
          (left_vertex->base).y_min = -1;
          iVar5 = 0;
          left_vertex = (SSoftwareEdge *)&DAT_01d2c0c8;
          if (0 < _DAT_01d2c0c4) {
            do {
              if ((local_18 == (left_vertex->base).y_min) && (left_vertex != local_14))
              goto LAB_00516276;
              iVar5 = iVar5 + 1;
              left_vertex = left_vertex + 1;
            } while (iVar5 < _DAT_01d2c0c4);
          }
          left_vertex = (SSoftwareEdge *)0x0;
LAB_00516276:
          if (left_vertex == (SSoftwareEdge *)0x0) {
            return;
          }
        }
        if (_DAT_01c51d00 == 0) {
          if (DAT_0061b4a0 == 0x20) {
            engine_special_cpp_renderPerspectiveCorrectScanline32_FUN_0057fb03
                      (left_vertex,local_14,local_18);
          }
          else {
            engine_special_cpp_renderPerspectiveCorrectScanline16_FUN_0057fd39
                      (left_vertex,local_14,local_18);
          }
        }
        else if (DAT_0061b4a0 == 0x20) {
          engine_special_cpp_FUN_0057eeac();
        }
        else {
          engine_special_cpp_FUN_0057f473();
        }
        (local_14->base).x_current = (local_14->base).x_current + (local_14->base).x_gradient;
        (local_14->base).u_current = (local_14->base).u_current + (local_14->base).u_gradient;
        (local_14->base).v_current = (local_14->base).v_current + (local_14->base).v_gradient;
        (local_14->base).depth_current =
             (local_14->base).depth_current + (local_14->base).depth_gradient;
        (local_14->base).red_current = (local_14->base).red_current + (local_14->base).red_gradient;
        iVar5 = (local_14->base).alpha_current;
        local_14->green_current = local_14->green_current + local_14->green_gradient;
        local_14->blue_current = local_14->blue_current + local_14->blue_gradient;
        iVar6 = (local_14->base).alpha_gradient;
        *(int *)&local_14->field_0x48 =
             *(int *)&local_14->field_0x48 + *(int *)&local_14->field_0x4c;
        (local_14->base).alpha_current = iVar5 + iVar6;
        (left_vertex->base).x_current =
             (left_vertex->base).x_current + (left_vertex->base).x_gradient;
        (left_vertex->base).u_current =
             (left_vertex->base).u_current + (left_vertex->base).u_gradient;
        (left_vertex->base).v_current =
             (left_vertex->base).v_current + (left_vertex->base).v_gradient;
        (left_vertex->base).depth_current =
             (left_vertex->base).depth_current + (left_vertex->base).depth_gradient;
        iVar5 = left_vertex->green_current;
        iVar6 = left_vertex->blue_current;
        iVar2 = *(int *)&left_vertex->field_0x48;
        iVar3 = (left_vertex->base).alpha_current;
        iVar4 = left_vertex->green_gradient;
        (left_vertex->base).red_current =
             (left_vertex->base).red_current + (left_vertex->base).red_gradient;
        local_18 = local_18 + 1;
        left_vertex->green_current = iVar5 + iVar4;
        left_vertex->blue_current = iVar6 + left_vertex->blue_gradient;
        iVar5 = (left_vertex->base).alpha_gradient;
        *(int *)&left_vertex->field_0x48 = iVar2 + *(int *)&left_vertex->field_0x4c;
        (left_vertex->base).alpha_current = iVar3 + iVar5;
      } while( true );
    }
  }
  return;
}
