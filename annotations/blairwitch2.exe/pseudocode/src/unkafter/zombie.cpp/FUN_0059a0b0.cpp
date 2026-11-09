// Name: unkafter_zombie.cpp_FUN_0059a0b0
// Address: 0059a0b0
// Address Range: [[0059a0b0, 0059a5a7]]
// Convention: __cdecl
// Signature: void __cdecl unkafter_zombie_cpp_FUN_0059a0b0(SRenderVertex *vertex_buffer,int vertex_count)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl unkafter_zombie_cpp_FUN_0059a0b0(SRenderVertex *vertex_buffer,int vertex_count)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  SRenderVertex *pSVar7;
  int iVar8;
  int iVar9;
  SRenderVertex *pSVar10;
  SRenderVertex *local_20;
  int *local_18;
  int *local_14;
  
  if ((DAT_006141e0 != 0) && (iVar9 = 0, pSVar7 = vertex_buffer, 0 < vertex_count)) {
    do {
      if (((byte)pSVar7[0x13] & 0x80) != 0) {
        if ((_DAT_01c38b58 & 6) != 0) {
          *(int *)(pSVar7 + 0xc) = (int)(0x7fffffff / (longlong)*(int *)(pSVar7 + 8));
        }
        if ((_DAT_01c38b58 & 1) != 0) {
          *(int *)(pSVar7 + 0xc) = (int)(0x7fffffff / (longlong)*(int *)(pSVar7 + 8));
        }
        *(int *)(pSVar7 + 0x10) =
             (int)(((longlong)*(int *)pSVar7 * (longlong)_DAT_01c35e38) /
                  (longlong)*(int *)(pSVar7 + 8)) + _DAT_01c35e40;
        *(int *)(pSVar7 + 0x14) =
             (int)(((longlong)*(int *)(pSVar7 + 4) * (longlong)_DAT_01c35e3c) /
                  (longlong)*(int *)(pSVar7 + 8)) + _DAT_01c35e44;
      }
      iVar9 = iVar9 + 1;
      pSVar7 = pSVar7 + 0x30;
    } while (iVar9 < vertex_count);
  }
  if ((DAT_0070ca7c != 0) &&
     (iVar9 = engine_prim_c_calculateTriangleWindingOrder_FUN_0051c760
                        (vertex_buffer,vertex_buffer + 0x30,vertex_buffer + 0x60), iVar9 == 0)) {
    return;
  }
  _DAT_01e61b58 = _DAT_01e61b58 + 1;
  if ((_DAT_01c37788 != 0) && (DAT_0070ca74 == 0)) {
    engine_special_cpp_drawPolygon_FUN_0055f8f0(vertex_buffer,vertex_count,_DAT_01c38b54);
    return;
  }
  if (_DAT_01c38b58 != 0) {
    if (_DAT_01c38b58 < 2) {
      engine_prim_c_prepareDepthBuffer_FUN_0051c5c0(vertex_buffer,vertex_count);
    }
    else if (_DAT_01c38b58 == 6) {
      engine_prim_c_replaceWWithDepth_FUN_0051c720(vertex_buffer,vertex_count);
    }
  }
  _DAT_026672a8 = 0;
  iVar9 = 0;
  _DAT_026677b0 = 0;
  _DAT_026677ac = 0x4b0;
  if (0 < vertex_count) {
    do {
      iVar2 = iVar9 + 1;
      if (vertex_count <= iVar2) {
        iVar2 = 0;
      }
      local_20 = vertex_buffer + iVar2 * 0x30;
      pSVar7 = vertex_buffer + iVar9 * 0x30;
      iVar2 = *(int *)(pSVar7 + 0x14) >> 0x10;
      iVar3 = *(int *)(local_20 + 0x14) >> 0x10;
      if (iVar2 != iVar3) {
        iVar4 = iVar3;
        pSVar10 = pSVar7;
        if (*(int *)(local_20 + 0x14) < *(int *)(pSVar7 + 0x14)) {
          iVar4 = iVar2;
          iVar2 = iVar3;
          pSVar10 = local_20;
          local_20 = pSVar7;
        }
        iVar8 = _DAT_026672a8 * 0x50;
        *(int *)(&DAT_026672ac + iVar8) = iVar2;
        iVar3 = _DAT_026677ac;
        *(int *)(iVar8 + 0x26672b0) = iVar4;
        if (iVar2 < iVar3) {
          _DAT_026677ac = iVar2;
        }
        if (_DAT_026677b0 < iVar4) {
          _DAT_026677b0 = iVar4;
        }
        if ((uint)(*(int *)(local_20 + 0x14) - *(int *)(pSVar10 + 0x14)) < 0x10000) {
          iVar2 = 0;
        }
        else {
          iVar2 = (int)(0xffffffff /
                       (ulonglong)(uint)(*(int *)(local_20 + 0x14) - *(int *)(pSVar10 + 0x14)));
        }
        uVar5 = (uint)(ushort)((ushort)*(uint *)(pSVar10 + 0x14) ^ 0xffff);
        lVar1 = (longlong)iVar2 * (longlong)(*(int *)(local_20 + 0x10) - *(int *)(pSVar10 + 0x10));
        uVar6 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        *(uint *)(iVar8 + 0x26672b8) = uVar6;
        lVar1 = (longlong)(int)uVar5 * (longlong)(int)uVar6;
        *(uint *)(iVar8 + 0x26672b4) =
             *(int *)(pSVar10 + 0x10) +
             ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)iVar2 *
                (longlong)((*(int *)(local_20 + 8) - *(int *)(pSVar10 + 8)) * 0x100);
        uVar6 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        *(uint *)(iVar8 + 0x26672d8) = uVar6;
        lVar1 = (longlong)(int)uVar5 * (longlong)(int)uVar6;
        _DAT_026672a8 = _DAT_026672a8 + 1;
        *(uint *)(iVar8 + 0x26672d4) =
             (*(int *)(pSVar10 + 8) * 0x100 - _DAT_01ba5714) +
             ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < vertex_count);
  }
  local_14 = (int *)&DAT_026672ac;
  iVar9 = 0;
  _DAT_01ba5c80 = 0;
  if (0 < _DAT_026672a8) {
    do {
      if ((_DAT_026677ac == *local_14) && (local_14 != (int *)0x0)) goto LAB_0059a258;
      iVar9 = iVar9 + 1;
      local_14 = local_14 + 0x14;
    } while (iVar9 < _DAT_026672a8);
  }
  local_14 = (int *)0x0;
LAB_0059a258:
  if (local_14 != (int *)0x0) {
    local_18 = (int *)&DAT_026672ac;
    iVar9 = 0;
    if (0 < _DAT_026672a8) {
      do {
        if ((_DAT_026677ac == *local_18) && (local_18 != local_14)) goto LAB_0059a291;
        iVar9 = iVar9 + 1;
        local_18 = local_18 + 0x14;
      } while (iVar9 < _DAT_026672a8);
    }
    local_18 = (int *)0x0;
LAB_0059a291:
    iVar9 = _DAT_026677ac;
    if (local_18 != (int *)0x0) {
      do {
        if (local_14[1] <= iVar9) {
          *local_14 = -1;
          local_14 = (int *)&DAT_026672ac;
          iVar2 = 0;
          if (0 < _DAT_026672a8) {
            do {
              if ((iVar9 == *local_14) && (local_14 != local_18)) goto LAB_0059a2ec;
              iVar2 = iVar2 + 1;
              local_14 = local_14 + 0x14;
            } while (iVar2 < _DAT_026672a8);
          }
          local_14 = (int *)0x0;
LAB_0059a2ec:
          if (local_14 == (int *)0x0) {
            return;
          }
        }
        if (local_18[1] <= iVar9) {
          *local_18 = -1;
          local_18 = (int *)&DAT_026672ac;
          iVar2 = 0;
          if (0 < _DAT_026672a8) {
            do {
              if ((iVar9 == *local_18) && (local_18 != local_14)) goto LAB_0059a33c;
              iVar2 = iVar2 + 1;
              local_18 = local_18 + 0x14;
            } while (iVar2 < _DAT_026672a8);
          }
          local_18 = (int *)0x0;
LAB_0059a33c:
          if (local_18 == (int *)0x0) {
            return;
          }
        }
        engine_special_cpp_FUN_0055d6d7();
        if (_DAT_01ba5c80 != 0) {
          return;
        }
        local_14[2] = local_14[2] + local_14[3];
        local_14[10] = local_14[10] + local_14[0xb];
        local_18[2] = local_18[2] + local_18[3];
        local_18[10] = local_18[10] + local_18[0xb];
        iVar9 = iVar9 + 1;
      } while( true );
    }
  }
  return;
}
