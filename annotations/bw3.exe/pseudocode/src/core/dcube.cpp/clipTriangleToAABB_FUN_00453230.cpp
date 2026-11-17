// Name: core_dcube.cpp_clipTriangleToAABB_FUN_00453230
// Address: 00453230
// Address Range: [[00453230, 00453c3b]]
// Convention: __cdecl
// Signature: uint __cdecl core_dcube_cpp_clipTriangleToAABB_FUN_00453230(CVector3f **triangle_vertices,CVector3f *aabb_min,CVector3f *aabb_max)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl core_dcube_cpp_clipTriangleToAABB_FUN_00453230(CVector3f **triangle_vertices,CVector3f *aabb_min,CVector3f *aabb_max)

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
  
  g_INT_015485fc = 3;
  pCVar8 = *triangle_vertices;
  if (pCVar8 != (CVector3f *)&g_FLOAT_01548600) {
    g_FLOAT_01548600 = pCVar8->x;
    g_FLOAT_01548608 = pCVar8->z;
    _DAT_01548604 = pCVar8->y;
  }
  pCVar8 = triangle_vertices[1];
  if (pCVar8 != (CVector3f *)&g_FLOAT_0154860c) {
    g_FLOAT_0154860c = pCVar8->x;
    g_FLOAT_01548614 = pCVar8->z;
    _DAT_01548610 = pCVar8->y;
  }
  pCVar8 = triangle_vertices[2];
  if (pCVar8 != (CVector3f *)&g_FLOAT_01548618) {
    g_FLOAT_01548618 = pCVar8->x;
    g_FLOAT_01548620 = pCVar8->z;
    _DAT_0154861c = pCVar8->y;
  }
  bVar10 = 0xff;
  iVar7 = 0;
  bVar3 = 0;
  pfVar9 = &g_FLOAT_01548600;
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
    g_UINT_01548a94 = 3;
    if (pCVar8 != (CVector3f *)&g_FLOAT_01548a98) {
      g_FLOAT_01548a98 = pCVar8->x;
      g_FLOAT_01548aa0 = pCVar8->z;
      _DAT_01548a9c = pCVar8->y;
    }
    pCVar8 = triangle_vertices[1];
    if (pCVar8 != (CVector3f *)&g_FLOAT_01548aa4) {
      g_FLOAT_01548aa4 = pCVar8->x;
      g_FLOAT_01548aac = pCVar8->z;
      _DAT_01548aa8 = pCVar8->y;
    }
    pCVar8 = triangle_vertices[2];
    if (pCVar8 != (CVector3f *)&g_FLOAT_01548ab0) {
      g_FLOAT_01548ab0 = pCVar8->x;
      g_FLOAT_01548ab8 = pCVar8->z;
      _DAT_01548ab4 = pCVar8->y;
    }
    return 1;
  }
  if (bVar10 == 0) {
    fVar1 = aabb_max->y;
    iVar7 = 0;
    pfVar9 = &g_FLOAT_01548600;
    g_INT_015486c0 = 0;
    g_UINT_01548784 = 0;
    g_UINT_01548848 = 0;
    g_INT_0154890c = 0;
    g_UINT_015489d0 = 0;
    g_UINT_01548a94 = 0;
    do {
      iVar5 = g_INT_015486c0;
      uVar4 = iVar7 + 1;
      if (uVar4 == g_INT_015485fc) {
        uVar4 = uVar4 ^ g_INT_015485fc;
      }
      bVar3 = fVar1 < ((CVector3f *)pfVar9)->y;
      if (fVar1 < *(float *)(&DAT_01548604 + uVar4 * 0xc)) {
        bVar3 = bVar3 | 2;
      }
      switch(bVar3) {
      case 0:
        if (g_CVector3f_ARRAY_015486c4 + g_INT_015486c0 != (CVector3f *)pfVar9) {
          g_CVector3f_ARRAY_015486c4[g_INT_015486c0].x = ((CVector3f *)pfVar9)->x;
          g_CVector3f_ARRAY_015486c4[iVar5].y = ((CVector3f *)pfVar9)->y;
          g_CVector3f_ARRAY_015486c4[iVar5].z = ((CVector3f *)pfVar9)->z;
        }
        g_INT_015486c0 = g_INT_015486c0 + 1;
        break;
      case 1:
        core_dcube_cpp_clipEdgeToPlane_FUN_004515b0
                  ((CVector3f *)(&g_FLOAT_01548600 + uVar4 * 3),(CVector3f *)pfVar9,
                   g_CVector3f_ARRAY_015486c4 + g_INT_015486c0,0.0,1.0,0.0,(double)-fVar1);
        g_INT_015486c0 = g_INT_015486c0 + 1;
        break;
      case 2:
        if (g_CVector3f_ARRAY_015486c4 + g_INT_015486c0 != (CVector3f *)pfVar9) {
          g_CVector3f_ARRAY_015486c4[g_INT_015486c0].x = ((CVector3f *)pfVar9)->x;
          g_CVector3f_ARRAY_015486c4[iVar5].y = ((CVector3f *)pfVar9)->y;
          g_CVector3f_ARRAY_015486c4[iVar5].z = ((CVector3f *)pfVar9)->z;
        }
        g_INT_015486c0 = g_INT_015486c0 + 1;
        core_dcube_cpp_clipEdgeToPlane_FUN_004515b0
                  ((CVector3f *)pfVar9,(CVector3f *)(&g_FLOAT_01548600 + uVar4 * 3),
                   g_CVector3f_ARRAY_015486c4 + g_INT_015486c0,0.0,1.0,0.0,(double)-fVar1);
        g_INT_015486c0 = g_INT_015486c0 + 1;
      }
      iVar7 = iVar7 + 1;
      pfVar9 = (float *)((int)pfVar9 + 0xc);
    } while (iVar7 < g_INT_015485fc);
    if (2 < g_INT_015486c0) {
      fVar1 = aabb_min->y;
      iVar7 = 0;
      if (0 < g_INT_015486c0) {
        pCVar8 = g_CVector3f_ARRAY_015486c4;
        do {
          uVar2 = g_UINT_01548784;
          uVar4 = iVar7 + 1;
          if (uVar4 == g_INT_015486c0) {
            uVar4 = uVar4 ^ g_INT_015486c0;
          }
          bVar3 = pCVar8->y < fVar1;
          if (g_CVector3f_ARRAY_015486c4[uVar4].y < fVar1) {
            bVar3 = bVar3 | 2;
          }
          switch(bVar3) {
          case 0:
            if (g_CVector3f_ARRAY_01548788 + g_UINT_01548784 != pCVar8) {
              g_CVector3f_ARRAY_01548788[g_UINT_01548784].x = pCVar8->x;
              g_CVector3f_ARRAY_01548788[uVar2].y = pCVar8->y;
              g_CVector3f_ARRAY_01548788[uVar2].z = pCVar8->z;
            }
            g_UINT_01548784 = g_UINT_01548784 + 1;
            break;
          case 1:
            core_dcube_cpp_clipEdgeToPlane_FUN_004515b0
                      (g_CVector3f_ARRAY_015486c4 + uVar4,pCVar8,
                       g_CVector3f_ARRAY_01548788 + g_UINT_01548784,0.0,-1.0,0.0,(double)fVar1);
            g_UINT_01548784 = g_UINT_01548784 + 1;
            break;
          case 2:
            if (g_CVector3f_ARRAY_01548788 + g_UINT_01548784 != pCVar8) {
              g_CVector3f_ARRAY_01548788[g_UINT_01548784].x = pCVar8->x;
              g_CVector3f_ARRAY_01548788[uVar2].y = pCVar8->y;
              g_CVector3f_ARRAY_01548788[uVar2].z = pCVar8->z;
            }
            g_UINT_01548784 = g_UINT_01548784 + 1;
            core_dcube_cpp_clipEdgeToPlane_FUN_004515b0
                      (pCVar8,g_CVector3f_ARRAY_015486c4 + uVar4,
                       g_CVector3f_ARRAY_01548788 + g_UINT_01548784,0.0,-1.0,0.0,(double)fVar1);
            g_UINT_01548784 = g_UINT_01548784 + 1;
          }
          iVar7 = iVar7 + 1;
          pCVar8 = pCVar8 + 1;
        } while (iVar7 < g_INT_015486c0);
      }
      if (2 < (int)g_UINT_01548784) {
        fVar1 = aabb_max->x;
        iVar7 = 0;
        if (0 < (int)g_UINT_01548784) {
          pCVar8 = g_CVector3f_ARRAY_01548788;
          do {
            uVar2 = g_UINT_01548848;
            uVar4 = iVar7 + 1;
            if (uVar4 == g_UINT_01548784) {
              uVar4 = uVar4 ^ g_UINT_01548784;
            }
            pCVar11 = g_CVector3f_ARRAY_01548788 + uVar4;
            bVar3 = fVar1 < pCVar8->x;
            if (fVar1 < pCVar11->x) {
              bVar3 = bVar3 | 2;
            }
            switch(bVar3) {
            case 0:
              if (g_CVector3f_ARRAY_0154884c + g_UINT_01548848 != pCVar8) {
                g_CVector3f_ARRAY_0154884c[g_UINT_01548848].x = pCVar8->x;
                g_CVector3f_ARRAY_0154884c[uVar2].y = pCVar8->y;
                g_CVector3f_ARRAY_0154884c[uVar2].z = pCVar8->z;
              }
              g_UINT_01548848 = g_UINT_01548848 + 1;
              break;
            case 1:
              core_dcube_cpp_clipEdgeToPlane_FUN_004515b0
                        (pCVar11,pCVar8,g_CVector3f_ARRAY_0154884c + g_UINT_01548848,1.0,0.0,0.0,
                         (double)-fVar1);
              g_UINT_01548848 = g_UINT_01548848 + 1;
              break;
            case 2:
              if (g_CVector3f_ARRAY_0154884c + g_UINT_01548848 != pCVar8) {
                g_CVector3f_ARRAY_0154884c[g_UINT_01548848].x = pCVar8->x;
                g_CVector3f_ARRAY_0154884c[uVar2].y = pCVar8->y;
                g_CVector3f_ARRAY_0154884c[uVar2].z = pCVar8->z;
              }
              g_UINT_01548848 = g_UINT_01548848 + 1;
              core_dcube_cpp_clipEdgeToPlane_FUN_004515b0
                        (pCVar8,pCVar11,g_CVector3f_ARRAY_0154884c + g_UINT_01548848,1.0,0.0,0.0,
                         (double)-fVar1);
              g_UINT_01548848 = g_UINT_01548848 + 1;
            }
            iVar7 = iVar7 + 1;
            pCVar8 = pCVar8 + 1;
          } while (iVar7 < (int)g_UINT_01548784);
        }
        if (2 < (int)g_UINT_01548848) {
          fVar1 = aabb_min->x;
          iVar7 = 0;
          if (0 < (int)g_UINT_01548848) {
            pCVar8 = g_CVector3f_ARRAY_0154884c;
            do {
              iVar5 = g_INT_0154890c;
              uVar4 = iVar7 + 1;
              if (uVar4 == g_UINT_01548848) {
                uVar4 = uVar4 ^ g_UINT_01548848;
              }
              pCVar11 = g_CVector3f_ARRAY_0154884c + uVar4;
              bVar3 = pCVar8->x < fVar1;
              if (pCVar11->x < fVar1) {
                bVar3 = bVar3 | 2;
              }
              switch(bVar3) {
              case 0:
                if (g_CVector3f_ARRAY_01548910 + g_INT_0154890c != pCVar8) {
                  g_CVector3f_ARRAY_01548910[g_INT_0154890c].x = pCVar8->x;
                  g_CVector3f_ARRAY_01548910[iVar5].y = pCVar8->y;
                  g_CVector3f_ARRAY_01548910[iVar5].z = pCVar8->z;
                }
                g_INT_0154890c = g_INT_0154890c + 1;
                break;
              case 1:
                core_dcube_cpp_clipEdgeToPlane_FUN_004515b0
                          (pCVar11,pCVar8,g_CVector3f_ARRAY_01548910 + g_INT_0154890c,-1.0,0.0,0.0,
                           (double)fVar1);
                g_INT_0154890c = g_INT_0154890c + 1;
                break;
              case 2:
                if (g_CVector3f_ARRAY_01548910 + g_INT_0154890c != pCVar8) {
                  g_CVector3f_ARRAY_01548910[g_INT_0154890c].x = pCVar8->x;
                  g_CVector3f_ARRAY_01548910[iVar5].y = pCVar8->y;
                  g_CVector3f_ARRAY_01548910[iVar5].z = pCVar8->z;
                }
                g_INT_0154890c = g_INT_0154890c + 1;
                core_dcube_cpp_clipEdgeToPlane_FUN_004515b0
                          (pCVar8,pCVar11,g_CVector3f_ARRAY_01548910 + g_INT_0154890c,-1.0,0.0,0.0,
                           (double)fVar1);
                g_INT_0154890c = g_INT_0154890c + 1;
              }
              iVar7 = iVar7 + 1;
              pCVar8 = pCVar8 + 1;
            } while (iVar7 < (int)g_UINT_01548848);
          }
          if (2 < g_INT_0154890c) {
            fVar1 = aabb_min->z;
            iVar7 = 0;
            if (0 < g_INT_0154890c) {
              pCVar8 = g_CVector3f_ARRAY_01548910;
              do {
                uVar2 = g_UINT_015489d0;
                uVar4 = iVar7 + 1;
                if (uVar4 == g_INT_0154890c) {
                  uVar4 = uVar4 ^ g_INT_0154890c;
                }
                bVar3 = pCVar8->z < fVar1;
                if (g_CVector3f_ARRAY_01548910[uVar4].z < fVar1) {
                  bVar3 = bVar3 | 2;
                }
                switch(bVar3) {
                case 0:
                  if (g_CVector3f_ARRAY_015489d4 + g_UINT_015489d0 != pCVar8) {
                    g_CVector3f_ARRAY_015489d4[g_UINT_015489d0].x = pCVar8->x;
                    g_CVector3f_ARRAY_015489d4[uVar2].y = pCVar8->y;
                    g_CVector3f_ARRAY_015489d4[uVar2].z = pCVar8->z;
                  }
                  g_UINT_015489d0 = g_UINT_015489d0 + 1;
                  break;
                case 1:
                  core_dcube_cpp_clipEdgeToPlane_FUN_004515b0
                            (g_CVector3f_ARRAY_01548910 + uVar4,pCVar8,
                             g_CVector3f_ARRAY_015489d4 + g_UINT_015489d0,0.0,0.0,-1.0,(double)fVar1
                            );
                  g_UINT_015489d0 = g_UINT_015489d0 + 1;
                  break;
                case 2:
                  if (g_CVector3f_ARRAY_015489d4 + g_UINT_015489d0 != pCVar8) {
                    g_CVector3f_ARRAY_015489d4[g_UINT_015489d0].x = pCVar8->x;
                    g_CVector3f_ARRAY_015489d4[uVar2].y = pCVar8->y;
                    g_CVector3f_ARRAY_015489d4[uVar2].z = pCVar8->z;
                  }
                  g_UINT_015489d0 = g_UINT_015489d0 + 1;
                  core_dcube_cpp_clipEdgeToPlane_FUN_004515b0
                            (pCVar8,g_CVector3f_ARRAY_01548910 + uVar4,
                             g_CVector3f_ARRAY_015489d4 + g_UINT_015489d0,0.0,0.0,-1.0,(double)fVar1
                            );
                  g_UINT_015489d0 = g_UINT_015489d0 + 1;
                }
                iVar7 = iVar7 + 1;
                pCVar8 = pCVar8 + 1;
              } while (iVar7 < g_INT_0154890c);
            }
            if (2 < (int)g_UINT_015489d0) {
              fVar1 = aabb_max->z;
              iVar7 = 0;
              if (0 < (int)g_UINT_015489d0) {
                pCVar8 = g_CVector3f_ARRAY_015489d4;
                do {
                  uVar2 = g_UINT_01548a94;
                  uVar4 = iVar7 + 1;
                  if (uVar4 == g_UINT_015489d0) {
                    uVar4 = uVar4 ^ g_UINT_015489d0;
                  }
                  bVar3 = fVar1 < pCVar8->z;
                  if (fVar1 < g_CVector3f_ARRAY_015489d4[uVar4].z) {
                    bVar3 = bVar3 | 2;
                  }
                  switch(bVar3) {
                  case 0:
                    iVar5 = g_UINT_01548a94 * 0xc;
                    if ((CVector3f *)(&g_FLOAT_01548a98 + g_UINT_01548a94 * 3) != pCVar8) {
                      ((CVector3f *)(&g_FLOAT_01548a98 + g_UINT_01548a94 * 3))->x = pCVar8->x;
                      *(float *)(&DAT_01548a9c + iVar5) = pCVar8->y;
                      (&g_FLOAT_01548aa0)[uVar2 * 3] = pCVar8->z;
                    }
                    g_UINT_01548a94 = g_UINT_01548a94 + 1;
                    break;
                  case 1:
                    core_dcube_cpp_clipEdgeToPlane_FUN_004515b0
                              (g_CVector3f_ARRAY_015489d4 + uVar4,pCVar8,
                               (CVector3f *)(&g_FLOAT_01548a98 + g_UINT_01548a94 * 3),0.0,0.0,-1.0,
                               (double)fVar1);
                    g_UINT_01548a94 = g_UINT_01548a94 + 1;
                    break;
                  case 2:
                    iVar5 = g_UINT_01548a94 * 0xc;
                    if ((CVector3f *)(&g_FLOAT_01548a98 + g_UINT_01548a94 * 3) != pCVar8) {
                      ((CVector3f *)(&g_FLOAT_01548a98 + g_UINT_01548a94 * 3))->x = pCVar8->x;
                      *(float *)(&DAT_01548a9c + iVar5) = pCVar8->y;
                      (&g_FLOAT_01548aa0)[uVar2 * 3] = pCVar8->z;
                    }
                    g_UINT_01548a94 = g_UINT_01548a94 + 1;
                    core_dcube_cpp_clipEdgeToPlane_FUN_004515b0
                              (pCVar8,g_CVector3f_ARRAY_015489d4 + uVar4,
                               (CVector3f *)(&g_FLOAT_01548a98 + g_UINT_01548a94 * 3),0.0,0.0,-1.0,
                               (double)fVar1);
                    g_UINT_01548a94 = g_UINT_01548a94 + 1;
                  }
                  iVar7 = iVar7 + 1;
                  pCVar8 = pCVar8 + 1;
                } while (iVar7 < (int)g_UINT_015489d0);
              }
              if (2 < (int)g_UINT_01548a94) {
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
