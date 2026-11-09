// Name: engine_prim.c_FUN_0053f080
// Address: 0053f080
// Address Range: [[0053f080, 0053f6f9]]
// Convention: __cdecl
// Signature: void __cdecl engine_prim_c_FUN_0053f080(SRenderVertex *vertices,int vertex_count)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_prim_c_FUN_0053f080(SRenderVertex *vertices,int vertex_count)

{
  longlong lVar1;
  SRenderVertex *pSVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  SRenderVertex *pSVar6;
  SRenderVertex *pSVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int local_1c;
  int local_18;
  int *local_14;
  
  if ((DAT_0061b4c0 != 0) && (iVar9 = 0, pSVar2 = vertices, 0 < vertex_count)) {
    do {
      if (((byte)pSVar2[0x13] & 0x80) != 0) {
        *(int *)(pSVar2 + 0xc) = (int)(0x7fffffff / (longlong)*(int *)(pSVar2 + 8));
        *(int *)(pSVar2 + 0x10) =
             (int)(((longlong)*(int *)pSVar2 * (longlong)_DAT_01c4eff8) /
                  (longlong)*(int *)(pSVar2 + 8)) + _DAT_01c4f000;
        *(int *)(pSVar2 + 0x14) =
             (int)(((longlong)*(int *)(pSVar2 + 4) * (longlong)_DAT_01c4effc) /
                  (longlong)*(int *)(pSVar2 + 8)) + _DAT_01c4f004;
      }
      iVar9 = iVar9 + 1;
      pSVar2 = pSVar2 + 0x30;
    } while (iVar9 < vertex_count);
  }
  if (DAT_00713a7c != 0) {
    pSVar2 = vertices + 0x30;
    pSVar6 = vertices + 0x60;
    if (vertex_count < 4) {
      iVar9 = engine_prim_c_calculateTriangleWindingOrder_FUN_0053dd60(vertices,pSVar2,pSVar6);
      if (iVar9 == 0) {
        return;
      }
    }
    else {
      iVar9 = vertex_count + -2;
      iVar10 = 0;
      iVar8 = 0;
      if (0 < iVar9) {
        do {
          iVar3 = engine_prim_c_calculateTriangleWindingOrder_FUN_0053dd60(vertices,pSVar2,pSVar6);
          if (iVar3 == 0) {
            iVar8 = iVar8 + 1;
          }
          pSVar2 = pSVar2 + 0x30;
          iVar10 = iVar10 + 1;
          pSVar6 = pSVar6 + 0x30;
        } while (iVar10 < iVar9);
      }
      if (iVar8 == iVar9) {
        return;
      }
    }
  }
  if ((_DAT_01c50948 != 0) && (DAT_00713a74 == 0)) {
    engine_special_cpp_drawPolygon_FUN_00582340(vertices,vertex_count,_DAT_01c51d14);
    _DAT_01e7dac8 = _DAT_01e7dac8 + vertex_count + -2;
    return;
  }
  _DAT_01e7dac8 = _DAT_01e7dac8 + 1;
  switch(_DAT_01c51d18) {
  case 1:
    engine_prim_c_prepareDepthBuffer_FUN_0053dbc0(vertices,vertex_count);
    break;
  case 2:
    engine_prim_c_normalizeTextureCoords_FUN_0053dc30(vertices,vertex_count);
    break;
  case 3:
    engine_prim_c_adjustNearPlaneTextureCoords_FUN_0053dcb0(vertices,vertex_count);
    break;
  case 5:
    engine_prim_c_normalizeTextureCoords_FUN_0053dc30(vertices,vertex_count);
    break;
  case 6:
    engine_prim_c_replaceWWithDepth_FUN_0053dd20(vertices,vertex_count);
  }
  _DAT_01e7dfd4 = 0;
  _DAT_01e7dacc = 0;
  local_1c = 0;
  _DAT_01e7dfd0 = 0x4b0;
  if (0 < vertex_count) {
    do {
      iVar9 = local_1c + 1;
      if (vertex_count <= iVar9) {
        iVar9 = 0;
      }
      pSVar2 = vertices + iVar9 * 0x30;
      pSVar6 = vertices + local_1c * 0x30;
      iVar9 = *(int *)(pSVar6 + 0x14) >> 0x10;
      iVar8 = *(int *)(pSVar2 + 0x14) >> 0x10;
      if (iVar9 != iVar8) {
        iVar10 = iVar8;
        pSVar7 = pSVar6;
        if (*(int *)(pSVar2 + 0x14) < *(int *)(pSVar6 + 0x14)) {
          iVar10 = iVar9;
          iVar9 = iVar8;
          pSVar7 = pSVar2;
          pSVar2 = pSVar6;
        }
        iVar3 = _DAT_01e7dacc * 0x50;
        *(int *)(&DAT_01e7dad0 + iVar3) = iVar9;
        iVar8 = _DAT_01e7dfd0;
        *(int *)(iVar3 + 0x1e7dad4) = iVar10;
        if (iVar9 < iVar8) {
          _DAT_01e7dfd0 = iVar9;
        }
        if (_DAT_01e7dfd4 < iVar10) {
          _DAT_01e7dfd4 = iVar10;
        }
        if ((uint)(*(int *)(pSVar2 + 0x14) - *(int *)(pSVar7 + 0x14)) < 0x10000) {
          iVar9 = 0;
        }
        else {
          iVar9 = (int)(0xffffffff /
                       (ulonglong)(uint)(*(int *)(pSVar2 + 0x14) - *(int *)(pSVar7 + 0x14)));
        }
        uVar11 = (uint)(ushort)((ushort)*(uint *)(pSVar7 + 0x14) ^ 0xffff);
        lVar1 = (longlong)iVar9 * (longlong)(*(int *)(pSVar2 + 0x10) - *(int *)(pSVar7 + 0x10));
        uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        *(uint *)(iVar3 + 0x1e7dadc) = uVar5;
        lVar1 = (longlong)(int)uVar11 * (longlong)(int)uVar5;
        *(uint *)(iVar3 + 0x1e7dad8) =
             *(int *)(pSVar7 + 0x10) +
             ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)iVar9 * (longlong)(*(int *)(pSVar2 + 0x18) - *(int *)(pSVar7 + 0x18));
        uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        *(uint *)(iVar3 + 0x1e7daec) = uVar5;
        lVar1 = (longlong)(int)uVar11 * (longlong)(int)uVar5;
        *(uint *)(iVar3 + 0x1e7dae8) =
             *(int *)(pSVar7 + 0x18) +
             ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)iVar9 * (longlong)(*(int *)(pSVar2 + 0x1c) - *(int *)(pSVar7 + 0x1c));
        uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        *(uint *)(iVar3 + 0x1e7daf4) = uVar5;
        lVar1 = (longlong)(int)uVar11 * (longlong)(int)uVar5;
        *(uint *)(iVar3 + 0x1e7daf0) =
             *(int *)(pSVar7 + 0x1c) +
             ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)iVar9 * (longlong)(*(int *)(pSVar2 + 0x20) - *(int *)(pSVar7 + 0x20));
        uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        *(uint *)(iVar3 + 0x1e7dae4) = uVar5;
        lVar1 = (longlong)(int)uVar11 * (longlong)(int)uVar5;
        *(uint *)(iVar3 + 0x1e7dae0) =
             *(int *)(pSVar7 + 0x20) +
             ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)iVar9 * (longlong)(*(int *)(pSVar2 + 0x2c) - *(int *)(pSVar7 + 0x2c));
        uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        *(uint *)(iVar3 + 0x1e7db04) = uVar5;
        lVar1 = (longlong)(int)uVar11 * (longlong)(int)uVar5;
        *(uint *)(iVar3 + 0x1e7db00) =
             *(int *)(pSVar7 + 0x2c) +
             ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)iVar9 * (longlong)(*(int *)(pSVar2 + 8) - *(int *)(pSVar7 + 8));
        uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        *(uint *)(iVar3 + 0x1e7dafc) = uVar5;
        lVar1 = (longlong)(int)uVar11 * (longlong)(int)uVar5;
        *(uint *)(iVar3 + 0x1e7daf8) =
             *(int *)(pSVar7 + 8) + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)iVar9 * (longlong)(*(int *)(pSVar2 + 0x24) - *(int *)(pSVar7 + 0x24));
        uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        *(uint *)(iVar3 + 0x1e7db0c) = uVar5;
        lVar1 = (longlong)(int)uVar11 * (longlong)(int)uVar5;
        *(uint *)(iVar3 + 0x1e7db08) =
             *(int *)(pSVar7 + 0x24) +
             ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)iVar9 * (longlong)(*(int *)(pSVar2 + 0x28) - *(int *)(pSVar7 + 0x28));
        uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        *(uint *)(iVar3 + 0x1e7db14) = uVar5;
        lVar1 = (longlong)(int)uVar11 * (longlong)(int)uVar5;
        *(uint *)(iVar3 + 0x1e7db10) =
             *(int *)(pSVar7 + 0x28) +
             ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        _DAT_01e7dacc = _DAT_01e7dacc + 1;
      }
      local_1c = local_1c + 1;
    } while (local_1c < vertex_count);
  }
  piVar4 = (int *)&DAT_01e7dad0;
  iVar9 = 0;
  if (0 < _DAT_01e7dacc) {
    do {
      if ((_DAT_01e7dfd0 == *piVar4) && (piVar4 != (int *)0x0)) goto LAB_0053f22f;
      iVar9 = iVar9 + 1;
      piVar4 = piVar4 + 0x14;
    } while (iVar9 < _DAT_01e7dacc);
  }
  piVar4 = (int *)0x0;
LAB_0053f22f:
  if (piVar4 != (int *)0x0) {
    iVar9 = 0;
    local_14 = (int *)&DAT_01e7dad0;
    if (0 < _DAT_01e7dacc) {
      do {
        if ((_DAT_01e7dfd0 == *local_14) && (local_14 != piVar4)) goto LAB_0053f26c;
        iVar9 = iVar9 + 1;
        local_14 = local_14 + 0x14;
      } while (iVar9 < _DAT_01e7dacc);
    }
    local_14 = (int *)0x0;
LAB_0053f26c:
    if (local_14 != (int *)0x0) {
      local_18 = _DAT_01e7dfd0;
      do {
        iVar9 = _DAT_01e7dacc;
        if (piVar4[1] <= local_18) {
          *piVar4 = -1;
          iVar8 = 0;
          piVar4 = (int *)&DAT_01e7dad0;
          if (0 < iVar9) {
            do {
              if ((local_18 == *piVar4) && (piVar4 != local_14)) goto LAB_0053f2c2;
              iVar8 = iVar8 + 1;
              piVar4 = piVar4 + 0x14;
            } while (iVar8 < _DAT_01e7dacc);
          }
          piVar4 = (int *)0x0;
LAB_0053f2c2:
          if (piVar4 == (int *)0x0) {
            return;
          }
        }
        iVar9 = _DAT_01e7dacc;
        if (local_14[1] <= local_18) {
          *local_14 = -1;
          local_14 = (int *)&DAT_01e7dad0;
          iVar8 = 0;
          if (iVar9 < 1) {
            return;
          }
          while ((local_18 != *local_14 || (local_14 == piVar4))) {
            iVar8 = iVar8 + 1;
            local_14 = local_14 + 0x14;
            if (_DAT_01e7dacc <= iVar8) {
              return;
            }
          }
          if (local_14 == (int *)0x0) {
            return;
          }
        }
        engine_special_cpp_FUN_00580127();
        piVar4[2] = piVar4[2] + piVar4[3];
        piVar4[6] = piVar4[6] + piVar4[7];
        piVar4[8] = piVar4[8] + piVar4[9];
        piVar4[10] = piVar4[10] + piVar4[0xb];
        piVar4[4] = piVar4[4] + piVar4[5];
        piVar4[0xe] = piVar4[0xe] + piVar4[0xf];
        piVar4[0x10] = piVar4[0x10] + piVar4[0x11];
        piVar4[0xc] = piVar4[0xc] + piVar4[0xd];
        local_14[2] = local_14[2] + local_14[3];
        local_14[6] = local_14[6] + local_14[7];
        local_14[8] = local_14[8] + local_14[9];
        local_14[10] = local_14[10] + local_14[0xb];
        local_14[4] = local_14[4] + local_14[5];
        local_18 = local_18 + 1;
        local_14[0xe] = local_14[0xe] + local_14[0xf];
        local_14[0x10] = local_14[0x10] + local_14[0x11];
        local_14[0xc] = local_14[0xc] + local_14[0xd];
      } while( true );
    }
  }
  return;
}
