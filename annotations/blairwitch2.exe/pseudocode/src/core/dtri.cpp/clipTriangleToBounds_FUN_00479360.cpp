// Name: core_dtri.cpp_clipTriangleToBounds_FUN_00479360
// Address: 00479360
// Address Range: [[00479360, 00479d6d]]
// Convention: __cdecl
// Signature: int __cdecl core_dtri_cpp_clipTriangleToBounds_FUN_00479360(CVector3f *triangle_vertices,CVector3f *bounds_min,CVector3f *bounds_max)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_dtri_cpp_clipTriangleToBounds_FUN_00479360(CVector3f *triangle_vertices,CVector3f *bounds_min,CVector3f *bounds_max)

{
  float fVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  byte bVar6;
  float *pfVar7;
  int iVar8;
  CVector3f *pCVar9;
  byte bVar10;
  CVector3f *pCVar11;
  
  g_INT_01c21e84 = 3;
  if (triangle_vertices != (CVector3f *)&g_FLOAT_01c21e88) {
    g_FLOAT_01c21e88 = triangle_vertices->x;
    g_FLOAT_01c21e90 = triangle_vertices->z;
    _DAT_01c21e8c = triangle_vertices->y;
  }
  if (triangle_vertices + 1 != (CVector3f *)&g_FLOAT_01c21e94) {
    g_FLOAT_01c21e94 = triangle_vertices[1].x;
    g_FLOAT_01c21e9c = triangle_vertices[1].z;
    _DAT_01c21e98 = triangle_vertices[1].y;
  }
  if (triangle_vertices + 2 != (CVector3f *)&g_FLOAT_01c21ea0) {
    g_FLOAT_01c21ea0 = triangle_vertices[2].x;
    g_FLOAT_01c21ea8 = triangle_vertices[2].z;
    _DAT_01c21ea4 = triangle_vertices[2].y;
  }
  bVar10 = 0;
  iVar8 = 0;
  bVar3 = 0xff;
  pfVar7 = &g_FLOAT_01c21e88;
  do {
    bVar6 = bounds_max->x < *pfVar7;
    if (bounds_max->y < pfVar7[1]) {
      bVar6 = bVar6 | 2;
    }
    if (bounds_max->z < pfVar7[2]) {
      bVar6 = bVar6 | 4;
    }
    if (*pfVar7 < bounds_min->x) {
      bVar6 = bVar6 | 8;
    }
    if (pfVar7[1] < bounds_min->y) {
      bVar6 = bVar6 | 0x10;
    }
    if (pfVar7[2] < bounds_min->z) {
      bVar6 = bVar6 | 0x20;
    }
    pfVar7 = pfVar7 + 3;
    iVar8 = iVar8 + 1;
    bVar3 = bVar3 & bVar6;
    bVar10 = bVar10 | bVar6;
  } while (iVar8 < 3);
  if (bVar10 == 0) {
    g_INT_01c2231c = 3;
    if (triangle_vertices != (CVector3f *)&g_FLOAT_01c22320) {
      g_FLOAT_01c22320 = triangle_vertices->x;
      g_FLOAT_01c22328 = triangle_vertices->z;
      _DAT_01c22324 = triangle_vertices->y;
    }
    if (triangle_vertices + 1 != (CVector3f *)&g_FLOAT_01c2232c) {
      g_FLOAT_01c2232c = triangle_vertices[1].x;
      g_FLOAT_01c22334 = triangle_vertices[1].z;
      _DAT_01c22330 = triangle_vertices[1].y;
    }
    if (triangle_vertices + 2 != (CVector3f *)&g_FLOAT_01c22338) {
      g_FLOAT_01c22338 = triangle_vertices[2].x;
      g_FLOAT_01c22340 = triangle_vertices[2].z;
      _DAT_01c2233c = triangle_vertices[2].y;
    }
    return 1;
  }
  if (bVar3 == 0) {
    fVar1 = bounds_max->y;
    iVar8 = 0;
    pfVar7 = &g_FLOAT_01c21e88;
    g_INT_01c21f48 = 0;
    g_INT_01c2200c = 0;
    g_INT_01c220d0 = 0;
    g_INT_01c22194 = 0;
    g_INT_01c22258 = 0;
    g_INT_01c2231c = 0;
    do {
      iVar2 = g_INT_01c21f48;
      uVar4 = iVar8 + 1;
      if (uVar4 == g_INT_01c21e84) {
        uVar4 = uVar4 ^ g_INT_01c21e84;
      }
      bVar3 = fVar1 < ((CVector3f *)pfVar7)->y;
      if (fVar1 < *(float *)(&DAT_01c21e8c + uVar4 * 0xc)) {
        bVar3 = bVar3 | 2;
      }
      switch(bVar3) {
      case 0:
        if (g_CVector3f_ARRAY_01c21f4c + g_INT_01c21f48 != (CVector3f *)pfVar7) {
          g_CVector3f_ARRAY_01c21f4c[g_INT_01c21f48].x = ((CVector3f *)pfVar7)->x;
          g_CVector3f_ARRAY_01c21f4c[iVar2].y = ((CVector3f *)pfVar7)->y;
          g_CVector3f_ARRAY_01c21f4c[iVar2].z = ((CVector3f *)pfVar7)->z;
        }
        g_INT_01c21f48 = g_INT_01c21f48 + 1;
        break;
      case 1:
        core_dtri_cpp_clipLineToPlane_FUN_00478900
                  ((CVector3f *)(&g_FLOAT_01c21e88 + uVar4 * 3),(CVector3f *)pfVar7,
                   g_CVector3f_ARRAY_01c21f4c + g_INT_01c21f48,0.0,1.0,0.0,(double)-fVar1);
        g_INT_01c21f48 = g_INT_01c21f48 + 1;
        break;
      case 2:
        if (g_CVector3f_ARRAY_01c21f4c + g_INT_01c21f48 != (CVector3f *)pfVar7) {
          g_CVector3f_ARRAY_01c21f4c[g_INT_01c21f48].x = ((CVector3f *)pfVar7)->x;
          g_CVector3f_ARRAY_01c21f4c[iVar2].y = ((CVector3f *)pfVar7)->y;
          g_CVector3f_ARRAY_01c21f4c[iVar2].z = ((CVector3f *)pfVar7)->z;
        }
        g_INT_01c21f48 = g_INT_01c21f48 + 1;
        core_dtri_cpp_clipLineToPlane_FUN_00478900
                  ((CVector3f *)pfVar7,(CVector3f *)(&g_FLOAT_01c21e88 + uVar4 * 3),
                   g_CVector3f_ARRAY_01c21f4c + g_INT_01c21f48,0.0,1.0,0.0,(double)-fVar1);
        g_INT_01c21f48 = g_INT_01c21f48 + 1;
      }
      iVar8 = iVar8 + 1;
      pfVar7 = (float *)((int)pfVar7 + 0xc);
    } while (iVar8 < g_INT_01c21e84);
    if (2 < g_INT_01c21f48) {
      fVar1 = bounds_min->y;
      iVar8 = 0;
      if (0 < g_INT_01c21f48) {
        pCVar9 = g_CVector3f_ARRAY_01c21f4c;
        do {
          iVar2 = g_INT_01c2200c;
          uVar4 = iVar8 + 1;
          if (uVar4 == g_INT_01c21f48) {
            uVar4 = uVar4 ^ g_INT_01c21f48;
          }
          bVar3 = pCVar9->y < fVar1;
          if (g_CVector3f_ARRAY_01c21f4c[uVar4].y < fVar1) {
            bVar3 = bVar3 | 2;
          }
          switch(bVar3) {
          case 0:
            if (g_CVector3f_ARRAY_01c22010 + g_INT_01c2200c != pCVar9) {
              g_CVector3f_ARRAY_01c22010[g_INT_01c2200c].x = pCVar9->x;
              g_CVector3f_ARRAY_01c22010[iVar2].y = pCVar9->y;
              g_CVector3f_ARRAY_01c22010[iVar2].z = pCVar9->z;
            }
            g_INT_01c2200c = g_INT_01c2200c + 1;
            break;
          case 1:
            core_dtri_cpp_clipLineToPlane_FUN_00478900
                      (g_CVector3f_ARRAY_01c21f4c + uVar4,pCVar9,
                       g_CVector3f_ARRAY_01c22010 + g_INT_01c2200c,0.0,-1.0,0.0,(double)fVar1);
            g_INT_01c2200c = g_INT_01c2200c + 1;
            break;
          case 2:
            if (g_CVector3f_ARRAY_01c22010 + g_INT_01c2200c != pCVar9) {
              g_CVector3f_ARRAY_01c22010[g_INT_01c2200c].x = pCVar9->x;
              g_CVector3f_ARRAY_01c22010[iVar2].y = pCVar9->y;
              g_CVector3f_ARRAY_01c22010[iVar2].z = pCVar9->z;
            }
            g_INT_01c2200c = g_INT_01c2200c + 1;
            core_dtri_cpp_clipLineToPlane_FUN_00478900
                      (pCVar9,g_CVector3f_ARRAY_01c21f4c + uVar4,
                       g_CVector3f_ARRAY_01c22010 + g_INT_01c2200c,0.0,-1.0,0.0,(double)fVar1);
            g_INT_01c2200c = g_INT_01c2200c + 1;
          }
          iVar8 = iVar8 + 1;
          pCVar9 = pCVar9 + 1;
        } while (iVar8 < g_INT_01c21f48);
      }
      if (2 < g_INT_01c2200c) {
        fVar1 = bounds_max->x;
        iVar8 = 0;
        if (0 < g_INT_01c2200c) {
          pCVar9 = g_CVector3f_ARRAY_01c22010;
          do {
            iVar2 = g_INT_01c220d0;
            uVar4 = iVar8 + 1;
            if (uVar4 == g_INT_01c2200c) {
              uVar4 = uVar4 ^ g_INT_01c2200c;
            }
            pCVar11 = g_CVector3f_ARRAY_01c22010 + uVar4;
            bVar3 = fVar1 < pCVar9->x;
            if (fVar1 < pCVar11->x) {
              bVar3 = bVar3 | 2;
            }
            switch(bVar3) {
            case 0:
              if (g_CVector3f_ARRAY_01c220d4 + g_INT_01c220d0 != pCVar9) {
                g_CVector3f_ARRAY_01c220d4[g_INT_01c220d0].x = pCVar9->x;
                g_CVector3f_ARRAY_01c220d4[iVar2].y = pCVar9->y;
                g_CVector3f_ARRAY_01c220d4[iVar2].z = pCVar9->z;
              }
              g_INT_01c220d0 = g_INT_01c220d0 + 1;
              break;
            case 1:
              core_dtri_cpp_clipLineToPlane_FUN_00478900
                        (pCVar11,pCVar9,g_CVector3f_ARRAY_01c220d4 + g_INT_01c220d0,1.0,0.0,0.0,
                         (double)-fVar1);
              g_INT_01c220d0 = g_INT_01c220d0 + 1;
              break;
            case 2:
              if (g_CVector3f_ARRAY_01c220d4 + g_INT_01c220d0 != pCVar9) {
                g_CVector3f_ARRAY_01c220d4[g_INT_01c220d0].x = pCVar9->x;
                g_CVector3f_ARRAY_01c220d4[iVar2].y = pCVar9->y;
                g_CVector3f_ARRAY_01c220d4[iVar2].z = pCVar9->z;
              }
              g_INT_01c220d0 = g_INT_01c220d0 + 1;
              core_dtri_cpp_clipLineToPlane_FUN_00478900
                        (pCVar9,pCVar11,g_CVector3f_ARRAY_01c220d4 + g_INT_01c220d0,1.0,0.0,0.0,
                         (double)-fVar1);
              g_INT_01c220d0 = g_INT_01c220d0 + 1;
            }
            iVar8 = iVar8 + 1;
            pCVar9 = pCVar9 + 1;
          } while (iVar8 < g_INT_01c2200c);
        }
        if (2 < g_INT_01c220d0) {
          fVar1 = bounds_min->x;
          iVar8 = 0;
          if (0 < g_INT_01c220d0) {
            pCVar9 = g_CVector3f_ARRAY_01c220d4;
            do {
              iVar2 = g_INT_01c22194;
              uVar4 = iVar8 + 1;
              if (uVar4 == g_INT_01c220d0) {
                uVar4 = uVar4 ^ g_INT_01c220d0;
              }
              pCVar11 = g_CVector3f_ARRAY_01c220d4 + uVar4;
              bVar3 = pCVar9->x < fVar1;
              if (pCVar11->x < fVar1) {
                bVar3 = bVar3 | 2;
              }
              switch(bVar3) {
              case 0:
                if (g_CVector3f_ARRAY_01c22198 + g_INT_01c22194 != pCVar9) {
                  g_CVector3f_ARRAY_01c22198[g_INT_01c22194].x = pCVar9->x;
                  g_CVector3f_ARRAY_01c22198[iVar2].y = pCVar9->y;
                  g_CVector3f_ARRAY_01c22198[iVar2].z = pCVar9->z;
                }
                g_INT_01c22194 = g_INT_01c22194 + 1;
                break;
              case 1:
                core_dtri_cpp_clipLineToPlane_FUN_00478900
                          (pCVar11,pCVar9,g_CVector3f_ARRAY_01c22198 + g_INT_01c22194,-1.0,0.0,0.0,
                           (double)fVar1);
                g_INT_01c22194 = g_INT_01c22194 + 1;
                break;
              case 2:
                if (g_CVector3f_ARRAY_01c22198 + g_INT_01c22194 != pCVar9) {
                  g_CVector3f_ARRAY_01c22198[g_INT_01c22194].x = pCVar9->x;
                  g_CVector3f_ARRAY_01c22198[iVar2].y = pCVar9->y;
                  g_CVector3f_ARRAY_01c22198[iVar2].z = pCVar9->z;
                }
                g_INT_01c22194 = g_INT_01c22194 + 1;
                core_dtri_cpp_clipLineToPlane_FUN_00478900
                          (pCVar9,pCVar11,g_CVector3f_ARRAY_01c22198 + g_INT_01c22194,-1.0,0.0,0.0,
                           (double)fVar1);
                g_INT_01c22194 = g_INT_01c22194 + 1;
              }
              iVar8 = iVar8 + 1;
              pCVar9 = pCVar9 + 1;
            } while (iVar8 < g_INT_01c220d0);
          }
          if (2 < g_INT_01c22194) {
            fVar1 = bounds_min->z;
            iVar8 = 0;
            if (0 < g_INT_01c22194) {
              pCVar9 = g_CVector3f_ARRAY_01c22198;
              do {
                iVar2 = g_INT_01c22258;
                uVar4 = iVar8 + 1;
                if (uVar4 == g_INT_01c22194) {
                  uVar4 = uVar4 ^ g_INT_01c22194;
                }
                bVar3 = pCVar9->z < fVar1;
                if (g_CVector3f_ARRAY_01c22198[uVar4].z < fVar1) {
                  bVar3 = bVar3 | 2;
                }
                switch(bVar3) {
                case 0:
                  if (g_CVector3f_ARRAY_01c2225c + g_INT_01c22258 != pCVar9) {
                    g_CVector3f_ARRAY_01c2225c[g_INT_01c22258].x = pCVar9->x;
                    g_CVector3f_ARRAY_01c2225c[iVar2].y = pCVar9->y;
                    g_CVector3f_ARRAY_01c2225c[iVar2].z = pCVar9->z;
                  }
                  g_INT_01c22258 = g_INT_01c22258 + 1;
                  break;
                case 1:
                  core_dtri_cpp_clipLineToPlane_FUN_00478900
                            (g_CVector3f_ARRAY_01c22198 + uVar4,pCVar9,
                             g_CVector3f_ARRAY_01c2225c + g_INT_01c22258,0.0,0.0,-1.0,(double)fVar1)
                  ;
                  g_INT_01c22258 = g_INT_01c22258 + 1;
                  break;
                case 2:
                  if (g_CVector3f_ARRAY_01c2225c + g_INT_01c22258 != pCVar9) {
                    g_CVector3f_ARRAY_01c2225c[g_INT_01c22258].x = pCVar9->x;
                    g_CVector3f_ARRAY_01c2225c[iVar2].y = pCVar9->y;
                    g_CVector3f_ARRAY_01c2225c[iVar2].z = pCVar9->z;
                  }
                  g_INT_01c22258 = g_INT_01c22258 + 1;
                  core_dtri_cpp_clipLineToPlane_FUN_00478900
                            (pCVar9,g_CVector3f_ARRAY_01c22198 + uVar4,
                             g_CVector3f_ARRAY_01c2225c + g_INT_01c22258,0.0,0.0,-1.0,(double)fVar1)
                  ;
                  g_INT_01c22258 = g_INT_01c22258 + 1;
                }
                iVar8 = iVar8 + 1;
                pCVar9 = pCVar9 + 1;
              } while (iVar8 < g_INT_01c22194);
            }
            if (2 < g_INT_01c22258) {
              fVar1 = bounds_max->z;
              iVar8 = 0;
              if (0 < g_INT_01c22258) {
                pCVar9 = g_CVector3f_ARRAY_01c2225c;
                do {
                  iVar2 = g_INT_01c2231c;
                  uVar4 = iVar8 + 1;
                  if (uVar4 == g_INT_01c22258) {
                    uVar4 = uVar4 ^ g_INT_01c22258;
                  }
                  bVar3 = fVar1 < pCVar9->z;
                  if (fVar1 < g_CVector3f_ARRAY_01c2225c[uVar4].z) {
                    bVar3 = bVar3 | 2;
                  }
                  switch(bVar3) {
                  case 0:
                    iVar5 = g_INT_01c2231c * 0xc;
                    if ((CVector3f *)(&g_FLOAT_01c22320 + g_INT_01c2231c * 3) != pCVar9) {
                      ((CVector3f *)(&g_FLOAT_01c22320 + g_INT_01c2231c * 3))->x = pCVar9->x;
                      *(float *)(&DAT_01c22324 + iVar5) = pCVar9->y;
                      (&g_FLOAT_01c22328)[iVar2 * 3] = pCVar9->z;
                    }
                    g_INT_01c2231c = g_INT_01c2231c + 1;
                    break;
                  case 1:
                    core_dtri_cpp_clipLineToPlane_FUN_00478900
                              (g_CVector3f_ARRAY_01c2225c + uVar4,pCVar9,
                               (CVector3f *)(&g_FLOAT_01c22320 + g_INT_01c2231c * 3),0.0,0.0,-1.0,
                               (double)fVar1);
                    g_INT_01c2231c = g_INT_01c2231c + 1;
                    break;
                  case 2:
                    iVar5 = g_INT_01c2231c * 0xc;
                    if ((CVector3f *)(&g_FLOAT_01c22320 + g_INT_01c2231c * 3) != pCVar9) {
                      ((CVector3f *)(&g_FLOAT_01c22320 + g_INT_01c2231c * 3))->x = pCVar9->x;
                      *(float *)(&DAT_01c22324 + iVar5) = pCVar9->y;
                      (&g_FLOAT_01c22328)[iVar2 * 3] = pCVar9->z;
                    }
                    g_INT_01c2231c = g_INT_01c2231c + 1;
                    core_dtri_cpp_clipLineToPlane_FUN_00478900
                              (pCVar9,g_CVector3f_ARRAY_01c2225c + uVar4,
                               (CVector3f *)(&g_FLOAT_01c22320 + g_INT_01c2231c * 3),0.0,0.0,-1.0,
                               (double)fVar1);
                    g_INT_01c2231c = g_INT_01c2231c + 1;
                  }
                  iVar8 = iVar8 + 1;
                  pCVar9 = pCVar9 + 1;
                } while (iVar8 < g_INT_01c22258);
              }
              if (2 < g_INT_01c2231c) {
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
