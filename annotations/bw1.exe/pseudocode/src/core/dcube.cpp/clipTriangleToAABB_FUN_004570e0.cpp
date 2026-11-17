// Name: core_dcube.cpp_clipTriangleToAABB_FUN_004570e0
// Address: 004570e0
// Address Range: [[004570e0, 00457aeb]]
// Convention: __cdecl
// Signature: uint __cdecl core_dcube_cpp_clipTriangleToAABB_FUN_004570e0(CVector3f **triangle_vertices,CVector3f *aabb_min,CVector3f *aabb_max)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl core_dcube_cpp_clipTriangleToAABB_FUN_004570e0(CVector3f **triangle_vertices,CVector3f *aabb_min,CVector3f *aabb_max)

{
  float fVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  byte bVar6;
  int iVar7;
  CVector3f *pCVar8;
  float *pfVar9;
  byte bVar10;
  CVector3f *pCVar11;
  
  g_INT_0152bd4c = 3;
  pCVar8 = *triangle_vertices;
  if (pCVar8 != (CVector3f *)&g_FLOAT_0152bd50) {
    g_FLOAT_0152bd50 = pCVar8->x;
    g_FLOAT_0152bd58 = pCVar8->z;
    _DAT_0152bd54 = pCVar8->y;
  }
  pCVar8 = triangle_vertices[1];
  if (pCVar8 != (CVector3f *)&g_FLOAT_0152bd5c) {
    g_FLOAT_0152bd5c = pCVar8->x;
    g_FLOAT_0152bd64 = pCVar8->z;
    _DAT_0152bd60 = pCVar8->y;
  }
  pCVar8 = triangle_vertices[2];
  if (pCVar8 != (CVector3f *)&g_FLOAT_0152bd68) {
    g_FLOAT_0152bd68 = pCVar8->x;
    g_FLOAT_0152bd70 = pCVar8->z;
    _DAT_0152bd6c = pCVar8->y;
  }
  bVar10 = 0xff;
  iVar7 = 0;
  bVar3 = 0;
  pfVar9 = &g_FLOAT_0152bd50;
  do {
    bVar6 = aabb_max->x < *pfVar9;
    if (aabb_max->y < pfVar9[1]) {
      bVar6 = bVar6 | 2;
    }
    if (aabb_max->z < pfVar9[2]) {
      bVar6 = bVar6 | 4;
    }
    if (*pfVar9 < aabb_min->x) {
      bVar6 = bVar6 | 8;
    }
    if (pfVar9[1] < aabb_min->y) {
      bVar6 = bVar6 | 0x10;
    }
    if (pfVar9[2] < aabb_min->z) {
      bVar6 = bVar6 | 0x20;
    }
    pfVar9 = pfVar9 + 3;
    iVar7 = iVar7 + 1;
    bVar10 = bVar10 & bVar6;
    bVar3 = bVar3 | bVar6;
  } while (iVar7 < 3);
  if (bVar3 == 0) {
    pCVar8 = *triangle_vertices;
    g_UINT_0152c1e4 = 3;
    if (pCVar8 != (CVector3f *)&g_FLOAT_0152c1e8) {
      g_FLOAT_0152c1e8 = pCVar8->x;
      g_FLOAT_0152c1f0 = pCVar8->z;
      _DAT_0152c1ec = pCVar8->y;
    }
    pCVar8 = triangle_vertices[1];
    if (pCVar8 != (CVector3f *)&g_FLOAT_0152c1f4) {
      g_FLOAT_0152c1f4 = pCVar8->x;
      g_FLOAT_0152c1fc = pCVar8->z;
      _DAT_0152c1f8 = pCVar8->y;
    }
    pCVar8 = triangle_vertices[2];
    if (pCVar8 != (CVector3f *)&g_FLOAT_0152c200) {
      g_FLOAT_0152c200 = pCVar8->x;
      g_FLOAT_0152c208 = pCVar8->z;
      _DAT_0152c204 = pCVar8->y;
    }
    return 1;
  }
  if (bVar10 == 0) {
    fVar1 = aabb_max->y;
    iVar7 = 0;
    pfVar9 = &g_FLOAT_0152bd50;
    g_INT_0152be10 = 0;
    g_UINT_0152bed4 = 0;
    g_UINT_0152bf98 = 0;
    g_INT_0152c05c = 0;
    g_UINT_0152c120 = 0;
    g_UINT_0152c1e4 = 0;
    do {
      iVar5 = g_INT_0152be10;
      uVar4 = iVar7 + 1;
      if (uVar4 == g_INT_0152bd4c) {
        uVar4 = uVar4 ^ g_INT_0152bd4c;
      }
      bVar3 = fVar1 < ((CVector3f *)pfVar9)->y;
      if (fVar1 < *(float *)(&DAT_0152bd54 + uVar4 * 0xc)) {
        bVar3 = bVar3 | 2;
      }
      switch(bVar3) {
      case 0:
        if (g_CVector3f_ARRAY_0152be14 + g_INT_0152be10 != (CVector3f *)pfVar9) {
          g_CVector3f_ARRAY_0152be14[g_INT_0152be10].x = ((CVector3f *)pfVar9)->x;
          g_CVector3f_ARRAY_0152be14[iVar5].y = ((CVector3f *)pfVar9)->y;
          g_CVector3f_ARRAY_0152be14[iVar5].z = ((CVector3f *)pfVar9)->z;
        }
        g_INT_0152be10 = g_INT_0152be10 + 1;
        break;
      case 1:
        core_dcube_cpp_clipEdgeToPlane_FUN_00455460
                  ((CVector3f *)(&g_FLOAT_0152bd50 + uVar4 * 3),(CVector3f *)pfVar9,
                   g_CVector3f_ARRAY_0152be14 + g_INT_0152be10,0.0,1.0,0.0,(double)-fVar1);
        g_INT_0152be10 = g_INT_0152be10 + 1;
        break;
      case 2:
        if (g_CVector3f_ARRAY_0152be14 + g_INT_0152be10 != (CVector3f *)pfVar9) {
          g_CVector3f_ARRAY_0152be14[g_INT_0152be10].x = ((CVector3f *)pfVar9)->x;
          g_CVector3f_ARRAY_0152be14[iVar5].y = ((CVector3f *)pfVar9)->y;
          g_CVector3f_ARRAY_0152be14[iVar5].z = ((CVector3f *)pfVar9)->z;
        }
        g_INT_0152be10 = g_INT_0152be10 + 1;
        core_dcube_cpp_clipEdgeToPlane_FUN_00455460
                  ((CVector3f *)pfVar9,(CVector3f *)(&g_FLOAT_0152bd50 + uVar4 * 3),
                   g_CVector3f_ARRAY_0152be14 + g_INT_0152be10,0.0,1.0,0.0,(double)-fVar1);
        g_INT_0152be10 = g_INT_0152be10 + 1;
      }
      iVar7 = iVar7 + 1;
      pfVar9 = (float *)((int)pfVar9 + 0xc);
    } while (iVar7 < g_INT_0152bd4c);
    if (2 < g_INT_0152be10) {
      fVar1 = aabb_min->y;
      iVar7 = 0;
      if (0 < g_INT_0152be10) {
        pCVar8 = g_CVector3f_ARRAY_0152be14;
        do {
          uVar2 = g_UINT_0152bed4;
          uVar4 = iVar7 + 1;
          if (uVar4 == g_INT_0152be10) {
            uVar4 = uVar4 ^ g_INT_0152be10;
          }
          bVar3 = pCVar8->y < fVar1;
          if (g_CVector3f_ARRAY_0152be14[uVar4].y < fVar1) {
            bVar3 = bVar3 | 2;
          }
          switch(bVar3) {
          case 0:
            if (g_CVector3f_ARRAY_0152bed8 + g_UINT_0152bed4 != pCVar8) {
              g_CVector3f_ARRAY_0152bed8[g_UINT_0152bed4].x = pCVar8->x;
              g_CVector3f_ARRAY_0152bed8[uVar2].y = pCVar8->y;
              g_CVector3f_ARRAY_0152bed8[uVar2].z = pCVar8->z;
            }
            g_UINT_0152bed4 = g_UINT_0152bed4 + 1;
            break;
          case 1:
            core_dcube_cpp_clipEdgeToPlane_FUN_00455460
                      (g_CVector3f_ARRAY_0152be14 + uVar4,pCVar8,
                       g_CVector3f_ARRAY_0152bed8 + g_UINT_0152bed4,0.0,-1.0,0.0,(double)fVar1);
            g_UINT_0152bed4 = g_UINT_0152bed4 + 1;
            break;
          case 2:
            if (g_CVector3f_ARRAY_0152bed8 + g_UINT_0152bed4 != pCVar8) {
              g_CVector3f_ARRAY_0152bed8[g_UINT_0152bed4].x = pCVar8->x;
              g_CVector3f_ARRAY_0152bed8[uVar2].y = pCVar8->y;
              g_CVector3f_ARRAY_0152bed8[uVar2].z = pCVar8->z;
            }
            g_UINT_0152bed4 = g_UINT_0152bed4 + 1;
            core_dcube_cpp_clipEdgeToPlane_FUN_00455460
                      (pCVar8,g_CVector3f_ARRAY_0152be14 + uVar4,
                       g_CVector3f_ARRAY_0152bed8 + g_UINT_0152bed4,0.0,-1.0,0.0,(double)fVar1);
            g_UINT_0152bed4 = g_UINT_0152bed4 + 1;
          }
          iVar7 = iVar7 + 1;
          pCVar8 = pCVar8 + 1;
        } while (iVar7 < g_INT_0152be10);
      }
      if (2 < (int)g_UINT_0152bed4) {
        fVar1 = aabb_max->x;
        iVar7 = 0;
        if (0 < (int)g_UINT_0152bed4) {
          pCVar8 = g_CVector3f_ARRAY_0152bed8;
          do {
            uVar2 = g_UINT_0152bf98;
            uVar4 = iVar7 + 1;
            if (uVar4 == g_UINT_0152bed4) {
              uVar4 = uVar4 ^ g_UINT_0152bed4;
            }
            pCVar11 = g_CVector3f_ARRAY_0152bed8 + uVar4;
            bVar3 = fVar1 < pCVar8->x;
            if (fVar1 < pCVar11->x) {
              bVar3 = bVar3 | 2;
            }
            switch(bVar3) {
            case 0:
              if (g_CVector3f_ARRAY_0152bf9c + g_UINT_0152bf98 != pCVar8) {
                g_CVector3f_ARRAY_0152bf9c[g_UINT_0152bf98].x = pCVar8->x;
                g_CVector3f_ARRAY_0152bf9c[uVar2].y = pCVar8->y;
                g_CVector3f_ARRAY_0152bf9c[uVar2].z = pCVar8->z;
              }
              g_UINT_0152bf98 = g_UINT_0152bf98 + 1;
              break;
            case 1:
              core_dcube_cpp_clipEdgeToPlane_FUN_00455460
                        (pCVar11,pCVar8,g_CVector3f_ARRAY_0152bf9c + g_UINT_0152bf98,1.0,0.0,0.0,
                         (double)-fVar1);
              g_UINT_0152bf98 = g_UINT_0152bf98 + 1;
              break;
            case 2:
              if (g_CVector3f_ARRAY_0152bf9c + g_UINT_0152bf98 != pCVar8) {
                g_CVector3f_ARRAY_0152bf9c[g_UINT_0152bf98].x = pCVar8->x;
                g_CVector3f_ARRAY_0152bf9c[uVar2].y = pCVar8->y;
                g_CVector3f_ARRAY_0152bf9c[uVar2].z = pCVar8->z;
              }
              g_UINT_0152bf98 = g_UINT_0152bf98 + 1;
              core_dcube_cpp_clipEdgeToPlane_FUN_00455460
                        (pCVar8,pCVar11,g_CVector3f_ARRAY_0152bf9c + g_UINT_0152bf98,1.0,0.0,0.0,
                         (double)-fVar1);
              g_UINT_0152bf98 = g_UINT_0152bf98 + 1;
            }
            iVar7 = iVar7 + 1;
            pCVar8 = pCVar8 + 1;
          } while (iVar7 < (int)g_UINT_0152bed4);
        }
        if (2 < (int)g_UINT_0152bf98) {
          fVar1 = aabb_min->x;
          iVar7 = 0;
          if (0 < (int)g_UINT_0152bf98) {
            pCVar8 = g_CVector3f_ARRAY_0152bf9c;
            do {
              iVar5 = g_INT_0152c05c;
              uVar4 = iVar7 + 1;
              if (uVar4 == g_UINT_0152bf98) {
                uVar4 = uVar4 ^ g_UINT_0152bf98;
              }
              pCVar11 = g_CVector3f_ARRAY_0152bf9c + uVar4;
              bVar3 = pCVar8->x < fVar1;
              if (pCVar11->x < fVar1) {
                bVar3 = bVar3 | 2;
              }
              switch(bVar3) {
              case 0:
                if (g_CVector3f_ARRAY_0152c060 + g_INT_0152c05c != pCVar8) {
                  g_CVector3f_ARRAY_0152c060[g_INT_0152c05c].x = pCVar8->x;
                  g_CVector3f_ARRAY_0152c060[iVar5].y = pCVar8->y;
                  g_CVector3f_ARRAY_0152c060[iVar5].z = pCVar8->z;
                }
                g_INT_0152c05c = g_INT_0152c05c + 1;
                break;
              case 1:
                core_dcube_cpp_clipEdgeToPlane_FUN_00455460
                          (pCVar11,pCVar8,g_CVector3f_ARRAY_0152c060 + g_INT_0152c05c,-1.0,0.0,0.0,
                           (double)fVar1);
                g_INT_0152c05c = g_INT_0152c05c + 1;
                break;
              case 2:
                if (g_CVector3f_ARRAY_0152c060 + g_INT_0152c05c != pCVar8) {
                  g_CVector3f_ARRAY_0152c060[g_INT_0152c05c].x = pCVar8->x;
                  g_CVector3f_ARRAY_0152c060[iVar5].y = pCVar8->y;
                  g_CVector3f_ARRAY_0152c060[iVar5].z = pCVar8->z;
                }
                g_INT_0152c05c = g_INT_0152c05c + 1;
                core_dcube_cpp_clipEdgeToPlane_FUN_00455460
                          (pCVar8,pCVar11,g_CVector3f_ARRAY_0152c060 + g_INT_0152c05c,-1.0,0.0,0.0,
                           (double)fVar1);
                g_INT_0152c05c = g_INT_0152c05c + 1;
              }
              iVar7 = iVar7 + 1;
              pCVar8 = pCVar8 + 1;
            } while (iVar7 < (int)g_UINT_0152bf98);
          }
          if (2 < g_INT_0152c05c) {
            fVar1 = aabb_min->z;
            iVar7 = 0;
            if (0 < g_INT_0152c05c) {
              pCVar8 = g_CVector3f_ARRAY_0152c060;
              do {
                uVar2 = g_UINT_0152c120;
                uVar4 = iVar7 + 1;
                if (uVar4 == g_INT_0152c05c) {
                  uVar4 = uVar4 ^ g_INT_0152c05c;
                }
                bVar3 = pCVar8->z < fVar1;
                if (g_CVector3f_ARRAY_0152c060[uVar4].z < fVar1) {
                  bVar3 = bVar3 | 2;
                }
                switch(bVar3) {
                case 0:
                  if (g_CVector3f_ARRAY_0152c124 + g_UINT_0152c120 != pCVar8) {
                    g_CVector3f_ARRAY_0152c124[g_UINT_0152c120].x = pCVar8->x;
                    g_CVector3f_ARRAY_0152c124[uVar2].y = pCVar8->y;
                    g_CVector3f_ARRAY_0152c124[uVar2].z = pCVar8->z;
                  }
                  g_UINT_0152c120 = g_UINT_0152c120 + 1;
                  break;
                case 1:
                  core_dcube_cpp_clipEdgeToPlane_FUN_00455460
                            (g_CVector3f_ARRAY_0152c060 + uVar4,pCVar8,
                             g_CVector3f_ARRAY_0152c124 + g_UINT_0152c120,0.0,0.0,-1.0,(double)fVar1
                            );
                  g_UINT_0152c120 = g_UINT_0152c120 + 1;
                  break;
                case 2:
                  if (g_CVector3f_ARRAY_0152c124 + g_UINT_0152c120 != pCVar8) {
                    g_CVector3f_ARRAY_0152c124[g_UINT_0152c120].x = pCVar8->x;
                    g_CVector3f_ARRAY_0152c124[uVar2].y = pCVar8->y;
                    g_CVector3f_ARRAY_0152c124[uVar2].z = pCVar8->z;
                  }
                  g_UINT_0152c120 = g_UINT_0152c120 + 1;
                  core_dcube_cpp_clipEdgeToPlane_FUN_00455460
                            (pCVar8,g_CVector3f_ARRAY_0152c060 + uVar4,
                             g_CVector3f_ARRAY_0152c124 + g_UINT_0152c120,0.0,0.0,-1.0,(double)fVar1
                            );
                  g_UINT_0152c120 = g_UINT_0152c120 + 1;
                }
                iVar7 = iVar7 + 1;
                pCVar8 = pCVar8 + 1;
              } while (iVar7 < g_INT_0152c05c);
            }
            if (2 < (int)g_UINT_0152c120) {
              fVar1 = aabb_max->z;
              iVar7 = 0;
              if (0 < (int)g_UINT_0152c120) {
                pCVar8 = g_CVector3f_ARRAY_0152c124;
                do {
                  uVar2 = g_UINT_0152c1e4;
                  uVar4 = iVar7 + 1;
                  if (uVar4 == g_UINT_0152c120) {
                    uVar4 = uVar4 ^ g_UINT_0152c120;
                  }
                  bVar3 = fVar1 < pCVar8->z;
                  if (fVar1 < g_CVector3f_ARRAY_0152c124[uVar4].z) {
                    bVar3 = bVar3 | 2;
                  }
                  switch(bVar3) {
                  case 0:
                    iVar5 = g_UINT_0152c1e4 * 0xc;
                    if ((CVector3f *)(&g_FLOAT_0152c1e8 + g_UINT_0152c1e4 * 3) != pCVar8) {
                      ((CVector3f *)(&g_FLOAT_0152c1e8 + g_UINT_0152c1e4 * 3))->x = pCVar8->x;
                      *(float *)(&DAT_0152c1ec + iVar5) = pCVar8->y;
                      (&g_FLOAT_0152c1f0)[uVar2 * 3] = pCVar8->z;
                    }
                    g_UINT_0152c1e4 = g_UINT_0152c1e4 + 1;
                    break;
                  case 1:
                    core_dcube_cpp_clipEdgeToPlane_FUN_00455460
                              (g_CVector3f_ARRAY_0152c124 + uVar4,pCVar8,
                               (CVector3f *)(&g_FLOAT_0152c1e8 + g_UINT_0152c1e4 * 3),0.0,0.0,-1.0,
                               (double)fVar1);
                    g_UINT_0152c1e4 = g_UINT_0152c1e4 + 1;
                    break;
                  case 2:
                    iVar5 = g_UINT_0152c1e4 * 0xc;
                    if ((CVector3f *)(&g_FLOAT_0152c1e8 + g_UINT_0152c1e4 * 3) != pCVar8) {
                      ((CVector3f *)(&g_FLOAT_0152c1e8 + g_UINT_0152c1e4 * 3))->x = pCVar8->x;
                      *(float *)(&DAT_0152c1ec + iVar5) = pCVar8->y;
                      (&g_FLOAT_0152c1f0)[uVar2 * 3] = pCVar8->z;
                    }
                    g_UINT_0152c1e4 = g_UINT_0152c1e4 + 1;
                    core_dcube_cpp_clipEdgeToPlane_FUN_00455460
                              (pCVar8,g_CVector3f_ARRAY_0152c124 + uVar4,
                               (CVector3f *)(&g_FLOAT_0152c1e8 + g_UINT_0152c1e4 * 3),0.0,0.0,-1.0,
                               (double)fVar1);
                    g_UINT_0152c1e4 = g_UINT_0152c1e4 + 1;
                  }
                  iVar7 = iVar7 + 1;
                  pCVar8 = pCVar8 + 1;
                } while (iVar7 < (int)g_UINT_0152c120);
              }
              if (2 < (int)g_UINT_0152c1e4) {
                return 1;
              }
            }
          }
        }
      }
    }
  }
  return 0;
}
