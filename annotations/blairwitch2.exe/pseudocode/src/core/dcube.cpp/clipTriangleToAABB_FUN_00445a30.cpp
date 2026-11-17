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
    g_CubeClippedTriangleCount = 3;
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
    g_CubeClipStage2Count = 0;
    g_CubeClipStage3Count = 0;
    g_INT_01510b5c = 0;
    g_CubeClipStage5Count = 0;
    g_CubeClippedTriangleCount = 0;
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
        if (g_ClipStageMaxYBuffer + g_INT_01510910 != (CVector3f *)pfVar9) {
          g_ClipStageMaxYBuffer[g_INT_01510910].x = ((CVector3f *)pfVar9)->x;
          g_ClipStageMaxYBuffer[iVar5].y = ((CVector3f *)pfVar9)->y;
          g_ClipStageMaxYBuffer[iVar5].z = ((CVector3f *)pfVar9)->z;
        }
        g_INT_01510910 = g_INT_01510910 + 1;
        break;
      case 1:
        core_dcube_cpp_clipEdgeToPlane_FUN_00443db0
                  ((CVector3f *)(&g_FLOAT_01510850 + uVar4 * 3),(CVector3f *)pfVar9,
                   g_ClipStageMaxYBuffer + g_INT_01510910,0.0,1.0,0.0,(double)-fVar1);
        g_INT_01510910 = g_INT_01510910 + 1;
        break;
      case 2:
        if (g_ClipStageMaxYBuffer + g_INT_01510910 != (CVector3f *)pfVar9) {
          g_ClipStageMaxYBuffer[g_INT_01510910].x = ((CVector3f *)pfVar9)->x;
          g_ClipStageMaxYBuffer[iVar5].y = ((CVector3f *)pfVar9)->y;
          g_ClipStageMaxYBuffer[iVar5].z = ((CVector3f *)pfVar9)->z;
        }
        g_INT_01510910 = g_INT_01510910 + 1;
        core_dcube_cpp_clipEdgeToPlane_FUN_00443db0
                  ((CVector3f *)pfVar9,(CVector3f *)(&g_FLOAT_01510850 + uVar4 * 3),
                   g_ClipStageMaxYBuffer + g_INT_01510910,0.0,1.0,0.0,(double)-fVar1);
        g_INT_01510910 = g_INT_01510910 + 1;
      }
      iVar7 = iVar7 + 1;
      pfVar9 = (float *)((int)pfVar9 + 0xc);
    } while (iVar7 < g_INT_0151084c);
    if (2 < g_INT_01510910) {
      fVar1 = aabb_min->y;
      iVar7 = 0;
      if (0 < g_INT_01510910) {
        pCVar8 = g_ClipStageMaxYBuffer;
        do {
          uVar2 = g_CubeClipStage2Count;
          uVar4 = iVar7 + 1;
          if (uVar4 == g_INT_01510910) {
            uVar4 = uVar4 ^ g_INT_01510910;
          }
          bVar3 = pCVar8->y < fVar1;
          if (g_ClipStageMaxYBuffer[uVar4].y < fVar1) {
            bVar3 = bVar3 | 2;
          }
          switch(bVar3) {
          case 0:
            if (g_ClipStageMinYBuffer + g_CubeClipStage2Count != pCVar8) {
              g_ClipStageMinYBuffer[g_CubeClipStage2Count].x = pCVar8->x;
              g_ClipStageMinYBuffer[uVar2].y = pCVar8->y;
              g_ClipStageMinYBuffer[uVar2].z = pCVar8->z;
            }
            g_CubeClipStage2Count = g_CubeClipStage2Count + 1;
            break;
          case 1:
            core_dcube_cpp_clipEdgeToPlane_FUN_00443db0
                      (g_ClipStageMaxYBuffer + uVar4,pCVar8,
                       g_ClipStageMinYBuffer + g_CubeClipStage2Count,0.0,-1.0,0.0,(double)fVar1);
            g_CubeClipStage2Count = g_CubeClipStage2Count + 1;
            break;
          case 2:
            if (g_ClipStageMinYBuffer + g_CubeClipStage2Count != pCVar8) {
              g_ClipStageMinYBuffer[g_CubeClipStage2Count].x = pCVar8->x;
              g_ClipStageMinYBuffer[uVar2].y = pCVar8->y;
              g_ClipStageMinYBuffer[uVar2].z = pCVar8->z;
            }
            g_CubeClipStage2Count = g_CubeClipStage2Count + 1;
            core_dcube_cpp_clipEdgeToPlane_FUN_00443db0
                      (pCVar8,g_ClipStageMaxYBuffer + uVar4,
                       g_ClipStageMinYBuffer + g_CubeClipStage2Count,0.0,-1.0,0.0,(double)fVar1);
            g_CubeClipStage2Count = g_CubeClipStage2Count + 1;
          }
          iVar7 = iVar7 + 1;
          pCVar8 = pCVar8 + 1;
        } while (iVar7 < g_INT_01510910);
      }
      if (2 < (int)g_CubeClipStage2Count) {
        fVar1 = aabb_max->x;
        iVar7 = 0;
        if (0 < (int)g_CubeClipStage2Count) {
          pCVar8 = g_ClipStageMinYBuffer;
          do {
            uVar2 = g_CubeClipStage3Count;
            uVar4 = iVar7 + 1;
            if (uVar4 == g_CubeClipStage2Count) {
              uVar4 = uVar4 ^ g_CubeClipStage2Count;
            }
            pCVar11 = g_ClipStageMinYBuffer + uVar4;
            bVar3 = fVar1 < pCVar8->x;
            if (fVar1 < pCVar11->x) {
              bVar3 = bVar3 | 2;
            }
            switch(bVar3) {
            case 0:
              if (g_ClipStageMaxXBuffer + g_CubeClipStage3Count != pCVar8) {
                g_ClipStageMaxXBuffer[g_CubeClipStage3Count].x = pCVar8->x;
                g_ClipStageMaxXBuffer[uVar2].y = pCVar8->y;
                g_ClipStageMaxXBuffer[uVar2].z = pCVar8->z;
              }
              g_CubeClipStage3Count = g_CubeClipStage3Count + 1;
              break;
            case 1:
              core_dcube_cpp_clipEdgeToPlane_FUN_00443db0
                        (pCVar11,pCVar8,g_ClipStageMaxXBuffer + g_CubeClipStage3Count,1.0,0.0,0.0,
                         (double)-fVar1);
              g_CubeClipStage3Count = g_CubeClipStage3Count + 1;
              break;
            case 2:
              if (g_ClipStageMaxXBuffer + g_CubeClipStage3Count != pCVar8) {
                g_ClipStageMaxXBuffer[g_CubeClipStage3Count].x = pCVar8->x;
                g_ClipStageMaxXBuffer[uVar2].y = pCVar8->y;
                g_ClipStageMaxXBuffer[uVar2].z = pCVar8->z;
              }
              g_CubeClipStage3Count = g_CubeClipStage3Count + 1;
              core_dcube_cpp_clipEdgeToPlane_FUN_00443db0
                        (pCVar8,pCVar11,g_ClipStageMaxXBuffer + g_CubeClipStage3Count,1.0,0.0,0.0,
                         (double)-fVar1);
              g_CubeClipStage3Count = g_CubeClipStage3Count + 1;
            }
            iVar7 = iVar7 + 1;
            pCVar8 = pCVar8 + 1;
          } while (iVar7 < (int)g_CubeClipStage2Count);
        }
        if (2 < (int)g_CubeClipStage3Count) {
          fVar1 = aabb_min->x;
          iVar7 = 0;
          if (0 < (int)g_CubeClipStage3Count) {
            pCVar8 = g_ClipStageMaxXBuffer;
            do {
              iVar5 = g_INT_01510b5c;
              uVar4 = iVar7 + 1;
              if (uVar4 == g_CubeClipStage3Count) {
                uVar4 = uVar4 ^ g_CubeClipStage3Count;
              }
              pCVar11 = g_ClipStageMaxXBuffer + uVar4;
              bVar3 = pCVar8->x < fVar1;
              if (pCVar11->x < fVar1) {
                bVar3 = bVar3 | 2;
              }
              switch(bVar3) {
              case 0:
                if (g_ClipStageMinXBuffer + g_INT_01510b5c != pCVar8) {
                  g_ClipStageMinXBuffer[g_INT_01510b5c].x = pCVar8->x;
                  g_ClipStageMinXBuffer[iVar5].y = pCVar8->y;
                  g_ClipStageMinXBuffer[iVar5].z = pCVar8->z;
                }
                g_INT_01510b5c = g_INT_01510b5c + 1;
                break;
              case 1:
                core_dcube_cpp_clipEdgeToPlane_FUN_00443db0
                          (pCVar11,pCVar8,g_ClipStageMinXBuffer + g_INT_01510b5c,-1.0,0.0,0.0,
                           (double)fVar1);
                g_INT_01510b5c = g_INT_01510b5c + 1;
                break;
              case 2:
                if (g_ClipStageMinXBuffer + g_INT_01510b5c != pCVar8) {
                  g_ClipStageMinXBuffer[g_INT_01510b5c].x = pCVar8->x;
                  g_ClipStageMinXBuffer[iVar5].y = pCVar8->y;
                  g_ClipStageMinXBuffer[iVar5].z = pCVar8->z;
                }
                g_INT_01510b5c = g_INT_01510b5c + 1;
                core_dcube_cpp_clipEdgeToPlane_FUN_00443db0
                          (pCVar8,pCVar11,g_ClipStageMinXBuffer + g_INT_01510b5c,-1.0,0.0,0.0,
                           (double)fVar1);
                g_INT_01510b5c = g_INT_01510b5c + 1;
              }
              iVar7 = iVar7 + 1;
              pCVar8 = pCVar8 + 1;
            } while (iVar7 < (int)g_CubeClipStage3Count);
          }
          if (2 < g_INT_01510b5c) {
            fVar1 = aabb_min->z;
            iVar7 = 0;
            if (0 < g_INT_01510b5c) {
              pCVar8 = g_ClipStageMinXBuffer;
              do {
                uVar2 = g_CubeClipStage5Count;
                uVar4 = iVar7 + 1;
                if (uVar4 == g_INT_01510b5c) {
                  uVar4 = uVar4 ^ g_INT_01510b5c;
                }
                bVar3 = pCVar8->z < fVar1;
                if (g_ClipStageMinXBuffer[uVar4].z < fVar1) {
                  bVar3 = bVar3 | 2;
                }
                switch(bVar3) {
                case 0:
                  if (g_ClipStageMinZBuffer + g_CubeClipStage5Count != pCVar8) {
                    g_ClipStageMinZBuffer[g_CubeClipStage5Count].x = pCVar8->x;
                    g_ClipStageMinZBuffer[uVar2].y = pCVar8->y;
                    g_ClipStageMinZBuffer[uVar2].z = pCVar8->z;
                  }
                  g_CubeClipStage5Count = g_CubeClipStage5Count + 1;
                  break;
                case 1:
                  core_dcube_cpp_clipEdgeToPlane_FUN_00443db0
                            (g_ClipStageMinXBuffer + uVar4,pCVar8,
                             g_ClipStageMinZBuffer + g_CubeClipStage5Count,0.0,0.0,-1.0,
                             (double)fVar1);
                  g_CubeClipStage5Count = g_CubeClipStage5Count + 1;
                  break;
                case 2:
                  if (g_ClipStageMinZBuffer + g_CubeClipStage5Count != pCVar8) {
                    g_ClipStageMinZBuffer[g_CubeClipStage5Count].x = pCVar8->x;
                    g_ClipStageMinZBuffer[uVar2].y = pCVar8->y;
                    g_ClipStageMinZBuffer[uVar2].z = pCVar8->z;
                  }
                  g_CubeClipStage5Count = g_CubeClipStage5Count + 1;
                  core_dcube_cpp_clipEdgeToPlane_FUN_00443db0
                            (pCVar8,g_ClipStageMinXBuffer + uVar4,
                             g_ClipStageMinZBuffer + g_CubeClipStage5Count,0.0,0.0,-1.0,
                             (double)fVar1);
                  g_CubeClipStage5Count = g_CubeClipStage5Count + 1;
                }
                iVar7 = iVar7 + 1;
                pCVar8 = pCVar8 + 1;
              } while (iVar7 < g_INT_01510b5c);
            }
            if (2 < (int)g_CubeClipStage5Count) {
              fVar1 = aabb_max->z;
              iVar7 = 0;
              if (0 < (int)g_CubeClipStage5Count) {
                pCVar8 = g_ClipStageMinZBuffer;
                do {
                  uVar2 = g_CubeClippedTriangleCount;
                  uVar4 = iVar7 + 1;
                  if (uVar4 == g_CubeClipStage5Count) {
                    uVar4 = uVar4 ^ g_CubeClipStage5Count;
                  }
                  bVar3 = fVar1 < pCVar8->z;
                  if (fVar1 < g_ClipStageMinZBuffer[uVar4].z) {
                    bVar3 = bVar3 | 2;
                  }
                  switch(bVar3) {
                  case 0:
                    iVar5 = g_CubeClippedTriangleCount * 0xc;
                    if ((CVector3f *)(&g_FLOAT_01510ce8 + g_CubeClippedTriangleCount * 3) != pCVar8)
                    {
                      ((CVector3f *)(&g_FLOAT_01510ce8 + g_CubeClippedTriangleCount * 3))->x =
                           pCVar8->x;
                      *(float *)(&DAT_01510cec + iVar5) = pCVar8->y;
                      (&g_FLOAT_01510cf0)[uVar2 * 3] = pCVar8->z;
                    }
                    g_CubeClippedTriangleCount = g_CubeClippedTriangleCount + 1;
                    break;
                  case 1:
                    core_dcube_cpp_clipEdgeToPlane_FUN_00443db0
                              (g_ClipStageMinZBuffer + uVar4,pCVar8,
                               (CVector3f *)(&g_FLOAT_01510ce8 + g_CubeClippedTriangleCount * 3),0.0
                               ,0.0,-1.0,(double)fVar1);
                    g_CubeClippedTriangleCount = g_CubeClippedTriangleCount + 1;
                    break;
                  case 2:
                    iVar5 = g_CubeClippedTriangleCount * 0xc;
                    if ((CVector3f *)(&g_FLOAT_01510ce8 + g_CubeClippedTriangleCount * 3) != pCVar8)
                    {
                      ((CVector3f *)(&g_FLOAT_01510ce8 + g_CubeClippedTriangleCount * 3))->x =
                           pCVar8->x;
                      *(float *)(&DAT_01510cec + iVar5) = pCVar8->y;
                      (&g_FLOAT_01510cf0)[uVar2 * 3] = pCVar8->z;
                    }
                    g_CubeClippedTriangleCount = g_CubeClippedTriangleCount + 1;
                    core_dcube_cpp_clipEdgeToPlane_FUN_00443db0
                              (pCVar8,g_ClipStageMinZBuffer + uVar4,
                               (CVector3f *)(&g_FLOAT_01510ce8 + g_CubeClippedTriangleCount * 3),0.0
                               ,0.0,-1.0,(double)fVar1);
                    g_CubeClippedTriangleCount = g_CubeClippedTriangleCount + 1;
                  }
                  iVar7 = iVar7 + 1;
                  pCVar8 = pCVar8 + 1;
                } while (iVar7 < (int)g_CubeClipStage5Count);
              }
              if (2 < (int)g_CubeClippedTriangleCount) {
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
