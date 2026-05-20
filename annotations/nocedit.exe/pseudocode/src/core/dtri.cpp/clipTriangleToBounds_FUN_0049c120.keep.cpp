// Name: core_dtri.cpp_clipTriangleToBounds_FUN_0049c120
// Address: 0049c120
// MANUAL RECONSTRUCTION
// Address Range: [[0049c120, 0049cb2d]]
// Convention: __cdecl
// Signature: int __cdecl core_dtri_cpp_clipTriangleToBounds_FUN_0049c120(CVector3f *triangle_vertices,CVector3f *bounds_min,CVector3f *bounds_max)

#include "nocturne.h"

int __cdecl core_dtri_cpp_clipTriangleToBounds_FUN_0049c120(CVector3f *triangle_vertices,CVector3f *bounds_min,CVector3f *bounds_max)

{
  float fVar2;
  int iVar3;
  byte bVar3;
  byte bVar4;
  uint uVar4;
  uint uVar5;
  byte bVar5;
  CVector3f *pCVar6;
  int iVar6;
  int iVar7;
  CVector3f *pCVar7;
  byte bVar8;
  CVector3f *pCVar9;
  CVector3f *point2_ptr;
  float fVar1;
  int iVar2;
  
  g_ClipInputVertexCount = 3;
  if (triangle_vertices != g_ClipInputVertices) {
    g_ClipInputVertices[0] = triangle_vertices[0];
  }
  if (triangle_vertices + 1 != g_ClipInputVertices + 1) {
    g_ClipInputVertices[1] = triangle_vertices[1];
  }
  if (triangle_vertices + 2 != g_ClipInputVertices + 2) {
    g_ClipInputVertices[2] = triangle_vertices[2];
  }
  bVar8 = 0;
  iVar7 = 0;
  bVar4 = 0xff;
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
    bVar4 = bVar4 & bVar5;
    bVar8 = bVar8 | bVar5;
  } while (iVar7 < 3);
  if (bVar8 == 0) {
    g_ClipOutputVertexCount = 3;
    if (triangle_vertices != g_ClipOutputVertices) {
      g_ClipOutputVertices[0] = triangle_vertices[0];
    }
    if (triangle_vertices + 1 != g_ClipOutputVertices + 1) {
      g_ClipOutputVertices[1] = triangle_vertices[1];
    }
    if (triangle_vertices + 2 != g_ClipOutputVertices + 2) {
      g_ClipOutputVertices[2] = triangle_vertices[2];
    }
    return 1;
  }
  if (bVar4 == 0) {
    fVar1 = bounds_max->y;
    iVar6 = 0;
    pCVar7 = g_ClipInputVertices;
    g_ClipBuffer1VertexCount = 0;
    g_ClipBuffer2VertexCount = 0;
    g_ClipBuffer3VertexCount = 0;
    g_ClipBuffer4VertexCount = 0;
    g_ClipBuffer5VertexCount = 0;
    g_ClipOutputVertexCount = 0;
    do {
      iVar2 = g_ClipBuffer1VertexCount;
      uVar4 = iVar6 + 1;
      if (uVar4 == g_ClipInputVertexCount) {
        uVar4 = uVar4 ^ g_ClipInputVertexCount;
      }
      bVar3 = fVar1 < pCVar7->y;
      if (fVar1 < g_ClipInputVertices[uVar4].y) {
        bVar3 = bVar3 | 2;
      }
      switch(bVar3) {
      case 0:
        if (g_ClipBuffer1Vertices + g_ClipBuffer1VertexCount != pCVar7) {
          g_ClipBuffer1Vertices[iVar2] = *pCVar7;
        }
        g_ClipBuffer1VertexCount = g_ClipBuffer1VertexCount + 1;
        break;
      case 1:
        core_dtri_cpp_clipLineToPlane_FUN_0049b6c0
                  (g_ClipInputVertices + uVar4,pCVar7,
                   g_ClipBuffer1Vertices + g_ClipBuffer1VertexCount,0.0,1.0,0.0,(double)-fVar1);
        g_ClipBuffer1VertexCount = g_ClipBuffer1VertexCount + 1;
        break;
      case 2:
        if (g_ClipBuffer1Vertices + g_ClipBuffer1VertexCount != pCVar7) {
          g_ClipBuffer1Vertices[iVar2] = *pCVar7;
        }
        g_ClipBuffer1VertexCount = g_ClipBuffer1VertexCount + 1;
        core_dtri_cpp_clipLineToPlane_FUN_0049b6c0
                  (pCVar7,g_ClipInputVertices + uVar4,
                   g_ClipBuffer1Vertices + g_ClipBuffer1VertexCount,0.0,1.0,0.0,(double)-fVar1);
        g_ClipBuffer1VertexCount = g_ClipBuffer1VertexCount + 1;
      }
      iVar6 = iVar6 + 1;
      pCVar7 = pCVar7 + 1;
    } while (iVar6 < g_ClipInputVertexCount);
    if (2 < g_ClipBuffer1VertexCount) {
      fVar2 = bounds_min->y;
      iVar6 = 0;
      if (0 < g_ClipBuffer1VertexCount) {
        pCVar7 = g_ClipBuffer1Vertices;
        do {
          iVar3 = g_ClipBuffer2VertexCount;
          uVar5 = iVar6 + 1;
          if (uVar5 == g_ClipBuffer1VertexCount) {
            uVar5 = uVar5 ^ g_ClipBuffer1VertexCount;
          }
          bVar4 = pCVar7->y < fVar2;
          if (g_ClipBuffer1Vertices[uVar5].y < fVar2) {
            bVar4 = bVar4 | 2;
          }
          switch(bVar4) {
          case 0:
            if (g_ClipBuffer2Vertices + g_ClipBuffer2VertexCount != pCVar7) {
              g_ClipBuffer2Vertices[iVar3] = *pCVar7;
            }
            g_ClipBuffer2VertexCount = g_ClipBuffer2VertexCount + 1;
            break;
          case 1:
            core_dtri_cpp_clipLineToPlane_FUN_0049b6c0
                      (g_ClipBuffer1Vertices + uVar5,pCVar7,
                       g_ClipBuffer2Vertices + g_ClipBuffer2VertexCount,0.0,-1.0,0.0,(double)fVar2);
            g_ClipBuffer2VertexCount = g_ClipBuffer2VertexCount + 1;
            break;
          case 2:
            if (g_ClipBuffer2Vertices + g_ClipBuffer2VertexCount != pCVar7) {
              g_ClipBuffer2Vertices[iVar3] = *pCVar7;
            }
            g_ClipBuffer2VertexCount = g_ClipBuffer2VertexCount + 1;
            core_dtri_cpp_clipLineToPlane_FUN_0049b6c0
                      (pCVar7,g_ClipBuffer1Vertices + uVar5,
                       g_ClipBuffer2Vertices + g_ClipBuffer2VertexCount,0.0,-1.0,0.0,(double)fVar2);
            g_ClipBuffer2VertexCount = g_ClipBuffer2VertexCount + 1;
          }
          iVar6 = iVar6 + 1;
          pCVar7 = pCVar7 + 1;
        } while (iVar6 < g_ClipBuffer1VertexCount);
      }
      if (2 < g_ClipBuffer2VertexCount) {
        fVar2 = bounds_max->x;
        iVar6 = 0;
        if (0 < g_ClipBuffer2VertexCount) {
          pCVar7 = g_ClipBuffer2Vertices;
          do {
            iVar3 = g_ClipBuffer3VertexCount;
            uVar5 = iVar6 + 1;
            if (uVar5 == g_ClipBuffer2VertexCount) {
              uVar5 = uVar5 ^ g_ClipBuffer2VertexCount;
            }
            pCVar9 = g_ClipBuffer2Vertices + uVar5;
            bVar4 = fVar2 < pCVar7->x;
            if (fVar2 < pCVar9->x) {
              bVar4 = bVar4 | 2;
            }
            switch(bVar4) {
            case 0:
              if (g_ClipBuffer3Vertices + g_ClipBuffer3VertexCount != pCVar7) {
                g_ClipBuffer3Vertices[iVar3] = *pCVar7;
              }
              g_ClipBuffer3VertexCount = g_ClipBuffer3VertexCount + 1;
              break;
            case 1:
              core_dtri_cpp_clipLineToPlane_FUN_0049b6c0
                        (pCVar9,pCVar7,g_ClipBuffer3Vertices + g_ClipBuffer3VertexCount,1.0,0.0,0.0,
                         (double)-fVar2);
              g_ClipBuffer3VertexCount = g_ClipBuffer3VertexCount + 1;
              break;
            case 2:
              if (g_ClipBuffer3Vertices + g_ClipBuffer3VertexCount != pCVar7) {
                g_ClipBuffer3Vertices[iVar3] = *pCVar7;
              }
              g_ClipBuffer3VertexCount = g_ClipBuffer3VertexCount + 1;
              core_dtri_cpp_clipLineToPlane_FUN_0049b6c0
                        (pCVar7,pCVar9,g_ClipBuffer3Vertices + g_ClipBuffer3VertexCount,1.0,0.0,0.0,
                         (double)-fVar2);
              g_ClipBuffer3VertexCount = g_ClipBuffer3VertexCount + 1;
            }
            iVar6 = iVar6 + 1;
            pCVar7 = pCVar7 + 1;
          } while (iVar6 < g_ClipBuffer2VertexCount);
        }
        if (2 < g_ClipBuffer3VertexCount) {
          fVar2 = bounds_min->x;
          iVar6 = 0;
          if (0 < g_ClipBuffer3VertexCount) {
            pCVar7 = g_ClipBuffer3Vertices;
            do {
              iVar3 = g_ClipBuffer4VertexCount;
              uVar5 = iVar6 + 1;
              if (uVar5 == g_ClipBuffer3VertexCount) {
                uVar5 = uVar5 ^ g_ClipBuffer3VertexCount;
              }
              point2_ptr = g_ClipBuffer3Vertices + uVar5;
              bVar4 = pCVar7->x < fVar2;
              if (point2_ptr->x < fVar2) {
                bVar4 = bVar4 | 2;
              }
              switch(bVar4) {
              case 0:
                if (g_ClipBuffer4Vertices + g_ClipBuffer4VertexCount != pCVar7) {
                  g_ClipBuffer4Vertices[iVar3] = *pCVar7;
                }
                g_ClipBuffer4VertexCount = g_ClipBuffer4VertexCount + 1;
                break;
              case 1:
                core_dtri_cpp_clipLineToPlane_FUN_0049b6c0
                          (point2_ptr,pCVar7,g_ClipBuffer4Vertices + g_ClipBuffer4VertexCount,-1.0,
                           0.0,0.0,(double)fVar2);
                g_ClipBuffer4VertexCount = g_ClipBuffer4VertexCount + 1;
                break;
              case 2:
                if (g_ClipBuffer4Vertices + g_ClipBuffer4VertexCount != pCVar7) {
                  g_ClipBuffer4Vertices[iVar3] = *pCVar7;
                }
                g_ClipBuffer4VertexCount = g_ClipBuffer4VertexCount + 1;
                core_dtri_cpp_clipLineToPlane_FUN_0049b6c0
                          (pCVar7,point2_ptr,g_ClipBuffer4Vertices + g_ClipBuffer4VertexCount,-1.0,
                           0.0,0.0,(double)fVar2);
                g_ClipBuffer4VertexCount = g_ClipBuffer4VertexCount + 1;
              }
              iVar6 = iVar6 + 1;
              pCVar7 = pCVar7 + 1;
            } while (iVar6 < g_ClipBuffer3VertexCount);
          }
          if (2 < g_ClipBuffer4VertexCount) {
            fVar2 = bounds_min->z;
            iVar6 = 0;
            if (0 < g_ClipBuffer4VertexCount) {
              pCVar7 = g_ClipBuffer4Vertices;
              do {
                iVar3 = g_ClipBuffer5VertexCount;
                uVar5 = iVar6 + 1;
                if (uVar5 == g_ClipBuffer4VertexCount) {
                  uVar5 = uVar5 ^ g_ClipBuffer4VertexCount;
                }
                bVar4 = pCVar7->z < fVar2;
                if (g_ClipBuffer4Vertices[uVar5].z < fVar2) {
                  bVar4 = bVar4 | 2;
                }
                switch(bVar4) {
                case 0:
                  if (g_ClipBuffer5Vertices + g_ClipBuffer5VertexCount != pCVar7) {
                    g_ClipBuffer5Vertices[iVar3] = *pCVar7;
                  }
                  g_ClipBuffer5VertexCount = g_ClipBuffer5VertexCount + 1;
                  break;
                case 1:
                  core_dtri_cpp_clipLineToPlane_FUN_0049b6c0
                            (g_ClipBuffer4Vertices + uVar5,pCVar7,
                             g_ClipBuffer5Vertices + g_ClipBuffer5VertexCount,0.0,0.0,-1.0,
                             (double)fVar2);
                  g_ClipBuffer5VertexCount = g_ClipBuffer5VertexCount + 1;
                  break;
                case 2:
                  if (g_ClipBuffer5Vertices + g_ClipBuffer5VertexCount != pCVar7) {
                    g_ClipBuffer5Vertices[iVar3] = *pCVar7;
                  }
                  g_ClipBuffer5VertexCount = g_ClipBuffer5VertexCount + 1;
                  core_dtri_cpp_clipLineToPlane_FUN_0049b6c0
                            (pCVar7,g_ClipBuffer4Vertices + uVar5,
                             g_ClipBuffer5Vertices + g_ClipBuffer5VertexCount,0.0,0.0,-1.0,
                             (double)fVar2);
                  g_ClipBuffer5VertexCount = g_ClipBuffer5VertexCount + 1;
                }
                iVar6 = iVar6 + 1;
                pCVar7 = pCVar7 + 1;
              } while (iVar6 < g_ClipBuffer4VertexCount);
            }
            if (2 < g_ClipBuffer5VertexCount) {
              fVar2 = bounds_max->z;
              iVar6 = 0;
              if (0 < g_ClipBuffer5VertexCount) {
                pCVar7 = g_ClipBuffer5Vertices;
                do {
                  iVar3 = g_ClipOutputVertexCount;
                  uVar5 = iVar6 + 1;
                  if (uVar5 == g_ClipBuffer5VertexCount) {
                    uVar5 = uVar5 ^ g_ClipBuffer5VertexCount;
                  }
                  bVar4 = fVar2 < pCVar7->z;
                  if (fVar2 < g_ClipBuffer5Vertices[uVar5].z) {
                    bVar4 = bVar4 | 2;
                  }
                  switch(bVar4) {
                  case 0:
                    if (g_ClipOutputVertices + g_ClipOutputVertexCount != pCVar7) {
                      g_ClipOutputVertices[iVar3] = *pCVar7;
                    }
                    g_ClipOutputVertexCount = g_ClipOutputVertexCount + 1;
                    break;
                  case 1:
                    core_dtri_cpp_clipLineToPlane_FUN_0049b6c0
                              (g_ClipBuffer5Vertices + uVar5,pCVar7,
                               g_ClipOutputVertices + g_ClipOutputVertexCount,0.0,0.0,-1.0,
                               (double)fVar2);
                    g_ClipOutputVertexCount = g_ClipOutputVertexCount + 1;
                    break;
                  case 2:
                    if (g_ClipOutputVertices + g_ClipOutputVertexCount != pCVar7) {
                      g_ClipOutputVertices[iVar3] = *pCVar7;
                    }
                    g_ClipOutputVertexCount = g_ClipOutputVertexCount + 1;
                    core_dtri_cpp_clipLineToPlane_FUN_0049b6c0
                              (pCVar7,g_ClipBuffer5Vertices + uVar5,
                               g_ClipOutputVertices + g_ClipOutputVertexCount,0.0,0.0,-1.0,
                               (double)fVar2);
                    g_ClipOutputVertexCount = g_ClipOutputVertexCount + 1;
                  }
                  iVar6 = iVar6 + 1;
                  pCVar7 = pCVar7 + 1;
                } while (iVar6 < g_ClipBuffer5VertexCount);
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
