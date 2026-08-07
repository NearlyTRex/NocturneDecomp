// Name: engine_drender.cpp_renderTriangleSimple_FUN_00458080
// Address: 00458080
// Address Range: [[00458080, 00458570]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_renderTriangleSimple_FUN_00458080(CVector3i *vertex_indices,int vertex_count)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_drender_cpp_renderTriangleSimple_FUN_00458080(CVector3i *vertex_indices,int vertex_count)

{
  longlong lVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  CVector3i *pCVar8;
  int iVar9;
  uint *puVar10;
  SRenderVertex *local_74 [16];
  uint local_34;
  CVector3i *local_30;
  int local_2c;
  uint *local_28;
  uint *local_24;
  uint *local_20;
  int local_1c;
  SSoftwareEdge *local_18;
  SSoftwareEdge *local_14;
  
  if ((DAT_006b0280 != 0) &&
     (iVar3 = engine_prim_c_calculateTriangleWindingOrder_FUN_004f9a10
                        ((SRenderVertex *)(&DAT_005c5014 + vertex_indices->x * 0xc),
                         (SRenderVertex *)(&DAT_005c5014 + vertex_indices->y * 0xc),
                         (SRenderVertex *)(&DAT_005c5014 + vertex_indices->z * 0xc)), iVar3 == 0)) {
    return;
  }
  _DAT_01e52ef8 = _DAT_01e52ef8 + 1;
  if ((g_UseExternalRenderer == 0) || (DAT_006b0278 != 0)) {
    if (g_VertexPreprocessMode != 0) {
      if ((uint)g_VertexPreprocessMode < 2) {
        iVar3 = 0;
        pCVar8 = vertex_indices;
        if (0 < vertex_count) {
          do {
            iVar3 = iVar3 + 1;
            engine_prim_c_prepareDepthBuffer_FUN_004f9870
                      ((SRenderVertex *)(&DAT_005c5014 + pCVar8->x * 0xc),1);
            pCVar8 = (CVector3i *)&pCVar8->y;
          } while (iVar3 < vertex_count);
        }
      }
      else if ((g_VertexPreprocessMode == 6) &&
              (iVar3 = 0, pCVar8 = vertex_indices, 0 < vertex_count)) {
        do {
          iVar3 = iVar3 + 1;
          engine_prim_c_replaceWWithDepth_FUN_004f99d0
                    ((SRenderVertex *)(&DAT_005c5014 + pCVar8->x * 0xc),1);
          pCVar8 = (CVector3i *)&pCVar8->y;
        } while (iVar3 < vertex_count);
      }
    }
    _DAT_01b4cd30 = 0;
    _DAT_01b4d1b8 = 0;
    local_2c = 0;
    _DAT_01b4d1b4 = 0x4b0;
    if (0 < vertex_count) {
      local_30 = vertex_indices;
      do {
        iVar3 = local_2c + 1;
        if (vertex_count <= iVar3) {
          iVar3 = 0;
        }
        iVar9 = (&vertex_indices->x)[iVar3] * 0x30;
        local_20 = &DAT_005c5014 + (&vertex_indices->x)[iVar3] * 0xc;
        iVar4 = local_30->x * 0x30;
        local_24 = &DAT_005c5014 + local_30->x * 0xc;
        iVar5 = *(int *)(&DAT_005c5028 + iVar4) >> 0x10;
        iVar3 = *(int *)(&DAT_005c5028 + iVar9) >> 0x10;
        local_28 = local_20;
        if (iVar5 != iVar3) {
          iVar6 = iVar5;
          puVar10 = local_24;
          if (*(int *)(&DAT_005c5028 + iVar9) < *(int *)(&DAT_005c5028 + iVar4)) {
            iVar6 = iVar3;
            iVar3 = iVar5;
            puVar10 = local_20;
            local_28 = local_24;
          }
          iVar4 = _DAT_01b4cd30 * 0x48;
          *(int *)(&DAT_01b4cd34 + iVar4) = iVar6;
          iVar9 = _DAT_01b4d1b4;
          *(int *)(iVar4 + 0x1b4cd38) = iVar3;
          if (iVar6 < iVar9) {
            _DAT_01b4d1b4 = iVar6;
          }
          if (_DAT_01b4d1b8 < iVar3) {
            _DAT_01b4d1b8 = iVar3;
          }
          if ((uint)(local_28[5] - puVar10[5]) < 0x10000) {
            iVar3 = 0;
          }
          else {
            iVar3 = (int)(0xffffffff / (ulonglong)(uint)(local_28[5] - puVar10[5]));
          }
          lVar1 = (longlong)iVar3 * (longlong)(int)(local_28[4] - puVar10[4]);
          *(uint *)(iVar4 + 0x1b4cd40) =
               (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          lVar1 = (longlong)iVar3 * (longlong)((local_28[2] - puVar10[2]) * 0x100);
          *(uint *)(iVar4 + 0x1b4cd60) =
               (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          uVar7 = (uint)(ushort)((ushort)puVar10[5] ^ 0xffff);
          lVar1 = (longlong)(int)uVar7 * (longlong)*(int *)(iVar4 + 0x1b4cd40);
          local_34 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          *(uint *)(iVar4 + 0x1b4cd3c) = puVar10[4] + local_34;
          lVar1 = (longlong)(int)uVar7 * (longlong)*(int *)(iVar4 + 0x1b4cd60);
          _DAT_01b4cd30 = _DAT_01b4cd30 + 1;
          *(uint *)(iVar4 + 0x1b4cd5c) =
               (puVar10[2] * 0x100 - _DAT_01b4d1fc) +
               ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        }
        local_30 = (CVector3i *)&local_30->y;
        local_2c = local_2c + 1;
      } while (local_2c < vertex_count);
    }
    iVar3 = 0;
    _DAT_01b4d768 = 0;
    local_14 = (SSoftwareEdge *)&DAT_01b4cd34;
    if (0 < _DAT_01b4cd30) {
      do {
        if ((_DAT_01b4d1b4 == (local_14->base).y_min) && (local_14 != (SSoftwareEdge *)0x0))
        goto LAB_00458274;
        iVar3 = iVar3 + 1;
        local_14 = local_14 + 1;
      } while (iVar3 < _DAT_01b4cd30);
    }
    local_14 = (SSoftwareEdge *)0x0;
LAB_00458274:
    if (local_14 != (SSoftwareEdge *)0x0) {
      local_18 = (SSoftwareEdge *)&DAT_01b4cd34;
      iVar3 = 0;
      if (0 < _DAT_01b4cd30) {
        do {
          if ((_DAT_01b4d1b4 == (local_18->base).y_min) && (local_18 != local_14))
          goto LAB_004582ad;
          iVar3 = iVar3 + 1;
          local_18 = local_18 + 1;
        } while (iVar3 < _DAT_01b4cd30);
      }
      local_18 = (SSoftwareEdge *)0x0;
LAB_004582ad:
      local_1c = _DAT_01b4d1b4;
      if (local_18 != (SSoftwareEdge *)0x0) {
        do {
          if ((local_14->base).y_max <= local_1c) {
            (local_14->base).y_min = -1;
            local_14 = (SSoftwareEdge *)&DAT_01b4cd34;
            iVar3 = 0;
            if (0 < _DAT_01b4cd30) {
              do {
                if ((local_1c == (local_14->base).y_min) && (local_14 != local_18))
                goto LAB_00458308;
                iVar3 = iVar3 + 1;
                local_14 = local_14 + 1;
              } while (iVar3 < _DAT_01b4cd30);
            }
            local_14 = (SSoftwareEdge *)0x0;
LAB_00458308:
            if (local_14 == (SSoftwareEdge *)0x0) {
              return;
            }
          }
          if ((local_18->base).y_max <= local_1c) {
            (local_18->base).y_min = -1;
            local_18 = (SSoftwareEdge *)&DAT_01b4cd34;
            iVar3 = 0;
            if (0 < _DAT_01b4cd30) {
              do {
                if ((local_1c == (local_18->base).y_min) && (local_18 != local_14))
                goto LAB_00458358;
                iVar3 = iVar3 + 1;
                local_18 = local_18 + 1;
              } while (iVar3 < _DAT_01b4cd30);
            }
            local_18 = (SSoftwareEdge *)0x0;
LAB_00458358:
            if (local_18 == (SSoftwareEdge *)0x0) {
              return;
            }
          }
          local_74[0] = (SRenderVertex *)0x45837b;
          engine_special_cpp_renderScanline_FUN_00530710(local_18,local_14,local_1c);
          if (_DAT_01b4d768 != 0) {
            return;
          }
          (local_18->base).x_current = (local_18->base).x_current + (local_18->base).x_gradient;
          (local_18->base).depth_current =
               (local_18->base).depth_current + (local_18->base).depth_gradient;
          *(int *)(local_1c + 8) = *(int *)(local_1c + 8) + *(int *)(local_1c + 0xc);
          *(int *)(local_1c + 0x28) = *(int *)(local_1c + 0x28) + *(int *)(local_1c + 0x2c);
          local_1c = (int)local_20 + 1;
        } while( true );
      }
    }
  }
  else {
    if (0 < vertex_count) {
      iVar3 = 0;
      do {
        piVar2 = &vertex_indices->x;
        iVar9 = iVar3 + 1;
        vertex_indices = (CVector3i *)&vertex_indices->y;
        local_74[iVar3] = (SRenderVertex *)(&DAT_005c5014 + *piVar2 * 0xc);
        iVar3 = iVar9;
      } while (iVar9 < vertex_count);
    }
    engine_special_cpp_drawPolygon2_FUN_00532650(local_74,vertex_count,g_RenderStateFlags.dword);
  }
  return;
}
