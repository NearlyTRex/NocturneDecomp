// Name: core_dcube.cpp_clipTriangleToAABB_FUN_0044a150
// Address: 0044a150
// Address Range: [[0044a150, 0044ab5b]]
// Convention: __cdecl
// Signature: uint __cdecl core_dcube_cpp_clipTriangleToAABB_FUN_0044a150(CVector3f **triangle_vertices,CVector3f *aabb_min,CVector3f *aabb_max)

#include "nocturne.h"

uint __cdecl core_dcube_cpp_clipTriangleToAABB_FUN_0044a150(CVector3f **triangle_vertices,CVector3f *aabb_min,CVector3f *aabb_max)

{
  float fVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  byte bVar5;
  int iVar6;
  CVector3f *pCVar7;
  byte bVar8;
  CVector3f *pCVar9;
  
  g_INT_014b848c = 3;
  pCVar7 = *triangle_vertices;
  if (pCVar7 != g_CVector3f_ARRAY_014b8490) {
    g_CVector3f_ARRAY_014b8490[0].x = pCVar7->x;
    g_CVector3f_ARRAY_014b8490[0].z = pCVar7->z;
    g_CVector3f_ARRAY_014b8490[0].y = pCVar7->y;
  }
  pCVar7 = triangle_vertices[1];
  if (pCVar7 != g_CVector3f_ARRAY_014b8490 + 1) {
    g_CVector3f_ARRAY_014b8490[1].x = pCVar7->x;
    g_CVector3f_ARRAY_014b8490[1].z = pCVar7->z;
    g_CVector3f_ARRAY_014b8490[1].y = pCVar7->y;
  }
  pCVar7 = triangle_vertices[2];
  if (pCVar7 != g_CVector3f_ARRAY_014b8490 + 2) {
    g_CVector3f_ARRAY_014b8490[2].x = pCVar7->x;
    g_CVector3f_ARRAY_014b8490[2].z = pCVar7->z;
    g_CVector3f_ARRAY_014b8490[2].y = pCVar7->y;
  }
  bVar8 = 0xff;
  iVar6 = 0;
  bVar3 = 0;
  pCVar7 = g_CVector3f_ARRAY_014b8490;
  do {
    bVar5 = aabb_max->x < pCVar7->x;
    if (aabb_max->y < pCVar7->y) {
      bVar5 = bVar5 | 2;
    }
    if (aabb_max->z < pCVar7->z) {
      bVar5 = bVar5 | 4;
    }
    if (pCVar7->x < aabb_min->x) {
      bVar5 = bVar5 | 8;
    }
    if (pCVar7->y < aabb_min->y) {
      bVar5 = bVar5 | 0x10;
    }
    if (pCVar7->z < aabb_min->z) {
      bVar5 = bVar5 | 0x20;
    }
    pCVar7 = pCVar7 + 1;
    iVar6 = iVar6 + 1;
    bVar8 = bVar8 & bVar5;
    bVar3 = bVar3 | bVar5;
  } while (iVar6 < 3);
  if (bVar3 == 0) {
    pCVar7 = *triangle_vertices;
    g_INT_014b8924 = 3;
    if (pCVar7 != g_CVector3f_ARRAY_014b8928) {
      g_CVector3f_ARRAY_014b8928[0].x = pCVar7->x;
      g_CVector3f_ARRAY_014b8928[0].z = pCVar7->z;
      g_CVector3f_ARRAY_014b8928[0].y = pCVar7->y;
    }
    pCVar7 = triangle_vertices[1];
    if (pCVar7 != g_CVector3f_ARRAY_014b8928 + 1) {
      g_CVector3f_ARRAY_014b8928[1].x = pCVar7->x;
      g_CVector3f_ARRAY_014b8928[1].z = pCVar7->z;
      g_CVector3f_ARRAY_014b8928[1].y = pCVar7->y;
    }
    pCVar7 = triangle_vertices[2];
    if (pCVar7 != g_CVector3f_ARRAY_014b8928 + 2) {
      g_CVector3f_ARRAY_014b8928[2].x = pCVar7->x;
      g_CVector3f_ARRAY_014b8928[2].z = pCVar7->z;
      g_CVector3f_ARRAY_014b8928[2].y = pCVar7->y;
    }
    return 1;
  }
  if (bVar8 == 0) {
    fVar1 = aabb_max->y;
    iVar6 = 0;
    pCVar7 = g_CVector3f_ARRAY_014b8490;
    g_INT_014b8550 = 0;
    g_INT_014b8614 = 0;
    g_INT_014b86d8 = 0;
    g_INT_014b879c = 0;
    g_INT_014b8860 = 0;
    g_INT_014b8924 = 0;
    do {
      iVar2 = g_INT_014b8550;
      uVar4 = iVar6 + 1;
      if (uVar4 == g_INT_014b848c) {
        uVar4 = uVar4 ^ g_INT_014b848c;
      }
      bVar3 = fVar1 < pCVar7->y;
      if (fVar1 < g_CVector3f_ARRAY_014b8490[uVar4].y) {
        bVar3 = bVar3 | 2;
      }
      switch(bVar3) {
      case 0:
        if (g_CVector3f_ARRAY_014b8554 + g_INT_014b8550 != pCVar7) {
          g_CVector3f_ARRAY_014b8554[g_INT_014b8550].x = pCVar7->x;
          g_CVector3f_ARRAY_014b8554[iVar2].y = pCVar7->y;
          g_CVector3f_ARRAY_014b8554[iVar2].z = pCVar7->z;
        }
        g_INT_014b8550 = g_INT_014b8550 + 1;
        break;
      case 1:
        core_dcube_cpp_clipEdgeToPlane_FUN_004484c0
                  (g_CVector3f_ARRAY_014b8490 + uVar4,pCVar7,
                   g_CVector3f_ARRAY_014b8554 + g_INT_014b8550,0.0,1.0,0.0,(double)-fVar1);
        g_INT_014b8550 = g_INT_014b8550 + 1;
        break;
      case 2:
        if (g_CVector3f_ARRAY_014b8554 + g_INT_014b8550 != pCVar7) {
          g_CVector3f_ARRAY_014b8554[g_INT_014b8550].x = pCVar7->x;
          g_CVector3f_ARRAY_014b8554[iVar2].y = pCVar7->y;
          g_CVector3f_ARRAY_014b8554[iVar2].z = pCVar7->z;
        }
        g_INT_014b8550 = g_INT_014b8550 + 1;
        core_dcube_cpp_clipEdgeToPlane_FUN_004484c0
                  (pCVar7,g_CVector3f_ARRAY_014b8490 + uVar4,
                   g_CVector3f_ARRAY_014b8554 + g_INT_014b8550,0.0,1.0,0.0,(double)-fVar1);
        g_INT_014b8550 = g_INT_014b8550 + 1;
      }
      iVar6 = iVar6 + 1;
      pCVar7 = pCVar7 + 1;
    } while (iVar6 < g_INT_014b848c);
    if (2 < g_INT_014b8550) {
      fVar1 = aabb_min->y;
      iVar6 = 0;
      if (0 < g_INT_014b8550) {
        pCVar7 = g_CVector3f_ARRAY_014b8554;
        do {
          iVar2 = g_INT_014b8614;
          uVar4 = iVar6 + 1;
          if (uVar4 == g_INT_014b8550) {
            uVar4 = uVar4 ^ g_INT_014b8550;
          }
          bVar3 = pCVar7->y < fVar1;
          if (g_CVector3f_ARRAY_014b8554[uVar4].y < fVar1) {
            bVar3 = bVar3 | 2;
          }
          switch(bVar3) {
          case 0:
            if (g_CVector3f_ARRAY_014b8618 + g_INT_014b8614 != pCVar7) {
              g_CVector3f_ARRAY_014b8618[g_INT_014b8614].x = pCVar7->x;
              g_CVector3f_ARRAY_014b8618[iVar2].y = pCVar7->y;
              g_CVector3f_ARRAY_014b8618[iVar2].z = pCVar7->z;
            }
            g_INT_014b8614 = g_INT_014b8614 + 1;
            break;
          case 1:
            core_dcube_cpp_clipEdgeToPlane_FUN_004484c0
                      (g_CVector3f_ARRAY_014b8554 + uVar4,pCVar7,
                       g_CVector3f_ARRAY_014b8618 + g_INT_014b8614,0.0,-1.0,0.0,(double)fVar1);
            g_INT_014b8614 = g_INT_014b8614 + 1;
            break;
          case 2:
            if (g_CVector3f_ARRAY_014b8618 + g_INT_014b8614 != pCVar7) {
              g_CVector3f_ARRAY_014b8618[g_INT_014b8614].x = pCVar7->x;
              g_CVector3f_ARRAY_014b8618[iVar2].y = pCVar7->y;
              g_CVector3f_ARRAY_014b8618[iVar2].z = pCVar7->z;
            }
            g_INT_014b8614 = g_INT_014b8614 + 1;
            core_dcube_cpp_clipEdgeToPlane_FUN_004484c0
                      (pCVar7,g_CVector3f_ARRAY_014b8554 + uVar4,
                       g_CVector3f_ARRAY_014b8618 + g_INT_014b8614,0.0,-1.0,0.0,(double)fVar1);
            g_INT_014b8614 = g_INT_014b8614 + 1;
          }
          iVar6 = iVar6 + 1;
          pCVar7 = pCVar7 + 1;
        } while (iVar6 < g_INT_014b8550);
      }
      if (2 < g_INT_014b8614) {
        fVar1 = aabb_max->x;
        iVar6 = 0;
        if (0 < g_INT_014b8614) {
          pCVar7 = g_CVector3f_ARRAY_014b8618;
          do {
            iVar2 = g_INT_014b86d8;
            uVar4 = iVar6 + 1;
            if (uVar4 == g_INT_014b8614) {
              uVar4 = uVar4 ^ g_INT_014b8614;
            }
            pCVar9 = g_CVector3f_ARRAY_014b8618 + uVar4;
            bVar3 = fVar1 < pCVar7->x;
            if (fVar1 < pCVar9->x) {
              bVar3 = bVar3 | 2;
            }
            switch(bVar3) {
            case 0:
              if (g_CVector3f_ARRAY_014b86dc + g_INT_014b86d8 != pCVar7) {
                g_CVector3f_ARRAY_014b86dc[g_INT_014b86d8].x = pCVar7->x;
                g_CVector3f_ARRAY_014b86dc[iVar2].y = pCVar7->y;
                g_CVector3f_ARRAY_014b86dc[iVar2].z = pCVar7->z;
              }
              g_INT_014b86d8 = g_INT_014b86d8 + 1;
              break;
            case 1:
              core_dcube_cpp_clipEdgeToPlane_FUN_004484c0
                        (pCVar9,pCVar7,g_CVector3f_ARRAY_014b86dc + g_INT_014b86d8,1.0,0.0,0.0,
                         (double)-fVar1);
              g_INT_014b86d8 = g_INT_014b86d8 + 1;
              break;
            case 2:
              if (g_CVector3f_ARRAY_014b86dc + g_INT_014b86d8 != pCVar7) {
                g_CVector3f_ARRAY_014b86dc[g_INT_014b86d8].x = pCVar7->x;
                g_CVector3f_ARRAY_014b86dc[iVar2].y = pCVar7->y;
                g_CVector3f_ARRAY_014b86dc[iVar2].z = pCVar7->z;
              }
              g_INT_014b86d8 = g_INT_014b86d8 + 1;
              core_dcube_cpp_clipEdgeToPlane_FUN_004484c0
                        (pCVar7,pCVar9,g_CVector3f_ARRAY_014b86dc + g_INT_014b86d8,1.0,0.0,0.0,
                         (double)-fVar1);
              g_INT_014b86d8 = g_INT_014b86d8 + 1;
            }
            iVar6 = iVar6 + 1;
            pCVar7 = pCVar7 + 1;
          } while (iVar6 < g_INT_014b8614);
        }
        if (2 < g_INT_014b86d8) {
          fVar1 = aabb_min->x;
          iVar6 = 0;
          if (0 < g_INT_014b86d8) {
            pCVar7 = g_CVector3f_ARRAY_014b86dc;
            do {
              iVar2 = g_INT_014b879c;
              uVar4 = iVar6 + 1;
              if (uVar4 == g_INT_014b86d8) {
                uVar4 = uVar4 ^ g_INT_014b86d8;
              }
              pCVar9 = g_CVector3f_ARRAY_014b86dc + uVar4;
              bVar3 = pCVar7->x < fVar1;
              if (pCVar9->x < fVar1) {
                bVar3 = bVar3 | 2;
              }
              switch(bVar3) {
              case 0:
                if (g_CVector3f_ARRAY_014b87a0 + g_INT_014b879c != pCVar7) {
                  g_CVector3f_ARRAY_014b87a0[g_INT_014b879c].x = pCVar7->x;
                  g_CVector3f_ARRAY_014b87a0[iVar2].y = pCVar7->y;
                  g_CVector3f_ARRAY_014b87a0[iVar2].z = pCVar7->z;
                }
                g_INT_014b879c = g_INT_014b879c + 1;
                break;
              case 1:
                core_dcube_cpp_clipEdgeToPlane_FUN_004484c0
                          (pCVar9,pCVar7,g_CVector3f_ARRAY_014b87a0 + g_INT_014b879c,-1.0,0.0,0.0,
                           (double)fVar1);
                g_INT_014b879c = g_INT_014b879c + 1;
                break;
              case 2:
                if (g_CVector3f_ARRAY_014b87a0 + g_INT_014b879c != pCVar7) {
                  g_CVector3f_ARRAY_014b87a0[g_INT_014b879c].x = pCVar7->x;
                  g_CVector3f_ARRAY_014b87a0[iVar2].y = pCVar7->y;
                  g_CVector3f_ARRAY_014b87a0[iVar2].z = pCVar7->z;
                }
                g_INT_014b879c = g_INT_014b879c + 1;
                core_dcube_cpp_clipEdgeToPlane_FUN_004484c0
                          (pCVar7,pCVar9,g_CVector3f_ARRAY_014b87a0 + g_INT_014b879c,-1.0,0.0,0.0,
                           (double)fVar1);
                g_INT_014b879c = g_INT_014b879c + 1;
              }
              iVar6 = iVar6 + 1;
              pCVar7 = pCVar7 + 1;
            } while (iVar6 < g_INT_014b86d8);
          }
          if (2 < g_INT_014b879c) {
            fVar1 = aabb_min->z;
            iVar6 = 0;
            if (0 < g_INT_014b879c) {
              pCVar7 = g_CVector3f_ARRAY_014b87a0;
              do {
                iVar2 = g_INT_014b8860;
                uVar4 = iVar6 + 1;
                if (uVar4 == g_INT_014b879c) {
                  uVar4 = uVar4 ^ g_INT_014b879c;
                }
                bVar3 = pCVar7->z < fVar1;
                if (g_CVector3f_ARRAY_014b87a0[uVar4].z < fVar1) {
                  bVar3 = bVar3 | 2;
                }
                switch(bVar3) {
                case 0:
                  if (g_CVector3f_ARRAY_014b8864 + g_INT_014b8860 != pCVar7) {
                    g_CVector3f_ARRAY_014b8864[g_INT_014b8860].x = pCVar7->x;
                    g_CVector3f_ARRAY_014b8864[iVar2].y = pCVar7->y;
                    g_CVector3f_ARRAY_014b8864[iVar2].z = pCVar7->z;
                  }
                  g_INT_014b8860 = g_INT_014b8860 + 1;
                  break;
                case 1:
                  core_dcube_cpp_clipEdgeToPlane_FUN_004484c0
                            (g_CVector3f_ARRAY_014b87a0 + uVar4,pCVar7,
                             g_CVector3f_ARRAY_014b8864 + g_INT_014b8860,0.0,0.0,-1.0,(double)fVar1)
                  ;
                  g_INT_014b8860 = g_INT_014b8860 + 1;
                  break;
                case 2:
                  if (g_CVector3f_ARRAY_014b8864 + g_INT_014b8860 != pCVar7) {
                    g_CVector3f_ARRAY_014b8864[g_INT_014b8860].x = pCVar7->x;
                    g_CVector3f_ARRAY_014b8864[iVar2].y = pCVar7->y;
                    g_CVector3f_ARRAY_014b8864[iVar2].z = pCVar7->z;
                  }
                  g_INT_014b8860 = g_INT_014b8860 + 1;
                  core_dcube_cpp_clipEdgeToPlane_FUN_004484c0
                            (pCVar7,g_CVector3f_ARRAY_014b87a0 + uVar4,
                             g_CVector3f_ARRAY_014b8864 + g_INT_014b8860,0.0,0.0,-1.0,(double)fVar1)
                  ;
                  g_INT_014b8860 = g_INT_014b8860 + 1;
                }
                iVar6 = iVar6 + 1;
                pCVar7 = pCVar7 + 1;
              } while (iVar6 < g_INT_014b879c);
            }
            if (2 < g_INT_014b8860) {
              fVar1 = aabb_max->z;
              iVar6 = 0;
              if (0 < g_INT_014b8860) {
                pCVar7 = g_CVector3f_ARRAY_014b8864;
                do {
                  iVar2 = g_INT_014b8924;
                  uVar4 = iVar6 + 1;
                  if (uVar4 == g_INT_014b8860) {
                    uVar4 = uVar4 ^ g_INT_014b8860;
                  }
                  bVar3 = fVar1 < pCVar7->z;
                  if (fVar1 < g_CVector3f_ARRAY_014b8864[uVar4].z) {
                    bVar3 = bVar3 | 2;
                  }
                  switch(bVar3) {
                  case 0:
                    if (g_CVector3f_ARRAY_014b8928 + g_INT_014b8924 != pCVar7) {
                      g_CVector3f_ARRAY_014b8928[g_INT_014b8924].x = pCVar7->x;
                      g_CVector3f_ARRAY_014b8928[iVar2].y = pCVar7->y;
                      g_CVector3f_ARRAY_014b8928[iVar2].z = pCVar7->z;
                    }
                    g_INT_014b8924 = g_INT_014b8924 + 1;
                    break;
                  case 1:
                    core_dcube_cpp_clipEdgeToPlane_FUN_004484c0
                              (g_CVector3f_ARRAY_014b8864 + uVar4,pCVar7,
                               g_CVector3f_ARRAY_014b8928 + g_INT_014b8924,0.0,0.0,-1.0,
                               (double)fVar1);
                    g_INT_014b8924 = g_INT_014b8924 + 1;
                    break;
                  case 2:
                    if (g_CVector3f_ARRAY_014b8928 + g_INT_014b8924 != pCVar7) {
                      g_CVector3f_ARRAY_014b8928[g_INT_014b8924].x = pCVar7->x;
                      g_CVector3f_ARRAY_014b8928[iVar2].y = pCVar7->y;
                      g_CVector3f_ARRAY_014b8928[iVar2].z = pCVar7->z;
                    }
                    g_INT_014b8924 = g_INT_014b8924 + 1;
                    core_dcube_cpp_clipEdgeToPlane_FUN_004484c0
                              (pCVar7,g_CVector3f_ARRAY_014b8864 + uVar4,
                               g_CVector3f_ARRAY_014b8928 + g_INT_014b8924,0.0,0.0,-1.0,
                               (double)fVar1);
                    g_INT_014b8924 = g_INT_014b8924 + 1;
                  }
                  iVar6 = iVar6 + 1;
                  pCVar7 = pCVar7 + 1;
                } while (iVar6 < g_INT_014b8860);
              }
              if (2 < g_INT_014b8924) {
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
