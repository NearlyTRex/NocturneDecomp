// Name: core_dtri.cpp_clipTriangleToBounds_FUN_0047a3d0
// Address: 0047a3d0
// Address Range: [[0047a3d0, 0047adf9]]
// Convention: __cdecl
// Signature: int __cdecl core_dtri_cpp_clipTriangleToBounds_FUN_0047a3d0(CVector3f *triangle_vertices,CVector3f *bounds_min,CVector3f *bounds_max)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_dtri_cpp_clipTriangleToBounds_FUN_0047a3d0(CVector3f *triangle_vertices,CVector3f *bounds_min,CVector3f *bounds_max)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  float *pfVar6;
  int iVar7;
  CVector3f *pCVar8;
  byte bVar9;
  CVector3f *pCVar10;
  
  g_INT_01c599dc = 3;
  if (triangle_vertices != (CVector3f *)&g_FLOAT_01c599e0) {
    g_FLOAT_01c599e0 = triangle_vertices->x;
    g_FLOAT_01c599e8 = triangle_vertices->z;
    _DAT_01c599e4 = triangle_vertices->y;
  }
  if (triangle_vertices + 1 != (CVector3f *)&g_FLOAT_01c599ec) {
    g_FLOAT_01c599ec = triangle_vertices[1].x;
    g_FLOAT_01c599f4 = triangle_vertices[1].z;
    _DAT_01c599f0 = triangle_vertices[1].y;
  }
  if (triangle_vertices + 2 != (CVector3f *)&g_FLOAT_01c599f8) {
    g_FLOAT_01c599f8 = triangle_vertices[2].x;
    g_FLOAT_01c59a00 = triangle_vertices[2].z;
    _DAT_01c599fc = triangle_vertices[2].y;
  }
  bVar9 = 0;
  iVar7 = 0;
  bVar4 = 0xff;
  pfVar6 = &g_FLOAT_01c599e0;
  do {
    bVar5 = bounds_max->x < *pfVar6;
    if (bounds_max->y < pfVar6[1]) {
      bVar5 = bVar5 | 2;
    }
    if (bounds_max->z < pfVar6[2]) {
      bVar5 = bVar5 | 4;
    }
    if (*pfVar6 < bounds_min->x) {
      bVar5 = bVar5 | 8;
    }
    if (pfVar6[1] < bounds_min->y) {
      bVar5 = bVar5 | 0x10;
    }
    if (pfVar6[2] < bounds_min->z) {
      bVar5 = bVar5 | 0x20;
    }
    pfVar6 = pfVar6 + 3;
    iVar7 = iVar7 + 1;
    bVar4 = bVar4 & bVar5;
    bVar9 = bVar9 | bVar5;
  } while (iVar7 < 3);
  if (bVar9 == 0) {
    g_INT_01c59e74 = 3;
    if (triangle_vertices != &g_CVector3f_01c59e78) {
      g_CVector3f_01c59e78.x = triangle_vertices->x;
      g_CVector3f_01c59e78.z = triangle_vertices->z;
      g_CVector3f_01c59e78.y = triangle_vertices->y;
    }
    if (triangle_vertices + 1 != (CVector3f *)&g_FLOAT_01c59e84) {
      g_FLOAT_01c59e84 = triangle_vertices[1].x;
      g_FLOAT_01c59e8c = triangle_vertices[1].z;
      _DAT_01c59e88 = triangle_vertices[1].y;
    }
    if (triangle_vertices + 2 != (CVector3f *)&g_FLOAT_01c59e90) {
      g_FLOAT_01c59e90 = triangle_vertices[2].x;
      g_FLOAT_01c59e98 = triangle_vertices[2].z;
      _DAT_01c59e94 = triangle_vertices[2].y;
    }
    return 1;
  }
  if (bVar4 == 0) {
    fVar1 = bounds_max->y;
    iVar7 = 0;
    pfVar6 = &g_FLOAT_01c599e0;
    g_INT_01c59aa0 = 0;
    g_INT_01c59b64 = 0;
    g_INT_01c59c28 = 0;
    g_INT_01c59cec = 0;
    g_INT_01c59db0 = 0;
    g_INT_01c59e74 = 0;
    do {
      iVar2 = g_INT_01c59aa0;
      uVar3 = iVar7 + 1;
      if (uVar3 == g_INT_01c599dc) {
        uVar3 = uVar3 ^ g_INT_01c599dc;
      }
      bVar4 = fVar1 < ((CVector3f *)pfVar6)->y;
      if (fVar1 < *(float *)(&DAT_01c599e4 + uVar3 * 0xc)) {
        bVar4 = bVar4 | 2;
      }
      switch(bVar4) {
      case 0:
        if (g_CVector3f_ARRAY_01c59aa4 + g_INT_01c59aa0 != (CVector3f *)pfVar6) {
          g_CVector3f_ARRAY_01c59aa4[g_INT_01c59aa0].x = ((CVector3f *)pfVar6)->x;
          g_CVector3f_ARRAY_01c59aa4[iVar2].y = ((CVector3f *)pfVar6)->y;
          g_CVector3f_ARRAY_01c59aa4[iVar2].z = ((CVector3f *)pfVar6)->z;
        }
        g_INT_01c59aa0 = g_INT_01c59aa0 + 1;
        break;
      case 1:
        core_dtri_cpp_clipLineToPlane_FUN_00479970
                  ((CVector3f *)(&g_FLOAT_01c599e0 + uVar3 * 3),(CVector3f *)pfVar6,
                   g_CVector3f_ARRAY_01c59aa4 + g_INT_01c59aa0,0.0,1.0,0.0,(double)-fVar1);
        g_INT_01c59aa0 = g_INT_01c59aa0 + 1;
        break;
      case 2:
        if (g_CVector3f_ARRAY_01c59aa4 + g_INT_01c59aa0 != (CVector3f *)pfVar6) {
          g_CVector3f_ARRAY_01c59aa4[g_INT_01c59aa0].x = ((CVector3f *)pfVar6)->x;
          g_CVector3f_ARRAY_01c59aa4[iVar2].y = ((CVector3f *)pfVar6)->y;
          g_CVector3f_ARRAY_01c59aa4[iVar2].z = ((CVector3f *)pfVar6)->z;
        }
        g_INT_01c59aa0 = g_INT_01c59aa0 + 1;
        core_dtri_cpp_clipLineToPlane_FUN_00479970
                  ((CVector3f *)pfVar6,(CVector3f *)(&g_FLOAT_01c599e0 + uVar3 * 3),
                   g_CVector3f_ARRAY_01c59aa4 + g_INT_01c59aa0,0.0,1.0,0.0,(double)-fVar1);
        g_INT_01c59aa0 = g_INT_01c59aa0 + 1;
      }
      iVar7 = iVar7 + 1;
      pfVar6 = (float *)((int)pfVar6 + 0xc);
    } while (iVar7 < g_INT_01c599dc);
    if (2 < g_INT_01c59aa0) {
      fVar1 = bounds_min->y;
      iVar7 = 0;
      if (0 < g_INT_01c59aa0) {
        pCVar8 = g_CVector3f_ARRAY_01c59aa4;
        do {
          iVar2 = g_INT_01c59b64;
          uVar3 = iVar7 + 1;
          if (uVar3 == g_INT_01c59aa0) {
            uVar3 = uVar3 ^ g_INT_01c59aa0;
          }
          bVar4 = pCVar8->y < fVar1;
          if (g_CVector3f_ARRAY_01c59aa4[uVar3].y < fVar1) {
            bVar4 = bVar4 | 2;
          }
          switch(bVar4) {
          case 0:
            if (g_CVector3f_ARRAY_01c59b68 + g_INT_01c59b64 != pCVar8) {
              g_CVector3f_ARRAY_01c59b68[g_INT_01c59b64].x = pCVar8->x;
              g_CVector3f_ARRAY_01c59b68[iVar2].y = pCVar8->y;
              g_CVector3f_ARRAY_01c59b68[iVar2].z = pCVar8->z;
            }
            g_INT_01c59b64 = g_INT_01c59b64 + 1;
            break;
          case 1:
            core_dtri_cpp_clipLineToPlane_FUN_00479970
                      (g_CVector3f_ARRAY_01c59aa4 + uVar3,pCVar8,
                       g_CVector3f_ARRAY_01c59b68 + g_INT_01c59b64,0.0,-1.0,0.0,(double)fVar1);
            g_INT_01c59b64 = g_INT_01c59b64 + 1;
            break;
          case 2:
            if (g_CVector3f_ARRAY_01c59b68 + g_INT_01c59b64 != pCVar8) {
              g_CVector3f_ARRAY_01c59b68[g_INT_01c59b64].x = pCVar8->x;
              g_CVector3f_ARRAY_01c59b68[iVar2].y = pCVar8->y;
              g_CVector3f_ARRAY_01c59b68[iVar2].z = pCVar8->z;
            }
            g_INT_01c59b64 = g_INT_01c59b64 + 1;
            core_dtri_cpp_clipLineToPlane_FUN_00479970
                      (pCVar8,g_CVector3f_ARRAY_01c59aa4 + uVar3,
                       g_CVector3f_ARRAY_01c59b68 + g_INT_01c59b64,0.0,-1.0,0.0,(double)fVar1);
            g_INT_01c59b64 = g_INT_01c59b64 + 1;
          }
          iVar7 = iVar7 + 1;
          pCVar8 = pCVar8 + 1;
        } while (iVar7 < g_INT_01c59aa0);
      }
      if (2 < g_INT_01c59b64) {
        fVar1 = bounds_max->x;
        iVar7 = 0;
        if (0 < g_INT_01c59b64) {
          pCVar8 = g_CVector3f_ARRAY_01c59b68;
          do {
            iVar2 = g_INT_01c59c28;
            uVar3 = iVar7 + 1;
            if (uVar3 == g_INT_01c59b64) {
              uVar3 = uVar3 ^ g_INT_01c59b64;
            }
            pCVar10 = g_CVector3f_ARRAY_01c59b68 + uVar3;
            bVar4 = fVar1 < pCVar8->x;
            if (fVar1 < pCVar10->x) {
              bVar4 = bVar4 | 2;
            }
            switch(bVar4) {
            case 0:
              if (g_CVector3f_ARRAY_01c59c2c + g_INT_01c59c28 != pCVar8) {
                g_CVector3f_ARRAY_01c59c2c[g_INT_01c59c28].x = pCVar8->x;
                g_CVector3f_ARRAY_01c59c2c[iVar2].y = pCVar8->y;
                g_CVector3f_ARRAY_01c59c2c[iVar2].z = pCVar8->z;
              }
              g_INT_01c59c28 = g_INT_01c59c28 + 1;
              break;
            case 1:
              core_dtri_cpp_clipLineToPlane_FUN_00479970
                        (pCVar10,pCVar8,g_CVector3f_ARRAY_01c59c2c + g_INT_01c59c28,1.0,0.0,0.0,
                         (double)-fVar1);
              g_INT_01c59c28 = g_INT_01c59c28 + 1;
              break;
            case 2:
              if (g_CVector3f_ARRAY_01c59c2c + g_INT_01c59c28 != pCVar8) {
                g_CVector3f_ARRAY_01c59c2c[g_INT_01c59c28].x = pCVar8->x;
                g_CVector3f_ARRAY_01c59c2c[iVar2].y = pCVar8->y;
                g_CVector3f_ARRAY_01c59c2c[iVar2].z = pCVar8->z;
              }
              g_INT_01c59c28 = g_INT_01c59c28 + 1;
              core_dtri_cpp_clipLineToPlane_FUN_00479970
                        (pCVar8,pCVar10,g_CVector3f_ARRAY_01c59c2c + g_INT_01c59c28,1.0,0.0,0.0,
                         (double)-fVar1);
              g_INT_01c59c28 = g_INT_01c59c28 + 1;
            }
            iVar7 = iVar7 + 1;
            pCVar8 = pCVar8 + 1;
          } while (iVar7 < g_INT_01c59b64);
        }
        if (2 < g_INT_01c59c28) {
          fVar1 = bounds_min->x;
          iVar7 = 0;
          if (0 < g_INT_01c59c28) {
            pCVar8 = g_CVector3f_ARRAY_01c59c2c;
            do {
              iVar2 = g_INT_01c59cec;
              uVar3 = iVar7 + 1;
              if (uVar3 == g_INT_01c59c28) {
                uVar3 = uVar3 ^ g_INT_01c59c28;
              }
              pCVar10 = g_CVector3f_ARRAY_01c59c2c + uVar3;
              bVar4 = pCVar8->x < fVar1;
              if (pCVar10->x < fVar1) {
                bVar4 = bVar4 | 2;
              }
              switch(bVar4) {
              case 0:
                if (g_CVector3f_ARRAY_01c59cf0 + g_INT_01c59cec != pCVar8) {
                  g_CVector3f_ARRAY_01c59cf0[g_INT_01c59cec].x = pCVar8->x;
                  g_CVector3f_ARRAY_01c59cf0[iVar2].y = pCVar8->y;
                  g_CVector3f_ARRAY_01c59cf0[iVar2].z = pCVar8->z;
                }
                g_INT_01c59cec = g_INT_01c59cec + 1;
                break;
              case 1:
                core_dtri_cpp_clipLineToPlane_FUN_00479970
                          (pCVar10,pCVar8,g_CVector3f_ARRAY_01c59cf0 + g_INT_01c59cec,-1.0,0.0,0.0,
                           (double)fVar1);
                g_INT_01c59cec = g_INT_01c59cec + 1;
                break;
              case 2:
                if (g_CVector3f_ARRAY_01c59cf0 + g_INT_01c59cec != pCVar8) {
                  g_CVector3f_ARRAY_01c59cf0[g_INT_01c59cec].x = pCVar8->x;
                  g_CVector3f_ARRAY_01c59cf0[iVar2].y = pCVar8->y;
                  g_CVector3f_ARRAY_01c59cf0[iVar2].z = pCVar8->z;
                }
                g_INT_01c59cec = g_INT_01c59cec + 1;
                core_dtri_cpp_clipLineToPlane_FUN_00479970
                          (pCVar8,pCVar10,g_CVector3f_ARRAY_01c59cf0 + g_INT_01c59cec,-1.0,0.0,0.0,
                           (double)fVar1);
                g_INT_01c59cec = g_INT_01c59cec + 1;
              }
              iVar7 = iVar7 + 1;
              pCVar8 = pCVar8 + 1;
            } while (iVar7 < g_INT_01c59c28);
          }
          if (2 < g_INT_01c59cec) {
            fVar1 = bounds_min->z;
            iVar7 = 0;
            if (0 < g_INT_01c59cec) {
              pCVar8 = g_CVector3f_ARRAY_01c59cf0;
              do {
                iVar2 = g_INT_01c59db0;
                uVar3 = iVar7 + 1;
                if (uVar3 == g_INT_01c59cec) {
                  uVar3 = uVar3 ^ g_INT_01c59cec;
                }
                bVar4 = pCVar8->z < fVar1;
                if (g_CVector3f_ARRAY_01c59cf0[uVar3].z < fVar1) {
                  bVar4 = bVar4 | 2;
                }
                switch(bVar4) {
                case 0:
                  if (g_CVector3f_ARRAY_01c59db4 + g_INT_01c59db0 != pCVar8) {
                    g_CVector3f_ARRAY_01c59db4[g_INT_01c59db0].x = pCVar8->x;
                    g_CVector3f_ARRAY_01c59db4[iVar2].y = pCVar8->y;
                    g_CVector3f_ARRAY_01c59db4[iVar2].z = pCVar8->z;
                  }
                  g_INT_01c59db0 = g_INT_01c59db0 + 1;
                  break;
                case 1:
                  core_dtri_cpp_clipLineToPlane_FUN_00479970
                            (g_CVector3f_ARRAY_01c59cf0 + uVar3,pCVar8,
                             g_CVector3f_ARRAY_01c59db4 + g_INT_01c59db0,0.0,0.0,-1.0,(double)fVar1)
                  ;
                  g_INT_01c59db0 = g_INT_01c59db0 + 1;
                  break;
                case 2:
                  if (g_CVector3f_ARRAY_01c59db4 + g_INT_01c59db0 != pCVar8) {
                    g_CVector3f_ARRAY_01c59db4[g_INT_01c59db0].x = pCVar8->x;
                    g_CVector3f_ARRAY_01c59db4[iVar2].y = pCVar8->y;
                    g_CVector3f_ARRAY_01c59db4[iVar2].z = pCVar8->z;
                  }
                  g_INT_01c59db0 = g_INT_01c59db0 + 1;
                  core_dtri_cpp_clipLineToPlane_FUN_00479970
                            (pCVar8,g_CVector3f_ARRAY_01c59cf0 + uVar3,
                             g_CVector3f_ARRAY_01c59db4 + g_INT_01c59db0,0.0,0.0,-1.0,(double)fVar1)
                  ;
                  g_INT_01c59db0 = g_INT_01c59db0 + 1;
                }
                iVar7 = iVar7 + 1;
                pCVar8 = pCVar8 + 1;
              } while (iVar7 < g_INT_01c59cec);
            }
            if (2 < g_INT_01c59db0) {
              fVar1 = bounds_max->z;
              iVar7 = 0;
              if (0 < g_INT_01c59db0) {
                pCVar8 = g_CVector3f_ARRAY_01c59db4;
                do {
                  iVar2 = g_INT_01c59e74;
                  uVar3 = iVar7 + 1;
                  if (uVar3 == g_INT_01c59db0) {
                    uVar3 = uVar3 ^ g_INT_01c59db0;
                  }
                  bVar4 = fVar1 < pCVar8->z;
                  if (fVar1 < g_CVector3f_ARRAY_01c59db4[uVar3].z) {
                    bVar4 = bVar4 | 2;
                  }
                  switch(bVar4) {
                  case 0:
                    if (&g_CVector3f_01c59e78 + g_INT_01c59e74 != pCVar8) {
                      (&g_CVector3f_01c59e78)[g_INT_01c59e74].x = pCVar8->x;
                      (&g_CVector3f_01c59e78)[iVar2].y = pCVar8->y;
                      (&g_CVector3f_01c59e78)[iVar2].z = pCVar8->z;
                    }
                    g_INT_01c59e74 = g_INT_01c59e74 + 1;
                    break;
                  case 1:
                    core_dtri_cpp_clipLineToPlane_FUN_00479970
                              (g_CVector3f_ARRAY_01c59db4 + uVar3,pCVar8,
                               &g_CVector3f_01c59e78 + g_INT_01c59e74,0.0,0.0,-1.0,(double)fVar1);
                    g_INT_01c59e74 = g_INT_01c59e74 + 1;
                    break;
                  case 2:
                    if (&g_CVector3f_01c59e78 + g_INT_01c59e74 != pCVar8) {
                      (&g_CVector3f_01c59e78)[g_INT_01c59e74].x = pCVar8->x;
                      (&g_CVector3f_01c59e78)[iVar2].y = pCVar8->y;
                      (&g_CVector3f_01c59e78)[iVar2].z = pCVar8->z;
                    }
                    g_INT_01c59e74 = g_INT_01c59e74 + 1;
                    core_dtri_cpp_clipLineToPlane_FUN_00479970
                              (pCVar8,g_CVector3f_ARRAY_01c59db4 + uVar3,
                               &g_CVector3f_01c59e78 + g_INT_01c59e74,0.0,0.0,-1.0,(double)fVar1);
                    g_INT_01c59e74 = g_INT_01c59e74 + 1;
                  }
                  iVar7 = iVar7 + 1;
                  pCVar8 = pCVar8 + 1;
                } while (iVar7 < g_INT_01c59db0);
              }
              if (2 < g_INT_01c59e74) {
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
