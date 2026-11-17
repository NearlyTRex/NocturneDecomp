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
  
  g_ClipInputVertexCount = 3;
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
    g_ClipOutputVertexCount = 3;
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
    g_ClipBuffer1VertexCount = 0;
    g_ClipBuffer2VertexCount = 0;
    g_ClipBuffer3VertexCount = 0;
    g_ClipBuffer4VertexCount = 0;
    g_ClipBuffer5VertexCount = 0;
    g_ClipOutputVertexCount = 0;
    do {
      iVar2 = g_ClipBuffer1VertexCount;
      uVar4 = iVar8 + 1;
      if (uVar4 == g_ClipInputVertexCount) {
        uVar4 = uVar4 ^ g_ClipInputVertexCount;
      }
      bVar3 = fVar1 < ((CVector3f *)pfVar7)->y;
      if (fVar1 < *(float *)(&DAT_01c3d448 + uVar4 * 0xc)) {
        bVar3 = bVar3 | 2;
      }
      switch(bVar3) {
      case 0:
        if (g_ClipBuffer1Vertices + g_ClipBuffer1VertexCount != (CVector3f *)pfVar7) {
          g_ClipBuffer1Vertices[g_ClipBuffer1VertexCount].x = ((CVector3f *)pfVar7)->x;
          g_ClipBuffer1Vertices[iVar2].y = ((CVector3f *)pfVar7)->y;
          g_ClipBuffer1Vertices[iVar2].z = ((CVector3f *)pfVar7)->z;
        }
        g_ClipBuffer1VertexCount = g_ClipBuffer1VertexCount + 1;
        break;
      case 1:
        core_dtri_cpp_clipLineToPlane_FUN_00490df0
                  ((CVector3f *)(&g_FLOAT_01c3d444 + uVar4 * 3),(CVector3f *)pfVar7,
                   g_ClipBuffer1Vertices + g_ClipBuffer1VertexCount,0.0,1.0,0.0,(double)-fVar1);
        g_ClipBuffer1VertexCount = g_ClipBuffer1VertexCount + 1;
        break;
      case 2:
        if (g_ClipBuffer1Vertices + g_ClipBuffer1VertexCount != (CVector3f *)pfVar7) {
          g_ClipBuffer1Vertices[g_ClipBuffer1VertexCount].x = ((CVector3f *)pfVar7)->x;
          g_ClipBuffer1Vertices[iVar2].y = ((CVector3f *)pfVar7)->y;
          g_ClipBuffer1Vertices[iVar2].z = ((CVector3f *)pfVar7)->z;
        }
        g_ClipBuffer1VertexCount = g_ClipBuffer1VertexCount + 1;
        core_dtri_cpp_clipLineToPlane_FUN_00490df0
                  ((CVector3f *)pfVar7,(CVector3f *)(&g_FLOAT_01c3d444 + uVar4 * 3),
                   g_ClipBuffer1Vertices + g_ClipBuffer1VertexCount,0.0,1.0,0.0,(double)-fVar1);
        g_ClipBuffer1VertexCount = g_ClipBuffer1VertexCount + 1;
      }
      iVar8 = iVar8 + 1;
      pfVar7 = (float *)((int)pfVar7 + 0xc);
    } while (iVar8 < g_ClipInputVertexCount);
    if (2 < g_ClipBuffer1VertexCount) {
      fVar1 = bounds_min->y;
      iVar8 = 0;
      if (0 < g_ClipBuffer1VertexCount) {
        pCVar9 = g_ClipBuffer1Vertices;
        do {
          iVar2 = g_ClipBuffer2VertexCount;
          uVar4 = iVar8 + 1;
          if (uVar4 == g_ClipBuffer1VertexCount) {
            uVar4 = uVar4 ^ g_ClipBuffer1VertexCount;
          }
          bVar3 = pCVar9->y < fVar1;
          if (g_ClipBuffer1Vertices[uVar4].y < fVar1) {
            bVar3 = bVar3 | 2;
          }
          switch(bVar3) {
          case 0:
            if (g_ClipBuffer2Vertices + g_ClipBuffer2VertexCount != pCVar9) {
              g_ClipBuffer2Vertices[g_ClipBuffer2VertexCount].x = pCVar9->x;
              g_ClipBuffer2Vertices[iVar2].y = pCVar9->y;
              g_ClipBuffer2Vertices[iVar2].z = pCVar9->z;
            }
            g_ClipBuffer2VertexCount = g_ClipBuffer2VertexCount + 1;
            break;
          case 1:
            core_dtri_cpp_clipLineToPlane_FUN_00490df0
                      (g_ClipBuffer1Vertices + uVar4,pCVar9,
                       g_ClipBuffer2Vertices + g_ClipBuffer2VertexCount,0.0,-1.0,0.0,(double)fVar1);
            g_ClipBuffer2VertexCount = g_ClipBuffer2VertexCount + 1;
            break;
          case 2:
            if (g_ClipBuffer2Vertices + g_ClipBuffer2VertexCount != pCVar9) {
              g_ClipBuffer2Vertices[g_ClipBuffer2VertexCount].x = pCVar9->x;
              g_ClipBuffer2Vertices[iVar2].y = pCVar9->y;
              g_ClipBuffer2Vertices[iVar2].z = pCVar9->z;
            }
            g_ClipBuffer2VertexCount = g_ClipBuffer2VertexCount + 1;
            core_dtri_cpp_clipLineToPlane_FUN_00490df0
                      (pCVar9,g_ClipBuffer1Vertices + uVar4,
                       g_ClipBuffer2Vertices + g_ClipBuffer2VertexCount,0.0,-1.0,0.0,(double)fVar1);
            g_ClipBuffer2VertexCount = g_ClipBuffer2VertexCount + 1;
          }
          iVar8 = iVar8 + 1;
          pCVar9 = pCVar9 + 1;
        } while (iVar8 < g_ClipBuffer1VertexCount);
      }
      if (2 < g_ClipBuffer2VertexCount) {
        fVar1 = bounds_max->x;
        iVar8 = 0;
        if (0 < g_ClipBuffer2VertexCount) {
          pCVar9 = g_ClipBuffer2Vertices;
          do {
            iVar2 = g_ClipBuffer3VertexCount;
            uVar4 = iVar8 + 1;
            if (uVar4 == g_ClipBuffer2VertexCount) {
              uVar4 = uVar4 ^ g_ClipBuffer2VertexCount;
            }
            pCVar11 = g_ClipBuffer2Vertices + uVar4;
            bVar3 = fVar1 < pCVar9->x;
            if (fVar1 < pCVar11->x) {
              bVar3 = bVar3 | 2;
            }
            switch(bVar3) {
            case 0:
              if (g_ClipBuffer3Vertices + g_ClipBuffer3VertexCount != pCVar9) {
                g_ClipBuffer3Vertices[g_ClipBuffer3VertexCount].x = pCVar9->x;
                g_ClipBuffer3Vertices[iVar2].y = pCVar9->y;
                g_ClipBuffer3Vertices[iVar2].z = pCVar9->z;
              }
              g_ClipBuffer3VertexCount = g_ClipBuffer3VertexCount + 1;
              break;
            case 1:
              core_dtri_cpp_clipLineToPlane_FUN_00490df0
                        (pCVar11,pCVar9,g_ClipBuffer3Vertices + g_ClipBuffer3VertexCount,1.0,0.0,0.0
                         ,(double)-fVar1);
              g_ClipBuffer3VertexCount = g_ClipBuffer3VertexCount + 1;
              break;
            case 2:
              if (g_ClipBuffer3Vertices + g_ClipBuffer3VertexCount != pCVar9) {
                g_ClipBuffer3Vertices[g_ClipBuffer3VertexCount].x = pCVar9->x;
                g_ClipBuffer3Vertices[iVar2].y = pCVar9->y;
                g_ClipBuffer3Vertices[iVar2].z = pCVar9->z;
              }
              g_ClipBuffer3VertexCount = g_ClipBuffer3VertexCount + 1;
              core_dtri_cpp_clipLineToPlane_FUN_00490df0
                        (pCVar9,pCVar11,g_ClipBuffer3Vertices + g_ClipBuffer3VertexCount,1.0,0.0,0.0
                         ,(double)-fVar1);
              g_ClipBuffer3VertexCount = g_ClipBuffer3VertexCount + 1;
            }
            iVar8 = iVar8 + 1;
            pCVar9 = pCVar9 + 1;
          } while (iVar8 < g_ClipBuffer2VertexCount);
        }
        if (2 < g_ClipBuffer3VertexCount) {
          fVar1 = bounds_min->x;
          iVar8 = 0;
          if (0 < g_ClipBuffer3VertexCount) {
            pCVar9 = g_ClipBuffer3Vertices;
            do {
              iVar2 = g_ClipBuffer4VertexCount;
              uVar4 = iVar8 + 1;
              if (uVar4 == g_ClipBuffer3VertexCount) {
                uVar4 = uVar4 ^ g_ClipBuffer3VertexCount;
              }
              pCVar11 = g_ClipBuffer3Vertices + uVar4;
              bVar3 = pCVar9->x < fVar1;
              if (pCVar11->x < fVar1) {
                bVar3 = bVar3 | 2;
              }
              switch(bVar3) {
              case 0:
                if (g_ClipBuffer4Vertices + g_ClipBuffer4VertexCount != pCVar9) {
                  g_ClipBuffer4Vertices[g_ClipBuffer4VertexCount].x = pCVar9->x;
                  g_ClipBuffer4Vertices[iVar2].y = pCVar9->y;
                  g_ClipBuffer4Vertices[iVar2].z = pCVar9->z;
                }
                g_ClipBuffer4VertexCount = g_ClipBuffer4VertexCount + 1;
                break;
              case 1:
                core_dtri_cpp_clipLineToPlane_FUN_00490df0
                          (pCVar11,pCVar9,g_ClipBuffer4Vertices + g_ClipBuffer4VertexCount,-1.0,0.0,
                           0.0,(double)fVar1);
                g_ClipBuffer4VertexCount = g_ClipBuffer4VertexCount + 1;
                break;
              case 2:
                if (g_ClipBuffer4Vertices + g_ClipBuffer4VertexCount != pCVar9) {
                  g_ClipBuffer4Vertices[g_ClipBuffer4VertexCount].x = pCVar9->x;
                  g_ClipBuffer4Vertices[iVar2].y = pCVar9->y;
                  g_ClipBuffer4Vertices[iVar2].z = pCVar9->z;
                }
                g_ClipBuffer4VertexCount = g_ClipBuffer4VertexCount + 1;
                core_dtri_cpp_clipLineToPlane_FUN_00490df0
                          (pCVar9,pCVar11,g_ClipBuffer4Vertices + g_ClipBuffer4VertexCount,-1.0,0.0,
                           0.0,(double)fVar1);
                g_ClipBuffer4VertexCount = g_ClipBuffer4VertexCount + 1;
              }
              iVar8 = iVar8 + 1;
              pCVar9 = pCVar9 + 1;
            } while (iVar8 < g_ClipBuffer3VertexCount);
          }
          if (2 < g_ClipBuffer4VertexCount) {
            fVar1 = bounds_min->z;
            iVar8 = 0;
            if (0 < g_ClipBuffer4VertexCount) {
              pCVar9 = g_ClipBuffer4Vertices;
              do {
                iVar2 = g_ClipBuffer5VertexCount;
                uVar4 = iVar8 + 1;
                if (uVar4 == g_ClipBuffer4VertexCount) {
                  uVar4 = uVar4 ^ g_ClipBuffer4VertexCount;
                }
                bVar3 = pCVar9->z < fVar1;
                if (g_ClipBuffer4Vertices[uVar4].z < fVar1) {
                  bVar3 = bVar3 | 2;
                }
                switch(bVar3) {
                case 0:
                  if (g_ClipBuffer5Vertices + g_ClipBuffer5VertexCount != pCVar9) {
                    g_ClipBuffer5Vertices[g_ClipBuffer5VertexCount].x = pCVar9->x;
                    g_ClipBuffer5Vertices[iVar2].y = pCVar9->y;
                    g_ClipBuffer5Vertices[iVar2].z = pCVar9->z;
                  }
                  g_ClipBuffer5VertexCount = g_ClipBuffer5VertexCount + 1;
                  break;
                case 1:
                  core_dtri_cpp_clipLineToPlane_FUN_00490df0
                            (g_ClipBuffer4Vertices + uVar4,pCVar9,
                             g_ClipBuffer5Vertices + g_ClipBuffer5VertexCount,0.0,0.0,-1.0,
                             (double)fVar1);
                  g_ClipBuffer5VertexCount = g_ClipBuffer5VertexCount + 1;
                  break;
                case 2:
                  if (g_ClipBuffer5Vertices + g_ClipBuffer5VertexCount != pCVar9) {
                    g_ClipBuffer5Vertices[g_ClipBuffer5VertexCount].x = pCVar9->x;
                    g_ClipBuffer5Vertices[iVar2].y = pCVar9->y;
                    g_ClipBuffer5Vertices[iVar2].z = pCVar9->z;
                  }
                  g_ClipBuffer5VertexCount = g_ClipBuffer5VertexCount + 1;
                  core_dtri_cpp_clipLineToPlane_FUN_00490df0
                            (pCVar9,g_ClipBuffer4Vertices + uVar4,
                             g_ClipBuffer5Vertices + g_ClipBuffer5VertexCount,0.0,0.0,-1.0,
                             (double)fVar1);
                  g_ClipBuffer5VertexCount = g_ClipBuffer5VertexCount + 1;
                }
                iVar8 = iVar8 + 1;
                pCVar9 = pCVar9 + 1;
              } while (iVar8 < g_ClipBuffer4VertexCount);
            }
            if (2 < g_ClipBuffer5VertexCount) {
              fVar1 = bounds_max->z;
              iVar8 = 0;
              if (0 < g_ClipBuffer5VertexCount) {
                pCVar9 = g_ClipBuffer5Vertices;
                do {
                  iVar2 = g_ClipOutputVertexCount;
                  uVar4 = iVar8 + 1;
                  if (uVar4 == g_ClipBuffer5VertexCount) {
                    uVar4 = uVar4 ^ g_ClipBuffer5VertexCount;
                  }
                  bVar3 = fVar1 < pCVar9->z;
                  if (fVar1 < g_ClipBuffer5Vertices[uVar4].z) {
                    bVar3 = bVar3 | 2;
                  }
                  switch(bVar3) {
                  case 0:
                    iVar5 = g_ClipOutputVertexCount * 0xc;
                    if ((CVector3f *)(&g_FLOAT_01c3d8dc + g_ClipOutputVertexCount * 3) != pCVar9) {
                      ((CVector3f *)(&g_FLOAT_01c3d8dc + g_ClipOutputVertexCount * 3))->x =
                           pCVar9->x;
                      *(float *)(&DAT_01c3d8e0 + iVar5) = pCVar9->y;
                      (&g_FLOAT_01c3d8e4)[iVar2 * 3] = pCVar9->z;
                    }
                    g_ClipOutputVertexCount = g_ClipOutputVertexCount + 1;
                    break;
                  case 1:
                    core_dtri_cpp_clipLineToPlane_FUN_00490df0
                              (g_ClipBuffer5Vertices + uVar4,pCVar9,
                               (CVector3f *)(&g_FLOAT_01c3d8dc + g_ClipOutputVertexCount * 3),0.0,
                               0.0,-1.0,(double)fVar1);
                    g_ClipOutputVertexCount = g_ClipOutputVertexCount + 1;
                    break;
                  case 2:
                    iVar5 = g_ClipOutputVertexCount * 0xc;
                    if ((CVector3f *)(&g_FLOAT_01c3d8dc + g_ClipOutputVertexCount * 3) != pCVar9) {
                      ((CVector3f *)(&g_FLOAT_01c3d8dc + g_ClipOutputVertexCount * 3))->x =
                           pCVar9->x;
                      *(float *)(&DAT_01c3d8e0 + iVar5) = pCVar9->y;
                      (&g_FLOAT_01c3d8e4)[iVar2 * 3] = pCVar9->z;
                    }
                    g_ClipOutputVertexCount = g_ClipOutputVertexCount + 1;
                    core_dtri_cpp_clipLineToPlane_FUN_00490df0
                              (pCVar9,g_ClipBuffer5Vertices + uVar4,
                               (CVector3f *)(&g_FLOAT_01c3d8dc + g_ClipOutputVertexCount * 3),0.0,
                               0.0,-1.0,(double)fVar1);
                    g_ClipOutputVertexCount = g_ClipOutputVertexCount + 1;
                  }
                  iVar8 = iVar8 + 1;
                  pCVar9 = pCVar9 + 1;
                } while (iVar8 < g_ClipBuffer5VertexCount);
              }
              if (2 < g_ClipOutputVertexCount) {
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
