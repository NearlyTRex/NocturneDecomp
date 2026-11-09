// Name: unkafter_zombie.cpp_FUN_0059a5d0
// Address: 0059a5d0
// Address Range: [[0059a5d0, 0059aa75]]
// Convention: __cdecl
// Signature: void __cdecl unkafter_zombie_cpp_FUN_0059a5d0(SRenderVertex *vertex_buffer,int vertex_count,CustomScanlineFunc *scanline_renderer)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl unkafter_zombie_cpp_FUN_0059a5d0(SRenderVertex *vertex_buffer,int vertex_count,CustomScanlineFunc *scanline_renderer)

{
  longlong lVar1;
  int iVar2;
  SSoftwareEdge *right;
  SSoftwareEdge *left;
  int iVar3;
  SRenderVertex *pSVar4;
  int iVar5;
  SRenderVertex *pSVar6;
  uint uVar7;
  SRenderVertex *pSVar8;
  int iVar9;
  int local_18;
  int local_14;
  
  iVar9 = 0;
  pSVar4 = vertex_buffer;
  if (0 < vertex_count) {
    do {
      if (((byte)pSVar4[0x13] & 0x80) != 0) {
        *(int *)(pSVar4 + 0xc) = (int)(0x7fffffff / (longlong)*(int *)(pSVar4 + 8));
        *(int *)(pSVar4 + 0x10) =
             (int)(((longlong)*(int *)pSVar4 * (longlong)_DAT_01c35e38) /
                  (longlong)*(int *)(pSVar4 + 8)) + _DAT_01c35e40;
        *(int *)(pSVar4 + 0x14) =
             (int)(((longlong)*(int *)(pSVar4 + 4) * (longlong)_DAT_01c35e3c) /
                  (longlong)*(int *)(pSVar4 + 8)) + _DAT_01c35e44;
      }
      iVar9 = iVar9 + 1;
      pSVar4 = pSVar4 + 0x30;
    } while (iVar9 < vertex_count);
  }
  if ((DAT_0070ca7c != 0) &&
     (iVar9 = engine_prim_c_calculateTriangleWindingOrder_FUN_0051c760
                        (vertex_buffer,vertex_buffer + 0x30,vertex_buffer + 0x60), iVar9 == 0)) {
    return;
  }
  _DAT_01e61b58 = _DAT_01e61b58 + 1;
  switch(_DAT_01c38b58) {
  case 1:
    engine_prim_c_prepareDepthBuffer_FUN_0051c5c0(vertex_buffer,vertex_count);
    break;
  case 2:
    engine_prim_c_normalizeTextureCoords_FUN_0051c630(vertex_buffer,vertex_count);
    break;
  case 3:
    engine_prim_c_adjustNearPlaneTextureCoords_FUN_0051c6b0(vertex_buffer,vertex_count);
    break;
  case 5:
    engine_prim_c_normalizeTextureCoords_FUN_0051c630(vertex_buffer,vertex_count);
    break;
  case 6:
    engine_prim_c_replaceWWithDepth_FUN_0051c720(vertex_buffer,vertex_count);
  }
  _DAT_026672a8 = 0;
  _DAT_026677b0 = 0;
  local_18 = 0;
  _DAT_026677ac = 0x4b0;
  if (0 < vertex_count) {
    do {
      iVar9 = local_18 + 1;
      if (vertex_count <= iVar9) {
        iVar9 = 0;
      }
      pSVar6 = vertex_buffer + iVar9 * 0x30;
      pSVar4 = vertex_buffer + local_18 * 0x30;
      iVar2 = *(int *)(pSVar6 + 0x14) >> 0x10;
      iVar9 = *(int *)(pSVar4 + 0x14) >> 0x10;
      if (iVar9 != iVar2) {
        iVar3 = iVar2;
        pSVar8 = pSVar6;
        if (*(int *)(pSVar6 + 0x14) < *(int *)(pSVar4 + 0x14)) {
          iVar3 = iVar9;
          iVar9 = iVar2;
          pSVar8 = pSVar4;
          pSVar4 = pSVar6;
        }
        iVar5 = _DAT_026672a8 * 0x50;
        *(int *)(&DAT_026672ac + iVar5) = iVar9;
        iVar2 = _DAT_026677ac;
        *(int *)(iVar5 + 0x26672b0) = iVar3;
        if (iVar9 < iVar2) {
          _DAT_026677ac = iVar9;
        }
        if (_DAT_026677b0 < iVar3) {
          _DAT_026677b0 = iVar3;
        }
        *(uint *)(iVar5 + 0x26672b4) = *(uint *)(pSVar4 + 0x10);
        *(int *)(iVar5 + 0x26672d4) = *(int *)(pSVar4 + 8) << 8;
        *(uint *)(iVar5 + 0x26672bc) = *(uint *)(pSVar4 + 0x20);
        if ((uint)(*(int *)(pSVar8 + 0x14) - *(int *)(pSVar4 + 0x14)) < 0x10000) {
          iVar9 = 0;
        }
        else {
          iVar9 = (int)(0xffffffff /
                       (ulonglong)(uint)(*(int *)(pSVar8 + 0x14) - *(int *)(pSVar4 + 0x14)));
        }
        lVar1 = (longlong)iVar9 * (longlong)(*(int *)(pSVar8 + 0x10) - *(int *)(pSVar4 + 0x10));
        *(uint *)(iVar5 + 0x26672b8) = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10
        ;
        lVar1 = (longlong)iVar9 * (longlong)((*(int *)(pSVar8 + 8) - *(int *)(pSVar4 + 8)) * 0x100);
        *(uint *)(iVar5 + 0x26672d8) = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10
        ;
        lVar1 = (longlong)iVar9 * (longlong)(*(int *)(pSVar8 + 0x20) - *(int *)(pSVar4 + 0x20));
        *(uint *)(iVar5 + 0x26672c0) = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10
        ;
        uVar7 = (uint)(ushort)((ushort)*(uint *)(pSVar4 + 0x14) ^ 0xffff);
        lVar1 = (longlong)(int)uVar7 * (longlong)*(int *)(iVar5 + 0x26672b8);
        *(int *)(iVar5 + 0x26672b4) =
             *(int *)(iVar5 + 0x26672b4) +
             ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)(int)uVar7 * (longlong)*(int *)(iVar5 + 0x26672d8);
        *(uint *)(iVar5 + 0x26672d4) =
             *(int *)(iVar5 + 0x26672d4) +
             ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)(int)uVar7 * (longlong)*(int *)(iVar5 + 0x26672c0);
        _DAT_026672a8 = _DAT_026672a8 + 1;
        *(uint *)(iVar5 + 0x26672bc) =
             *(int *)(iVar5 + 0x26672bc) +
             ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
      }
      local_18 = local_18 + 1;
    } while (local_18 < vertex_count);
  }
  right = (SSoftwareEdge *)&DAT_026672ac;
  iVar9 = 0;
  if (0 < _DAT_026672a8) {
    do {
      if ((_DAT_026677ac == *(int *)right) && (right != (SSoftwareEdge *)0x0)) goto LAB_0059a6e3;
      iVar9 = iVar9 + 1;
      right = right + 0x50;
    } while (iVar9 < _DAT_026672a8);
  }
  right = (SSoftwareEdge *)0x0;
LAB_0059a6e3:
  if (right != (SSoftwareEdge *)0x0) {
    iVar9 = 0;
    left = (SSoftwareEdge *)&DAT_026672ac;
    if (0 < _DAT_026672a8) {
      do {
        if ((_DAT_026677ac == *(int *)left) && (left != right)) goto LAB_0059a71a;
        iVar9 = iVar9 + 1;
        left = left + 0x50;
      } while (iVar9 < _DAT_026672a8);
    }
    left = (SSoftwareEdge *)0x0;
LAB_0059a71a:
    if (left != (SSoftwareEdge *)0x0) {
      local_14 = _DAT_026677ac;
      do {
        if (*(int *)(right + 4) <= local_14) {
          *(int *)right = -1;
          iVar9 = 0;
          right = (SSoftwareEdge *)&DAT_026672ac;
          if (0 < _DAT_026672a8) {
            do {
              if ((local_14 == *(int *)right) && (right != left)) goto LAB_0059a76c;
              iVar9 = iVar9 + 1;
              right = right + 0x50;
            } while (iVar9 < _DAT_026672a8);
          }
          right = (SSoftwareEdge *)0x0;
LAB_0059a76c:
          if (right == (SSoftwareEdge *)0x0) {
            return;
          }
        }
        if (*(int *)(left + 4) <= local_14) {
          *(int *)left = -1;
          iVar9 = 0;
          left = (SSoftwareEdge *)&DAT_026672ac;
          if (0 < _DAT_026672a8) {
            do {
              if ((local_14 == *(int *)left) && (left != right)) goto LAB_0059a7b4;
              iVar9 = iVar9 + 1;
              left = left + 0x50;
            } while (iVar9 < _DAT_026672a8);
          }
          left = (SSoftwareEdge *)0x0;
LAB_0059a7b4:
          if (left == (SSoftwareEdge *)0x0) {
            return;
          }
        }
        (*scanline_renderer)(local_14,right,left);
        *(int *)(right + 8) = *(int *)(right + 8) + *(int *)(right + 0xc);
        *(int *)(right + 0x28) = *(int *)(right + 0x28) + *(int *)(right + 0x2c);
        *(int *)(right + 0x10) = *(int *)(right + 0x10) + *(int *)(right + 0x14);
        *(int *)(left + 8) = *(int *)(left + 8) + *(int *)(left + 0xc);
        local_14 = local_14 + 1;
        *(int *)(left + 0x28) = *(int *)(left + 0x28) + *(int *)(left + 0x2c);
        *(int *)(left + 0x10) = *(int *)(left + 0x10) + *(int *)(left + 0x14);
      } while( true );
    }
  }
  return;
}
