// Name: core_dtri.cpp_clipTriangleToBounds_FUN_0049c120
// Address: 0049c120
// Address Range: [[0049c120, 0049cb2d]]
// Convention: __cdecl
// Signature: int core_dtri.cpp_clipTriangleToBounds_FUN_0049c120(CVector3f * triangle_vertices, CVector3f * bounds_min, CVector3f * bounds_max)

#include "nocturne.h"

int __cdecl
core_dtri_cpp_clipTriangleToBounds_FUN_0049c120
          (CVector3f *triangle_vertices,CVector3f *bounds_min,CVector3f *bounds_max)

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
  
  g_ClipInputVertexCount = 3;
  if (triangle_vertices != g_ClipInputVertices) {
    g_ClipInputVertices[0].x = triangle_vertices->x;
    g_ClipInputVertices[0].z = triangle_vertices->z;
    g_ClipInputVertices[0].y = triangle_vertices->y;
  }
  if (triangle_vertices + 1 != g_ClipInputVertices + 1) {
    g_ClipInputVertices[1].x = triangle_vertices[1].x;
    g_ClipInputVertices[1].z = triangle_vertices[1].z;
    g_ClipInputVertices[1].y = triangle_vertices[1].y;
  }
  if (triangle_vertices + 2 != g_ClipInputVertices + 2) {
    g_ClipInputVertices[2].x = triangle_vertices[2].x;
    g_ClipInputVertices[2].z = triangle_vertices[2].z;
    g_ClipInputVertices[2].y = triangle_vertices[2].y;
  }
  bVar8 = 0;
  iVar7 = 0;
  bVar3 = 0xff;
  pCVar6 = g_ClipInputVertices;
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
    g_ClipOutputVertexCount = 3;
    if (triangle_vertices != g_ClipOutputVertices) {
      g_ClipOutputVertices[0].x = triangle_vertices->x;
      g_ClipOutputVertices[0].z = triangle_vertices->z;
      g_ClipOutputVertices[0].y = triangle_vertices->y;
    }
    if (triangle_vertices + 1 != g_ClipOutputVertices + 1) {
      g_ClipOutputVertices[1].x = triangle_vertices[1].x;
      g_ClipOutputVertices[1].z = triangle_vertices[1].z;
      g_ClipOutputVertices[1].y = triangle_vertices[1].y;
    }
    if (triangle_vertices + 2 != g_ClipOutputVertices + 2) {
      g_ClipOutputVertices[2].x = triangle_vertices[2].x;
      g_ClipOutputVertices[2].z = triangle_vertices[2].z;
      g_ClipOutputVertices[2].y = triangle_vertices[2].y;
    }
    return 1;
  }
  if (bVar3 == 0) {
    fVar1 = bounds_max->y;
    iVar7 = 0;
    pCVar6 = g_ClipInputVertices;
    g_ClipBuffer1VertexCount = 0;
    g_ClipBuffer2VertexCount = 0;
    g_ClipBuffer3VertexCount = 0;
    g_ClipBuffer4VertexCount = 0;
    g_ClipBuffer5VertexCount = 0;
    g_ClipOutputVertexCount = 0;
    do {
      iVar2 = g_ClipBuffer1VertexCount;
      uVar4 = iVar7 + 1;
      if (uVar4 == g_ClipInputVertexCount) {
        uVar4 = uVar4 ^ g_ClipInputVertexCount;
      }
      bVar3 = fVar1 < pCVar6->y;
      if (fVar1 < g_ClipInputVertices[uVar4].y) {
        bVar3 = bVar3 | 2;
      }
      switch(bVar3) {
      case 0:
        if (g_ClipBuffer1Vertices + g_ClipBuffer1VertexCount != pCVar6) {
          g_ClipBuffer1Vertices[g_ClipBuffer1VertexCount].x = pCVar6->x;
          g_ClipBuffer1Vertices[iVar2].y = pCVar6->y;
          g_ClipBuffer1Vertices[iVar2].z = pCVar6->z;
        }
        g_ClipBuffer1VertexCount = g_ClipBuffer1VertexCount + 1;
        break;
      case 1:
        core_dtri_cpp_clipLineToPlane_FUN_0049b6c0
                  (g_ClipInputVertices + uVar4,pCVar6,
                   g_ClipBuffer1Vertices + g_ClipBuffer1VertexCount,0.0,1.0,0.0,(double)-fVar1);
        g_ClipBuffer1VertexCount = g_ClipBuffer1VertexCount + 1;
        break;
      case 2:
        if (g_ClipBuffer1Vertices + g_ClipBuffer1VertexCount != pCVar6) {
          g_ClipBuffer1Vertices[g_ClipBuffer1VertexCount].x = pCVar6->x;
          g_ClipBuffer1Vertices[iVar2].y = pCVar6->y;
          g_ClipBuffer1Vertices[iVar2].z = pCVar6->z;
        }
        g_ClipBuffer1VertexCount = g_ClipBuffer1VertexCount + 1;
        core_dtri_cpp_clipLineToPlane_FUN_0049b6c0
                  (pCVar6,g_ClipInputVertices + uVar4,
                   g_ClipBuffer1Vertices + g_ClipBuffer1VertexCount,0.0,1.0,0.0,(double)-fVar1);
        g_ClipBuffer1VertexCount = g_ClipBuffer1VertexCount + 1;
      }
      iVar7 = iVar7 + 1;
      pCVar6 = pCVar6 + 1;
    } while (iVar7 < g_ClipInputVertexCount);
    if (2 < g_ClipBuffer1VertexCount) {
      fVar1 = bounds_min->y;
      iVar7 = 0;
      if (0 < g_ClipBuffer1VertexCount) {
        pCVar6 = g_ClipBuffer1Vertices;
        do {
          iVar2 = g_ClipBuffer2VertexCount;
          uVar4 = iVar7 + 1;
          if (uVar4 == g_ClipBuffer1VertexCount) {
            uVar4 = uVar4 ^ g_ClipBuffer1VertexCount;
          }
          bVar3 = pCVar6->y < fVar1;
          if (g_ClipBuffer1Vertices[uVar4].y < fVar1) {
            bVar3 = bVar3 | 2;
          }
          switch(bVar3) {
          case 0:
            if (g_ClipBuffer2Vertices + g_ClipBuffer2VertexCount != pCVar6) {
              g_ClipBuffer2Vertices[g_ClipBuffer2VertexCount].x = pCVar6->x;
              g_ClipBuffer2Vertices[iVar2].y = pCVar6->y;
              g_ClipBuffer2Vertices[iVar2].z = pCVar6->z;
            }
            g_ClipBuffer2VertexCount = g_ClipBuffer2VertexCount + 1;
            break;
          case 1:
            core_dtri_cpp_clipLineToPlane_FUN_0049b6c0
                      (g_ClipBuffer1Vertices + uVar4,pCVar6,
                       g_ClipBuffer2Vertices + g_ClipBuffer2VertexCount,0.0,-1.0,0.0,(double)fVar1);
            g_ClipBuffer2VertexCount = g_ClipBuffer2VertexCount + 1;
            break;
          case 2:
            if (g_ClipBuffer2Vertices + g_ClipBuffer2VertexCount != pCVar6) {
              g_ClipBuffer2Vertices[g_ClipBuffer2VertexCount].x = pCVar6->x;
              g_ClipBuffer2Vertices[iVar2].y = pCVar6->y;
              g_ClipBuffer2Vertices[iVar2].z = pCVar6->z;
            }
            g_ClipBuffer2VertexCount = g_ClipBuffer2VertexCount + 1;
            core_dtri_cpp_clipLineToPlane_FUN_0049b6c0
                      (pCVar6,g_ClipBuffer1Vertices + uVar4,
                       g_ClipBuffer2Vertices + g_ClipBuffer2VertexCount,0.0,-1.0,0.0,(double)fVar1);
            g_ClipBuffer2VertexCount = g_ClipBuffer2VertexCount + 1;
          }
          iVar7 = iVar7 + 1;
          pCVar6 = pCVar6 + 1;
        } while (iVar7 < g_ClipBuffer1VertexCount);
      }
      if (2 < g_ClipBuffer2VertexCount) {
        fVar1 = bounds_max->x;
        iVar7 = 0;
        if (0 < g_ClipBuffer2VertexCount) {
          pCVar6 = g_ClipBuffer2Vertices;
          do {
            iVar2 = g_ClipBuffer3VertexCount;
            uVar4 = iVar7 + 1;
            if (uVar4 == g_ClipBuffer2VertexCount) {
              uVar4 = uVar4 ^ g_ClipBuffer2VertexCount;
            }
            pCVar9 = g_ClipBuffer2Vertices + uVar4;
            bVar3 = fVar1 < pCVar6->x;
            if (fVar1 < pCVar9->x) {
              bVar3 = bVar3 | 2;
            }
            switch(bVar3) {
            case 0:
              if (g_ClipBuffer3Vertices + g_ClipBuffer3VertexCount != pCVar6) {
                g_ClipBuffer3Vertices[g_ClipBuffer3VertexCount].x = pCVar6->x;
                g_ClipBuffer3Vertices[iVar2].y = pCVar6->y;
                g_ClipBuffer3Vertices[iVar2].z = pCVar6->z;
              }
              g_ClipBuffer3VertexCount = g_ClipBuffer3VertexCount + 1;
              break;
            case 1:
              core_dtri_cpp_clipLineToPlane_FUN_0049b6c0
                        (pCVar9,pCVar6,g_ClipBuffer3Vertices + g_ClipBuffer3VertexCount,1.0,0.0,0.0,
                         (double)-fVar1);
              g_ClipBuffer3VertexCount = g_ClipBuffer3VertexCount + 1;
              break;
            case 2:
              if (g_ClipBuffer3Vertices + g_ClipBuffer3VertexCount != pCVar6) {
                g_ClipBuffer3Vertices[g_ClipBuffer3VertexCount].x = pCVar6->x;
                g_ClipBuffer3Vertices[iVar2].y = pCVar6->y;
                g_ClipBuffer3Vertices[iVar2].z = pCVar6->z;
              }
              g_ClipBuffer3VertexCount = g_ClipBuffer3VertexCount + 1;
              core_dtri_cpp_clipLineToPlane_FUN_0049b6c0
                        (pCVar6,pCVar9,g_ClipBuffer3Vertices + g_ClipBuffer3VertexCount,1.0,0.0,0.0,
                         (double)-fVar1);
              g_ClipBuffer3VertexCount = g_ClipBuffer3VertexCount + 1;
            }
            iVar7 = iVar7 + 1;
            pCVar6 = pCVar6 + 1;
          } while (iVar7 < g_ClipBuffer2VertexCount);
        }
        if (2 < g_ClipBuffer3VertexCount) {
          fVar1 = bounds_min->x;
          iVar7 = 0;
          if (0 < g_ClipBuffer3VertexCount) {
            pCVar6 = g_ClipBuffer3Vertices;
            do {
              iVar2 = g_ClipBuffer4VertexCount;
              uVar4 = iVar7 + 1;
              if (uVar4 == g_ClipBuffer3VertexCount) {
                uVar4 = uVar4 ^ g_ClipBuffer3VertexCount;
              }
              pCVar9 = g_ClipBuffer3Vertices + uVar4;
              bVar3 = pCVar6->x < fVar1;
              if (pCVar9->x < fVar1) {
                bVar3 = bVar3 | 2;
              }
              switch(bVar3) {
              case 0:
                if (g_ClipBuffer4Vertices + g_ClipBuffer4VertexCount != pCVar6) {
                  g_ClipBuffer4Vertices[g_ClipBuffer4VertexCount].x = pCVar6->x;
                  g_ClipBuffer4Vertices[iVar2].y = pCVar6->y;
                  g_ClipBuffer4Vertices[iVar2].z = pCVar6->z;
                }
                g_ClipBuffer4VertexCount = g_ClipBuffer4VertexCount + 1;
                break;
              case 1:
                core_dtri_cpp_clipLineToPlane_FUN_0049b6c0
                          (pCVar9,pCVar6,g_ClipBuffer4Vertices + g_ClipBuffer4VertexCount,-1.0,0.0,
                           0.0,(double)fVar1);
                g_ClipBuffer4VertexCount = g_ClipBuffer4VertexCount + 1;
                break;
              case 2:
                if (g_ClipBuffer4Vertices + g_ClipBuffer4VertexCount != pCVar6) {
                  g_ClipBuffer4Vertices[g_ClipBuffer4VertexCount].x = pCVar6->x;
                  g_ClipBuffer4Vertices[iVar2].y = pCVar6->y;
                  g_ClipBuffer4Vertices[iVar2].z = pCVar6->z;
                }
                g_ClipBuffer4VertexCount = g_ClipBuffer4VertexCount + 1;
                core_dtri_cpp_clipLineToPlane_FUN_0049b6c0
                          (pCVar6,pCVar9,g_ClipBuffer4Vertices + g_ClipBuffer4VertexCount,-1.0,0.0,
                           0.0,(double)fVar1);
                g_ClipBuffer4VertexCount = g_ClipBuffer4VertexCount + 1;
              }
              iVar7 = iVar7 + 1;
              pCVar6 = pCVar6 + 1;
            } while (iVar7 < g_ClipBuffer3VertexCount);
          }
          if (2 < g_ClipBuffer4VertexCount) {
            fVar1 = bounds_min->z;
            iVar7 = 0;
            if (0 < g_ClipBuffer4VertexCount) {
              pCVar6 = g_ClipBuffer4Vertices;
              do {
                iVar2 = g_ClipBuffer5VertexCount;
                uVar4 = iVar7 + 1;
                if (uVar4 == g_ClipBuffer4VertexCount) {
                  uVar4 = uVar4 ^ g_ClipBuffer4VertexCount;
                }
                bVar3 = pCVar6->z < fVar1;
                if (g_ClipBuffer4Vertices[uVar4].z < fVar1) {
                  bVar3 = bVar3 | 2;
                }
                switch(bVar3) {
                case 0:
                  if (g_ClipBuffer5Vertices + g_ClipBuffer5VertexCount != pCVar6) {
                    g_ClipBuffer5Vertices[g_ClipBuffer5VertexCount].x = pCVar6->x;
                    g_ClipBuffer5Vertices[iVar2].y = pCVar6->y;
                    g_ClipBuffer5Vertices[iVar2].z = pCVar6->z;
                  }
                  g_ClipBuffer5VertexCount = g_ClipBuffer5VertexCount + 1;
                  break;
                case 1:
                  core_dtri_cpp_clipLineToPlane_FUN_0049b6c0
                            (g_ClipBuffer4Vertices + uVar4,pCVar6,
                             g_ClipBuffer5Vertices + g_ClipBuffer5VertexCount,0.0,0.0,-1.0,
                             (double)fVar1);
                  g_ClipBuffer5VertexCount = g_ClipBuffer5VertexCount + 1;
                  break;
                case 2:
                  if (g_ClipBuffer5Vertices + g_ClipBuffer5VertexCount != pCVar6) {
                    g_ClipBuffer5Vertices[g_ClipBuffer5VertexCount].x = pCVar6->x;
                    g_ClipBuffer5Vertices[iVar2].y = pCVar6->y;
                    g_ClipBuffer5Vertices[iVar2].z = pCVar6->z;
                  }
                  g_ClipBuffer5VertexCount = g_ClipBuffer5VertexCount + 1;
                  core_dtri_cpp_clipLineToPlane_FUN_0049b6c0
                            (pCVar6,g_ClipBuffer4Vertices + uVar4,
                             g_ClipBuffer5Vertices + g_ClipBuffer5VertexCount,0.0,0.0,-1.0,
                             (double)fVar1);
                  g_ClipBuffer5VertexCount = g_ClipBuffer5VertexCount + 1;
                }
                iVar7 = iVar7 + 1;
                pCVar6 = pCVar6 + 1;
              } while (iVar7 < g_ClipBuffer4VertexCount);
            }
            if (2 < g_ClipBuffer5VertexCount) {
              fVar1 = bounds_max->z;
              iVar7 = 0;
              if (0 < g_ClipBuffer5VertexCount) {
                pCVar6 = g_ClipBuffer5Vertices;
                do {
                  iVar2 = g_ClipOutputVertexCount;
                  uVar4 = iVar7 + 1;
                  if (uVar4 == g_ClipBuffer5VertexCount) {
                    uVar4 = uVar4 ^ g_ClipBuffer5VertexCount;
                  }
                  bVar3 = fVar1 < pCVar6->z;
                  if (fVar1 < g_ClipBuffer5Vertices[uVar4].z) {
                    bVar3 = bVar3 | 2;
                  }
                  switch(bVar3) {
                  case 0:
                    if (g_ClipOutputVertices + g_ClipOutputVertexCount != pCVar6) {
                      g_ClipOutputVertices[g_ClipOutputVertexCount].x = pCVar6->x;
                      g_ClipOutputVertices[iVar2].y = pCVar6->y;
                      g_ClipOutputVertices[iVar2].z = pCVar6->z;
                    }
                    g_ClipOutputVertexCount = g_ClipOutputVertexCount + 1;
                    break;
                  case 1:
                    core_dtri_cpp_clipLineToPlane_FUN_0049b6c0
                              (g_ClipBuffer5Vertices + uVar4,pCVar6,
                               g_ClipOutputVertices + g_ClipOutputVertexCount,0.0,0.0,-1.0,
                               (double)fVar1);
                    g_ClipOutputVertexCount = g_ClipOutputVertexCount + 1;
                    break;
                  case 2:
                    if (g_ClipOutputVertices + g_ClipOutputVertexCount != pCVar6) {
                      g_ClipOutputVertices[g_ClipOutputVertexCount].x = pCVar6->x;
                      g_ClipOutputVertices[iVar2].y = pCVar6->y;
                      g_ClipOutputVertices[iVar2].z = pCVar6->z;
                    }
                    g_ClipOutputVertexCount = g_ClipOutputVertexCount + 1;
                    core_dtri_cpp_clipLineToPlane_FUN_0049b6c0
                              (pCVar6,g_ClipBuffer5Vertices + uVar4,
                               g_ClipOutputVertices + g_ClipOutputVertexCount,0.0,0.0,-1.0,
                               (double)fVar1);
                    g_ClipOutputVertexCount = g_ClipOutputVertexCount + 1;
                  }
                  iVar7 = iVar7 + 1;
                  pCVar6 = pCVar6 + 1;
                } while (iVar7 < g_ClipBuffer5VertexCount);
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
