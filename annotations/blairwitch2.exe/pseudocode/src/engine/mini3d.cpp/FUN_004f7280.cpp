// Name: engine_mini3d.cpp_FUN_004f7280
// Address: 004f7280
// Address Range: [[004f7280, 004f7a48]]
// Convention: unknown
// Signature: void engine_mini3d_cpp_FUN_004f7280(float *param_1,float *param_2,float *param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_mini3d_cpp_FUN_004f7280(float *param_1,float *param_2,float *param_3)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  SSoftwareEdge *right_vertex;
  int iVar6;
  int iVar7;
  SRenderVertex local_b4;
  uint local_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  int local_18;
  SSoftwareEdge *local_14;
  
  if ((param_3[5] - param_2[5]) * (param_2[6] - param_1[6]) <
      (param_2[5] - param_1[5]) * (param_3[6] - param_2[6])) {
    if (_DAT_01c37788 == 0) {
      _DAT_01d17fbc = _DAT_01c37788;
      _DAT_01d17ab4 = _DAT_01c37788;
      _DAT_01d17fb8 = 0x4b0;
      engine_mini3d_cpp_FUN_004f6df0(param_1,param_2);
      engine_mini3d_cpp_FUN_004f6df0(param_2,param_3);
      engine_mini3d_cpp_FUN_004f6df0(param_3,param_1);
      right_vertex = (SSoftwareEdge *)&DAT_01d17ab8;
      iVar6 = 0;
      if (0 < _DAT_01d17ab4) {
        do {
          if ((_DAT_01d17fb8 == (right_vertex->base).y_min) &&
             (right_vertex != (SSoftwareEdge *)0x0)) goto LAB_004f7794;
          iVar6 = iVar6 + 1;
          right_vertex = right_vertex + 1;
        } while (iVar6 < _DAT_01d17ab4);
      }
      right_vertex = (SSoftwareEdge *)0x0;
LAB_004f7794:
      if (right_vertex != (SSoftwareEdge *)0x0) {
        iVar6 = 0;
        local_14 = (SSoftwareEdge *)&DAT_01d17ab8;
        if (0 < _DAT_01d17ab4) {
          do {
            if ((_DAT_01d17fb8 == (local_14->base).y_min) && (local_14 != right_vertex))
            goto LAB_004f77d1;
            iVar6 = iVar6 + 1;
            local_14 = local_14 + 1;
          } while (iVar6 < _DAT_01d17ab4);
        }
        local_14 = (SSoftwareEdge *)0x0;
LAB_004f77d1:
        if (local_14 != (SSoftwareEdge *)0x0) {
          local_18 = _DAT_01d17fb8;
          do {
            iVar6 = _DAT_01d17ab4;
            if ((right_vertex->base).y_max <= local_18) {
              (right_vertex->base).y_min = -1;
              iVar7 = 0;
              right_vertex = (SSoftwareEdge *)&DAT_01d17ab8;
              if (0 < iVar6) {
                do {
                  if ((local_18 == (right_vertex->base).y_min) && (right_vertex != local_14))
                  goto LAB_004f7833;
                  iVar7 = iVar7 + 1;
                  right_vertex = right_vertex + 1;
                } while (iVar7 < _DAT_01d17ab4);
              }
              right_vertex = (SSoftwareEdge *)0x0;
LAB_004f7833:
              if (right_vertex == (SSoftwareEdge *)0x0) {
                return;
              }
            }
            iVar6 = _DAT_01d17ab4;
            if ((local_14->base).y_max <= local_18) {
              (local_14->base).y_min = -1;
              local_14 = (SSoftwareEdge *)&DAT_01d17ab8;
              iVar7 = 0;
              if (0 < iVar6) {
                do {
                  if ((local_18 == (local_14->base).y_min) && (local_14 != right_vertex))
                  goto LAB_004f7885;
                  iVar7 = iVar7 + 1;
                  local_14 = local_14 + 1;
                } while (iVar7 < _DAT_01d17ab4);
              }
              local_14 = (SSoftwareEdge *)0x0;
LAB_004f7885:
              if (local_14 == (SSoftwareEdge *)0x0) {
                return;
              }
            }
            if (_DAT_01c38b40 == 0) {
              if (DAT_006141c0 == 0x20) {
                engine_special_cpp_renderPerspectiveCorrectScanline32_FUN_0055d0b3
                          (local_14,right_vertex,local_18);
              }
              else {
                engine_special_cpp_renderPerspectiveCorrectScanline16_FUN_0055d2e9
                          (local_14,right_vertex,local_18);
              }
            }
            else if (DAT_006141c0 == 0x20) {
              engine_special_cpp_FUN_0055c45c();
            }
            else {
              engine_special_cpp_FUN_0055ca23();
            }
            (right_vertex->base).x_current =
                 (right_vertex->base).x_current + (right_vertex->base).x_gradient;
            (right_vertex->base).u_current =
                 (right_vertex->base).u_current + (right_vertex->base).u_gradient;
            (right_vertex->base).v_current =
                 (right_vertex->base).v_current + (right_vertex->base).v_gradient;
            (right_vertex->base).depth_current =
                 (right_vertex->base).depth_current + (right_vertex->base).depth_gradient;
            iVar6 = right_vertex->green_current;
            iVar7 = right_vertex->blue_current;
            iVar3 = *(int *)&right_vertex->field_0x48;
            iVar4 = (right_vertex->base).alpha_current;
            iVar5 = right_vertex->green_gradient;
            (right_vertex->base).red_current =
                 (right_vertex->base).red_current + (right_vertex->base).red_gradient;
            right_vertex->green_current = iVar6 + iVar5;
            right_vertex->blue_current = iVar7 + right_vertex->blue_gradient;
            iVar6 = (right_vertex->base).alpha_gradient;
            *(int *)&right_vertex->field_0x48 = iVar3 + *(int *)&right_vertex->field_0x4c;
            (right_vertex->base).alpha_current = iVar4 + iVar6;
            piVar1 = &(local_14->base).x_current;
            *piVar1 = *piVar1 + (local_14->base).x_gradient;
            (local_14->base).u_current = (local_14->base).u_current + (local_14->base).u_gradient;
            (local_14->base).v_current = (local_14->base).v_current + (local_14->base).v_gradient;
            (local_14->base).depth_current =
                 (local_14->base).depth_current + (local_14->base).depth_gradient;
            (local_14->base).red_current =
                 (local_14->base).red_current + (local_14->base).red_gradient;
            iVar6 = (local_14->base).alpha_current;
            local_14->green_current = local_14->green_current + local_14->green_gradient;
            local_18 = local_18 + 1;
            local_14->blue_current = local_14->blue_current + local_14->blue_gradient;
            iVar7 = (local_14->base).alpha_gradient;
            *(int *)&local_14->field_0x48 =
                 *(int *)&local_14->field_0x48 + *(int *)&local_14->field_0x4c;
            (local_14->base).alpha_current = iVar6 + iVar7;
          } while( true );
        }
      }
    }
    else {
      local_b4.projected_vertex.transformed_x =
           engine_mini3d_cpp_FUN_004f7260(*param_1 * _DAT_005ddee4);
      local_b4.projected_vertex.transformed_y =
           engine_mini3d_cpp_FUN_004f7260(param_1[1] * _DAT_005ddee4);
      local_b4.projected_vertex.transformed_z =
           engine_mini3d_cpp_FUN_004f7260(param_1[2] * _DAT_005ddee4);
      local_b4.projected_vertex.inv_z = engine_mini3d_cpp_FUN_004f7260(param_1[3] * _DAT_005ddee8);
      local_b4.projected_vertex.screen_x =
           engine_mini3d_cpp_FUN_004f7260(param_1[5] * _DAT_005ddeec);
      local_b4.projected_vertex.screen_y =
           engine_mini3d_cpp_FUN_004f7260(param_1[6] * _DAT_005ddeec);
      local_b4.u = engine_mini3d_cpp_FUN_004f7260(param_1[7] * _DAT_005ddee4 * _DAT_005ddeec);
      local_b4.v = engine_mini3d_cpp_FUN_004f7260(param_1[8] * _DAT_005ddee4 * _DAT_005ddeec);
      local_b4.r = engine_mini3d_cpp_FUN_004f7260(param_1[0xb] * _DAT_005ddef0);
      local_b4.g = engine_mini3d_cpp_FUN_004f7260(param_1[10] * _DAT_005ddef0);
      local_b4.b = engine_mini3d_cpp_FUN_004f7260(param_1[9] * _DAT_005ddef0);
      if ((DAT_01d09858 & 8) == 0) {
        fVar2 = param_1[0xc];
      }
      else {
        fVar2 = param_1[0xd];
      }
      local_b4.a = engine_mini3d_cpp_FUN_004f7260(fVar2 * _DAT_005ddef0);
      local_84 = engine_mini3d_cpp_FUN_004f7260(*param_2 * _DAT_005ddee4);
      local_80 = engine_mini3d_cpp_FUN_004f7260(param_2[1] * _DAT_005ddee4);
      local_7c = engine_mini3d_cpp_FUN_004f7260(param_2[2] * _DAT_005ddee4);
      local_78 = engine_mini3d_cpp_FUN_004f7260(param_2[3] * _DAT_005ddee8);
      local_74 = engine_mini3d_cpp_FUN_004f7260(param_2[5] * _DAT_005ddeec);
      local_70 = engine_mini3d_cpp_FUN_004f7260(param_2[6] * _DAT_005ddeec);
      local_6c = engine_mini3d_cpp_FUN_004f7260(param_2[7] * _DAT_005ddee4 * _DAT_005ddeec);
      local_68 = engine_mini3d_cpp_FUN_004f7260(param_2[8] * _DAT_005ddee4 * _DAT_005ddeec);
      local_64 = engine_mini3d_cpp_FUN_004f7260(param_2[0xb] * _DAT_005ddef0);
      local_60 = engine_mini3d_cpp_FUN_004f7260(param_2[10] * _DAT_005ddef0);
      local_5c = engine_mini3d_cpp_FUN_004f7260(param_2[9] * _DAT_005ddef0);
      if ((DAT_01d09858 & 8) == 0) {
        fVar2 = param_2[0xc];
      }
      else {
        fVar2 = param_2[0xd];
      }
      local_58 = engine_mini3d_cpp_FUN_004f7260(fVar2 * _DAT_005ddef0);
      local_54 = engine_mini3d_cpp_FUN_004f7260(*param_3 * _DAT_005ddee4);
      local_50 = engine_mini3d_cpp_FUN_004f7260(param_3[1] * _DAT_005ddee4);
      local_4c = engine_mini3d_cpp_FUN_004f7260(param_3[2] * _DAT_005ddee4);
      local_48 = engine_mini3d_cpp_FUN_004f7260(param_3[3] * _DAT_005ddee8);
      local_44 = engine_mini3d_cpp_FUN_004f7260(param_3[5] * _DAT_005ddeec);
      local_40 = engine_mini3d_cpp_FUN_004f7260(param_3[6] * _DAT_005ddeec);
      local_3c = engine_mini3d_cpp_FUN_004f7260
                           (param_3[7] * (float)_DAT_005ddef4 * (float)_DAT_005ddefc);
      local_38 = engine_mini3d_cpp_FUN_004f7260
                           (param_3[8] * (float)_DAT_005ddef4 * (float)_DAT_005ddefc);
      local_34 = engine_mini3d_cpp_FUN_004f7260(param_3[0xb] * _DAT_005ddef0);
      local_30 = engine_mini3d_cpp_FUN_004f7260(param_3[10] * _DAT_005ddef0);
      local_2c = engine_mini3d_cpp_FUN_004f7260(param_3[9] * _DAT_005ddef0);
      if ((DAT_01d09858 & 8) == 0) {
        fVar2 = param_3[0xc];
      }
      else {
        fVar2 = param_3[0xd];
      }
      local_28 = engine_mini3d_cpp_FUN_004f7260(fVar2 * _DAT_005ddef0);
      engine_special_cpp_drawPolygon_FUN_0055f8f0(&local_b4,3,_DAT_01c38b54);
    }
  }
  return;
}
