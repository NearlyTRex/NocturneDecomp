// Name: core_dtri.cpp_clipTriangleToBounds_FUN_0049c120
// Address: 0049c120
// Address Range: [[0049c120, 0049cb2d]]
// Convention: __cdecl
// Signature: int core_dtri.cpp_clipTriangleToBounds_FUN_0049c120(CVector3f * triangle_vertices, CVector3f * bounds_min, CVector3f * bounds_max)
// Globals:
//   void* switchdataD_0049c0b4 = 0049c387
//   void* PTR_caseD_1_0049c0b8 = 0049c708
//   void* PTR_caseD_3_0049c0c0 = 0049c3ae
//   void* switchdataD_0049c0c4 = 0049c42c
//   void* PTR_caseD_1_0049c0c8 = 0049c7bc
//   void* PTR_caseD_3_0049c0d0 = 0049c453
//   void* switchdataD_0049c0d4 = 0049c4cf
//   void* PTR_caseD_1_0049c0d8 = 0049c86c
//   void* PTR_caseD_3_0049c0e0 = 0049c4f6
//   void* switchdataD_0049c0e4 = 0049c56f
//   void* PTR_caseD_1_0049c0e8 = 0049c920
//   void* PTR_caseD_3_0049c0f0 = 0049c596
//   void* switchdataD_0049c0f4 = 0049c615
//   void* PTR_caseD_1_0049c0f8 = 0049c9ce
//   void* PTR_caseD_3_0049c100 = 0049c63c
//   void* switchdataD_0049c104 = 0049c6bb
//   void* PTR_caseD_1_0049c108 = 0049ca7e
//   void* PTR_caseD_3_0049c110 = 0049c6e2
//   int g_ClipInputVertexCount
//   CVector3f[16] g_ClipInputVertices
//   undefined4 DAT_02cee5d4
//   undefined4 g_ClipInputVertices[0].z
//   undefined4 g_ClipInputVertices[1].x
//   undefined4 g_ClipInputVertices[1].y
//   undefined4 g_ClipInputVertices[1].z
//   undefined4 g_ClipInputVertices[2].x
//   undefined4 g_ClipInputVertices[2].y
//   undefined4 g_ClipInputVertices[2].z
//   int g_ClipBuffer1VertexCount
//   CVector3f[16] g_ClipBuffer1Vertices
//   undefined4 g_ClipBuffer1Vertices[0].y
//   undefined4 g_ClipBuffer1Vertices[1].x
//   undefined4 DAT_02cee6a4
//   undefined4 g_ClipBuffer1Vertices[1].z
//   int g_ClipBuffer2VertexCount
//   CVector3f[16] g_ClipBuffer2Vertices
//   undefined4 DAT_02cee764
//   undefined4 g_ClipBuffer2Vertices[1].y
//   undefined4 g_ClipBuffer2Vertices[1].z
//   int g_ClipBuffer3VertexCount
//   CVector3f[16] g_ClipBuffer3Vertices
//   undefined4 DAT_02cee828
//   undefined4 g_ClipBuffer3Vertices[1].y
//   undefined4 g_ClipBuffer3Vertices[1].z
//   int g_ClipBuffer4VertexCount
//   CVector3f[16] g_ClipBuffer4Vertices
//   undefined4 g_ClipBuffer4Vertices[0].z
//   undefined4 g_ClipBuffer4Vertices[1].x
//   undefined4 g_ClipBuffer4Vertices[1].y
//   undefined4 DAT_02cee8f4
//   undefined4 g_ClipBuffer4Vertices[14].x
//   undefined4 g_ClipBuffer4Vertices[14].y
//   undefined4 g_ClipBuffer4Vertices[14].z
//   undefined4 g_ClipBuffer4Vertices[15].x
//   int g_ClipBuffer5VertexCount
//   CVector3f[16] g_ClipBuffer5Vertices
//   undefined4 g_ClipBuffer5Vertices[0].z
//   undefined4 g_ClipBuffer5Vertices[1].x
//   undefined4 g_ClipBuffer5Vertices[1].y
//   undefined4 DAT_02cee9b8
//   undefined4 g_ClipBuffer5Vertices[2].x
//   undefined4 g_ClipBuffer5Vertices[14].x
//   undefined4 g_ClipBuffer5Vertices[14].y
//   undefined4 g_ClipBuffer5Vertices[14].z
//   undefined4 g_ClipBuffer5Vertices[15].x
//   int g_ClipOutputVertexCount
//   CVector3f[16] g_ClipOutputVertices
//   undefined4 DAT_02ceea6c
//   undefined4 DAT_02ceea70
//   undefined4 g_ClipOutputVertices[1].x
//   undefined4 g_ClipOutputVertices[1].y
//   undefined4 g_ClipOutputVertices[1].z
//   undefined4 g_ClipOutputVertices[2].x
//   undefined4 g_ClipOutputVertices[2].y
//   undefined4 g_ClipOutputVertices[2].z
//   undefined4 g_ClipOutputVertices[14].x
//   undefined4 g_ClipOutputVertices[14].y
//   undefined4 g_ClipOutputVertices[14].z
//   undefined4 g_ClipOutputVertices[15].x
//   undefined4 g_ClippedTriangleBuffer[0].vertex3.x
//   undefined4 g_ClippedTriangleBuffer[3].vertex1.y
//   undefined4 g_ClippedTriangleBuffer[3].vertex1.z
//   undefined4 g_ClippedTriangleBuffer[3].vertex2.x
//   undefined4 g_ClippedTriangleBuffer[3].vertex2.y
//   undefined4 g_ClippedTriangleBuffer[3].area
//   undefined4 g_ClippedTriangleBuffer[4].vertex1.y
//   undefined4 g_ClippedTriangleBuffer[6].vertex3.z
//   undefined4 g_ClippedTriangleBuffer[6].normal.x
//   undefined4 g_ClippedTriangleBuffer[6].normal.y
//   undefined4 g_ClippedTriangleBuffer[6].normal.z
//   undefined4 g_ClippedTriangleBuffer[7].vertex3.x
//   undefined4 g_ClippedTriangleBuffer[7].vertex3.z
//   undefined4 CHAR_ARRAY_02ceed5c
//   undefined4 CHAR_ARRAY_02ceed60
//   undefined4 CHAR_ARRAY_02ceed64
//   undefined4 CHAR_ARRAY_02ceed68
// Function calls:
//   core_dtri.cpp_clipLineToPlane_FUN_0049b6c0

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


// Assembly code:
// 0049c120: PUSH EBX
//   Label: core_dtri.cpp_clipTriangleToBounds_FUN_0049c120
// 0049c121: PUSH ESI
// 0049c122: PUSH EDI
// 0049c123: PUSH EBP
// 0049c124: MOV EBP,ESP
// 0049c126: SUB ESP,0x1c
// 0049c129: AND ESP,0xfffffff8
// 0049c12c: MOV EDX,0x3
// 0049c131: MOV ECX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0049c134: MOV dword ptr [0x02cee5cc],EDX
//   XREF to: 02cee5cc (WRITE)
// 0049c13a: CMP ECX,0x2cee5d0
//   XREF to: 02cee5d0 (DATA)
// 0049c140: JNZ 0x0049c2ce
//   XREF to: 0049c2ce (CONDITIONAL_JUMP)
// 0049c146: MOV EDX,dword ptr [EBP + 0x14]
//   Label: LAB_0049c146
//   XREF to: Stack[0x4] (READ)
// 0049c149: ADD EDX,0xc
// 0049c14c: CMP EDX,0x2cee5dc
//   XREF to: 02cee5dc (DATA)
// 0049c152: JZ 0x0049c16d
//   XREF to: 0049c16d (CONDITIONAL_JUMP)
// 0049c154: FLD float ptr [EDX]
// 0049c156: FLD float ptr [EDX + 0x8]
// 0049c159: MOV EAX,dword ptr [EDX + 0x4]
// 0049c15c: MOV [0x02cee5e0],EAX
//   XREF to: 02cee5e0 (WRITE)
// 0049c161: FSTP float ptr [0x02cee5e4]
//   XREF to: 02cee5e4 (WRITE)
// 0049c167: FSTP float ptr [0x02cee5dc]
//   XREF to: 02cee5dc (WRITE)
// 0049c16d: MOV EDX,dword ptr [EBP + 0x14]
//   Label: LAB_0049c16d
//   XREF to: Stack[0x4] (READ)
// 0049c170: ADD EDX,0x18
// 0049c173: CMP EDX,0x2cee5e8
//   XREF to: 02cee5e8 (DATA)
// 0049c179: JZ 0x0049c194
//   XREF to: 0049c194 (CONDITIONAL_JUMP)
// 0049c17b: FLD float ptr [EDX]
// 0049c17d: FLD float ptr [EDX + 0x8]
// 0049c180: MOV EAX,dword ptr [EDX + 0x4]
// 0049c183: MOV [0x02cee5ec],EAX
//   XREF to: 02cee5ec (WRITE)
// 0049c188: FSTP float ptr [0x02cee5f0]
//   XREF to: 02cee5f0 (WRITE)
// 0049c18e: FSTP float ptr [0x02cee5e8]
//   XREF to: 02cee5e8 (WRITE)
// 0049c194: MOV EBX,0xffffffff
//   Label: LAB_0049c194
// 0049c199: MOV EAX,[0x02cee5cc]
//   XREF to: 02cee5cc (READ)
// 0049c19e: XOR EDI,EDI
// 0049c1a0: XOR ESI,ESI
// 0049c1a2: MOV dword ptr [ESP + 0x10],EBX
//   XREF to: Stack[-0x20] (WRITE)
// 0049c1a6: TEST EAX,EAX
// 0049c1a8: JLE 0x0049c238
//   XREF to: 0049c238 (CONDITIONAL_JUMP)
// 0049c1ae: MOV EBX,0x2cee5d0
//   XREF to: 02cee5d0 (DATA)
// 0049c1b3: FLD float ptr [EBX]
//   Label: LAB_0049c1b3
//   XREF to: 02cee5d0 (READ)
//   XREF to: 02cee5dc (READ)
// 0049c1b5: MOV EAX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0049c1b8: MOV ECX,EBX
// 0049c1ba: XOR EDX,EDX
// 0049c1bc: FCOMP float ptr [EAX]
// 0049c1be: FNSTSW AX
// 0049c1c0: SAHF
// 0049c1c1: JBE 0x0049c1c8
//   XREF to: 0049c1c8 (CONDITIONAL_JUMP)
// 0049c1c3: MOV EDX,0x1
// 0049c1c8: MOV EAX,dword ptr [EBP + 0x1c]
//   Label: LAB_0049c1c8
//   XREF to: Stack[0xc] (READ)
// 0049c1cb: FLD float ptr [ECX + 0x4]
//   XREF to: 02cee5d4 (READ)
//   XREF to: 02cee5e0 (READ)
// 0049c1ce: FCOMP float ptr [EAX + 0x4]
// 0049c1d1: FNSTSW AX
// 0049c1d3: SAHF
// 0049c1d4: JBE 0x0049c1d9
//   XREF to: 0049c1d9 (CONDITIONAL_JUMP)
// 0049c1d6: OR DL,0x2
// 0049c1d9: MOV EAX,dword ptr [EBP + 0x1c]
//   Label: LAB_0049c1d9
//   XREF to: Stack[0xc] (READ)
// 0049c1dc: FLD float ptr [ECX + 0x8]
//   XREF to: 02cee5d8 (READ)
//   XREF to: 02cee5e4 (READ)
// 0049c1df: FCOMP float ptr [EAX + 0x8]
// 0049c1e2: FNSTSW AX
// 0049c1e4: SAHF
// 0049c1e5: JBE 0x0049c1ea
//   XREF to: 0049c1ea (CONDITIONAL_JUMP)
// 0049c1e7: OR DL,0x4
// 0049c1ea: MOV EAX,dword ptr [EBP + 0x18]
//   Label: LAB_0049c1ea
//   XREF to: Stack[0x8] (READ)
// 0049c1ed: FLD float ptr [ECX]
//   XREF to: 02cee5d0 (READ)
// 0049c1ef: FCOMP float ptr [EAX]
// 0049c1f1: FNSTSW AX
// 0049c1f3: SAHF
// 0049c1f4: JNC 0x0049c1f9
//   XREF to: 0049c1f9 (CONDITIONAL_JUMP)
// 0049c1f6: OR DL,0x8
// 0049c1f9: MOV EAX,dword ptr [EBP + 0x18]
//   Label: LAB_0049c1f9
//   XREF to: Stack[0x8] (READ)
// 0049c1fc: FLD float ptr [ECX + 0x4]
//   XREF to: 02cee5d4 (READ)
// 0049c1ff: FCOMP float ptr [EAX + 0x4]
// 0049c202: FNSTSW AX
// 0049c204: SAHF
// 0049c205: JNC 0x0049c20a
//   XREF to: 0049c20a (CONDITIONAL_JUMP)
// 0049c207: OR DL,0x10
// 0049c20a: MOV EAX,dword ptr [EBP + 0x18]
//   Label: LAB_0049c20a
//   XREF to: Stack[0x8] (READ)
// 0049c20d: FLD float ptr [ECX + 0x8]
//   XREF to: 02cee5d8 (READ)
// 0049c210: FCOMP float ptr [EAX + 0x8]
// 0049c213: FNSTSW AX
// 0049c215: SAHF
// 0049c216: JNC 0x0049c21b
//   XREF to: 0049c21b (CONDITIONAL_JUMP)
// 0049c218: OR DL,0x20
// 0049c21b: MOV ECX,dword ptr [ESP + 0x10]
//   Label: LAB_0049c21b
//   XREF to: Stack[-0x20] (READ)
// 0049c21f: MOV EAX,[0x02cee5cc]
//   XREF to: 02cee5cc (READ)
// 0049c224: ADD EBX,0xc
// 0049c227: INC ESI
// 0049c228: AND ECX,EDX
// 0049c22a: OR EDI,EDX
// 0049c22c: MOV dword ptr [ESP + 0x10],ECX
//   XREF to: Stack[-0x20] (WRITE)
// 0049c230: CMP ESI,EAX
// 0049c232: JL 0x0049c1b3
//   XREF to: 0049c1b3 (CONDITIONAL_JUMP)
// 0049c238: TEST EDI,EDI
//   Label: LAB_0049c238
// 0049c23a: JNZ 0x0049c2ef
//   XREF to: 0049c2ef (CONDITIONAL_JUMP)
// 0049c240: MOV EBX,0x3
// 0049c245: MOV ESI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0049c248: MOV dword ptr [0x02ceea64],EBX
//   XREF to: 02ceea64 (WRITE)
// 0049c24e: CMP ESI,0x2ceea68
//   XREF to: 02ceea68 (DATA)
// 0049c254: JZ 0x0049c272
//   XREF to: 0049c272 (CONDITIONAL_JUMP)
// 0049c256: MOV EAX,ESI
// 0049c258: FLD float ptr [EAX]
// 0049c25a: FLD float ptr [EAX + 0x8]
// 0049c25d: MOV EDX,dword ptr [EAX + 0x4]
// 0049c260: MOV dword ptr [0x02ceea6c],EDX
//   XREF to: 02ceea6c (WRITE)
// 0049c266: FSTP float ptr [0x02ceea70]
//   XREF to: 02ceea70 (WRITE)
// 0049c26c: FSTP float ptr [0x02ceea68]
//   XREF to: 02ceea68 (WRITE)
// 0049c272: MOV EDX,dword ptr [EBP + 0x14]
//   Label: LAB_0049c272
//   XREF to: Stack[0x4] (READ)
// 0049c275: ADD EDX,0xc
// 0049c278: CMP EDX,0x2ceea74
//   XREF to: 02ceea74 (DATA)
// 0049c27e: JZ 0x0049c299
//   XREF to: 0049c299 (CONDITIONAL_JUMP)
// 0049c280: FLD float ptr [EDX]
// 0049c282: FLD float ptr [EDX + 0x8]
// 0049c285: MOV EAX,dword ptr [EDX + 0x4]
// 0049c288: MOV [0x02ceea78],EAX
//   XREF to: 02ceea78 (WRITE)
// 0049c28d: FSTP float ptr [0x02ceea7c]
//   XREF to: 02ceea7c (WRITE)
// 0049c293: FSTP float ptr [0x02ceea74]
//   XREF to: 02ceea74 (WRITE)
// 0049c299: MOV EDX,dword ptr [EBP + 0x14]
//   Label: LAB_0049c299
//   XREF to: Stack[0x4] (READ)
// 0049c29c: ADD EDX,0x18
// 0049c29f: CMP EDX,0x2ceea80
//   XREF to: 02ceea80 (DATA)
// 0049c2a5: JZ 0x0049c2c0
//   XREF to: 0049c2c0 (CONDITIONAL_JUMP)
// 0049c2a7: FLD float ptr [EDX]
// 0049c2a9: FLD float ptr [EDX + 0x8]
// 0049c2ac: MOV EAX,dword ptr [EDX + 0x4]
// 0049c2af: MOV [0x02ceea84],EAX
//   XREF to: 02ceea84 (WRITE)
// 0049c2b4: FSTP float ptr [0x02ceea88]
//   XREF to: 02ceea88 (WRITE)
// 0049c2ba: FSTP float ptr [0x02ceea80]
//   XREF to: 02ceea80 (WRITE)
// 0049c2c0: MOV ECX,0x1
//   Label: LAB_0049c2c0
// 0049c2c5: MOV EAX,ECX
// 0049c2c7: MOV ESP,EBP
// 0049c2c9: POP EBP
// 0049c2ca: POP EDI
// 0049c2cb: POP ESI
// 0049c2cc: POP EBX
// 0049c2cd: RET
// 0049c2ce: MOV EAX,ECX
//   Label: LAB_0049c2ce
// 0049c2d0: FLD float ptr [EAX]
// 0049c2d2: FLD float ptr [EAX + 0x8]
// 0049c2d5: MOV EDX,dword ptr [EAX + 0x4]
// 0049c2d8: MOV dword ptr [0x02cee5d4],EDX
//   XREF to: 02cee5d4 (WRITE)
// 0049c2de: FSTP float ptr [0x02cee5d8]
//   XREF to: 02cee5d8 (WRITE)
// 0049c2e4: FSTP float ptr [0x02cee5d0]
//   XREF to: 02cee5d0 (WRITE)
// 0049c2ea: JMP 0x0049c146
//   XREF to: 0049c146 (UNCONDITIONAL_JUMP)
// 0049c2ef: MOV EDX,dword ptr [ESP + 0x10]
//   Label: LAB_0049c2ef
//   XREF to: Stack[-0x20] (READ)
// 0049c2f3: TEST EDX,EDX
// 0049c2f5: JNZ 0x0049c6fd
//   XREF to: 0049c6fd (CONDITIONAL_JUMP)
// 0049c2fb: MOV dword ptr [0x02cee754],EDX
//   XREF to: 02cee754 (WRITE)
// 0049c301: MOV dword ptr [0x02cee818],EDX
//   XREF to: 02cee818 (WRITE)
// 0049c307: MOV dword ptr [0x02cee8dc],EDX
//   XREF to: 02cee8dc (WRITE)
// 0049c30d: MOV dword ptr [0x02cee9a0],EDX
//   XREF to: 02cee9a0 (WRITE)
// 0049c313: MOV dword ptr [0x02ceea64],EDX
//   XREF to: 02ceea64 (WRITE)
// 0049c319: MOV dword ptr [0x02cee690],EDX
//   XREF to: 02cee690 (WRITE)
// 0049c31f: MOV EDX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0049c322: MOV ECX,dword ptr [0x02cee5cc]
//   XREF to: 02cee5cc (READ)
// 0049c328: MOV EDX,dword ptr [EDX + 0x4]
// 0049c32b: XOR EBX,EBX
// 0049c32d: MOV dword ptr [ESP + 0x18],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 0049c331: TEST ECX,ECX
// 0049c333: JLE 0x0049c3bc
//   XREF to: 0049c3bc (CONDITIONAL_JUMP)
// 0049c339: MOV ESI,0x2cee5d0
//   XREF to: 02cee5d0 (DATA)
// 0049c33e: MOV EDI,dword ptr [0x02cee5cc]
//   Label: LAB_0049c33e
//   XREF to: 02cee5cc (READ)
// 0049c344: LEA ECX,[EBX + 0x1]
// 0049c347: CMP ECX,EDI
// 0049c349: JNZ 0x0049c34d
//   XREF to: 0049c34d (CONDITIONAL_JUMP)
// 0049c34b: XOR ECX,EDI
// 0049c34d: IMUL ECX,ECX,0xc
//   Label: LAB_0049c34d
// 0049c350: FLD float ptr [ESI + 0x4]
//   XREF to: 02cee5d4 (READ)
//   XREF to: 02cee5e0 (READ)
// 0049c353: MOV EDI,0x2cee5d0
//   XREF to: 02cee5d0 (DATA)
// 0049c358: MOV EDX,ESI
//   XREF to: 02cee5dc (PARAM)
// 0049c35a: ADD EDI,ECX
// 0049c35c: XOR ECX,ECX
// 0049c35e: FCOMP float ptr [ESP + 0x18]
//   XREF to: Stack[-0x18] (READ)
// 0049c362: FNSTSW AX
// 0049c364: SAHF
// 0049c365: JBE 0x0049c36c
//   XREF to: 0049c36c (CONDITIONAL_JUMP)
// 0049c367: MOV ECX,0x1
// 0049c36c: FLD float ptr [EDI + 0x4]
//   Label: LAB_0049c36c
//   XREF to: 02cee5e0 (READ)
// 0049c36f: FCOMP float ptr [ESP + 0x18]
//   XREF to: Stack[-0x18] (READ)
// 0049c373: FNSTSW AX
// 0049c375: SAHF
// 0049c376: JBE 0x0049c37b
//   XREF to: 0049c37b (CONDITIONAL_JUMP)
// 0049c378: OR CL,0x2
// 0049c37b: CMP ECX,0x3
//   Label: LAB_0049c37b
// 0049c37e: JA 0x0049c3ae
//   XREF to: 0049c3ae (CONDITIONAL_JUMP)
// 0049c380: JMP dword ptr [ECX*0x4 + 0x49c0b4]
//   Label: switchD
//   XREF to: 0049c387 (COMPUTED_JUMP)
//   XREF to: 0049c708 (COMPUTED_JUMP)
//   XREF to: 0049c74d (COMPUTED_JUMP)
//   XREF to: 0049c3ae (COMPUTED_JUMP)
//   XREF to: 0049c0c0 (READ)
//   XREF to: 0049c0b8 (READ)
//   XREF to: 0049c0b4 (DATA)
// 0049c387: IMUL ECX,dword ptr [0x02cee690],0xc
//   Label: caseD_0
//   XREF to: 02cee690 (READ)
// 0049c38e: ADD ECX,0x2cee694
//   XREF to: 02cee694 (DATA)
// 0049c394: CMP ECX,EDX
// 0049c396: JZ 0x0049c3a8
//   XREF to: 0049c3a8 (CONDITIONAL_JUMP)
// 0049c398: MOV EAX,dword ptr [EDX]
//   XREF to: 02cee5dc (READ)
// 0049c39a: MOV dword ptr [ECX],EAX
//   XREF to: 02cee988 (WRITE)
// 0049c39c: MOV EAX,dword ptr [EDX + 0x4]
//   XREF to: 02cee5e0 (READ)
// 0049c39f: MOV dword ptr [ECX + 0x4],EAX
//   XREF to: 02cee98c (WRITE)
// 0049c3a2: MOV EAX,dword ptr [EDX + 0x8]
//   XREF to: 02cee5e4 (READ)
// 0049c3a5: MOV dword ptr [ECX + 0x8],EAX
//   XREF to: 02cee990 (WRITE)
// 0049c3a8: INC dword ptr [0x02cee690]
//   Label: LAB_0049c3a8
//   XREF to: 02cee690 (READ_WRITE)
// 0049c3ae: MOV EDI,dword ptr [0x02cee5cc]
//   Label: caseD_3
//   XREF to: 02cee5cc (READ)
// 0049c3b4: INC EBX
// 0049c3b5: ADD ESI,0xc
// 0049c3b8: CMP EBX,EDI
// 0049c3ba: JL 0x0049c33e
//   XREF to: 0049c33e (CONDITIONAL_JUMP)
// 0049c3bc: MOV EAX,[0x02cee690]
//   Label: LAB_0049c3bc
//   XREF to: 02cee690 (READ)
// 0049c3c1: CMP EAX,0x3
// 0049c3c4: JL 0x0049c6fd
//   XREF to: 0049c6fd (CONDITIONAL_JUMP)
// 0049c3ca: MOV EDX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0049c3cd: MOV EDX,dword ptr [EDX + 0x4]
// 0049c3d0: XOR EBX,EBX
// 0049c3d2: MOV dword ptr [ESP + 0x8],EDX
//   XREF to: Stack[-0x28] (WRITE)
// 0049c3d6: TEST EAX,EAX
// 0049c3d8: JLE 0x0049c461
//   XREF to: 0049c461 (CONDITIONAL_JUMP)
// 0049c3de: MOV ESI,0x2cee694
//   XREF to: 02cee694 (DATA)
// 0049c3e3: MOV EDI,dword ptr [0x02cee690]
//   Label: LAB_0049c3e3
//   XREF to: 02cee690 (READ)
// 0049c3e9: LEA ECX,[EBX + 0x1]
// 0049c3ec: CMP ECX,EDI
// 0049c3ee: JNZ 0x0049c3f2
//   XREF to: 0049c3f2 (CONDITIONAL_JUMP)
// 0049c3f0: XOR ECX,EDI
// 0049c3f2: IMUL ECX,ECX,0xc
//   Label: LAB_0049c3f2
// 0049c3f5: FLD float ptr [ESI + 0x4]
//   XREF to: 02cee698 (READ)
//   XREF to: 02cee6a4 (READ)
// 0049c3f8: MOV EDI,0x2cee694
//   XREF to: 02cee694 (DATA)
// 0049c3fd: MOV EDX,ESI
//   XREF to: 02cee6a0 (PARAM)
// 0049c3ff: ADD EDI,ECX
// 0049c401: XOR ECX,ECX
// 0049c403: FCOMP float ptr [ESP + 0x8]
//   XREF to: Stack[-0x28] (READ)
// 0049c407: FNSTSW AX
// 0049c409: SAHF
// 0049c40a: JNC 0x0049c411
//   XREF to: 0049c411 (CONDITIONAL_JUMP)
// 0049c40c: MOV ECX,0x1
// 0049c411: FLD float ptr [EDI + 0x4]
//   Label: LAB_0049c411
//   XREF to: 02cee6a4 (READ)
//   XREF to: 02cee9bc (READ)
// 0049c414: FCOMP float ptr [ESP + 0x8]
//   XREF to: Stack[-0x28] (READ)
// 0049c418: FNSTSW AX
// 0049c41a: SAHF
// 0049c41b: JNC 0x0049c420
//   XREF to: 0049c420 (CONDITIONAL_JUMP)
// 0049c41d: OR CL,0x2
// 0049c420: CMP ECX,0x3
//   Label: LAB_0049c420
// 0049c423: JA 0x0049c453
//   XREF to: 0049c453 (CONDITIONAL_JUMP)
// 0049c425: JMP dword ptr [ECX*0x4 + 0x49c0c4]
//   Label: switchD
//   XREF to: 0049c42c (COMPUTED_JUMP)
//   XREF to: 0049c7bc (COMPUTED_JUMP)
//   XREF to: 0049c7ff (COMPUTED_JUMP)
//   XREF to: 0049c453 (COMPUTED_JUMP)
//   XREF to: 0049c0d0 (READ)
//   XREF to: 0049c0c8 (READ)
//   XREF to: 0049c0c4 (DATA)
// 0049c42c: IMUL ECX,dword ptr [0x02cee754],0xc
//   Label: caseD_0
//   XREF to: 02cee754 (READ)
// 0049c433: ADD ECX,0x2cee758
//   XREF to: 02cee758 (DATA)
// 0049c439: CMP ECX,EDX
// 0049c43b: JZ 0x0049c44d
//   XREF to: 0049c44d (CONDITIONAL_JUMP)
// 0049c43d: MOV EAX,dword ptr [EDX]
//   XREF to: 02cee6a0 (READ)
// 0049c43f: MOV dword ptr [ECX],EAX
//   XREF to: 02ceea4c (WRITE)
// 0049c441: MOV EAX,dword ptr [EDX + 0x4]
//   XREF to: 02cee6a4 (READ)
// 0049c444: MOV dword ptr [ECX + 0x4],EAX
//   XREF to: 02ceea50 (WRITE)
// 0049c447: MOV EAX,dword ptr [EDX + 0x8]
//   XREF to: 02cee6a8 (READ)
// 0049c44a: MOV dword ptr [ECX + 0x8],EAX
//   XREF to: 02ceea54 (WRITE)
// 0049c44d: INC dword ptr [0x02cee754]
//   Label: LAB_0049c44d
//   XREF to: 02cee754 (READ_WRITE)
// 0049c453: MOV EDX,dword ptr [0x02cee690]
//   Label: caseD_3
//   XREF to: 02cee690 (READ)
// 0049c459: INC EBX
// 0049c45a: ADD ESI,0xc
// 0049c45d: CMP EBX,EDX
// 0049c45f: JL 0x0049c3e3
//   XREF to: 0049c3e3 (CONDITIONAL_JUMP)
// 0049c461: MOV ECX,dword ptr [0x02cee754]
//   Label: LAB_0049c461
//   XREF to: 02cee754 (READ)
// 0049c467: CMP ECX,0x3
// 0049c46a: JL 0x0049c6fd
//   XREF to: 0049c6fd (CONDITIONAL_JUMP)
// 0049c470: MOV EDX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0049c473: MOV EDX,dword ptr [EDX]
// 0049c475: XOR ESI,ESI
// 0049c477: MOV dword ptr [ESP + 0x14],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 0049c47b: TEST ECX,ECX
// 0049c47d: JLE 0x0049c504
//   XREF to: 0049c504 (CONDITIONAL_JUMP)
// 0049c483: MOV EBX,0x2cee758
//   XREF to: 02cee758 (DATA)
// 0049c488: MOV EDI,dword ptr [0x02cee754]
//   Label: LAB_0049c488
//   XREF to: 02cee754 (READ)
// 0049c48e: LEA ECX,[ESI + 0x1]
// 0049c491: CMP ECX,EDI
// 0049c493: JNZ 0x0049c497
//   XREF to: 0049c497 (CONDITIONAL_JUMP)
// 0049c495: XOR ECX,EDI
// 0049c497: IMUL ECX,ECX,0xc
//   Label: LAB_0049c497
// 0049c49a: FLD float ptr [EBX]
//   XREF to: 02cee758 (READ)
//   XREF to: 02cee764 (READ)
// 0049c49c: MOV EDI,0x2cee758
//   XREF to: 02cee758 (DATA)
// 0049c4a1: MOV EDX,EBX
//   XREF to: 02cee764 (PARAM)
// 0049c4a3: ADD EDI,ECX
// 0049c4a5: XOR ECX,ECX
// 0049c4a7: FCOMP float ptr [ESP + 0x14]
//   XREF to: Stack[-0x1c] (READ)
// 0049c4ab: FNSTSW AX
// 0049c4ad: SAHF
// 0049c4ae: JBE 0x0049c4b5
//   XREF to: 0049c4b5 (CONDITIONAL_JUMP)
// 0049c4b0: MOV ECX,0x1
// 0049c4b5: FLD float ptr [EDI]
//   Label: LAB_0049c4b5
//   XREF to: 02cee764 (READ)
//   XREF to: 02ceea7c (READ)
// 0049c4b7: FCOMP float ptr [ESP + 0x14]
//   XREF to: Stack[-0x1c] (READ)
// 0049c4bb: FNSTSW AX
// 0049c4bd: SAHF
// 0049c4be: JBE 0x0049c4c3
//   XREF to: 0049c4c3 (CONDITIONAL_JUMP)
// 0049c4c0: OR CL,0x2
// 0049c4c3: CMP ECX,0x3
//   Label: LAB_0049c4c3
// 0049c4c6: JA 0x0049c4f6
//   XREF to: 0049c4f6 (CONDITIONAL_JUMP)
// 0049c4c8: JMP dword ptr [ECX*0x4 + 0x49c0d4]
//   Label: switchD
//   XREF to: 0049c4cf (COMPUTED_JUMP)
//   XREF to: 0049c86c (COMPUTED_JUMP)
//   XREF to: 0049c8b1 (COMPUTED_JUMP)
//   XREF to: 0049c4f6 (COMPUTED_JUMP)
//   XREF to: 0049c0e0 (READ)
//   XREF to: 0049c0d8 (READ)
//   XREF to: 0049c0d4 (DATA)
// 0049c4cf: IMUL ECX,dword ptr [0x02cee818],0xc
//   Label: caseD_0
//   XREF to: 02cee818 (READ)
// 0049c4d6: ADD ECX,0x2cee81c
//   XREF to: 02cee81c (DATA)
// 0049c4dc: CMP ECX,EDX
// 0049c4de: JZ 0x0049c4f0
//   XREF to: 0049c4f0 (CONDITIONAL_JUMP)
// 0049c4e0: MOV EAX,dword ptr [EDX]
//   XREF to: 02cee764 (READ)
// 0049c4e2: MOV dword ptr [ECX],EAX
//   XREF to: 02ceeb10 (WRITE)
// 0049c4e4: MOV EAX,dword ptr [EDX + 0x4]
//   XREF to: 02cee768 (READ)
// 0049c4e7: MOV dword ptr [ECX + 0x4],EAX
//   XREF to: 02ceeb14 (WRITE)
// 0049c4ea: MOV EAX,dword ptr [EDX + 0x8]
//   XREF to: 02cee76c (READ)
// 0049c4ed: MOV dword ptr [ECX + 0x8],EAX
//   XREF to: 02ceeb18 (WRITE)
// 0049c4f0: INC dword ptr [0x02cee818]
//   Label: LAB_0049c4f0
//   XREF to: 02cee818 (READ_WRITE)
// 0049c4f6: MOV EDX,dword ptr [0x02cee754]
//   Label: caseD_3
//   XREF to: 02cee754 (READ)
// 0049c4fc: INC ESI
// 0049c4fd: ADD EBX,0xc
//   XREF to: 02cee764 (PARAM)
// 0049c500: CMP ESI,EDX
// 0049c502: JL 0x0049c488
//   XREF to: 0049c488 (CONDITIONAL_JUMP)
// 0049c504: MOV ECX,dword ptr [0x02cee818]
//   Label: LAB_0049c504
//   XREF to: 02cee818 (READ)
// 0049c50a: CMP ECX,0x3
// 0049c50d: JL 0x0049c6fd
//   XREF to: 0049c6fd (CONDITIONAL_JUMP)
// 0049c513: MOV EDX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0049c516: MOV EDX,dword ptr [EDX]
// 0049c518: XOR ESI,ESI
// 0049c51a: MOV dword ptr [ESP],EDX
//   XREF to: Stack[-0x30] (DATA)
// 0049c51d: TEST ECX,ECX
// 0049c51f: JLE 0x0049c5a4
//   XREF to: 0049c5a4 (CONDITIONAL_JUMP)
// 0049c525: MOV EBX,0x2cee81c
//   XREF to: 02cee81c (DATA)
// 0049c52a: MOV EDI,dword ptr [0x02cee818]
//   Label: LAB_0049c52a
//   XREF to: 02cee818 (READ)
// 0049c530: LEA ECX,[ESI + 0x1]
// 0049c533: CMP ECX,EDI
// 0049c535: JNZ 0x0049c539
//   XREF to: 0049c539 (CONDITIONAL_JUMP)
// 0049c537: XOR ECX,EDI
// 0049c539: IMUL ECX,ECX,0xc
//   Label: LAB_0049c539
// 0049c53c: FLD float ptr [EBX]
//   XREF to: 02cee81c (READ)
//   XREF to: 02cee828 (READ)
// 0049c53e: MOV EDI,0x2cee81c
//   XREF to: 02cee81c (DATA)
// 0049c543: MOV EDX,EBX
//   XREF to: 02cee828 (PARAM)
// 0049c545: ADD EDI,ECX
// 0049c547: XOR ECX,ECX
// 0049c549: FCOMP float ptr [ESP]
//   XREF to: Stack[-0x30] (DATA)
// 0049c54c: FNSTSW AX
// 0049c54e: SAHF
// 0049c54f: JNC 0x0049c556
//   XREF to: 0049c556 (CONDITIONAL_JUMP)
// 0049c551: MOV ECX,0x1
// 0049c556: FLD float ptr [EDI]
//   Label: LAB_0049c556
//   XREF to: 02cee828 (READ)
//   XREF to: 02ceeb40 (READ)
// 0049c558: FCOMP float ptr [ESP]
//   XREF to: Stack[-0x30] (DATA)
// 0049c55b: FNSTSW AX
// 0049c55d: SAHF
// 0049c55e: JNC 0x0049c563
//   XREF to: 0049c563 (CONDITIONAL_JUMP)
// 0049c560: OR CL,0x2
// 0049c563: CMP ECX,0x3
//   Label: LAB_0049c563
// 0049c566: JA 0x0049c596
//   XREF to: 0049c596 (CONDITIONAL_JUMP)
// 0049c568: JMP dword ptr [ECX*0x4 + 0x49c0e4]
//   Label: switchD
//   XREF to: 0049c56f (COMPUTED_JUMP)
//   XREF to: 0049c920 (COMPUTED_JUMP)
//   XREF to: 0049c962 (COMPUTED_JUMP)
//   XREF to: 0049c596 (COMPUTED_JUMP)
//   XREF to: 0049c0f0 (READ)
//   XREF to: 0049c0e8 (READ)
//   XREF to: 0049c0e4 (DATA)
// 0049c56f: IMUL ECX,dword ptr [0x02cee8dc],0xc
//   Label: caseD_0
//   XREF to: 02cee8dc (READ)
// 0049c576: ADD ECX,0x2cee8e0
//   XREF to: 02cee8e0 (DATA)
// 0049c57c: CMP ECX,EDX
// 0049c57e: JZ 0x0049c590
//   XREF to: 0049c590 (CONDITIONAL_JUMP)
// 0049c580: MOV EAX,dword ptr [EDX]
//   XREF to: 02cee828 (READ)
// 0049c582: MOV dword ptr [ECX],EAX
//   XREF to: 02ceebd4 (WRITE)
// 0049c584: MOV EAX,dword ptr [EDX + 0x4]
//   XREF to: 02cee82c (READ)
// 0049c587: MOV dword ptr [ECX + 0x4],EAX
//   XREF to: 02ceebd8 (WRITE)
// 0049c58a: MOV EAX,dword ptr [EDX + 0x8]
//   XREF to: 02cee830 (READ)
// 0049c58d: MOV dword ptr [ECX + 0x8],EAX
//   XREF to: 02ceebdc (WRITE)
// 0049c590: INC dword ptr [0x02cee8dc]
//   Label: LAB_0049c590
//   XREF to: 02cee8dc (READ_WRITE)
// 0049c596: MOV EDX,dword ptr [0x02cee818]
//   Label: caseD_3
//   XREF to: 02cee818 (READ)
// 0049c59c: INC ESI
// 0049c59d: ADD EBX,0xc
//   XREF to: 02cee828 (PARAM)
// 0049c5a0: CMP ESI,EDX
// 0049c5a2: JL 0x0049c52a
//   XREF to: 0049c52a (CONDITIONAL_JUMP)
// 0049c5a4: MOV ECX,dword ptr [0x02cee8dc]
//   Label: LAB_0049c5a4
//   XREF to: 02cee8dc (READ)
// 0049c5aa: CMP ECX,0x3
// 0049c5ad: JL 0x0049c6fd
//   XREF to: 0049c6fd (CONDITIONAL_JUMP)
// 0049c5b3: MOV EDX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0049c5b6: MOV EDX,dword ptr [EDX + 0x8]
// 0049c5b9: XOR EBX,EBX
// 0049c5bb: MOV dword ptr [ESP + 0xc],EDX
//   XREF to: Stack[-0x24] (WRITE)
// 0049c5bf: TEST ECX,ECX
// 0049c5c1: JLE 0x0049c64a
//   XREF to: 0049c64a (CONDITIONAL_JUMP)
// 0049c5c7: MOV ESI,0x2cee8e0
//   XREF to: 02cee8e0 (DATA)
// 0049c5cc: MOV EDI,dword ptr [0x02cee8dc]
//   Label: LAB_0049c5cc
//   XREF to: 02cee8dc (READ)
// 0049c5d2: LEA ECX,[EBX + 0x1]
// 0049c5d5: CMP ECX,EDI
// 0049c5d7: JNZ 0x0049c5db
//   XREF to: 0049c5db (CONDITIONAL_JUMP)
// 0049c5d9: XOR ECX,EDI
// 0049c5db: IMUL ECX,ECX,0xc
//   Label: LAB_0049c5db
// 0049c5de: FLD float ptr [ESI + 0x8]
//   XREF to: 02cee8e8 (READ)
//   XREF to: 02cee8f4 (READ)
// 0049c5e1: MOV EDI,0x2cee8e0
//   XREF to: 02cee8e0 (DATA)
// 0049c5e6: MOV EDX,ESI
//   XREF to: 02cee8ec (PARAM)
// 0049c5e8: ADD EDI,ECX
// 0049c5ea: XOR ECX,ECX
// 0049c5ec: FCOMP float ptr [ESP + 0xc]
//   XREF to: Stack[-0x24] (READ)
// 0049c5f0: FNSTSW AX
// 0049c5f2: SAHF
// 0049c5f3: JNC 0x0049c5fa
//   XREF to: 0049c5fa (CONDITIONAL_JUMP)
// 0049c5f5: MOV ECX,0x1
// 0049c5fa: FLD float ptr [EDI + 0x8]
//   Label: LAB_0049c5fa
//   XREF to: 02cee8f4 (READ)
//   XREF to: 02ceec0c (READ)
// 0049c5fd: FCOMP float ptr [ESP + 0xc]
//   XREF to: Stack[-0x24] (READ)
// 0049c601: FNSTSW AX
// 0049c603: SAHF
// 0049c604: JNC 0x0049c609
//   XREF to: 0049c609 (CONDITIONAL_JUMP)
// 0049c606: OR CL,0x2
// 0049c609: CMP ECX,0x3
//   Label: LAB_0049c609
// 0049c60c: JA 0x0049c63c
//   XREF to: 0049c63c (CONDITIONAL_JUMP)
// 0049c60e: JMP dword ptr [ECX*0x4 + 0x49c0f4]
//   Label: switchD
//   XREF to: 0049c615 (COMPUTED_JUMP)
//   XREF to: 0049c9ce (COMPUTED_JUMP)
//   XREF to: 0049ca11 (COMPUTED_JUMP)
//   XREF to: 0049c63c (COMPUTED_JUMP)
//   XREF to: 0049c100 (READ)
//   XREF to: 0049c0f8 (READ)
//   XREF to: 0049c0f4 (DATA)
// 0049c615: IMUL ECX,dword ptr [0x02cee9a0],0xc
//   Label: caseD_0
//   XREF to: 02cee9a0 (READ)
// 0049c61c: ADD ECX,0x2cee9a4
//   XREF to: 02cee9a4 (DATA)
// 0049c622: CMP ECX,EDX
// 0049c624: JZ 0x0049c636
//   XREF to: 0049c636 (CONDITIONAL_JUMP)
// 0049c626: MOV EAX,dword ptr [EDX]
//   XREF to: 02cee8ec (READ)
// 0049c628: MOV dword ptr [ECX],EAX
//   XREF to: 02ceec98 (WRITE)
// 0049c62a: MOV EAX,dword ptr [EDX + 0x4]
//   XREF to: 02cee8f0 (READ)
// 0049c62d: MOV dword ptr [ECX + 0x4],EAX
//   XREF to: 02ceec9c (WRITE)
// 0049c630: MOV EAX,dword ptr [EDX + 0x8]
//   XREF to: 02cee8f4 (READ)
// 0049c633: MOV dword ptr [ECX + 0x8],EAX
//   XREF to: 02ceeca0 (WRITE)
// 0049c636: INC dword ptr [0x02cee9a0]
//   Label: LAB_0049c636
//   XREF to: 02cee9a0 (READ_WRITE)
// 0049c63c: MOV EDX,dword ptr [0x02cee8dc]
//   Label: caseD_3
//   XREF to: 02cee8dc (READ)
// 0049c642: INC EBX
// 0049c643: ADD ESI,0xc
// 0049c646: CMP EBX,EDX
// 0049c648: JL 0x0049c5cc
//   XREF to: 0049c5cc (CONDITIONAL_JUMP)
// 0049c64a: MOV ECX,dword ptr [0x02cee9a0]
//   Label: LAB_0049c64a
//   XREF to: 02cee9a0 (READ)
// 0049c650: CMP ECX,0x3
// 0049c653: JL 0x0049c6fd
//   XREF to: 0049c6fd (CONDITIONAL_JUMP)
// 0049c659: MOV EDX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0049c65c: MOV EDX,dword ptr [EDX + 0x8]
// 0049c65f: XOR ESI,ESI
// 0049c661: MOV dword ptr [ESP + 0x4],EDX
//   XREF to: Stack[-0x2c] (WRITE)
// 0049c665: TEST ECX,ECX
// 0049c667: JLE 0x0049c6f0
//   XREF to: 0049c6f0 (CONDITIONAL_JUMP)
// 0049c66d: MOV EBX,0x2cee9a4
//   XREF to: 02cee9a4 (DATA)
// 0049c672: MOV EDI,dword ptr [0x02cee9a0]
//   Label: LAB_0049c672
//   XREF to: 02cee9a0 (READ)
// 0049c678: LEA ECX,[ESI + 0x1]
// 0049c67b: CMP ECX,EDI
// 0049c67d: JNZ 0x0049c681
//   XREF to: 0049c681 (CONDITIONAL_JUMP)
// 0049c67f: XOR ECX,EDI
// 0049c681: IMUL ECX,ECX,0xc
//   Label: LAB_0049c681
// 0049c684: FLD float ptr [EBX + 0x8]
//   XREF to: 02cee9ac (READ)
//   XREF to: 02cee9b8 (READ)
// 0049c687: MOV EDI,0x2cee9a4
//   XREF to: 02cee9a4 (DATA)
// 0049c68c: MOV EDX,EBX
//   XREF to: 02cee9b0 (PARAM)
// 0049c68e: ADD EDI,ECX
// 0049c690: XOR ECX,ECX
// 0049c692: FCOMP float ptr [ESP + 0x4]
//   XREF to: Stack[-0x2c] (READ)
// 0049c696: FNSTSW AX
// 0049c698: SAHF
// 0049c699: JBE 0x0049c6a0
//   XREF to: 0049c6a0 (CONDITIONAL_JUMP)
// 0049c69b: MOV ECX,0x1
// 0049c6a0: FLD float ptr [EDI + 0x8]
//   Label: LAB_0049c6a0
//   XREF to: 02cee9b8 (READ)
//   XREF to: 02ceecd0 (READ)
// 0049c6a3: FCOMP float ptr [ESP + 0x4]
//   XREF to: Stack[-0x2c] (READ)
// 0049c6a7: FNSTSW AX
// 0049c6a9: SAHF
// 0049c6aa: JBE 0x0049c6af
//   XREF to: 0049c6af (CONDITIONAL_JUMP)
// 0049c6ac: OR CL,0x2
// 0049c6af: CMP ECX,0x3
//   Label: LAB_0049c6af
// 0049c6b2: JA 0x0049c6e2
//   XREF to: 0049c6e2 (CONDITIONAL_JUMP)
// 0049c6b4: JMP dword ptr [ECX*0x4 + 0x49c104]
//   Label: switchD
//   XREF to: 0049c6bb (COMPUTED_JUMP)
//   XREF to: 0049ca7e (COMPUTED_JUMP)
//   XREF to: 0049cac1 (COMPUTED_JUMP)
//   XREF to: 0049c6e2 (COMPUTED_JUMP)
//   XREF to: 0049c110 (READ)
//   XREF to: 0049c108 (READ)
//   XREF to: 0049c104 (DATA)
// 0049c6bb: IMUL ECX,dword ptr [0x02ceea64],0xc
//   Label: caseD_0
//   XREF to: 02ceea64 (READ)
// 0049c6c2: ADD ECX,0x2ceea68
//   XREF to: 02ceea68 (DATA)
// 0049c6c8: CMP ECX,EDX
// 0049c6ca: JZ 0x0049c6dc
//   XREF to: 0049c6dc (CONDITIONAL_JUMP)
// 0049c6cc: MOV EAX,dword ptr [EDX]
//   XREF to: 02cee9b0 (READ)
// 0049c6ce: MOV dword ptr [ECX],EAX
//   XREF to: 02ceed5c (WRITE)
// 0049c6d0: MOV EAX,dword ptr [EDX + 0x4]
//   XREF to: 02cee9b4 (READ)
// 0049c6d3: MOV dword ptr [ECX + 0x4],EAX
//   XREF to: 02ceed60 (WRITE)
// 0049c6d6: MOV EAX,dword ptr [EDX + 0x8]
//   XREF to: 02cee9b8 (READ)
// 0049c6d9: MOV dword ptr [ECX + 0x8],EAX
//   XREF to: 02ceed64 (WRITE)
// 0049c6dc: INC dword ptr [0x02ceea64]
//   Label: LAB_0049c6dc
//   XREF to: 02ceea64 (READ_WRITE)
// 0049c6e2: MOV EDX,dword ptr [0x02cee9a0]
//   Label: caseD_3
//   XREF to: 02cee9a0 (READ)
// 0049c6e8: INC ESI
// 0049c6e9: ADD EBX,0xc
//   XREF to: 02cee9b0 (PARAM)
// 0049c6ec: CMP ESI,EDX
// 0049c6ee: JL 0x0049c672
//   XREF to: 0049c672 (CONDITIONAL_JUMP)
// 0049c6f0: CMP dword ptr [0x02ceea64],0x3
//   Label: LAB_0049c6f0
//   XREF to: 02ceea64 (READ)
// 0049c6f7: JGE 0x0049c2c0
//   XREF to: 0049c2c0 (CONDITIONAL_JUMP)
// 0049c6fd: XOR ECX,ECX
//   Label: LAB_0049c6fd
// 0049c6ff: MOV EAX,ECX
// 0049c701: MOV ESP,EBP
// 0049c703: POP EBP
// 0049c704: POP EDI
// 0049c705: POP ESI
// 0049c706: POP EBX
// 0049c707: RET
// 0049c708: IMUL ECX,dword ptr [0x02cee690],0xc
//   Label: caseD_1
//   XREF to: 02cee690 (READ)
// 0049c70f: FLD float ptr [ESP + 0x18]
//   XREF to: Stack[-0x18] (READ)
// 0049c713: SUB ESP,0x8
// 0049c716: FCHS
// 0049c718: FSTP double ptr [ESP]
//   XREF to: Stack[-0x38] (DATA)
// 0049c71b: PUSH 0x0
// 0049c71d: PUSH 0x0
// 0049c71f: PUSH 0x3ff00000
// 0049c724: PUSH 0x0
// 0049c726: PUSH 0x0
// 0049c728: PUSH 0x0
// 0049c72a: ADD ECX,0x2cee694
//   XREF to: 02cee988 (PARAM)
//   XREF to: 02cee694 (DATA)
// 0049c730: PUSH ECX
//   XREF to: 02cee988 (DATA)
// 0049c731: PUSH EDX
//   XREF to: 02cee5dc (DATA)
// 0049c732: PUSH EDI
//   XREF to: 02cee5dc (DATA)
// 0049c733: CALL core_dtri.cpp_clipLineToPlane_FUN_0049b6c0
//   XREF to: 0049b6c0 (UNCONDITIONAL_CALL)
// 0049c738: MOV EDX,dword ptr [0x02cee690]
//   XREF to: 02cee690 (READ)
// 0049c73e: INC EDX
// 0049c73f: ADD ESP,0x2c
// 0049c742: MOV dword ptr [0x02cee690],EDX
//   XREF to: 02cee690 (WRITE)
// 0049c748: JMP 0x0049c3ae
//   XREF to: 0049c3ae (UNCONDITIONAL_JUMP)
// 0049c74d: IMUL ECX,dword ptr [0x02cee690],0xc
//   Label: caseD_2
//   XREF to: 02cee690 (READ)
// 0049c754: ADD ECX,0x2cee694
//   XREF to: 02cee694 (DATA)
// 0049c75a: CMP ECX,EDX
// 0049c75c: JZ 0x0049c76e
//   XREF to: 0049c76e (CONDITIONAL_JUMP)
// 0049c75e: MOV EAX,dword ptr [EDX]
//   XREF to: 02cee5dc (READ)
// 0049c760: MOV dword ptr [ECX],EAX
//   XREF to: 02cee988 (WRITE)
// 0049c762: MOV EAX,dword ptr [EDX + 0x4]
//   XREF to: 02cee5e0 (READ)
// 0049c765: MOV dword ptr [ECX + 0x4],EAX
//   XREF to: 02cee98c (WRITE)
// 0049c768: MOV EAX,dword ptr [EDX + 0x8]
//   XREF to: 02cee5e4 (READ)
// 0049c76b: MOV dword ptr [ECX + 0x8],EAX
//   XREF to: 02cee990 (WRITE)
// 0049c76e: MOV ECX,dword ptr [0x02cee690]
//   Label: LAB_0049c76e
//   XREF to: 02cee690 (READ)
// 0049c774: INC ECX
// 0049c775: MOV dword ptr [0x02cee690],ECX
//   XREF to: 02cee690 (WRITE)
// 0049c77b: IMUL ECX,ECX,0xc
// 0049c77e: FLD float ptr [ESP + 0x18]
//   XREF to: Stack[-0x18] (READ)
// 0049c782: SUB ESP,0x8
// 0049c785: FCHS
// 0049c787: FSTP double ptr [ESP]
//   XREF to: Stack[-0x38] (DATA)
// 0049c78a: PUSH 0x0
// 0049c78c: PUSH 0x0
// 0049c78e: PUSH 0x3ff00000
// 0049c793: PUSH 0x0
// 0049c795: PUSH 0x0
// 0049c797: PUSH 0x0
// 0049c799: ADD ECX,0x2cee694
//   XREF to: 02cee994 (PARAM)
//   XREF to: 02cee694 (DATA)
// 0049c79f: PUSH ECX
//   XREF to: 02cee994 (DATA)
// 0049c7a0: PUSH EDI
//   XREF to: 02cee5dc (DATA)
// 0049c7a1: PUSH EDX
//   XREF to: 02cee5dc (DATA)
// 0049c7a2: CALL core_dtri.cpp_clipLineToPlane_FUN_0049b6c0
//   XREF to: 0049b6c0 (UNCONDITIONAL_CALL)
// 0049c7a7: MOV EDX,dword ptr [0x02cee690]
//   XREF to: 02cee690 (READ)
// 0049c7ad: INC EDX
// 0049c7ae: ADD ESP,0x2c
// 0049c7b1: MOV dword ptr [0x02cee690],EDX
//   XREF to: 02cee690 (WRITE)
// 0049c7b7: JMP 0x0049c3ae
//   XREF to: 0049c3ae (UNCONDITIONAL_JUMP)
// 0049c7bc: IMUL ECX,dword ptr [0x02cee754],0xc
//   Label: caseD_1
//   XREF to: 02cee754 (READ)
// 0049c7c3: FLD float ptr [ESP + 0x8]
//   XREF to: Stack[-0x28] (READ)
// 0049c7c7: SUB ESP,0x8
// 0049c7ca: FSTP double ptr [ESP]
//   XREF to: Stack[-0x38] (DATA)
// 0049c7cd: PUSH 0x0
// 0049c7cf: PUSH 0x0
// 0049c7d1: PUSH 0xbff00000
// 0049c7d6: PUSH 0x0
// 0049c7d8: PUSH 0x0
// 0049c7da: PUSH 0x0
// 0049c7dc: ADD ECX,0x2cee758
//   XREF to: 02ceea4c (PARAM)
//   XREF to: 02cee758 (DATA)
// 0049c7e2: PUSH ECX
//   XREF to: 02ceea4c (DATA)
// 0049c7e3: PUSH EDX
//   XREF to: 02cee6a0 (DATA)
// 0049c7e4: PUSH EDI
//   XREF to: 02cee9b8 (DATA)
// 0049c7e5: CALL core_dtri.cpp_clipLineToPlane_FUN_0049b6c0
//   XREF to: 0049b6c0 (UNCONDITIONAL_CALL)
// 0049c7ea: MOV EDX,dword ptr [0x02cee754]
//   XREF to: 02cee754 (READ)
// 0049c7f0: INC EDX
// 0049c7f1: ADD ESP,0x2c
// 0049c7f4: MOV dword ptr [0x02cee754],EDX
//   XREF to: 02cee754 (WRITE)
// 0049c7fa: JMP 0x0049c453
//   XREF to: 0049c453 (UNCONDITIONAL_JUMP)
// 0049c7ff: IMUL ECX,dword ptr [0x02cee754],0xc
//   Label: caseD_2
//   XREF to: 02cee754 (READ)
// 0049c806: ADD ECX,0x2cee758
//   XREF to: 02cee758 (DATA)
// 0049c80c: CMP ECX,EDX
// 0049c80e: JZ 0x0049c820
//   XREF to: 0049c820 (CONDITIONAL_JUMP)
// 0049c810: MOV EAX,dword ptr [EDX]
//   XREF to: 02cee6a0 (READ)
// 0049c812: MOV dword ptr [ECX],EAX
//   XREF to: 02ceea4c (WRITE)
// 0049c814: MOV EAX,dword ptr [EDX + 0x4]
//   XREF to: 02cee6a4 (READ)
// 0049c817: MOV dword ptr [ECX + 0x4],EAX
//   XREF to: 02ceea50 (WRITE)
// 0049c81a: MOV EAX,dword ptr [EDX + 0x8]
//   XREF to: 02cee6a8 (READ)
// 0049c81d: MOV dword ptr [ECX + 0x8],EAX
//   XREF to: 02ceea54 (WRITE)
// 0049c820: MOV ECX,dword ptr [0x02cee754]
//   Label: LAB_0049c820
//   XREF to: 02cee754 (READ)
// 0049c826: INC ECX
// 0049c827: MOV dword ptr [0x02cee754],ECX
//   XREF to: 02cee754 (WRITE)
// 0049c82d: IMUL ECX,ECX,0xc
// 0049c830: FLD float ptr [ESP + 0x8]
//   XREF to: Stack[-0x28] (READ)
// 0049c834: SUB ESP,0x8
// 0049c837: FSTP double ptr [ESP]
//   XREF to: Stack[-0x38] (DATA)
// 0049c83a: PUSH 0x0
// 0049c83c: PUSH 0x0
// 0049c83e: PUSH 0xbff00000
// 0049c843: PUSH 0x0
// 0049c845: PUSH 0x0
// 0049c847: PUSH 0x0
// 0049c849: ADD ECX,0x2cee758
//   XREF to: 02ceea58 (PARAM)
//   XREF to: 02cee758 (DATA)
// 0049c84f: PUSH ECX
//   XREF to: 02ceea58 (DATA)
// 0049c850: PUSH EDI
//   XREF to: 02cee9b8 (DATA)
// 0049c851: PUSH EDX
//   XREF to: 02cee6a0 (DATA)
// 0049c852: CALL core_dtri.cpp_clipLineToPlane_FUN_0049b6c0
//   XREF to: 0049b6c0 (UNCONDITIONAL_CALL)
// 0049c857: MOV EDX,dword ptr [0x02cee754]
//   XREF to: 02cee754 (READ)
// 0049c85d: INC EDX
// 0049c85e: ADD ESP,0x2c
// 0049c861: MOV dword ptr [0x02cee754],EDX
//   XREF to: 02cee754 (WRITE)
// 0049c867: JMP 0x0049c453
//   XREF to: 0049c453 (UNCONDITIONAL_JUMP)
// 0049c86c: IMUL ECX,dword ptr [0x02cee818],0xc
//   Label: caseD_1
//   XREF to: 02cee818 (READ)
// 0049c873: FLD float ptr [ESP + 0x14]
//   XREF to: Stack[-0x1c] (READ)
// 0049c877: SUB ESP,0x8
// 0049c87a: FCHS
// 0049c87c: FSTP double ptr [ESP]
//   XREF to: Stack[-0x38] (DATA)
// 0049c87f: PUSH 0x0
// 0049c881: PUSH 0x0
// 0049c883: PUSH 0x0
// 0049c885: PUSH 0x0
// 0049c887: PUSH 0x3ff00000
// 0049c88c: PUSH 0x0
// 0049c88e: ADD ECX,0x2cee81c
//   XREF to: 02ceeb10 (PARAM)
//   XREF to: 02cee81c (DATA)
// 0049c894: PUSH ECX
//   XREF to: 02ceeb10 (DATA)
// 0049c895: PUSH EDX
//   XREF to: 02cee764 (DATA)
// 0049c896: PUSH EDI
//   XREF to: 02ceea7c (DATA)
// 0049c897: CALL core_dtri.cpp_clipLineToPlane_FUN_0049b6c0
//   XREF to: 0049b6c0 (UNCONDITIONAL_CALL)
// 0049c89c: MOV EDX,dword ptr [0x02cee818]
//   XREF to: 02cee818 (READ)
// 0049c8a2: INC EDX
// 0049c8a3: ADD ESP,0x2c
// 0049c8a6: MOV dword ptr [0x02cee818],EDX
//   XREF to: 02cee818 (WRITE)
// 0049c8ac: JMP 0x0049c4f6
//   XREF to: 0049c4f6 (UNCONDITIONAL_JUMP)
// 0049c8b1: IMUL ECX,dword ptr [0x02cee818],0xc
//   Label: caseD_2
//   XREF to: 02cee818 (READ)
// 0049c8b8: ADD ECX,0x2cee81c
//   XREF to: 02cee81c (DATA)
// 0049c8be: CMP ECX,EDX
// 0049c8c0: JZ 0x0049c8d2
//   XREF to: 0049c8d2 (CONDITIONAL_JUMP)
// 0049c8c2: MOV EAX,dword ptr [EDX]
//   XREF to: 02cee764 (READ)
// 0049c8c4: MOV dword ptr [ECX],EAX
//   XREF to: 02ceeb10 (WRITE)
// 0049c8c6: MOV EAX,dword ptr [EDX + 0x4]
//   XREF to: 02cee768 (READ)
// 0049c8c9: MOV dword ptr [ECX + 0x4],EAX
//   XREF to: 02ceeb14 (WRITE)
// 0049c8cc: MOV EAX,dword ptr [EDX + 0x8]
//   XREF to: 02cee76c (READ)
// 0049c8cf: MOV dword ptr [ECX + 0x8],EAX
//   XREF to: 02ceeb18 (WRITE)
// 0049c8d2: MOV ECX,dword ptr [0x02cee818]
//   Label: LAB_0049c8d2
//   XREF to: 02cee818 (READ)
// 0049c8d8: INC ECX
// 0049c8d9: MOV dword ptr [0x02cee818],ECX
//   XREF to: 02cee818 (WRITE)
// 0049c8df: IMUL ECX,ECX,0xc
// 0049c8e2: FLD float ptr [ESP + 0x14]
//   XREF to: Stack[-0x1c] (READ)
// 0049c8e6: SUB ESP,0x8
// 0049c8e9: FCHS
// 0049c8eb: FSTP double ptr [ESP]
//   XREF to: Stack[-0x38] (DATA)
// 0049c8ee: PUSH 0x0
// 0049c8f0: PUSH 0x0
// 0049c8f2: PUSH 0x0
// 0049c8f4: PUSH 0x0
// 0049c8f6: PUSH 0x3ff00000
// 0049c8fb: PUSH 0x0
// 0049c8fd: ADD ECX,0x2cee81c
//   XREF to: 02ceeb1c (PARAM)
//   XREF to: 02cee81c (DATA)
// 0049c903: PUSH ECX
//   XREF to: 02ceeb1c (DATA)
// 0049c904: PUSH EDI
//   XREF to: 02ceea7c (DATA)
// 0049c905: PUSH EDX
//   XREF to: 02cee764 (DATA)
// 0049c906: CALL core_dtri.cpp_clipLineToPlane_FUN_0049b6c0
//   XREF to: 0049b6c0 (UNCONDITIONAL_CALL)
// 0049c90b: MOV EDX,dword ptr [0x02cee818]
//   XREF to: 02cee818 (READ)
// 0049c911: INC EDX
// 0049c912: ADD ESP,0x2c
// 0049c915: MOV dword ptr [0x02cee818],EDX
//   XREF to: 02cee818 (WRITE)
// 0049c91b: JMP 0x0049c4f6
//   XREF to: 0049c4f6 (UNCONDITIONAL_JUMP)
// 0049c920: IMUL ECX,dword ptr [0x02cee8dc],0xc
//   Label: caseD_1
//   XREF to: 02cee8dc (READ)
// 0049c927: FLD float ptr [ESP]
//   XREF to: Stack[-0x30] (DATA)
// 0049c92a: SUB ESP,0x8
// 0049c92d: FSTP double ptr [ESP]
//   XREF to: Stack[-0x38] (DATA)
// 0049c930: PUSH 0x0
// 0049c932: PUSH 0x0
// 0049c934: PUSH 0x0
// 0049c936: PUSH 0x0
// 0049c938: PUSH 0xbff00000
// 0049c93d: PUSH 0x0
// 0049c93f: ADD ECX,0x2cee8e0
//   XREF to: 02ceebd4 (PARAM)
//   XREF to: 02cee8e0 (DATA)
// 0049c945: PUSH ECX
//   XREF to: 02ceebd4 (DATA)
// 0049c946: PUSH EDX
//   XREF to: 02cee828 (DATA)
// 0049c947: PUSH EDI
//   XREF to: 02ceeb40 (DATA)
// 0049c948: CALL core_dtri.cpp_clipLineToPlane_FUN_0049b6c0
//   XREF to: 0049b6c0 (UNCONDITIONAL_CALL)
// 0049c94d: MOV EDX,dword ptr [0x02cee8dc]
//   XREF to: 02cee8dc (READ)
// 0049c953: INC EDX
// 0049c954: ADD ESP,0x2c
// 0049c957: MOV dword ptr [0x02cee8dc],EDX
//   XREF to: 02cee8dc (WRITE)
// 0049c95d: JMP 0x0049c596
//   XREF to: 0049c596 (UNCONDITIONAL_JUMP)
// 0049c962: IMUL ECX,dword ptr [0x02cee8dc],0xc
//   Label: caseD_2
//   XREF to: 02cee8dc (READ)
// 0049c969: ADD ECX,0x2cee8e0
//   XREF to: 02cee8e0 (DATA)
// 0049c96f: CMP ECX,EDX
// 0049c971: JZ 0x0049c983
//   XREF to: 0049c983 (CONDITIONAL_JUMP)
// 0049c973: MOV EAX,dword ptr [EDX]
//   XREF to: 02cee828 (READ)
// 0049c975: MOV dword ptr [ECX],EAX
//   XREF to: 02ceebd4 (WRITE)
// 0049c977: MOV EAX,dword ptr [EDX + 0x4]
//   XREF to: 02cee82c (READ)
// 0049c97a: MOV dword ptr [ECX + 0x4],EAX
//   XREF to: 02ceebd8 (WRITE)
// 0049c97d: MOV EAX,dword ptr [EDX + 0x8]
//   XREF to: 02cee830 (READ)
// 0049c980: MOV dword ptr [ECX + 0x8],EAX
//   XREF to: 02ceebdc (WRITE)
// 0049c983: MOV ECX,dword ptr [0x02cee8dc]
//   Label: LAB_0049c983
//   XREF to: 02cee8dc (READ)
// 0049c989: INC ECX
// 0049c98a: MOV dword ptr [0x02cee8dc],ECX
//   XREF to: 02cee8dc (WRITE)
// 0049c990: IMUL ECX,ECX,0xc
// 0049c993: FLD float ptr [ESP]
//   XREF to: Stack[-0x30] (DATA)
// 0049c996: SUB ESP,0x8
// 0049c999: FSTP double ptr [ESP]
//   XREF to: Stack[-0x38] (DATA)
// 0049c99c: PUSH 0x0
// 0049c99e: PUSH 0x0
// 0049c9a0: PUSH 0x0
// 0049c9a2: PUSH 0x0
// 0049c9a4: PUSH 0xbff00000
// 0049c9a9: PUSH 0x0
// 0049c9ab: ADD ECX,0x2cee8e0
//   XREF to: 02ceebe0 (PARAM)
//   XREF to: 02cee8e0 (DATA)
// 0049c9b1: PUSH ECX
//   XREF to: 02ceebe0 (DATA)
// 0049c9b2: PUSH EDI
//   XREF to: 02ceeb40 (DATA)
// 0049c9b3: PUSH EDX
//   XREF to: 02cee828 (DATA)
// 0049c9b4: CALL core_dtri.cpp_clipLineToPlane_FUN_0049b6c0
//   XREF to: 0049b6c0 (UNCONDITIONAL_CALL)
// 0049c9b9: MOV EDX,dword ptr [0x02cee8dc]
//   XREF to: 02cee8dc (READ)
// 0049c9bf: INC EDX
// 0049c9c0: ADD ESP,0x2c
// 0049c9c3: MOV dword ptr [0x02cee8dc],EDX
//   XREF to: 02cee8dc (WRITE)
// 0049c9c9: JMP 0x0049c596
//   XREF to: 0049c596 (UNCONDITIONAL_JUMP)
// 0049c9ce: IMUL ECX,dword ptr [0x02cee9a0],0xc
//   Label: caseD_1
//   XREF to: 02cee9a0 (READ)
// 0049c9d5: FLD float ptr [ESP + 0xc]
//   XREF to: Stack[-0x24] (READ)
// 0049c9d9: SUB ESP,0x8
// 0049c9dc: FSTP double ptr [ESP]
//   XREF to: Stack[-0x38] (DATA)
// 0049c9df: PUSH 0xbff00000
// 0049c9e4: PUSH 0x0
// 0049c9e6: PUSH 0x0
// 0049c9e8: PUSH 0x0
// 0049c9ea: PUSH 0x0
// 0049c9ec: PUSH 0x0
// 0049c9ee: ADD ECX,0x2cee9a4
//   XREF to: 02ceec98 (PARAM)
//   XREF to: 02cee9a4 (DATA)
// 0049c9f4: PUSH ECX
//   XREF to: 02ceec98 (DATA)
// 0049c9f5: PUSH EDX
//   XREF to: 02cee8ec (DATA)
// 0049c9f6: PUSH EDI
//   XREF to: 02ceec04 (DATA)
// 0049c9f7: CALL core_dtri.cpp_clipLineToPlane_FUN_0049b6c0
//   XREF to: 0049b6c0 (UNCONDITIONAL_CALL)
// 0049c9fc: MOV EDX,dword ptr [0x02cee9a0]
//   XREF to: 02cee9a0 (READ)
// 0049ca02: INC EDX
// 0049ca03: ADD ESP,0x2c
// 0049ca06: MOV dword ptr [0x02cee9a0],EDX
//   XREF to: 02cee9a0 (WRITE)
// 0049ca0c: JMP 0x0049c63c
//   XREF to: 0049c63c (UNCONDITIONAL_JUMP)
// 0049ca11: IMUL ECX,dword ptr [0x02cee9a0],0xc
//   Label: caseD_2
//   XREF to: 02cee9a0 (READ)
// 0049ca18: ADD ECX,0x2cee9a4
//   XREF to: 02cee9a4 (DATA)
// 0049ca1e: CMP ECX,EDX
// 0049ca20: JZ 0x0049ca32
//   XREF to: 0049ca32 (CONDITIONAL_JUMP)
// 0049ca22: MOV EAX,dword ptr [EDX]
//   XREF to: 02cee8ec (READ)
// 0049ca24: MOV dword ptr [ECX],EAX
//   XREF to: 02ceec98 (WRITE)
// 0049ca26: MOV EAX,dword ptr [EDX + 0x4]
//   XREF to: 02cee8f0 (READ)
// 0049ca29: MOV dword ptr [ECX + 0x4],EAX
//   XREF to: 02ceec9c (WRITE)
// 0049ca2c: MOV EAX,dword ptr [EDX + 0x8]
//   XREF to: 02cee8f4 (READ)
// 0049ca2f: MOV dword ptr [ECX + 0x8],EAX
//   XREF to: 02ceeca0 (WRITE)
// 0049ca32: MOV ECX,dword ptr [0x02cee9a0]
//   Label: LAB_0049ca32
//   XREF to: 02cee9a0 (READ)
// 0049ca38: INC ECX
// 0049ca39: MOV dword ptr [0x02cee9a0],ECX
//   XREF to: 02cee9a0 (WRITE)
// 0049ca3f: IMUL ECX,ECX,0xc
// 0049ca42: FLD float ptr [ESP + 0xc]
//   XREF to: Stack[-0x24] (READ)
// 0049ca46: SUB ESP,0x8
// 0049ca49: FSTP double ptr [ESP]
//   XREF to: Stack[-0x38] (DATA)
// 0049ca4c: PUSH 0xbff00000
// 0049ca51: PUSH 0x0
// 0049ca53: PUSH 0x0
// 0049ca55: PUSH 0x0
// 0049ca57: PUSH 0x0
// 0049ca59: PUSH 0x0
// 0049ca5b: ADD ECX,0x2cee9a4
//   XREF to: 02ceeca4 (PARAM)
//   XREF to: 02cee9a4 (DATA)
// 0049ca61: PUSH ECX
//   XREF to: 02ceeca4 (DATA)
// 0049ca62: PUSH EDI
//   XREF to: 02ceec04 (DATA)
// 0049ca63: PUSH EDX
//   XREF to: 02cee8ec (DATA)
// 0049ca64: CALL core_dtri.cpp_clipLineToPlane_FUN_0049b6c0
//   XREF to: 0049b6c0 (UNCONDITIONAL_CALL)
// 0049ca69: MOV EDX,dword ptr [0x02cee9a0]
//   XREF to: 02cee9a0 (READ)
// 0049ca6f: INC EDX
// 0049ca70: ADD ESP,0x2c
// 0049ca73: MOV dword ptr [0x02cee9a0],EDX
//   XREF to: 02cee9a0 (WRITE)
// 0049ca79: JMP 0x0049c63c
//   XREF to: 0049c63c (UNCONDITIONAL_JUMP)
// 0049ca7e: IMUL ECX,dword ptr [0x02ceea64],0xc
//   Label: caseD_1
//   XREF to: 02ceea64 (READ)
// 0049ca85: FLD float ptr [ESP + 0x4]
//   XREF to: Stack[-0x2c] (READ)
// 0049ca89: SUB ESP,0x8
// 0049ca8c: FSTP double ptr [ESP]
//   XREF to: Stack[-0x38] (DATA)
// 0049ca8f: PUSH 0xbff00000
// 0049ca94: PUSH 0x0
// 0049ca96: PUSH 0x0
// 0049ca98: PUSH 0x0
// 0049ca9a: PUSH 0x0
// 0049ca9c: PUSH 0x0
// 0049ca9e: ADD ECX,0x2ceea68
//   XREF to: 02ceed5c (PARAM)
//   XREF to: 02ceea68 (DATA)
// 0049caa4: PUSH ECX
//   XREF to: 02ceed5c (DATA)
// 0049caa5: PUSH EDX
//   XREF to: 02cee9b0 (DATA)
// 0049caa6: PUSH EDI
//   XREF to: 02ceecc8 (DATA)
// 0049caa7: CALL core_dtri.cpp_clipLineToPlane_FUN_0049b6c0
//   XREF to: 0049b6c0 (UNCONDITIONAL_CALL)
// 0049caac: MOV EDX,dword ptr [0x02ceea64]
//   XREF to: 02ceea64 (READ)
// 0049cab2: INC EDX
// 0049cab3: ADD ESP,0x2c
// 0049cab6: MOV dword ptr [0x02ceea64],EDX
//   XREF to: 02ceea64 (WRITE)
// 0049cabc: JMP 0x0049c6e2
//   XREF to: 0049c6e2 (UNCONDITIONAL_JUMP)
// 0049cac1: IMUL ECX,dword ptr [0x02ceea64],0xc
//   Label: caseD_2
//   XREF to: 02ceea64 (READ)
// 0049cac8: ADD ECX,0x2ceea68
//   XREF to: 02ceea68 (DATA)
// 0049cace: CMP ECX,EDX
// 0049cad0: JZ 0x0049cae2
//   XREF to: 0049cae2 (CONDITIONAL_JUMP)
// 0049cad2: MOV EAX,dword ptr [EDX]
//   XREF to: 02cee9b0 (READ)
// 0049cad4: MOV dword ptr [ECX],EAX
//   XREF to: 02ceed5c (WRITE)
// 0049cad6: MOV EAX,dword ptr [EDX + 0x4]
//   XREF to: 02cee9b4 (READ)
// 0049cad9: MOV dword ptr [ECX + 0x4],EAX
//   XREF to: 02ceed60 (WRITE)
// 0049cadc: MOV EAX,dword ptr [EDX + 0x8]
//   XREF to: 02cee9b8 (READ)
// 0049cadf: MOV dword ptr [ECX + 0x8],EAX
//   XREF to: 02ceed64 (WRITE)
// 0049cae2: MOV ECX,dword ptr [0x02ceea64]
//   Label: LAB_0049cae2
//   XREF to: 02ceea64 (READ)
// 0049cae8: INC ECX
// 0049cae9: MOV dword ptr [0x02ceea64],ECX
//   XREF to: 02ceea64 (WRITE)
// 0049caef: IMUL ECX,ECX,0xc
// 0049caf2: FLD float ptr [ESP + 0x4]
//   XREF to: Stack[-0x2c] (READ)
// 0049caf6: SUB ESP,0x8
// 0049caf9: FSTP double ptr [ESP]
//   XREF to: Stack[-0x38] (DATA)
// 0049cafc: PUSH 0xbff00000
// 0049cb01: PUSH 0x0
// 0049cb03: PUSH 0x0
// 0049cb05: PUSH 0x0
// 0049cb07: PUSH 0x0
// 0049cb09: PUSH 0x0
// 0049cb0b: ADD ECX,0x2ceea68
//   XREF to: 02ceed68 (PARAM)
//   XREF to: 02ceea68 (DATA)
// 0049cb11: PUSH ECX
//   XREF to: 02ceed68 (DATA)
// 0049cb12: PUSH EDI
//   XREF to: 02ceecc8 (DATA)
// 0049cb13: PUSH EDX
//   XREF to: 02cee9b0 (DATA)
// 0049cb14: CALL core_dtri.cpp_clipLineToPlane_FUN_0049b6c0
//   XREF to: 0049b6c0 (UNCONDITIONAL_CALL)
// 0049cb19: MOV EDX,dword ptr [0x02ceea64]
//   XREF to: 02ceea64 (READ)
// 0049cb1f: INC EDX
// 0049cb20: ADD ESP,0x2c
// 0049cb23: MOV dword ptr [0x02ceea64],EDX
//   XREF to: 02ceea64 (WRITE)
// 0049cb29: JMP 0x0049c6e2
//   XREF to: 0049c6e2 (UNCONDITIONAL_JUMP)
