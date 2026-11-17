// Name: engine_mini3d.cpp_rasterizeTriangle_FUN_004f7280
// Address: 004f7280
// Address Range: [[004f7280, 004f7a48]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_rasterizeTriangle_FUN_004f7280(float *v0,float *v1,float *v2)

#include "nocturne.h"

void __cdecl engine_mini3d_cpp_rasterizeTriangle_FUN_004f7280(float *v0,float *v1,float *v2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  SSoftwareEdge *right_vertex;
  int iVar5;
  int iVar6;
  SRenderVertex local_b4;
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
  int local_30;
  int local_2c;
  int local_28;
  int iStack_1c;
  int local_18;
  SSoftwareEdge *local_14;
  
  if ((v2[5] - v1[5]) * (v1[6] - v0[6]) < (v1[5] - v0[5]) * (v2[6] - v1[6])) {
    if (g_INT_01c37788 == 0) {
      g_INT_01d17fbc = g_INT_01c37788;
      g_INT_01d17ab4 = g_INT_01c37788;
      g_INT_01d17fb8 = 0x4b0;
      engine_mini3d_cpp_setupScanEdge_FUN_004f6df0(v0,v1);
      engine_mini3d_cpp_setupScanEdge_FUN_004f6df0(v1,v2);
      engine_mini3d_cpp_setupScanEdge_FUN_004f6df0(v2,v0);
      right_vertex = &g_SSoftwareEdge_01d17ab8;
      iVar5 = 0;
      if (0 < g_INT_01d17ab4) {
        do {
          if ((g_INT_01d17fb8 == (right_vertex->base).y_min) &&
             (right_vertex != (SSoftwareEdge *)0x0)) goto LAB_004f7794;
          iVar5 = iVar5 + 1;
          right_vertex = right_vertex + 1;
        } while (iVar5 < g_INT_01d17ab4);
      }
      right_vertex = (SSoftwareEdge *)0x0;
LAB_004f7794:
      if (right_vertex != (SSoftwareEdge *)0x0) {
        iVar5 = 0;
        local_14 = &g_SSoftwareEdge_01d17ab8;
        if (0 < g_INT_01d17ab4) {
          do {
            if ((g_INT_01d17fb8 == (local_14->base).y_min) && (local_14 != right_vertex))
            goto LAB_004f77d1;
            iVar5 = iVar5 + 1;
            local_14 = local_14 + 1;
          } while (iVar5 < g_INT_01d17ab4);
        }
        local_14 = (SSoftwareEdge *)0x0;
LAB_004f77d1:
        if (local_14 != (SSoftwareEdge *)0x0) {
          local_18 = g_INT_01d17fb8;
          do {
            iVar5 = g_INT_01d17ab4;
            if ((right_vertex->base).y_max <= local_18) {
              (right_vertex->base).y_min = -1;
              iVar6 = 0;
              right_vertex = &g_SSoftwareEdge_01d17ab8;
              if (0 < iVar5) {
                do {
                  if ((local_18 == (right_vertex->base).y_min) && (right_vertex != local_14))
                  goto LAB_004f7833;
                  iVar6 = iVar6 + 1;
                  right_vertex = right_vertex + 1;
                } while (iVar6 < g_INT_01d17ab4);
              }
              right_vertex = (SSoftwareEdge *)0x0;
LAB_004f7833:
              if (right_vertex == (SSoftwareEdge *)0x0) {
                return;
              }
            }
            iVar5 = g_INT_01d17ab4;
            if ((local_14->base).y_max <= local_18) {
              (local_14->base).y_min = -1;
              local_14 = &g_SSoftwareEdge_01d17ab8;
              iVar6 = 0;
              if (0 < iVar5) {
                do {
                  if ((local_18 == (local_14->base).y_min) && (local_14 != right_vertex))
                  goto LAB_004f7885;
                  iVar6 = iVar6 + 1;
                  local_14 = local_14 + 1;
                } while (iVar6 < g_INT_01d17ab4);
              }
              local_14 = (SSoftwareEdge *)0x0;
LAB_004f7885:
              if (local_14 == (SSoftwareEdge *)0x0) {
                return;
              }
            }
            if (g_INT_01c38b40 == 0) {
              if (g_INT_006141c0 == 0x20) {
                engine_special_cpp_renderPerspectiveCorrectScanline32_FUN_0055d0b3
                          (local_14,right_vertex,local_18);
              }
              else {
                engine_special_cpp_renderPerspectiveCorrectScanline16_FUN_0055d2e9
                          (local_14,right_vertex,local_18);
              }
            }
            else if (g_INT_006141c0 == 0x20) {
              engine_special_cpp_renderMMXPerspectiveScanlineTrueColor32_FUN_0055c45c
                        (local_14,right_vertex,local_18);
            }
            else {
              engine_special_cpp_renderMMXPerspectiveScanlineTrueColor16_FUN_0055ca23
                        (local_14,right_vertex,local_18);
            }
            (right_vertex->base).x_current =
                 (right_vertex->base).x_current + (right_vertex->base).x_gradient;
            (right_vertex->base).u_current =
                 (right_vertex->base).u_current + (right_vertex->base).u_gradient;
            (right_vertex->base).v_current =
                 (right_vertex->base).v_current + (right_vertex->base).v_gradient;
            (right_vertex->base).depth_current =
                 (right_vertex->base).depth_current + (right_vertex->base).depth_gradient;
            iVar5 = right_vertex->green_current;
            iVar6 = right_vertex->blue_current;
            iVar2 = *(int *)&right_vertex->field_0x48;
            iVar3 = (right_vertex->base).alpha_current;
            iVar4 = right_vertex->green_gradient;
            (right_vertex->base).red_current =
                 (right_vertex->base).red_current + (right_vertex->base).red_gradient;
            right_vertex->green_current = iVar5 + iVar4;
            right_vertex->blue_current = iVar6 + right_vertex->blue_gradient;
            iVar5 = (right_vertex->base).alpha_gradient;
            *(int *)&right_vertex->field_0x48 = iVar2 + *(int *)&right_vertex->field_0x4c;
            (right_vertex->base).alpha_current = iVar3 + iVar5;
            *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + *(int *)(local_18 + 0xc);
            *(int *)(local_18 + 0x18) = *(int *)(local_18 + 0x18) + *(int *)(local_18 + 0x1c);
            *(int *)(local_18 + 0x20) = *(int *)(local_18 + 0x20) + *(int *)(local_18 + 0x24);
            *(int *)(local_18 + 0x28) = *(int *)(local_18 + 0x28) + *(int *)(local_18 + 0x2c);
            *(int *)(local_18 + 0x10) = *(int *)(local_18 + 0x10) + *(int *)(local_18 + 0x14);
            *(int *)(local_18 + 0x38) = *(int *)(local_18 + 0x38) + *(int *)(local_18 + 0x3c);
            iStack_1c = iStack_1c + 1;
            *(int *)(local_18 + 0x40) = *(int *)(local_18 + 0x40) + *(int *)(local_18 + 0x44);
            *(int *)(local_18 + 0x48) = *(int *)(local_18 + 0x48) + *(int *)(local_18 + 0x4c);
            *(int *)(local_18 + 0x30) = *(int *)(local_18 + 0x30) + *(int *)(local_18 + 0x34);
          } while( true );
        }
      }
    }
    else {
      local_b4.projected_vertex.transformed_x =
           engine_mini3d_cpp_roundFloat_FUN_004f7260(*v0 * 256.0f);
      local_b4.projected_vertex.transformed_y =
           engine_mini3d_cpp_roundFloat_FUN_004f7260(v0[1] * 256.0f);
      local_b4.projected_vertex.transformed_z =
           engine_mini3d_cpp_roundFloat_FUN_004f7260(v0[2] * 256.0f);
      local_b4.projected_vertex.inv_z =
           engine_mini3d_cpp_roundFloat_FUN_004f7260(v0[3] * 8388607.0f);
      local_b4.projected_vertex.screen_x =
           engine_mini3d_cpp_roundFloat_FUN_004f7260(v0[5] * 65536.0f);
      local_b4.projected_vertex.screen_y =
           engine_mini3d_cpp_roundFloat_FUN_004f7260(v0[6] * 65536.0f);
      local_b4.u = engine_mini3d_cpp_roundFloat_FUN_004f7260
                             (v0[7] * 256.0f * 65536.0f);
      local_b4.v = engine_mini3d_cpp_roundFloat_FUN_004f7260
                             (v0[8] * 256.0f * 65536.0f);
      local_b4.r = engine_mini3d_cpp_roundFloat_FUN_004f7260(v0[0xb] * 65535.0f);
      local_b4.g = engine_mini3d_cpp_roundFloat_FUN_004f7260(v0[10] * 65535.0f);
      local_b4.b = engine_mini3d_cpp_roundFloat_FUN_004f7260(v0[9] * 65535.0f);
      if (((byte)g_INT_01d09858 & 8) == 0) {
        fVar1 = v0[0xc];
      }
      else {
        fVar1 = v0[0xd];
      }
      local_b4.a = engine_mini3d_cpp_roundFloat_FUN_004f7260(fVar1 * 65535.0f);
      local_84 = engine_mini3d_cpp_roundFloat_FUN_004f7260(*v1 * 256.0f);
      local_80 = engine_mini3d_cpp_roundFloat_FUN_004f7260(v1[1] * 256.0f);
      local_7c = engine_mini3d_cpp_roundFloat_FUN_004f7260(v1[2] * 256.0f);
      local_78 = engine_mini3d_cpp_roundFloat_FUN_004f7260(v1[3] * 8388607.0f);
      local_74 = engine_mini3d_cpp_roundFloat_FUN_004f7260(v1[5] * 65536.0f);
      local_70 = engine_mini3d_cpp_roundFloat_FUN_004f7260(v1[6] * 65536.0f);
      local_6c = engine_mini3d_cpp_roundFloat_FUN_004f7260
                           (v1[7] * 256.0f * 65536.0f);
      local_68 = engine_mini3d_cpp_roundFloat_FUN_004f7260
                           (v1[8] * 256.0f * 65536.0f);
      local_64 = engine_mini3d_cpp_roundFloat_FUN_004f7260(v1[0xb] * 65535.0f);
      local_60 = engine_mini3d_cpp_roundFloat_FUN_004f7260(v1[10] * 65535.0f);
      local_5c = engine_mini3d_cpp_roundFloat_FUN_004f7260(v1[9] * 65535.0f);
      if (((byte)g_INT_01d09858 & 8) == 0) {
        fVar1 = v1[0xc];
      }
      else {
        fVar1 = v1[0xd];
      }
      local_58 = engine_mini3d_cpp_roundFloat_FUN_004f7260(fVar1 * 65535.0f);
      local_54 = engine_mini3d_cpp_roundFloat_FUN_004f7260(*v2 * 256.0f);
      local_50 = engine_mini3d_cpp_roundFloat_FUN_004f7260(v2[1] * 256.0f);
      local_4c = engine_mini3d_cpp_roundFloat_FUN_004f7260(v2[2] * 256.0f);
      local_48 = engine_mini3d_cpp_roundFloat_FUN_004f7260(v2[3] * 8388607.0f);
      local_44 = engine_mini3d_cpp_roundFloat_FUN_004f7260(v2[5] * 65536.0f);
      local_40 = engine_mini3d_cpp_roundFloat_FUN_004f7260(v2[6] * 65536.0f);
      local_3c = engine_mini3d_cpp_roundFloat_FUN_004f7260
                           (v2[7] * (float)256 * (float)65536);
      local_38 = engine_mini3d_cpp_roundFloat_FUN_004f7260
                           (v2[8] * (float)256 * (float)65536);
      local_34 = engine_mini3d_cpp_roundFloat_FUN_004f7260(v2[0xb] * 65535.0f);
      local_30 = engine_mini3d_cpp_roundFloat_FUN_004f7260(v2[10] * 65535.0f);
      local_2c = engine_mini3d_cpp_roundFloat_FUN_004f7260(v2[9] * 65535.0f);
      if (((byte)g_INT_01d09858 & 8) == 0) {
        fVar1 = v2[0xc];
      }
      else {
        fVar1 = v2[0xd];
      }
      local_28 = engine_mini3d_cpp_roundFloat_FUN_004f7260(fVar1 * 65535.0f);
      engine_special_cpp_drawPolygon_FUN_0055f8f0(&local_b4,3,g_BIT_INTEGER32_01c38b54.dword);
    }
  }
  return;
}
