// Name: engine_prim.c_FUN_0051da80
// Address: 0051da80
// Address Range: [[0051da80, 0051e10d]]
// Convention: __cdecl
// Signature: void __cdecl engine_prim_c_FUN_0051da80(SRenderVertex *vertices,int vertex_count)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_prim_c_FUN_0051da80(SRenderVertex *vertices,int vertex_count)

{
  longlong lVar1;
  int iVar2;
  int *piVar3;
  SRenderVertex *pSVar4;
  uint uVar5;
  SRenderVertex *pSVar6;
  int iVar7;
  int iVar8;
  SRenderVertex *pSVar9;
  uint uVar10;
  int iVar11;
  int local_1c;
  int local_18;
  int *local_14;
  
  if ((DAT_006141e0 != 0) && (iVar8 = 0, pSVar4 = vertices, 0 < vertex_count)) {
    do {
      if ((int)((pSVar4->projected_vertex).screen_x & -0x80000000) != 0) {
        (pSVar4->projected_vertex).inv_z =
             (int)(0x7fffffff / (longlong)(pSVar4->projected_vertex).transformed_z);
        (pSVar4->projected_vertex).screen_x =
             (int)(((longlong)(pSVar4->projected_vertex).transformed_x * (longlong)_DAT_01c35e38) /
                  (longlong)(pSVar4->projected_vertex).transformed_z) + _DAT_01c35e40;
        (pSVar4->projected_vertex).screen_y =
             (int)(((longlong)(pSVar4->projected_vertex).transformed_y * (longlong)_DAT_01c35e3c) /
                  (longlong)(pSVar4->projected_vertex).transformed_z) + _DAT_01c35e44;
      }
      iVar8 = iVar8 + 1;
      pSVar4 = pSVar4 + 1;
    } while (iVar8 < vertex_count);
  }
  if (DAT_0070ca7c != 0) {
    pSVar4 = vertices + 1;
    pSVar9 = vertices + 2;
    if (vertex_count < 4) {
      iVar8 = engine_prim_c_calculateTriangleWindingOrder_FUN_0051c760(vertices,pSVar4,pSVar9);
      if (iVar8 == 0) {
        return;
      }
    }
    else {
      iVar8 = vertex_count + -2;
      iVar11 = 0;
      iVar7 = 0;
      if (0 < iVar8) {
        do {
          iVar2 = engine_prim_c_calculateTriangleWindingOrder_FUN_0051c760(vertices,pSVar4,pSVar9);
          if (iVar2 == 0) {
            iVar7 = iVar7 + 1;
          }
          pSVar4 = pSVar4 + 1;
          iVar11 = iVar11 + 1;
          pSVar9 = pSVar9 + 1;
        } while (iVar11 < iVar8);
      }
      if (iVar7 == iVar8) {
        return;
      }
    }
  }
  if ((_DAT_01c37788 != 0) && (DAT_0070ca74 == 0)) {
    engine_special_cpp_drawPolygon_FUN_0055f8f0(vertices,vertex_count,_DAT_01c38b54);
    _DAT_01e61b58 = _DAT_01e61b58 + vertex_count + -2;
    return;
  }
  _DAT_01e61b58 = _DAT_01e61b58 + 1;
  switch(_DAT_01c38b58) {
  case 1:
    engine_prim_c_prepareDepthBuffer_FUN_0051c5c0(vertices,vertex_count);
    break;
  case 2:
    engine_prim_c_normalizeTextureCoords_FUN_0051c630(vertices,vertex_count);
    break;
  case 3:
    engine_prim_c_adjustNearPlaneTextureCoords_FUN_0051c6b0(vertices,vertex_count);
    break;
  case 5:
    engine_prim_c_normalizeTextureCoords_FUN_0051c630(vertices,vertex_count);
    break;
  case 6:
    engine_prim_c_replaceWWithDepth_FUN_0051c720(vertices,vertex_count);
  }
  _DAT_01e62064 = 0;
  _DAT_01e61b5c = 0;
  local_1c = 0;
  _DAT_01e62060 = 0x4b0;
  if (0 < vertex_count) {
    do {
      iVar8 = local_1c + 1;
      if (vertex_count <= iVar8) {
        iVar8 = 0;
      }
      pSVar4 = vertices + iVar8;
      pSVar9 = vertices + local_1c;
      iVar8 = (pSVar9->projected_vertex).screen_y >> 0x10;
      iVar7 = (pSVar4->projected_vertex).screen_y >> 0x10;
      if (iVar8 != iVar7) {
        iVar11 = iVar7;
        pSVar6 = pSVar9;
        if ((pSVar4->projected_vertex).screen_y < (pSVar9->projected_vertex).screen_y) {
          iVar11 = iVar8;
          iVar8 = iVar7;
          pSVar6 = pSVar4;
          pSVar4 = pSVar9;
        }
        iVar2 = _DAT_01e61b5c * 0x50;
        *(int *)(&DAT_01e61b60 + iVar2) = iVar8;
        iVar7 = _DAT_01e62060;
        *(int *)(iVar2 + 0x1e61b64) = iVar11;
        if (iVar8 < iVar7) {
          _DAT_01e62060 = iVar8;
        }
        if (_DAT_01e62064 < iVar11) {
          _DAT_01e62064 = iVar11;
        }
        uVar5 = (pSVar4->projected_vertex).screen_y - (pSVar6->projected_vertex).screen_y;
        if (uVar5 < 0x10000) {
          iVar8 = 0;
        }
        else {
          iVar8 = (int)(0xffffffff / (ulonglong)uVar5);
        }
        uVar10 = (uint)(ushort)((ushort)(pSVar6->projected_vertex).screen_y ^ 0xffff);
        lVar1 = (longlong)iVar8 *
                (longlong)
                ((pSVar4->projected_vertex).screen_x - (pSVar6->projected_vertex).screen_x);
        uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        *(uint *)(iVar2 + 0x1e61b6c) = uVar5;
        lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar5;
        *(uint *)(iVar2 + 0x1e61b68) =
             (pSVar6->projected_vertex).screen_x +
             ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)iVar8 * (longlong)(pSVar4->u - pSVar6->u);
        uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        *(uint *)(iVar2 + 0x1e61b7c) = uVar5;
        lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar5;
        *(uint *)(iVar2 + 0x1e61b78) =
             pSVar6->u + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)iVar8 * (longlong)(pSVar4->v - pSVar6->v);
        uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        *(uint *)(iVar2 + 0x1e61b84) = uVar5;
        lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar5;
        *(uint *)(iVar2 + 0x1e61b80) =
             pSVar6->v + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)iVar8 * (longlong)(pSVar4->r - pSVar6->r);
        uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        *(uint *)(iVar2 + 0x1e61b74) = uVar5;
        lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar5;
        *(uint *)(iVar2 + 0x1e61b70) =
             pSVar6->r + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)iVar8 * (longlong)(pSVar4->a - pSVar6->a);
        uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        *(uint *)(iVar2 + 0x1e61b94) = uVar5;
        lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar5;
        *(uint *)(iVar2 + 0x1e61b90) =
             pSVar6->a + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)iVar8 *
                (longlong)
                ((pSVar4->projected_vertex).transformed_z - (pSVar6->projected_vertex).transformed_z
                );
        uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        *(uint *)(iVar2 + 0x1e61b8c) = uVar5;
        lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar5;
        *(uint *)(iVar2 + 0x1e61b88) =
             (pSVar6->projected_vertex).transformed_z +
             ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)iVar8 * (longlong)(pSVar4->g - pSVar6->g);
        uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        *(uint *)(iVar2 + 0x1e61b9c) = uVar5;
        lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar5;
        *(uint *)(iVar2 + 0x1e61b98) =
             pSVar6->g + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)iVar8 * (longlong)(pSVar4->b - pSVar6->b);
        uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        *(uint *)(iVar2 + 0x1e61ba4) = uVar5;
        lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar5;
        *(uint *)(iVar2 + 0x1e61ba0) =
             pSVar6->b + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        _DAT_01e61b5c = _DAT_01e61b5c + 1;
      }
      local_1c = local_1c + 1;
    } while (local_1c < vertex_count);
  }
  local_14 = (int *)&DAT_01e61b60;
  iVar8 = 0;
  if (0 < _DAT_01e61b5c) {
    do {
      if ((_DAT_01e62060 == *local_14) && (local_14 != (int *)0x0)) goto LAB_0051dc42;
      iVar8 = iVar8 + 1;
      local_14 = local_14 + 0x14;
    } while (iVar8 < _DAT_01e61b5c);
  }
  local_14 = (int *)0x0;
LAB_0051dc42:
  if (local_14 != (int *)0x0) {
    iVar8 = 0;
    piVar3 = (int *)&DAT_01e61b60;
    if (0 < _DAT_01e61b5c) {
      do {
        if ((_DAT_01e62060 == *piVar3) && (piVar3 != local_14)) goto LAB_0051dc81;
        iVar8 = iVar8 + 1;
        piVar3 = piVar3 + 0x14;
      } while (iVar8 < _DAT_01e61b5c);
    }
    piVar3 = (int *)0x0;
LAB_0051dc81:
    if (piVar3 != (int *)0x0) {
      local_18 = _DAT_01e62060;
      do {
        iVar8 = _DAT_01e61b5c;
        if (local_14[1] <= local_18) {
          *local_14 = -1;
          local_14 = (int *)&DAT_01e61b60;
          iVar7 = 0;
          if (0 < iVar8) {
            do {
              if ((local_18 == *local_14) && (local_14 != piVar3)) goto LAB_0051dcd6;
              iVar7 = iVar7 + 1;
              local_14 = local_14 + 0x14;
            } while (iVar7 < _DAT_01e61b5c);
          }
          local_14 = (int *)0x0;
LAB_0051dcd6:
          if (local_14 == (int *)0x0) {
            return;
          }
        }
        iVar8 = _DAT_01e61b5c;
        if (piVar3[1] <= local_18) {
          *piVar3 = -1;
          iVar7 = 0;
          piVar3 = (int *)&DAT_01e61b60;
          if (iVar8 < 1) {
            return;
          }
          while ((local_18 != *piVar3 || (piVar3 == local_14))) {
            iVar7 = iVar7 + 1;
            piVar3 = piVar3 + 0x14;
            if (_DAT_01e61b5c <= iVar7) {
              return;
            }
          }
          if (piVar3 == (int *)0x0) {
            return;
          }
        }
        engine_special_cpp_FUN_0055d6d7();
        local_14[2] = local_14[2] + local_14[3];
        local_14[6] = local_14[6] + local_14[7];
        local_14[8] = local_14[8] + local_14[9];
        local_14[10] = local_14[10] + local_14[0xb];
        local_14[4] = local_14[4] + local_14[5];
        local_14[0xe] = local_14[0xe] + local_14[0xf];
        local_14[0x10] = local_14[0x10] + local_14[0x11];
        local_14[0xc] = local_14[0xc] + local_14[0xd];
        piVar3[2] = piVar3[2] + piVar3[3];
        piVar3[6] = piVar3[6] + piVar3[7];
        piVar3[8] = piVar3[8] + piVar3[9];
        piVar3[10] = piVar3[10] + piVar3[0xb];
        local_18 = local_18 + 1;
        piVar3[4] = piVar3[4] + piVar3[5];
        piVar3[0xe] = piVar3[0xe] + piVar3[0xf];
        piVar3[0x10] = piVar3[0x10] + piVar3[0x11];
        piVar3[0xc] = piVar3[0xc] + piVar3[0xd];
      } while( true );
    }
  }
  return;
}
