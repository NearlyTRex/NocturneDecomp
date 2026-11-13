// Name: engine_mini3d.cpp_rasterizeTriangle_FUN_004f1830
// Address: 004f1830
// Address Range: [[004f1830, 004f2081]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_rasterizeTriangle_FUN_004f1830(float *v0,float *v1,float *v2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_mini3d_cpp_rasterizeTriangle_FUN_004f1830(float *v0,float *v1,float *v2)

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
  if (_DAT_01d76cf8 == 0) {
    if (local_1c <= local_20) {
      return;
    }
  }
  else if (local_20 <= local_1c) {
    return;
  }
  if (_DAT_01c6cee8 != 0) {
    local_c0.projected_vertex.transformed_x =
         engine_mini3d_cpp_roundFloat_FUN_004f1810(*v0 * _DAT_005c822d);
    local_c0.projected_vertex.transformed_y =
         engine_mini3d_cpp_roundFloat_FUN_004f1810(v0[1] * _DAT_005c822d);
    local_c0.projected_vertex.transformed_z =
         engine_mini3d_cpp_roundFloat_FUN_004f1810(v0[2] * _DAT_005c822d);
    local_c0.projected_vertex.inv_z =
         engine_mini3d_cpp_roundFloat_FUN_004f1810(v0[3] * _DAT_005c8231);
    local_c0.projected_vertex.screen_x =
         engine_mini3d_cpp_roundFloat_FUN_004f1810(v0[5] * _DAT_005c8235);
    local_c0.projected_vertex.screen_y =
         engine_mini3d_cpp_roundFloat_FUN_004f1810(v0[6] * _DAT_005c8235);
    local_c0.u = engine_mini3d_cpp_roundFloat_FUN_004f1810(v0[7] * _DAT_005c822d * _DAT_005c8235);
    local_c0.v = engine_mini3d_cpp_roundFloat_FUN_004f1810(v0[8] * _DAT_005c822d * _DAT_005c8235);
    local_c0.r = engine_mini3d_cpp_roundFloat_FUN_004f1810(v0[0xb] * _DAT_005c8239);
    local_c0.g = engine_mini3d_cpp_roundFloat_FUN_004f1810(v0[10] * _DAT_005c8239);
    local_c0.b = engine_mini3d_cpp_roundFloat_FUN_004f1810(v0[9] * _DAT_005c8239);
    if ((DAT_01d76c38 & 8) == 0) {
      fVar1 = v0[0xc];
    }
    else {
      fVar1 = v0[0xd];
    }
    local_c0.a = engine_mini3d_cpp_roundFloat_FUN_004f1810(fVar1 * _DAT_005c8239);
    local_90 = engine_mini3d_cpp_roundFloat_FUN_004f1810(*v1 * _DAT_005c822d);
    local_8c = engine_mini3d_cpp_roundFloat_FUN_004f1810(v1[1] * _DAT_005c822d);
    local_88 = engine_mini3d_cpp_roundFloat_FUN_004f1810(v1[2] * _DAT_005c822d);
    local_84 = engine_mini3d_cpp_roundFloat_FUN_004f1810(v1[3] * _DAT_005c8231);
    local_80 = engine_mini3d_cpp_roundFloat_FUN_004f1810(v1[5] * _DAT_005c8235);
    local_7c = engine_mini3d_cpp_roundFloat_FUN_004f1810(v1[6] * _DAT_005c8235);
    local_78 = engine_mini3d_cpp_roundFloat_FUN_004f1810(v1[7] * _DAT_005c822d * _DAT_005c8235);
    local_74 = engine_mini3d_cpp_roundFloat_FUN_004f1810(v1[8] * _DAT_005c822d * _DAT_005c8235);
    local_70 = engine_mini3d_cpp_roundFloat_FUN_004f1810(v1[0xb] * _DAT_005c8239);
    local_6c = engine_mini3d_cpp_roundFloat_FUN_004f1810(v1[10] * _DAT_005c8239);
    local_68 = engine_mini3d_cpp_roundFloat_FUN_004f1810(v1[9] * _DAT_005c8239);
    if ((DAT_01d76c38 & 8) == 0) {
      fVar1 = v1[0xc];
    }
    else {
      fVar1 = v1[0xd];
    }
    local_64 = engine_mini3d_cpp_roundFloat_FUN_004f1810(fVar1 * _DAT_005c8239);
    local_60 = engine_mini3d_cpp_roundFloat_FUN_004f1810(*v2 * _DAT_005c822d);
    local_5c = engine_mini3d_cpp_roundFloat_FUN_004f1810(v2[1] * _DAT_005c822d);
    local_58 = engine_mini3d_cpp_roundFloat_FUN_004f1810(v2[2] * _DAT_005c822d);
    local_54 = engine_mini3d_cpp_roundFloat_FUN_004f1810(v2[3] * _DAT_005c8231);
    local_50 = engine_mini3d_cpp_roundFloat_FUN_004f1810(v2[5] * _DAT_005c8235);
    local_4c = engine_mini3d_cpp_roundFloat_FUN_004f1810(v2[6] * _DAT_005c8235);
    local_48 = engine_mini3d_cpp_roundFloat_FUN_004f1810
                         (v2[7] * (float)_DAT_005c823d * (float)_DAT_005c8245);
    local_44 = engine_mini3d_cpp_roundFloat_FUN_004f1810
                         (v2[8] * (float)_DAT_005c823d * (float)_DAT_005c8245);
    local_40 = engine_mini3d_cpp_roundFloat_FUN_004f1810(v2[0xb] * _DAT_005c8239);
    local_3c = engine_mini3d_cpp_roundFloat_FUN_004f1810(v2[10] * _DAT_005c8239);
    local_38 = engine_mini3d_cpp_roundFloat_FUN_004f1810(v2[9] * _DAT_005c8239);
    if ((DAT_01d76c38 & 8) == 0) {
      fVar1 = v2[0xc];
    }
    else {
      fVar1 = v2[0xd];
    }
    local_34 = engine_mini3d_cpp_roundFloat_FUN_004f1810(fVar1 * _DAT_005c8239);
    engine_special_cpp_drawPolygon_FUN_00565c10(&local_c0,3,_DAT_01c6e2b4);
    return;
  }
  _DAT_01d80d4c = _DAT_01c6cee8;
  _DAT_01d80844 = _DAT_01c6cee8;
  _DAT_01d80d48 = 0x4b0;
  engine_mini3d_cpp_setupScanEdge_FUN_004f13a0(v0,v1);
  engine_mini3d_cpp_setupScanEdge_FUN_004f13a0(v1,v2);
  engine_mini3d_cpp_setupScanEdge_FUN_004f13a0(v2,v0);
  local_14 = (SSoftwareEdge *)&DAT_01d80848;
  iVar5 = 0;
  if (0 < _DAT_01d80844) {
    do {
      if ((_DAT_01d80d48 == (local_14->base).y_min) && (local_14 != (SSoftwareEdge *)0x0))
      goto LAB_004f1950;
      iVar5 = iVar5 + 1;
      local_14 = local_14 + 1;
    } while (iVar5 < _DAT_01d80844);
  }
  local_14 = (SSoftwareEdge *)0x0;
LAB_004f1950:
  if (local_14 != (SSoftwareEdge *)0x0) {
    iVar5 = 0;
    left_vertex = (SSoftwareEdge *)&DAT_01d80848;
    if (0 < _DAT_01d80844) {
      do {
        if ((_DAT_01d80d48 == (left_vertex->base).y_min) && (left_vertex != local_14))
        goto LAB_004f1992;
        iVar5 = iVar5 + 1;
        left_vertex = left_vertex + 1;
      } while (iVar5 < _DAT_01d80844);
    }
    left_vertex = (SSoftwareEdge *)0x0;
LAB_004f1992:
    if (left_vertex != (SSoftwareEdge *)0x0) {
      local_18 = _DAT_01d80d48;
      do {
        iVar5 = _DAT_01d80844;
        if ((local_14->base).y_max <= local_18) {
          (local_14->base).y_min = -1;
          local_14 = (SSoftwareEdge *)&DAT_01d80848;
          iVar6 = 0;
          if (0 < iVar5) {
            do {
              if ((local_18 == (local_14->base).y_min) && (local_14 != left_vertex))
              goto LAB_004f19f0;
              iVar6 = iVar6 + 1;
              local_14 = local_14 + 1;
            } while (iVar6 < _DAT_01d80844);
          }
          local_14 = (SSoftwareEdge *)0x0;
LAB_004f19f0:
          if (local_14 == (SSoftwareEdge *)0x0) {
            return;
          }
        }
        if ((left_vertex->base).y_max <= local_18) {
          (left_vertex->base).y_min = -1;
          iVar5 = 0;
          left_vertex = (SSoftwareEdge *)&DAT_01d80848;
          if (0 < _DAT_01d80844) {
            do {
              if ((local_18 == (left_vertex->base).y_min) && (left_vertex != local_14))
              goto LAB_004f1a46;
              iVar5 = iVar5 + 1;
              left_vertex = left_vertex + 1;
            } while (iVar5 < _DAT_01d80844);
          }
          left_vertex = (SSoftwareEdge *)0x0;
LAB_004f1a46:
          if (left_vertex == (SSoftwareEdge *)0x0) {
            return;
          }
        }
        if (_DAT_01c6e2a0 == 0) {
          if (DAT_005fba20 == 0x20) {
            engine_special_cpp_renderPerspectiveCorrectScanline32_FUN_00562c33
                      (left_vertex,local_14,local_18);
          }
          else {
            engine_special_cpp_renderPerspectiveCorrectScanline16_FUN_00562e69
                      (left_vertex,local_14,local_18);
          }
        }
        else if (DAT_005fba20 == 0x20) {
          engine_special_cpp_FUN_00561fdc();
        }
        else {
          engine_special_cpp_FUN_005625a3();
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
