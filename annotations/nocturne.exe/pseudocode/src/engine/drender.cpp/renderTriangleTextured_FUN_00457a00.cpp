// Name: engine_drender.cpp_renderTriangleTextured_FUN_00457a00
// Address: 00457a00
// Address Range: [[00457a00, 00458071]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_renderTriangleTextured_FUN_00457a00(int *vertex_indices,int vertex_count)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_drender_cpp_renderTriangleTextured_FUN_00457a00(int *vertex_indices,int vertex_count)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  uint uVar9;
  SRenderVertex *local_6c [16];
  uint local_2c;
  int *local_28;
  int local_24;
  int local_20;
  uint *local_1c;
  SSoftwareEdge *local_18;
  SSoftwareEdge *local_14;
  
  if ((DAT_006b0280 != 0) &&
     (iVar5 = engine_prim_c_calculateTriangleWindingOrder_FUN_004f9a10
                        ((SRenderVertex *)(&DAT_005c5014 + *vertex_indices * 0xc),
                         (SRenderVertex *)(&DAT_005c5014 + vertex_indices[1] * 0xc),
                         (SRenderVertex *)(&DAT_005c5014 + vertex_indices[2] * 0xc)), iVar5 == 0)) {
    return;
  }
  g_RenderedTriangleCount = g_RenderedTriangleCount + 1;
  if ((g_UseExternalRenderer == 0) || (DAT_006b0278 != 0)) {
    _DAT_01b4cd30 = 0;
    _DAT_01b4d1b8 = 0;
    local_24 = 0;
    _DAT_01b4d1b4 = 0x4b0;
    if (0 < vertex_count) {
      local_28 = vertex_indices;
      do {
        iVar5 = local_24 + 1;
        if (vertex_count <= iVar5) {
          iVar5 = 0;
        }
        iVar4 = vertex_indices[iVar5] * 0x30;
        iVar7 = *local_28 * 0x30;
        local_1c = &DAT_005c5014 + vertex_indices[iVar5] * 0xc;
        iVar5 = *(int *)(&DAT_005c5028 + iVar4) >> 0x10;
        iVar6 = *(int *)(&DAT_005c5028 + iVar7) >> 0x10;
        if (iVar6 != iVar5) {
          iVar2 = iVar6;
          puVar8 = &DAT_005c5014 + *local_28 * 0xc;
          if (*(int *)(&DAT_005c5028 + iVar4) < *(int *)(&DAT_005c5028 + iVar7)) {
            iVar2 = iVar5;
            iVar5 = iVar6;
            puVar8 = local_1c;
            local_1c = &DAT_005c5014 + *local_28 * 0xc;
          }
          iVar4 = _DAT_01b4cd30 * 0x48;
          *(int *)(&DAT_01b4cd34 + iVar4) = iVar2;
          iVar6 = _DAT_01b4d1b4;
          *(int *)(iVar4 + 0x1b4cd38) = iVar5;
          if (iVar2 < iVar6) {
            _DAT_01b4d1b4 = iVar2;
          }
          if (_DAT_01b4d1b8 < iVar5) {
            _DAT_01b4d1b8 = iVar5;
          }
          if ((uint)(local_1c[5] - puVar8[5]) < 0x10000) {
            iVar5 = 0;
          }
          else {
            iVar5 = (int)(0xffffffff / (ulonglong)(uint)(local_1c[5] - puVar8[5]));
          }
          uVar9 = (uint)(ushort)((ushort)puVar8[5] ^ 0xffff);
          lVar1 = (longlong)iVar5 * (longlong)(int)(local_1c[4] - puVar8[4]);
          uVar3 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          *(uint *)(iVar4 + 0x1b4cd40) = uVar3;
          lVar1 = (longlong)(int)uVar9 * (longlong)(int)uVar3;
          *(uint *)(iVar4 + 0x1b4cd3c) =
               puVar8[4] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          lVar1 = (longlong)iVar5 * (longlong)(int)(local_1c[6] - puVar8[6]);
          uVar3 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          *(uint *)(iVar4 + 0x1b4cd50) = uVar3;
          lVar1 = (longlong)(int)uVar9 * (longlong)(int)uVar3;
          *(uint *)(iVar4 + 0x1b4cd4c) =
               puVar8[6] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          lVar1 = (longlong)iVar5 * (longlong)(int)(local_1c[7] - puVar8[7]);
          uVar3 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          *(uint *)(iVar4 + 0x1b4cd58) = uVar3;
          lVar1 = (longlong)(int)uVar9 * (longlong)(int)uVar3;
          *(uint *)(iVar4 + 0x1b4cd54) =
               puVar8[7] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          lVar1 = (longlong)iVar5 * (longlong)(int)(local_1c[8] - puVar8[8]);
          uVar3 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          *(uint *)(iVar4 + 0x1b4cd48) = uVar3;
          lVar1 = (longlong)(int)uVar9 * (longlong)(int)uVar3;
          *(uint *)(iVar4 + 0x1b4cd44) =
               puVar8[8] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          lVar1 = (longlong)iVar5 * (longlong)(int)(local_1c[0xb] - puVar8[0xb]);
          uVar3 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          *(uint *)(iVar4 + 0x1b4cd68) = uVar3;
          lVar1 = (longlong)(int)uVar9 * (longlong)(int)uVar3;
          *(uint *)(iVar4 + 0x1b4cd64) =
               puVar8[0xb] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          if (DAT_006b0278 == 0) {
            lVar1 = (longlong)iVar5 * (longlong)(int)(local_1c[3] - puVar8[3]);
            uVar3 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
            *(uint *)(iVar4 + 0x1b4cd60) = uVar3;
            lVar1 = (longlong)(int)uVar9 * (longlong)(int)uVar3;
            local_2c = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
            iVar6 = puVar8[3];
          }
          else {
            lVar1 = (longlong)iVar5 * (longlong)(int)(local_1c[2] - puVar8[2]);
            uVar3 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
            *(uint *)(iVar4 + 0x1b4cd60) = uVar3;
            lVar1 = (longlong)(int)uVar9 * (longlong)(int)uVar3;
            local_2c = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
            iVar6 = puVar8[2];
          }
          *(uint *)(iVar4 + 0x1b4cd5c) = iVar6 + local_2c;
          if ((g_RenderStateFlags.dword & RENDER_COLOR_FROM_VERTEX) != 0) {
            lVar1 = (longlong)iVar5 * (longlong)(int)(local_1c[9] - puVar8[9]);
            uVar3 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
            *(uint *)(iVar4 + 0x1b4cd70) = uVar3;
            lVar1 = (longlong)(int)uVar9 * (longlong)(int)uVar3;
            local_2c = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
            *(uint *)(iVar4 + 0x1b4cd6c) = puVar8[9] + local_2c;
            lVar1 = (longlong)iVar5 * (longlong)(int)(local_1c[10] - puVar8[10]);
            uVar3 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
            *(uint *)(iVar4 + 0x1b4cd78) = uVar3;
            lVar1 = (longlong)(int)uVar9 * (longlong)(int)uVar3;
            *(uint *)(iVar4 + 0x1b4cd74) =
                 puVar8[10] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          }
          _DAT_01b4cd30 = _DAT_01b4cd30 + 1;
        }
        local_28 = local_28 + 1;
        local_24 = local_24 + 1;
      } while (local_24 < vertex_count);
    }
    local_18 = (SSoftwareEdge *)&DAT_01b4cd34;
    iVar5 = 0;
    _DAT_01b4d768 = 0;
    if (0 < _DAT_01b4cd30) {
      do {
        if ((_DAT_01b4d1b4 == (local_18->base).y_min) && (local_18 != (SSoftwareEdge *)0x0))
        goto LAB_00457bb4;
        iVar5 = iVar5 + 1;
        local_18 = local_18 + 1;
      } while (iVar5 < _DAT_01b4cd30);
    }
    local_18 = (SSoftwareEdge *)0x0;
LAB_00457bb4:
    if (local_18 != (SSoftwareEdge *)0x0) {
      local_14 = (SSoftwareEdge *)&DAT_01b4cd34;
      iVar5 = 0;
      if (0 < _DAT_01b4cd30) {
        do {
          if ((_DAT_01b4d1b4 == (local_14->base).y_min) && (local_14 != local_18))
          goto LAB_00457beb;
          iVar5 = iVar5 + 1;
          local_14 = local_14 + 1;
        } while (iVar5 < _DAT_01b4cd30);
      }
      local_14 = (SSoftwareEdge *)0x0;
LAB_00457beb:
      if (local_14 != (SSoftwareEdge *)0x0) {
        local_20 = _DAT_01b4d1b4;
        do {
          if ((local_18->base).y_max <= local_20) {
            (local_18->base).y_min = -1;
            local_18 = (SSoftwareEdge *)&DAT_01b4cd34;
            iVar5 = 0;
            if (0 < _DAT_01b4cd30) {
              do {
                if ((local_20 == (local_18->base).y_min) && (local_18 != local_14))
                goto LAB_00457c46;
                iVar5 = iVar5 + 1;
                local_18 = local_18 + 1;
              } while (iVar5 < _DAT_01b4cd30);
            }
            local_18 = (SSoftwareEdge *)0x0;
LAB_00457c46:
            if (local_18 == (SSoftwareEdge *)0x0) {
              return;
            }
          }
          if ((local_14->base).y_max <= local_20) {
            (local_14->base).y_min = -1;
            local_14 = (SSoftwareEdge *)&DAT_01b4cd34;
            iVar5 = 0;
            if (0 < _DAT_01b4cd30) {
              do {
                if ((local_20 == (local_14->base).y_min) && (local_14 != local_18))
                goto LAB_00457c96;
                iVar5 = iVar5 + 1;
                local_14 = local_14 + 1;
              } while (iVar5 < _DAT_01b4cd30);
            }
            local_14 = (SSoftwareEdge *)0x0;
LAB_00457c96:
            if (local_14 == (SSoftwareEdge *)0x0) {
              return;
            }
          }
          local_6c[0] = (SRenderVertex *)0x457cb9;
          engine_special_cpp_renderScanline_FUN_00530710(local_14,local_18,local_20);
          if (_DAT_01b4d768 != 0) {
            return;
          }
          local_1c[2] = local_1c[2] + local_1c[3];
          local_1c[6] = local_1c[6] + local_1c[7];
          local_1c[8] = local_1c[8] + local_1c[9];
          local_1c[4] = local_1c[4] + local_1c[5];
          local_1c[10] = local_1c[10] + local_1c[0xb];
          local_1c[0xc] = local_1c[0xc] + local_1c[0xd];
          (local_18->base).x_current = (local_18->base).x_current + (local_18->base).x_gradient;
          (local_18->base).u_current = (local_18->base).u_current + (local_18->base).u_gradient;
          (local_18->base).v_current = (local_18->base).v_current + (local_18->base).v_gradient;
          (local_18->base).red_current =
               (local_18->base).red_current + (local_18->base).red_gradient;
          (local_18->base).depth_current =
               (local_18->base).depth_current + (local_18->base).depth_gradient;
          (local_18->base).alpha_current =
               (local_18->base).alpha_current + (local_18->base).alpha_gradient;
          if ((g_RenderStateFlags.dword & RENDER_COLOR_FROM_VERTEX) == 0) {
            local_24 = local_24 + 1;
          }
          else {
            local_1c[0xe] = local_1c[0xe] + local_1c[0xf];
            local_1c[0x10] = local_1c[0x10] + local_1c[0x11];
            local_18->green_current = local_18->green_current + local_18->green_gradient;
            local_18->blue_current = local_18->blue_current + local_18->blue_gradient;
            local_24 = local_24 + 1;
          }
        } while( true );
      }
    }
  }
  else {
    iVar5 = 0;
    if (0 < vertex_count) {
      do {
        iVar6 = iVar5 + 1;
        local_6c[iVar5] = (SRenderVertex *)(&DAT_005c5014 + *vertex_indices * 0xc);
        vertex_indices = vertex_indices + 1;
        iVar5 = iVar6;
      } while (iVar6 < vertex_count);
    }
    engine_special_cpp_drawPolygon2_FUN_00532650(local_6c,vertex_count,g_RenderStateFlags.dword);
  }
  return;
}
