// Name: core_dcube.cpp_clipTriangleToAABB_FUN_00445a30
// Address: 00445a30
// Address Range: [[00445a30, 0044643b]]
// Convention: __cdecl
// Signature: uint __cdecl core_dcube_cpp_clipTriangleToAABB_FUN_00445a30(CVector3f **triangle_vertices,CVector3f *aabb_min,CVector3f *aabb_max)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl core_dcube_cpp_clipTriangleToAABB_FUN_00445a30(CVector3f **triangle_vertices,CVector3f *aabb_min,CVector3f *aabb_max)

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
  
  g_INT_0151084c = 3;
  pCVar8 = *triangle_vertices;
  if (pCVar8 != (CVector3f *)&g_FLOAT_01510850) {
    g_FLOAT_01510850 = pCVar8->x;
    g_FLOAT_01510858 = pCVar8->z;
    _DAT_01510854 = pCVar8->y;
  }
  pCVar8 = triangle_vertices[1];
  if (pCVar8 != (CVector3f *)&g_FLOAT_0151085c) {
    g_FLOAT_0151085c = pCVar8->x;
    g_FLOAT_01510864 = pCVar8->z;
    _DAT_01510860 = pCVar8->y;
  }
  pCVar8 = triangle_vertices[2];
  if (pCVar8 != (CVector3f *)&g_FLOAT_01510868) {
    g_FLOAT_01510868 = pCVar8->x;
    g_FLOAT_01510870 = pCVar8->z;
    _DAT_0151086c = pCVar8->y;
  }
  bVar10 = 0xff;
  iVar7 = 0;
  bVar3 = 0;
  pfVar9 = &g_FLOAT_01510850;
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
    g_UINT_01510ce4 = 3;
    if (pCVar8 != (CVector3f *)&g_FLOAT_01510ce8) {
      g_FLOAT_01510ce8 = pCVar8->x;
      g_FLOAT_01510cf0 = pCVar8->z;
      _DAT_01510cec = pCVar8->y;
    }
    pCVar8 = triangle_vertices[1];
    if (pCVar8 != (CVector3f *)&g_FLOAT_01510cf4) {
      g_FLOAT_01510cf4 = pCVar8->x;
      g_FLOAT_01510cfc = pCVar8->z;
      _DAT_01510cf8 = pCVar8->y;
    }
    pCVar8 = triangle_vertices[2];
    if (pCVar8 != (CVector3f *)&g_FLOAT_01510d00) {
      g_FLOAT_01510d00 = pCVar8->x;
      g_FLOAT_01510d08 = pCVar8->z;
      _DAT_01510d04 = pCVar8->y;
    }
    return 1;
  }
  if (bVar10 == 0) {
    fVar1 = aabb_max->y;
    iVar7 = 0;
    pfVar9 = &g_FLOAT_01510850;
    g_INT_01510910 = 0;
    g_UINT_015109d4 = 0;
    g_UINT_01510a98 = 0;
    g_INT_01510b5c = 0;
    g_UINT_01510c20 = 0;
    g_UINT_01510ce4 = 0;
    do {
      iVar5 = g_INT_01510910;
      uVar4 = iVar7 + 1;
      if (uVar4 == g_INT_0151084c) {
        uVar4 = uVar4 ^ g_INT_0151084c;
      }
      bVar3 = fVar1 < ((CVector3f *)pfVar9)->y;
      if (fVar1 < *(float *)(&DAT_01510854 + uVar4 * 0xc)) {
        bVar3 = bVar3 | 2;
      }
      switch(bVar3) {
      case 0:
        if (g_CVector3f_ARRAY_01510914 + g_INT_01510910 != (CVector3f *)pfVar9) {
          g_CVector3f_ARRAY_01510914[g_INT_01510910].x = ((CVector3f *)pfVar9)->x;
          g_CVector3f_ARRAY_01510914[iVar5].y = ((CVector3f *)pfVar9)->y;
          g_CVector3f_ARRAY_01510914[iVar5].z = ((CVector3f *)pfVar9)->z;
        }
        g_INT_01510910 = g_INT_01510910 + 1;
        break;
      case 1:
        core_dcube_cpp_clipEdgeToPlane_FUN_00443db0
                  ((CVector3f *)(&g_FLOAT_01510850 + uVar4 * 3),(CVector3f *)pfVar9,
                   g_CVector3f_ARRAY_01510914 + g_INT_01510910,0.0,1.0,0.0,(double)-fVar1);
        g_INT_01510910 = g_INT_01510910 + 1;
        break;
      case 2:
        if (g_CVector3f_ARRAY_01510914 + g_INT_01510910 != (CVector3f *)pfVar9) {
          g_CVector3f_ARRAY_01510914[g_INT_01510910].x = ((CVector3f *)pfVar9)->x;
          g_CVector3f_ARRAY_01510914[iVar5].y = ((CVector3f *)pfVar9)->y;
          g_CVector3f_ARRAY_01510914[iVar5].z = ((CVector3f *)pfVar9)->z;
        }
        g_INT_01510910 = g_INT_01510910 + 1;
        core_dcube_cpp_clipEdgeToPlane_FUN_00443db0
                  ((CVector3f *)pfVar9,(CVector3f *)(&g_FLOAT_01510850 + uVar4 * 3),
                   g_CVector3f_ARRAY_01510914 + g_INT_01510910,0.0,1.0,0.0,(double)-fVar1);
        g_INT_01510910 = g_INT_01510910 + 1;
      }
      iVar7 = iVar7 + 1;
      pfVar9 = (float *)((int)pfVar9 + 0xc);
    } while (iVar7 < g_INT_0151084c);
    if (2 < g_INT_01510910) {
      fVar1 = aabb_min->y;
      iVar7 = 0;
      if (0 < g_INT_01510910) {
        pCVar8 = g_CVector3f_ARRAY_01510914;
        do {
          uVar2 = g_UINT_015109d4;
          uVar4 = iVar7 + 1;
          if (uVar4 == g_INT_01510910) {
            uVar4 = uVar4 ^ g_INT_01510910;
          }
          bVar3 = pCVar8->y < fVar1;
          if (g_CVector3f_ARRAY_01510914[uVar4].y < fVar1) {
            bVar3 = bVar3 | 2;
          }
          switch(bVar3) {
          case 0:
            if (g_CVector3f_ARRAY_015109d8 + g_UINT_015109d4 != pCVar8) {
              g_CVector3f_ARRAY_015109d8[g_UINT_015109d4].x = pCVar8->x;
              g_CVector3f_ARRAY_015109d8[uVar2].y = pCVar8->y;
              g_CVector3f_ARRAY_015109d8[uVar2].z = pCVar8->z;
            }
            g_UINT_015109d4 = g_UINT_015109d4 + 1;
            break;
          case 1:
            core_dcube_cpp_clipEdgeToPlane_FUN_00443db0
                      (g_CVector3f_ARRAY_01510914 + uVar4,pCVar8,
                       g_CVector3f_ARRAY_015109d8 + g_UINT_015109d4,0.0,-1.0,0.0,(double)fVar1);
            g_UINT_015109d4 = g_UINT_015109d4 + 1;
            break;
          case 2:
            if (g_CVector3f_ARRAY_015109d8 + g_UINT_015109d4 != pCVar8) {
              g_CVector3f_ARRAY_015109d8[g_UINT_015109d4].x = pCVar8->x;
              g_CVector3f_ARRAY_015109d8[uVar2].y = pCVar8->y;
              g_CVector3f_ARRAY_015109d8[uVar2].z = pCVar8->z;
            }
            g_UINT_015109d4 = g_UINT_015109d4 + 1;
            core_dcube_cpp_clipEdgeToPlane_FUN_00443db0
                      (pCVar8,g_CVector3f_ARRAY_01510914 + uVar4,
                       g_CVector3f_ARRAY_015109d8 + g_UINT_015109d4,0.0,-1.0,0.0,(double)fVar1);
            g_UINT_015109d4 = g_UINT_015109d4 + 1;
          }
          iVar7 = iVar7 + 1;
          pCVar8 = pCVar8 + 1;
        } while (iVar7 < g_INT_01510910);
      }
      if (2 < (int)g_UINT_015109d4) {
        fVar1 = aabb_max->x;
        iVar7 = 0;
        if (0 < (int)g_UINT_015109d4) {
          pCVar8 = g_CVector3f_ARRAY_015109d8;
          do {
            uVar2 = g_UINT_01510a98;
            uVar4 = iVar7 + 1;
            if (uVar4 == g_UINT_015109d4) {
              uVar4 = uVar4 ^ g_UINT_015109d4;
            }
            pCVar11 = g_CVector3f_ARRAY_015109d8 + uVar4;
            bVar3 = fVar1 < pCVar8->x;
            if (fVar1 < pCVar11->x) {
              bVar3 = bVar3 | 2;
            }
            switch(bVar3) {
            case 0:
              if (g_CVector3f_ARRAY_01510a9c + g_UINT_01510a98 != pCVar8) {
                g_CVector3f_ARRAY_01510a9c[g_UINT_01510a98].x = pCVar8->x;
                g_CVector3f_ARRAY_01510a9c[uVar2].y = pCVar8->y;
                g_CVector3f_ARRAY_01510a9c[uVar2].z = pCVar8->z;
              }
              g_UINT_01510a98 = g_UINT_01510a98 + 1;
              break;
            case 1:
              core_dcube_cpp_clipEdgeToPlane_FUN_00443db0
                        (pCVar11,pCVar8,g_CVector3f_ARRAY_01510a9c + g_UINT_01510a98,1.0,0.0,0.0,
                         (double)-fVar1);
              g_UINT_01510a98 = g_UINT_01510a98 + 1;
              break;
            case 2:
              if (g_CVector3f_ARRAY_01510a9c + g_UINT_01510a98 != pCVar8) {
                g_CVector3f_ARRAY_01510a9c[g_UINT_01510a98].x = pCVar8->x;
                g_CVector3f_ARRAY_01510a9c[uVar2].y = pCVar8->y;
                g_CVector3f_ARRAY_01510a9c[uVar2].z = pCVar8->z;
              }
              g_UINT_01510a98 = g_UINT_01510a98 + 1;
              core_dcube_cpp_clipEdgeToPlane_FUN_00443db0
                        (pCVar8,pCVar11,g_CVector3f_ARRAY_01510a9c + g_UINT_01510a98,1.0,0.0,0.0,
                         (double)-fVar1);
              g_UINT_01510a98 = g_UINT_01510a98 + 1;
            }
            iVar7 = iVar7 + 1;
            pCVar8 = pCVar8 + 1;
          } while (iVar7 < (int)g_UINT_015109d4);
        }
        if (2 < (int)g_UINT_01510a98) {
          fVar1 = aabb_min->x;
          iVar7 = 0;
          if (0 < (int)g_UINT_01510a98) {
            pCVar8 = g_CVector3f_ARRAY_01510a9c;
            do {
              iVar5 = g_INT_01510b5c;
              uVar4 = iVar7 + 1;
              if (uVar4 == g_UINT_01510a98) {
                uVar4 = uVar4 ^ g_UINT_01510a98;
              }
              pCVar11 = g_CVector3f_ARRAY_01510a9c + uVar4;
              bVar3 = pCVar8->x < fVar1;
              if (pCVar11->x < fVar1) {
                bVar3 = bVar3 | 2;
              }
              switch(bVar3) {
              case 0:
                if (g_CVector3f_ARRAY_01510b60 + g_INT_01510b5c != pCVar8) {
                  g_CVector3f_ARRAY_01510b60[g_INT_01510b5c].x = pCVar8->x;
                  g_CVector3f_ARRAY_01510b60[iVar5].y = pCVar8->y;
                  g_CVector3f_ARRAY_01510b60[iVar5].z = pCVar8->z;
                }
                g_INT_01510b5c = g_INT_01510b5c + 1;
                break;
              case 1:
                core_dcube_cpp_clipEdgeToPlane_FUN_00443db0
                          (pCVar11,pCVar8,g_CVector3f_ARRAY_01510b60 + g_INT_01510b5c,-1.0,0.0,0.0,
                           (double)fVar1);
                g_INT_01510b5c = g_INT_01510b5c + 1;
                break;
              case 2:
                if (g_CVector3f_ARRAY_01510b60 + g_INT_01510b5c != pCVar8) {
                  g_CVector3f_ARRAY_01510b60[g_INT_01510b5c].x = pCVar8->x;
                  g_CVector3f_ARRAY_01510b60[iVar5].y = pCVar8->y;
                  g_CVector3f_ARRAY_01510b60[iVar5].z = pCVar8->z;
                }
                g_INT_01510b5c = g_INT_01510b5c + 1;
                core_dcube_cpp_clipEdgeToPlane_FUN_00443db0
                          (pCVar8,pCVar11,g_CVector3f_ARRAY_01510b60 + g_INT_01510b5c,-1.0,0.0,0.0,
                           (double)fVar1);
                g_INT_01510b5c = g_INT_01510b5c + 1;
              }
              iVar7 = iVar7 + 1;
              pCVar8 = pCVar8 + 1;
            } while (iVar7 < (int)g_UINT_01510a98);
          }
          if (2 < g_INT_01510b5c) {
            fVar1 = aabb_min->z;
            iVar7 = 0;
            if (0 < g_INT_01510b5c) {
              pCVar8 = g_CVector3f_ARRAY_01510b60;
              do {
                uVar2 = g_UINT_01510c20;
                uVar4 = iVar7 + 1;
                if (uVar4 == g_INT_01510b5c) {
                  uVar4 = uVar4 ^ g_INT_01510b5c;
                }
                bVar3 = pCVar8->z < fVar1;
                if (g_CVector3f_ARRAY_01510b60[uVar4].z < fVar1) {
                  bVar3 = bVar3 | 2;
                }
                switch(bVar3) {
                case 0:
                  if (g_CVector3f_ARRAY_01510c24 + g_UINT_01510c20 != pCVar8) {
                    g_CVector3f_ARRAY_01510c24[g_UINT_01510c20].x = pCVar8->x;
                    g_CVector3f_ARRAY_01510c24[uVar2].y = pCVar8->y;
                    g_CVector3f_ARRAY_01510c24[uVar2].z = pCVar8->z;
                  }
                  g_UINT_01510c20 = g_UINT_01510c20 + 1;
                  break;
                case 1:
                  core_dcube_cpp_clipEdgeToPlane_FUN_00443db0
                            (g_CVector3f_ARRAY_01510b60 + uVar4,pCVar8,
                             g_CVector3f_ARRAY_01510c24 + g_UINT_01510c20,0.0,0.0,-1.0,(double)fVar1
                            );
                  g_UINT_01510c20 = g_UINT_01510c20 + 1;
                  break;
                case 2:
                  if (g_CVector3f_ARRAY_01510c24 + g_UINT_01510c20 != pCVar8) {
                    g_CVector3f_ARRAY_01510c24[g_UINT_01510c20].x = pCVar8->x;
                    g_CVector3f_ARRAY_01510c24[uVar2].y = pCVar8->y;
                    g_CVector3f_ARRAY_01510c24[uVar2].z = pCVar8->z;
                  }
                  g_UINT_01510c20 = g_UINT_01510c20 + 1;
                  core_dcube_cpp_clipEdgeToPlane_FUN_00443db0
                            (pCVar8,g_CVector3f_ARRAY_01510b60 + uVar4,
                             g_CVector3f_ARRAY_01510c24 + g_UINT_01510c20,0.0,0.0,-1.0,(double)fVar1
                            );
                  g_UINT_01510c20 = g_UINT_01510c20 + 1;
                }
                iVar7 = iVar7 + 1;
                pCVar8 = pCVar8 + 1;
              } while (iVar7 < g_INT_01510b5c);
            }
            if (2 < (int)g_UINT_01510c20) {
              fVar1 = aabb_max->z;
              iVar7 = 0;
              if (0 < (int)g_UINT_01510c20) {
                pCVar8 = g_CVector3f_ARRAY_01510c24;
                do {
                  uVar2 = g_UINT_01510ce4;
                  uVar4 = iVar7 + 1;
                  if (uVar4 == g_UINT_01510c20) {
                    uVar4 = uVar4 ^ g_UINT_01510c20;
                  }
                  bVar3 = fVar1 < pCVar8->z;
                  if (fVar1 < g_CVector3f_ARRAY_01510c24[uVar4].z) {
                    bVar3 = bVar3 | 2;
                  }
                  switch(bVar3) {
                  case 0:
                    iVar5 = g_UINT_01510ce4 * 0xc;
                    if ((CVector3f *)(&g_FLOAT_01510ce8 + g_UINT_01510ce4 * 3) != pCVar8) {
                      ((CVector3f *)(&g_FLOAT_01510ce8 + g_UINT_01510ce4 * 3))->x = pCVar8->x;
                      *(float *)(&DAT_01510cec + iVar5) = pCVar8->y;
                      (&g_FLOAT_01510cf0)[uVar2 * 3] = pCVar8->z;
                    }
                    g_UINT_01510ce4 = g_UINT_01510ce4 + 1;
                    break;
                  case 1:
                    core_dcube_cpp_clipEdgeToPlane_FUN_00443db0
                              (g_CVector3f_ARRAY_01510c24 + uVar4,pCVar8,
                               (CVector3f *)(&g_FLOAT_01510ce8 + g_UINT_01510ce4 * 3),0.0,0.0,-1.0,
                               (double)fVar1);
                    g_UINT_01510ce4 = g_UINT_01510ce4 + 1;
                    break;
                  case 2:
                    iVar5 = g_UINT_01510ce4 * 0xc;
                    if ((CVector3f *)(&g_FLOAT_01510ce8 + g_UINT_01510ce4 * 3) != pCVar8) {
                      ((CVector3f *)(&g_FLOAT_01510ce8 + g_UINT_01510ce4 * 3))->x = pCVar8->x;
                      *(float *)(&DAT_01510cec + iVar5) = pCVar8->y;
                      (&g_FLOAT_01510cf0)[uVar2 * 3] = pCVar8->z;
                    }
                    g_UINT_01510ce4 = g_UINT_01510ce4 + 1;
                    core_dcube_cpp_clipEdgeToPlane_FUN_00443db0
                              (pCVar8,g_CVector3f_ARRAY_01510c24 + uVar4,
                               (CVector3f *)(&g_FLOAT_01510ce8 + g_UINT_01510ce4 * 3),0.0,0.0,-1.0,
                               (double)fVar1);
                    g_UINT_01510ce4 = g_UINT_01510ce4 + 1;
                  }
                  iVar7 = iVar7 + 1;
                  pCVar8 = pCVar8 + 1;
                } while (iVar7 < (int)g_UINT_01510c20);
              }
              if (2 < (int)g_UINT_01510ce4) {
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
