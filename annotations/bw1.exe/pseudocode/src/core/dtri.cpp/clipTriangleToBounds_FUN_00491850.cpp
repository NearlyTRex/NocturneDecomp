// Name: core_dtri.cpp_clipTriangleToBounds_FUN_00491850
// Address: 00491850
// Address Range: [[00491850, 0049225d]]
// Convention: __cdecl
// Signature: int __cdecl core_dtri_cpp_clipTriangleToBounds_FUN_00491850(CVector3f *triangle_vertices,CVector3f *bounds_min,CVector3f *bounds_max)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_dtri_cpp_clipTriangleToBounds_FUN_00491850(CVector3f *triangle_vertices,CVector3f *bounds_min,CVector3f *bounds_max)

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
  
  g_INT_01c3d440 = 3;
  if (triangle_vertices != (CVector3f *)&g_FLOAT_01c3d444) {
    g_FLOAT_01c3d444 = triangle_vertices->x;
    g_FLOAT_01c3d44c = triangle_vertices->z;
    _DAT_01c3d448 = triangle_vertices->y;
  }
  if (triangle_vertices + 1 != (CVector3f *)&g_FLOAT_01c3d450) {
    g_FLOAT_01c3d450 = triangle_vertices[1].x;
    g_FLOAT_01c3d458 = triangle_vertices[1].z;
    _DAT_01c3d454 = triangle_vertices[1].y;
  }
  if (triangle_vertices + 2 != (CVector3f *)&g_FLOAT_01c3d45c) {
    g_FLOAT_01c3d45c = triangle_vertices[2].x;
    g_FLOAT_01c3d464 = triangle_vertices[2].z;
    _DAT_01c3d460 = triangle_vertices[2].y;
  }
  bVar10 = 0;
  iVar8 = 0;
  bVar3 = 0xff;
  pfVar7 = &g_FLOAT_01c3d444;
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
    g_INT_01c3d8d8 = 3;
    if (triangle_vertices != (CVector3f *)&g_FLOAT_01c3d8dc) {
      g_FLOAT_01c3d8dc = triangle_vertices->x;
      g_FLOAT_01c3d8e4 = triangle_vertices->z;
      _DAT_01c3d8e0 = triangle_vertices->y;
    }
    if (triangle_vertices + 1 != (CVector3f *)&g_FLOAT_01c3d8e8) {
      g_FLOAT_01c3d8e8 = triangle_vertices[1].x;
      g_FLOAT_01c3d8f0 = triangle_vertices[1].z;
      _DAT_01c3d8ec = triangle_vertices[1].y;
    }
    if (triangle_vertices + 2 != (CVector3f *)&g_FLOAT_01c3d8f4) {
      g_FLOAT_01c3d8f4 = triangle_vertices[2].x;
      g_FLOAT_01c3d8fc = triangle_vertices[2].z;
      _DAT_01c3d8f8 = triangle_vertices[2].y;
    }
    return 1;
  }
  if (bVar3 == 0) {
    fVar1 = bounds_max->y;
    iVar8 = 0;
    pfVar7 = &g_FLOAT_01c3d444;
    g_INT_01c3d504 = 0;
    g_INT_01c3d5c8 = 0;
    g_INT_01c3d68c = 0;
    g_INT_01c3d750 = 0;
    g_INT_01c3d814 = 0;
    g_INT_01c3d8d8 = 0;
    do {
      iVar2 = g_INT_01c3d504;
      uVar4 = iVar8 + 1;
      if (uVar4 == g_INT_01c3d440) {
        uVar4 = uVar4 ^ g_INT_01c3d440;
      }
      bVar3 = fVar1 < ((CVector3f *)pfVar7)->y;
      if (fVar1 < *(float *)(&DAT_01c3d448 + uVar4 * 0xc)) {
        bVar3 = bVar3 | 2;
      }
      switch(bVar3) {
      case 0:
        if (g_CVector3f_ARRAY_01c3d508 + g_INT_01c3d504 != (CVector3f *)pfVar7) {
          g_CVector3f_ARRAY_01c3d508[g_INT_01c3d504].x = ((CVector3f *)pfVar7)->x;
          g_CVector3f_ARRAY_01c3d508[iVar2].y = ((CVector3f *)pfVar7)->y;
          g_CVector3f_ARRAY_01c3d508[iVar2].z = ((CVector3f *)pfVar7)->z;
        }
        g_INT_01c3d504 = g_INT_01c3d504 + 1;
        break;
      case 1:
        core_dtri_cpp_clipLineToPlane_FUN_00490df0
                  ((CVector3f *)(&g_FLOAT_01c3d444 + uVar4 * 3),(CVector3f *)pfVar7,
                   g_CVector3f_ARRAY_01c3d508 + g_INT_01c3d504,0.0,1.0,0.0,(double)-fVar1);
        g_INT_01c3d504 = g_INT_01c3d504 + 1;
        break;
      case 2:
        if (g_CVector3f_ARRAY_01c3d508 + g_INT_01c3d504 != (CVector3f *)pfVar7) {
          g_CVector3f_ARRAY_01c3d508[g_INT_01c3d504].x = ((CVector3f *)pfVar7)->x;
          g_CVector3f_ARRAY_01c3d508[iVar2].y = ((CVector3f *)pfVar7)->y;
          g_CVector3f_ARRAY_01c3d508[iVar2].z = ((CVector3f *)pfVar7)->z;
        }
        g_INT_01c3d504 = g_INT_01c3d504 + 1;
        core_dtri_cpp_clipLineToPlane_FUN_00490df0
                  ((CVector3f *)pfVar7,(CVector3f *)(&g_FLOAT_01c3d444 + uVar4 * 3),
                   g_CVector3f_ARRAY_01c3d508 + g_INT_01c3d504,0.0,1.0,0.0,(double)-fVar1);
        g_INT_01c3d504 = g_INT_01c3d504 + 1;
      }
      iVar8 = iVar8 + 1;
      pfVar7 = (float *)((int)pfVar7 + 0xc);
    } while (iVar8 < g_INT_01c3d440);
    if (2 < g_INT_01c3d504) {
      fVar1 = bounds_min->y;
      iVar8 = 0;
      if (0 < g_INT_01c3d504) {
        pCVar9 = g_CVector3f_ARRAY_01c3d508;
        do {
          iVar2 = g_INT_01c3d5c8;
          uVar4 = iVar8 + 1;
          if (uVar4 == g_INT_01c3d504) {
            uVar4 = uVar4 ^ g_INT_01c3d504;
          }
          bVar3 = pCVar9->y < fVar1;
          if (g_CVector3f_ARRAY_01c3d508[uVar4].y < fVar1) {
            bVar3 = bVar3 | 2;
          }
          switch(bVar3) {
          case 0:
            if (g_CVector3f_ARRAY_01c3d5cc + g_INT_01c3d5c8 != pCVar9) {
              g_CVector3f_ARRAY_01c3d5cc[g_INT_01c3d5c8].x = pCVar9->x;
              g_CVector3f_ARRAY_01c3d5cc[iVar2].y = pCVar9->y;
              g_CVector3f_ARRAY_01c3d5cc[iVar2].z = pCVar9->z;
            }
            g_INT_01c3d5c8 = g_INT_01c3d5c8 + 1;
            break;
          case 1:
            core_dtri_cpp_clipLineToPlane_FUN_00490df0
                      (g_CVector3f_ARRAY_01c3d508 + uVar4,pCVar9,
                       g_CVector3f_ARRAY_01c3d5cc + g_INT_01c3d5c8,0.0,-1.0,0.0,(double)fVar1);
            g_INT_01c3d5c8 = g_INT_01c3d5c8 + 1;
            break;
          case 2:
            if (g_CVector3f_ARRAY_01c3d5cc + g_INT_01c3d5c8 != pCVar9) {
              g_CVector3f_ARRAY_01c3d5cc[g_INT_01c3d5c8].x = pCVar9->x;
              g_CVector3f_ARRAY_01c3d5cc[iVar2].y = pCVar9->y;
              g_CVector3f_ARRAY_01c3d5cc[iVar2].z = pCVar9->z;
            }
            g_INT_01c3d5c8 = g_INT_01c3d5c8 + 1;
            core_dtri_cpp_clipLineToPlane_FUN_00490df0
                      (pCVar9,g_CVector3f_ARRAY_01c3d508 + uVar4,
                       g_CVector3f_ARRAY_01c3d5cc + g_INT_01c3d5c8,0.0,-1.0,0.0,(double)fVar1);
            g_INT_01c3d5c8 = g_INT_01c3d5c8 + 1;
          }
          iVar8 = iVar8 + 1;
          pCVar9 = pCVar9 + 1;
        } while (iVar8 < g_INT_01c3d504);
      }
      if (2 < g_INT_01c3d5c8) {
        fVar1 = bounds_max->x;
        iVar8 = 0;
        if (0 < g_INT_01c3d5c8) {
          pCVar9 = g_CVector3f_ARRAY_01c3d5cc;
          do {
            iVar2 = g_INT_01c3d68c;
            uVar4 = iVar8 + 1;
            if (uVar4 == g_INT_01c3d5c8) {
              uVar4 = uVar4 ^ g_INT_01c3d5c8;
            }
            pCVar11 = g_CVector3f_ARRAY_01c3d5cc + uVar4;
            bVar3 = fVar1 < pCVar9->x;
            if (fVar1 < pCVar11->x) {
              bVar3 = bVar3 | 2;
            }
            switch(bVar3) {
            case 0:
              if (g_CVector3f_ARRAY_01c3d690 + g_INT_01c3d68c != pCVar9) {
                g_CVector3f_ARRAY_01c3d690[g_INT_01c3d68c].x = pCVar9->x;
                g_CVector3f_ARRAY_01c3d690[iVar2].y = pCVar9->y;
                g_CVector3f_ARRAY_01c3d690[iVar2].z = pCVar9->z;
              }
              g_INT_01c3d68c = g_INT_01c3d68c + 1;
              break;
            case 1:
              core_dtri_cpp_clipLineToPlane_FUN_00490df0
                        (pCVar11,pCVar9,g_CVector3f_ARRAY_01c3d690 + g_INT_01c3d68c,1.0,0.0,0.0,
                         (double)-fVar1);
              g_INT_01c3d68c = g_INT_01c3d68c + 1;
              break;
            case 2:
              if (g_CVector3f_ARRAY_01c3d690 + g_INT_01c3d68c != pCVar9) {
                g_CVector3f_ARRAY_01c3d690[g_INT_01c3d68c].x = pCVar9->x;
                g_CVector3f_ARRAY_01c3d690[iVar2].y = pCVar9->y;
                g_CVector3f_ARRAY_01c3d690[iVar2].z = pCVar9->z;
              }
              g_INT_01c3d68c = g_INT_01c3d68c + 1;
              core_dtri_cpp_clipLineToPlane_FUN_00490df0
                        (pCVar9,pCVar11,g_CVector3f_ARRAY_01c3d690 + g_INT_01c3d68c,1.0,0.0,0.0,
                         (double)-fVar1);
              g_INT_01c3d68c = g_INT_01c3d68c + 1;
            }
            iVar8 = iVar8 + 1;
            pCVar9 = pCVar9 + 1;
          } while (iVar8 < g_INT_01c3d5c8);
        }
        if (2 < g_INT_01c3d68c) {
          fVar1 = bounds_min->x;
          iVar8 = 0;
          if (0 < g_INT_01c3d68c) {
            pCVar9 = g_CVector3f_ARRAY_01c3d690;
            do {
              iVar2 = g_INT_01c3d750;
              uVar4 = iVar8 + 1;
              if (uVar4 == g_INT_01c3d68c) {
                uVar4 = uVar4 ^ g_INT_01c3d68c;
              }
              pCVar11 = g_CVector3f_ARRAY_01c3d690 + uVar4;
              bVar3 = pCVar9->x < fVar1;
              if (pCVar11->x < fVar1) {
                bVar3 = bVar3 | 2;
              }
              switch(bVar3) {
              case 0:
                if (g_CVector3f_ARRAY_01c3d754 + g_INT_01c3d750 != pCVar9) {
                  g_CVector3f_ARRAY_01c3d754[g_INT_01c3d750].x = pCVar9->x;
                  g_CVector3f_ARRAY_01c3d754[iVar2].y = pCVar9->y;
                  g_CVector3f_ARRAY_01c3d754[iVar2].z = pCVar9->z;
                }
                g_INT_01c3d750 = g_INT_01c3d750 + 1;
                break;
              case 1:
                core_dtri_cpp_clipLineToPlane_FUN_00490df0
                          (pCVar11,pCVar9,g_CVector3f_ARRAY_01c3d754 + g_INT_01c3d750,-1.0,0.0,0.0,
                           (double)fVar1);
                g_INT_01c3d750 = g_INT_01c3d750 + 1;
                break;
              case 2:
                if (g_CVector3f_ARRAY_01c3d754 + g_INT_01c3d750 != pCVar9) {
                  g_CVector3f_ARRAY_01c3d754[g_INT_01c3d750].x = pCVar9->x;
                  g_CVector3f_ARRAY_01c3d754[iVar2].y = pCVar9->y;
                  g_CVector3f_ARRAY_01c3d754[iVar2].z = pCVar9->z;
                }
                g_INT_01c3d750 = g_INT_01c3d750 + 1;
                core_dtri_cpp_clipLineToPlane_FUN_00490df0
                          (pCVar9,pCVar11,g_CVector3f_ARRAY_01c3d754 + g_INT_01c3d750,-1.0,0.0,0.0,
                           (double)fVar1);
                g_INT_01c3d750 = g_INT_01c3d750 + 1;
              }
              iVar8 = iVar8 + 1;
              pCVar9 = pCVar9 + 1;
            } while (iVar8 < g_INT_01c3d68c);
          }
          if (2 < g_INT_01c3d750) {
            fVar1 = bounds_min->z;
            iVar8 = 0;
            if (0 < g_INT_01c3d750) {
              pCVar9 = g_CVector3f_ARRAY_01c3d754;
              do {
                iVar2 = g_INT_01c3d814;
                uVar4 = iVar8 + 1;
                if (uVar4 == g_INT_01c3d750) {
                  uVar4 = uVar4 ^ g_INT_01c3d750;
                }
                bVar3 = pCVar9->z < fVar1;
                if (g_CVector3f_ARRAY_01c3d754[uVar4].z < fVar1) {
                  bVar3 = bVar3 | 2;
                }
                switch(bVar3) {
                case 0:
                  if (g_CVector3f_ARRAY_01c3d818 + g_INT_01c3d814 != pCVar9) {
                    g_CVector3f_ARRAY_01c3d818[g_INT_01c3d814].x = pCVar9->x;
                    g_CVector3f_ARRAY_01c3d818[iVar2].y = pCVar9->y;
                    g_CVector3f_ARRAY_01c3d818[iVar2].z = pCVar9->z;
                  }
                  g_INT_01c3d814 = g_INT_01c3d814 + 1;
                  break;
                case 1:
                  core_dtri_cpp_clipLineToPlane_FUN_00490df0
                            (g_CVector3f_ARRAY_01c3d754 + uVar4,pCVar9,
                             g_CVector3f_ARRAY_01c3d818 + g_INT_01c3d814,0.0,0.0,-1.0,(double)fVar1)
                  ;
                  g_INT_01c3d814 = g_INT_01c3d814 + 1;
                  break;
                case 2:
                  if (g_CVector3f_ARRAY_01c3d818 + g_INT_01c3d814 != pCVar9) {
                    g_CVector3f_ARRAY_01c3d818[g_INT_01c3d814].x = pCVar9->x;
                    g_CVector3f_ARRAY_01c3d818[iVar2].y = pCVar9->y;
                    g_CVector3f_ARRAY_01c3d818[iVar2].z = pCVar9->z;
                  }
                  g_INT_01c3d814 = g_INT_01c3d814 + 1;
                  core_dtri_cpp_clipLineToPlane_FUN_00490df0
                            (pCVar9,g_CVector3f_ARRAY_01c3d754 + uVar4,
                             g_CVector3f_ARRAY_01c3d818 + g_INT_01c3d814,0.0,0.0,-1.0,(double)fVar1)
                  ;
                  g_INT_01c3d814 = g_INT_01c3d814 + 1;
                }
                iVar8 = iVar8 + 1;
                pCVar9 = pCVar9 + 1;
              } while (iVar8 < g_INT_01c3d750);
            }
            if (2 < g_INT_01c3d814) {
              fVar1 = bounds_max->z;
              iVar8 = 0;
              if (0 < g_INT_01c3d814) {
                pCVar9 = g_CVector3f_ARRAY_01c3d818;
                do {
                  iVar2 = g_INT_01c3d8d8;
                  uVar4 = iVar8 + 1;
                  if (uVar4 == g_INT_01c3d814) {
                    uVar4 = uVar4 ^ g_INT_01c3d814;
                  }
                  bVar3 = fVar1 < pCVar9->z;
                  if (fVar1 < g_CVector3f_ARRAY_01c3d818[uVar4].z) {
                    bVar3 = bVar3 | 2;
                  }
                  switch(bVar3) {
                  case 0:
                    iVar5 = g_INT_01c3d8d8 * 0xc;
                    if ((CVector3f *)(&g_FLOAT_01c3d8dc + g_INT_01c3d8d8 * 3) != pCVar9) {
                      ((CVector3f *)(&g_FLOAT_01c3d8dc + g_INT_01c3d8d8 * 3))->x = pCVar9->x;
                      *(float *)(&DAT_01c3d8e0 + iVar5) = pCVar9->y;
                      (&g_FLOAT_01c3d8e4)[iVar2 * 3] = pCVar9->z;
                    }
                    g_INT_01c3d8d8 = g_INT_01c3d8d8 + 1;
                    break;
                  case 1:
                    core_dtri_cpp_clipLineToPlane_FUN_00490df0
                              (g_CVector3f_ARRAY_01c3d818 + uVar4,pCVar9,
                               (CVector3f *)(&g_FLOAT_01c3d8dc + g_INT_01c3d8d8 * 3),0.0,0.0,-1.0,
                               (double)fVar1);
                    g_INT_01c3d8d8 = g_INT_01c3d8d8 + 1;
                    break;
                  case 2:
                    iVar5 = g_INT_01c3d8d8 * 0xc;
                    if ((CVector3f *)(&g_FLOAT_01c3d8dc + g_INT_01c3d8d8 * 3) != pCVar9) {
                      ((CVector3f *)(&g_FLOAT_01c3d8dc + g_INT_01c3d8d8 * 3))->x = pCVar9->x;
                      *(float *)(&DAT_01c3d8e0 + iVar5) = pCVar9->y;
                      (&g_FLOAT_01c3d8e4)[iVar2 * 3] = pCVar9->z;
                    }
                    g_INT_01c3d8d8 = g_INT_01c3d8d8 + 1;
                    core_dtri_cpp_clipLineToPlane_FUN_00490df0
                              (pCVar9,g_CVector3f_ARRAY_01c3d818 + uVar4,
                               (CVector3f *)(&g_FLOAT_01c3d8dc + g_INT_01c3d8d8 * 3),0.0,0.0,-1.0,
                               (double)fVar1);
                    g_INT_01c3d8d8 = g_INT_01c3d8d8 + 1;
                  }
                  iVar8 = iVar8 + 1;
                  pCVar9 = pCVar9 + 1;
                } while (iVar8 < g_INT_01c3d814);
              }
              if (2 < g_INT_01c3d8d8) {
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
