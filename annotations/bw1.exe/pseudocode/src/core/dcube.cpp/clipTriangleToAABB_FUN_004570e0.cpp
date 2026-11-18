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
    g_CubeClippedTriangleCount = 3;
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
    g_CubeClipStage2Count = 0;
    g_CubeClipStage3Count = 0;
    g_INT_0152c05c = 0;
    g_CubeClipStage5Count = 0;
    g_CubeClippedTriangleCount = 0;
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
        if (g_ClipStageMaxYBuffer + g_INT_0152be10 != (CVector3f *)pfVar9) {
          g_ClipStageMaxYBuffer[g_INT_0152be10].x = ((CVector3f *)pfVar9)->x;
          g_ClipStageMaxYBuffer[iVar5].y = ((CVector3f *)pfVar9)->y;
          g_ClipStageMaxYBuffer[iVar5].z = ((CVector3f *)pfVar9)->z;
        }
        g_INT_0152be10 = g_INT_0152be10 + 1;
        break;
      case 1:
        core_dcube_cpp_clipEdgeToPlane_FUN_00455460
                  ((CVector3f *)(&g_FLOAT_0152bd50 + uVar4 * 3),(CVector3f *)pfVar9,
                   g_ClipStageMaxYBuffer + g_INT_0152be10,0.0,1.0,0.0,(double)-fVar1);
        g_INT_0152be10 = g_INT_0152be10 + 1;
        break;
      case 2:
        if (g_ClipStageMaxYBuffer + g_INT_0152be10 != (CVector3f *)pfVar9) {
          g_ClipStageMaxYBuffer[g_INT_0152be10].x = ((CVector3f *)pfVar9)->x;
          g_ClipStageMaxYBuffer[iVar5].y = ((CVector3f *)pfVar9)->y;
          g_ClipStageMaxYBuffer[iVar5].z = ((CVector3f *)pfVar9)->z;
        }
        g_INT_0152be10 = g_INT_0152be10 + 1;
        core_dcube_cpp_clipEdgeToPlane_FUN_00455460
                  ((CVector3f *)pfVar9,(CVector3f *)(&g_FLOAT_0152bd50 + uVar4 * 3),
                   g_ClipStageMaxYBuffer + g_INT_0152be10,0.0,1.0,0.0,(double)-fVar1);
        g_INT_0152be10 = g_INT_0152be10 + 1;
      }
      iVar7 = iVar7 + 1;
      pfVar9 = (float *)((int)pfVar9 + 0xc);
    } while (iVar7 < g_INT_0152bd4c);
    if (2 < g_INT_0152be10) {
      fVar1 = aabb_min->y;
      iVar7 = 0;
      if (0 < g_INT_0152be10) {
        pCVar8 = g_ClipStageMaxYBuffer;
        do {
          uVar2 = g_CubeClipStage2Count;
          uVar4 = iVar7 + 1;
          if (uVar4 == g_INT_0152be10) {
            uVar4 = uVar4 ^ g_INT_0152be10;
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
            core_dcube_cpp_clipEdgeToPlane_FUN_00455460
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
            core_dcube_cpp_clipEdgeToPlane_FUN_00455460
                      (pCVar8,g_ClipStageMaxYBuffer + uVar4,
                       g_ClipStageMinYBuffer + g_CubeClipStage2Count,0.0,-1.0,0.0,(double)fVar1);
            g_CubeClipStage2Count = g_CubeClipStage2Count + 1;
          }
          iVar7 = iVar7 + 1;
          pCVar8 = pCVar8 + 1;
        } while (iVar7 < g_INT_0152be10);
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
              core_dcube_cpp_clipEdgeToPlane_FUN_00455460
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
              core_dcube_cpp_clipEdgeToPlane_FUN_00455460
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
              iVar5 = g_INT_0152c05c;
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
                if (g_ClipStageMinXBuffer + g_INT_0152c05c != pCVar8) {
                  g_ClipStageMinXBuffer[g_INT_0152c05c].x = pCVar8->x;
                  g_ClipStageMinXBuffer[iVar5].y = pCVar8->y;
                  g_ClipStageMinXBuffer[iVar5].z = pCVar8->z;
                }
                g_INT_0152c05c = g_INT_0152c05c + 1;
                break;
              case 1:
                core_dcube_cpp_clipEdgeToPlane_FUN_00455460
                          (pCVar11,pCVar8,g_ClipStageMinXBuffer + g_INT_0152c05c,-1.0,0.0,0.0,
                           (double)fVar1);
                g_INT_0152c05c = g_INT_0152c05c + 1;
                break;
              case 2:
                if (g_ClipStageMinXBuffer + g_INT_0152c05c != pCVar8) {
                  g_ClipStageMinXBuffer[g_INT_0152c05c].x = pCVar8->x;
                  g_ClipStageMinXBuffer[iVar5].y = pCVar8->y;
                  g_ClipStageMinXBuffer[iVar5].z = pCVar8->z;
                }
                g_INT_0152c05c = g_INT_0152c05c + 1;
                core_dcube_cpp_clipEdgeToPlane_FUN_00455460
                          (pCVar8,pCVar11,g_ClipStageMinXBuffer + g_INT_0152c05c,-1.0,0.0,0.0,
                           (double)fVar1);
                g_INT_0152c05c = g_INT_0152c05c + 1;
              }
              iVar7 = iVar7 + 1;
              pCVar8 = pCVar8 + 1;
            } while (iVar7 < (int)g_CubeClipStage3Count);
          }
          if (2 < g_INT_0152c05c) {
            fVar1 = aabb_min->z;
            iVar7 = 0;
            if (0 < g_INT_0152c05c) {
              pCVar8 = g_ClipStageMinXBuffer;
              do {
                uVar2 = g_CubeClipStage5Count;
                uVar4 = iVar7 + 1;
                if (uVar4 == g_INT_0152c05c) {
                  uVar4 = uVar4 ^ g_INT_0152c05c;
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
                  core_dcube_cpp_clipEdgeToPlane_FUN_00455460
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
                  core_dcube_cpp_clipEdgeToPlane_FUN_00455460
                            (pCVar8,g_ClipStageMinXBuffer + uVar4,
                             g_ClipStageMinZBuffer + g_CubeClipStage5Count,0.0,0.0,-1.0,
                             (double)fVar1);
                  g_CubeClipStage5Count = g_CubeClipStage5Count + 1;
                }
                iVar7 = iVar7 + 1;
                pCVar8 = pCVar8 + 1;
              } while (iVar7 < g_INT_0152c05c);
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
                    if ((CVector3f *)(&g_FLOAT_0152c1e8 + g_CubeClippedTriangleCount * 3) != pCVar8)
                    {
                      ((CVector3f *)(&g_FLOAT_0152c1e8 + g_CubeClippedTriangleCount * 3))->x =
                           pCVar8->x;
                      *(float *)(&DAT_0152c1ec + iVar5) = pCVar8->y;
                      (&g_FLOAT_0152c1f0)[uVar2 * 3] = pCVar8->z;
                    }
                    g_CubeClippedTriangleCount = g_CubeClippedTriangleCount + 1;
                    break;
                  case 1:
                    core_dcube_cpp_clipEdgeToPlane_FUN_00455460
                              (g_ClipStageMinZBuffer + uVar4,pCVar8,
                               (CVector3f *)(&g_FLOAT_0152c1e8 + g_CubeClippedTriangleCount * 3),0.0
                               ,0.0,-1.0,(double)fVar1);
                    g_CubeClippedTriangleCount = g_CubeClippedTriangleCount + 1;
                    break;
                  case 2:
                    iVar5 = g_CubeClippedTriangleCount * 0xc;
                    if ((CVector3f *)(&g_FLOAT_0152c1e8 + g_CubeClippedTriangleCount * 3) != pCVar8)
                    {
                      ((CVector3f *)(&g_FLOAT_0152c1e8 + g_CubeClippedTriangleCount * 3))->x =
                           pCVar8->x;
                      *(float *)(&DAT_0152c1ec + iVar5) = pCVar8->y;
                      (&g_FLOAT_0152c1f0)[uVar2 * 3] = pCVar8->z;
                    }
                    g_CubeClippedTriangleCount = g_CubeClippedTriangleCount + 1;
                    core_dcube_cpp_clipEdgeToPlane_FUN_00455460
                              (pCVar8,g_ClipStageMinZBuffer + uVar4,
                               (CVector3f *)(&g_FLOAT_0152c1e8 + g_CubeClippedTriangleCount * 3),0.0
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
