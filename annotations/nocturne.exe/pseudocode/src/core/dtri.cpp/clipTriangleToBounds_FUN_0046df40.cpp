// Name: core_dtri.cpp_clipTriangleToBounds_FUN_0046df40
// Address: 0046df40
// Address Range: [[0046df40, 0046e94d]]
// Convention: __cdecl
// Signature: int __cdecl core_dtri_cpp_clipTriangleToBounds_FUN_0046df40(CVector3f *triangle_vertices,CVector3f *bounds_min,CVector3f *bounds_max)

#include "nocturne.h"

int __cdecl core_dtri_cpp_clipTriangleToBounds_FUN_0046df40(CVector3f *triangle_vertices,CVector3f *bounds_min,CVector3f *bounds_max)

{
  float fVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  byte bVar5;
  CVector3f *pCVar6;
  int iVar7;
  byte bVar8;
  CVector3f *pCVar9;
  
  g_INT_01bc996c = 3;
  if (triangle_vertices != g_CVector3f_ARRAY_01bc9970) {
    g_CVector3f_ARRAY_01bc9970[0].x = triangle_vertices->x;
    g_CVector3f_ARRAY_01bc9970[0].z = triangle_vertices->z;
    g_CVector3f_ARRAY_01bc9970[0].y = triangle_vertices->y;
  }
  if (triangle_vertices + 1 != g_CVector3f_ARRAY_01bc9970 + 1) {
    g_CVector3f_ARRAY_01bc9970[1].x = triangle_vertices[1].x;
    g_CVector3f_ARRAY_01bc9970[1].z = triangle_vertices[1].z;
    g_CVector3f_ARRAY_01bc9970[1].y = triangle_vertices[1].y;
  }
  if (triangle_vertices + 2 != g_CVector3f_ARRAY_01bc9970 + 2) {
    g_CVector3f_ARRAY_01bc9970[2].x = triangle_vertices[2].x;
    g_CVector3f_ARRAY_01bc9970[2].z = triangle_vertices[2].z;
    g_CVector3f_ARRAY_01bc9970[2].y = triangle_vertices[2].y;
  }
  bVar8 = 0;
  iVar7 = 0;
  bVar3 = 0xff;
  pCVar6 = g_CVector3f_ARRAY_01bc9970;
  do {
    bVar5 = bounds_max->x < pCVar6->x;
    if (bounds_max->y < pCVar6->y) {
      bVar5 = bVar5 | 2;
    }
    if (bounds_max->z < pCVar6->z) {
      bVar5 = bVar5 | 4;
    }
    if (pCVar6->x < bounds_min->x) {
      bVar5 = bVar5 | 8;
    }
    if (pCVar6->y < bounds_min->y) {
      bVar5 = bVar5 | 0x10;
    }
    if (pCVar6->z < bounds_min->z) {
      bVar5 = bVar5 | 0x20;
    }
    pCVar6 = pCVar6 + 1;
    iVar7 = iVar7 + 1;
    bVar3 = bVar3 & bVar5;
    bVar8 = bVar8 | bVar5;
  } while (iVar7 < 3);
  if (bVar8 == 0) {
    g_INT_01bc9e04 = 3;
    if (triangle_vertices != g_CVector3f_ARRAY_01bc9e08) {
      g_CVector3f_ARRAY_01bc9e08[0].x = triangle_vertices->x;
      g_CVector3f_ARRAY_01bc9e08[0].z = triangle_vertices->z;
      g_CVector3f_ARRAY_01bc9e08[0].y = triangle_vertices->y;
    }
    if (triangle_vertices + 1 != g_CVector3f_ARRAY_01bc9e08 + 1) {
      g_CVector3f_ARRAY_01bc9e08[1].x = triangle_vertices[1].x;
      g_CVector3f_ARRAY_01bc9e08[1].z = triangle_vertices[1].z;
      g_CVector3f_ARRAY_01bc9e08[1].y = triangle_vertices[1].y;
    }
    if (triangle_vertices + 2 != g_CVector3f_ARRAY_01bc9e08 + 2) {
      g_CVector3f_ARRAY_01bc9e08[2].x = triangle_vertices[2].x;
      g_CVector3f_ARRAY_01bc9e08[2].z = triangle_vertices[2].z;
      g_CVector3f_ARRAY_01bc9e08[2].y = triangle_vertices[2].y;
    }
    return 1;
  }
  if (bVar3 == 0) {
    fVar1 = bounds_max->y;
    iVar7 = 0;
    pCVar6 = g_CVector3f_ARRAY_01bc9970;
    g_INT_01bc9a30 = 0;
    g_INT_01bc9af4 = 0;
    g_INT_01bc9bb8 = 0;
    g_INT_01bc9c7c = 0;
    g_INT_01bc9d40 = 0;
    g_INT_01bc9e04 = 0;
    do {
      iVar2 = g_INT_01bc9a30;
      uVar4 = iVar7 + 1;
      if (uVar4 == g_INT_01bc996c) {
        uVar4 = uVar4 ^ g_INT_01bc996c;
      }
      bVar3 = fVar1 < pCVar6->y;
      if (fVar1 < g_CVector3f_ARRAY_01bc9970[uVar4].y) {
        bVar3 = bVar3 | 2;
      }
      switch(bVar3) {
      case 0:
        if (g_CVector3f_ARRAY_01bc9a34 + g_INT_01bc9a30 != pCVar6) {
          g_CVector3f_ARRAY_01bc9a34[g_INT_01bc9a30].x = pCVar6->x;
          g_CVector3f_ARRAY_01bc9a34[iVar2].y = pCVar6->y;
          g_CVector3f_ARRAY_01bc9a34[iVar2].z = pCVar6->z;
        }
        g_INT_01bc9a30 = g_INT_01bc9a30 + 1;
        break;
      case 1:
        core_dtri_cpp_clipLineToPlane_FUN_0046d4e0
                  (g_CVector3f_ARRAY_01bc9970 + uVar4,pCVar6,
                   g_CVector3f_ARRAY_01bc9a34 + g_INT_01bc9a30,0.0,1.0,0.0,(double)-fVar1);
        g_INT_01bc9a30 = g_INT_01bc9a30 + 1;
        break;
      case 2:
        if (g_CVector3f_ARRAY_01bc9a34 + g_INT_01bc9a30 != pCVar6) {
          g_CVector3f_ARRAY_01bc9a34[g_INT_01bc9a30].x = pCVar6->x;
          g_CVector3f_ARRAY_01bc9a34[iVar2].y = pCVar6->y;
          g_CVector3f_ARRAY_01bc9a34[iVar2].z = pCVar6->z;
        }
        g_INT_01bc9a30 = g_INT_01bc9a30 + 1;
        core_dtri_cpp_clipLineToPlane_FUN_0046d4e0
                  (pCVar6,g_CVector3f_ARRAY_01bc9970 + uVar4,
                   g_CVector3f_ARRAY_01bc9a34 + g_INT_01bc9a30,0.0,1.0,0.0,(double)-fVar1);
        g_INT_01bc9a30 = g_INT_01bc9a30 + 1;
      }
      iVar7 = iVar7 + 1;
      pCVar6 = pCVar6 + 1;
    } while (iVar7 < g_INT_01bc996c);
    if (2 < g_INT_01bc9a30) {
      fVar1 = bounds_min->y;
      iVar7 = 0;
      if (0 < g_INT_01bc9a30) {
        pCVar6 = g_CVector3f_ARRAY_01bc9a34;
        do {
          iVar2 = g_INT_01bc9af4;
          uVar4 = iVar7 + 1;
          if (uVar4 == g_INT_01bc9a30) {
            uVar4 = uVar4 ^ g_INT_01bc9a30;
          }
          bVar3 = pCVar6->y < fVar1;
          if (g_CVector3f_ARRAY_01bc9a34[uVar4].y < fVar1) {
            bVar3 = bVar3 | 2;
          }
          switch(bVar3) {
          case 0:
            if (g_CVector3f_ARRAY_01bc9af8 + g_INT_01bc9af4 != pCVar6) {
              g_CVector3f_ARRAY_01bc9af8[g_INT_01bc9af4].x = pCVar6->x;
              g_CVector3f_ARRAY_01bc9af8[iVar2].y = pCVar6->y;
              g_CVector3f_ARRAY_01bc9af8[iVar2].z = pCVar6->z;
            }
            g_INT_01bc9af4 = g_INT_01bc9af4 + 1;
            break;
          case 1:
            core_dtri_cpp_clipLineToPlane_FUN_0046d4e0
                      (g_CVector3f_ARRAY_01bc9a34 + uVar4,pCVar6,
                       g_CVector3f_ARRAY_01bc9af8 + g_INT_01bc9af4,0.0,-1.0,0.0,(double)fVar1);
            g_INT_01bc9af4 = g_INT_01bc9af4 + 1;
            break;
          case 2:
            if (g_CVector3f_ARRAY_01bc9af8 + g_INT_01bc9af4 != pCVar6) {
              g_CVector3f_ARRAY_01bc9af8[g_INT_01bc9af4].x = pCVar6->x;
              g_CVector3f_ARRAY_01bc9af8[iVar2].y = pCVar6->y;
              g_CVector3f_ARRAY_01bc9af8[iVar2].z = pCVar6->z;
            }
            g_INT_01bc9af4 = g_INT_01bc9af4 + 1;
            core_dtri_cpp_clipLineToPlane_FUN_0046d4e0
                      (pCVar6,g_CVector3f_ARRAY_01bc9a34 + uVar4,
                       g_CVector3f_ARRAY_01bc9af8 + g_INT_01bc9af4,0.0,-1.0,0.0,(double)fVar1);
            g_INT_01bc9af4 = g_INT_01bc9af4 + 1;
          }
          iVar7 = iVar7 + 1;
          pCVar6 = pCVar6 + 1;
        } while (iVar7 < g_INT_01bc9a30);
      }
      if (2 < g_INT_01bc9af4) {
        fVar1 = bounds_max->x;
        iVar7 = 0;
        if (0 < g_INT_01bc9af4) {
          pCVar6 = g_CVector3f_ARRAY_01bc9af8;
          do {
            iVar2 = g_INT_01bc9bb8;
            uVar4 = iVar7 + 1;
            if (uVar4 == g_INT_01bc9af4) {
              uVar4 = uVar4 ^ g_INT_01bc9af4;
            }
            pCVar9 = g_CVector3f_ARRAY_01bc9af8 + uVar4;
            bVar3 = fVar1 < pCVar6->x;
            if (fVar1 < pCVar9->x) {
              bVar3 = bVar3 | 2;
            }
            switch(bVar3) {
            case 0:
              if (g_CVector3f_ARRAY_01bc9bbc + g_INT_01bc9bb8 != pCVar6) {
                g_CVector3f_ARRAY_01bc9bbc[g_INT_01bc9bb8].x = pCVar6->x;
                g_CVector3f_ARRAY_01bc9bbc[iVar2].y = pCVar6->y;
                g_CVector3f_ARRAY_01bc9bbc[iVar2].z = pCVar6->z;
              }
              g_INT_01bc9bb8 = g_INT_01bc9bb8 + 1;
              break;
            case 1:
              core_dtri_cpp_clipLineToPlane_FUN_0046d4e0
                        (pCVar9,pCVar6,g_CVector3f_ARRAY_01bc9bbc + g_INT_01bc9bb8,1.0,0.0,0.0,
                         (double)-fVar1);
              g_INT_01bc9bb8 = g_INT_01bc9bb8 + 1;
              break;
            case 2:
              if (g_CVector3f_ARRAY_01bc9bbc + g_INT_01bc9bb8 != pCVar6) {
                g_CVector3f_ARRAY_01bc9bbc[g_INT_01bc9bb8].x = pCVar6->x;
                g_CVector3f_ARRAY_01bc9bbc[iVar2].y = pCVar6->y;
                g_CVector3f_ARRAY_01bc9bbc[iVar2].z = pCVar6->z;
              }
              g_INT_01bc9bb8 = g_INT_01bc9bb8 + 1;
              core_dtri_cpp_clipLineToPlane_FUN_0046d4e0
                        (pCVar6,pCVar9,g_CVector3f_ARRAY_01bc9bbc + g_INT_01bc9bb8,1.0,0.0,0.0,
                         (double)-fVar1);
              g_INT_01bc9bb8 = g_INT_01bc9bb8 + 1;
            }
            iVar7 = iVar7 + 1;
            pCVar6 = pCVar6 + 1;
          } while (iVar7 < g_INT_01bc9af4);
        }
        if (2 < g_INT_01bc9bb8) {
          fVar1 = bounds_min->x;
          iVar7 = 0;
          if (0 < g_INT_01bc9bb8) {
            pCVar6 = g_CVector3f_ARRAY_01bc9bbc;
            do {
              iVar2 = g_INT_01bc9c7c;
              uVar4 = iVar7 + 1;
              if (uVar4 == g_INT_01bc9bb8) {
                uVar4 = uVar4 ^ g_INT_01bc9bb8;
              }
              pCVar9 = g_CVector3f_ARRAY_01bc9bbc + uVar4;
              bVar3 = pCVar6->x < fVar1;
              if (pCVar9->x < fVar1) {
                bVar3 = bVar3 | 2;
              }
              switch(bVar3) {
              case 0:
                if (g_CVector3f_ARRAY_01bc9c80 + g_INT_01bc9c7c != pCVar6) {
                  g_CVector3f_ARRAY_01bc9c80[g_INT_01bc9c7c].x = pCVar6->x;
                  g_CVector3f_ARRAY_01bc9c80[iVar2].y = pCVar6->y;
                  g_CVector3f_ARRAY_01bc9c80[iVar2].z = pCVar6->z;
                }
                g_INT_01bc9c7c = g_INT_01bc9c7c + 1;
                break;
              case 1:
                core_dtri_cpp_clipLineToPlane_FUN_0046d4e0
                          (pCVar9,pCVar6,g_CVector3f_ARRAY_01bc9c80 + g_INT_01bc9c7c,-1.0,0.0,0.0,
                           (double)fVar1);
                g_INT_01bc9c7c = g_INT_01bc9c7c + 1;
                break;
              case 2:
                if (g_CVector3f_ARRAY_01bc9c80 + g_INT_01bc9c7c != pCVar6) {
                  g_CVector3f_ARRAY_01bc9c80[g_INT_01bc9c7c].x = pCVar6->x;
                  g_CVector3f_ARRAY_01bc9c80[iVar2].y = pCVar6->y;
                  g_CVector3f_ARRAY_01bc9c80[iVar2].z = pCVar6->z;
                }
                g_INT_01bc9c7c = g_INT_01bc9c7c + 1;
                core_dtri_cpp_clipLineToPlane_FUN_0046d4e0
                          (pCVar6,pCVar9,g_CVector3f_ARRAY_01bc9c80 + g_INT_01bc9c7c,-1.0,0.0,0.0,
                           (double)fVar1);
                g_INT_01bc9c7c = g_INT_01bc9c7c + 1;
              }
              iVar7 = iVar7 + 1;
              pCVar6 = pCVar6 + 1;
            } while (iVar7 < g_INT_01bc9bb8);
          }
          if (2 < g_INT_01bc9c7c) {
            fVar1 = bounds_min->z;
            iVar7 = 0;
            if (0 < g_INT_01bc9c7c) {
              pCVar6 = g_CVector3f_ARRAY_01bc9c80;
              do {
                iVar2 = g_INT_01bc9d40;
                uVar4 = iVar7 + 1;
                if (uVar4 == g_INT_01bc9c7c) {
                  uVar4 = uVar4 ^ g_INT_01bc9c7c;
                }
                bVar3 = pCVar6->z < fVar1;
                if (g_CVector3f_ARRAY_01bc9c80[uVar4].z < fVar1) {
                  bVar3 = bVar3 | 2;
                }
                switch(bVar3) {
                case 0:
                  if (g_CVector3f_ARRAY_01bc9d44 + g_INT_01bc9d40 != pCVar6) {
                    g_CVector3f_ARRAY_01bc9d44[g_INT_01bc9d40].x = pCVar6->x;
                    g_CVector3f_ARRAY_01bc9d44[iVar2].y = pCVar6->y;
                    g_CVector3f_ARRAY_01bc9d44[iVar2].z = pCVar6->z;
                  }
                  g_INT_01bc9d40 = g_INT_01bc9d40 + 1;
                  break;
                case 1:
                  core_dtri_cpp_clipLineToPlane_FUN_0046d4e0
                            (g_CVector3f_ARRAY_01bc9c80 + uVar4,pCVar6,
                             g_CVector3f_ARRAY_01bc9d44 + g_INT_01bc9d40,0.0,0.0,-1.0,(double)fVar1)
                  ;
                  g_INT_01bc9d40 = g_INT_01bc9d40 + 1;
                  break;
                case 2:
                  if (g_CVector3f_ARRAY_01bc9d44 + g_INT_01bc9d40 != pCVar6) {
                    g_CVector3f_ARRAY_01bc9d44[g_INT_01bc9d40].x = pCVar6->x;
                    g_CVector3f_ARRAY_01bc9d44[iVar2].y = pCVar6->y;
                    g_CVector3f_ARRAY_01bc9d44[iVar2].z = pCVar6->z;
                  }
                  g_INT_01bc9d40 = g_INT_01bc9d40 + 1;
                  core_dtri_cpp_clipLineToPlane_FUN_0046d4e0
                            (pCVar6,g_CVector3f_ARRAY_01bc9c80 + uVar4,
                             g_CVector3f_ARRAY_01bc9d44 + g_INT_01bc9d40,0.0,0.0,-1.0,(double)fVar1)
                  ;
                  g_INT_01bc9d40 = g_INT_01bc9d40 + 1;
                }
                iVar7 = iVar7 + 1;
                pCVar6 = pCVar6 + 1;
              } while (iVar7 < g_INT_01bc9c7c);
            }
            if (2 < g_INT_01bc9d40) {
              fVar1 = bounds_max->z;
              iVar7 = 0;
              if (0 < g_INT_01bc9d40) {
                pCVar6 = g_CVector3f_ARRAY_01bc9d44;
                do {
                  iVar2 = g_INT_01bc9e04;
                  uVar4 = iVar7 + 1;
                  if (uVar4 == g_INT_01bc9d40) {
                    uVar4 = uVar4 ^ g_INT_01bc9d40;
                  }
                  bVar3 = fVar1 < pCVar6->z;
                  if (fVar1 < g_CVector3f_ARRAY_01bc9d44[uVar4].z) {
                    bVar3 = bVar3 | 2;
                  }
                  switch(bVar3) {
                  case 0:
                    if (g_CVector3f_ARRAY_01bc9e08 + g_INT_01bc9e04 != pCVar6) {
                      g_CVector3f_ARRAY_01bc9e08[g_INT_01bc9e04].x = pCVar6->x;
                      g_CVector3f_ARRAY_01bc9e08[iVar2].y = pCVar6->y;
                      g_CVector3f_ARRAY_01bc9e08[iVar2].z = pCVar6->z;
                    }
                    g_INT_01bc9e04 = g_INT_01bc9e04 + 1;
                    break;
                  case 1:
                    core_dtri_cpp_clipLineToPlane_FUN_0046d4e0
                              (g_CVector3f_ARRAY_01bc9d44 + uVar4,pCVar6,
                               g_CVector3f_ARRAY_01bc9e08 + g_INT_01bc9e04,0.0,0.0,-1.0,
                               (double)fVar1);
                    g_INT_01bc9e04 = g_INT_01bc9e04 + 1;
                    break;
                  case 2:
                    if (g_CVector3f_ARRAY_01bc9e08 + g_INT_01bc9e04 != pCVar6) {
                      g_CVector3f_ARRAY_01bc9e08[g_INT_01bc9e04].x = pCVar6->x;
                      g_CVector3f_ARRAY_01bc9e08[iVar2].y = pCVar6->y;
                      g_CVector3f_ARRAY_01bc9e08[iVar2].z = pCVar6->z;
                    }
                    g_INT_01bc9e04 = g_INT_01bc9e04 + 1;
                    core_dtri_cpp_clipLineToPlane_FUN_0046d4e0
                              (pCVar6,g_CVector3f_ARRAY_01bc9d44 + uVar4,
                               g_CVector3f_ARRAY_01bc9e08 + g_INT_01bc9e04,0.0,0.0,-1.0,
                               (double)fVar1);
                    g_INT_01bc9e04 = g_INT_01bc9e04 + 1;
                  }
                  iVar7 = iVar7 + 1;
                  pCVar6 = pCVar6 + 1;
                } while (iVar7 < g_INT_01bc9d40);
              }
              if (2 < g_INT_01bc9e04) {
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
