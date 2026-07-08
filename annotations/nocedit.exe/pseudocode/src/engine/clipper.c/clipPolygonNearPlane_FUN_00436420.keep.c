// Name: engine_clipper.c_clipPolygonNearPlane_FUN_00436420
// Address: 00436420
// MANUAL RECONSTRUCTION
// Address Range: [[00436420, 00436618]]
// Convention: __cdecl
// Signature: void __cdecl engine_clipper_c_clipPolygonNearPlane_FUN_00436420(void)

#include "nocturne.h"

void __cdecl engine_clipper_c_clipPolygonNearPlane_FUN_00436420(void)

{
  byte bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar6;
  SRenderVertex *v1;
  int iVar3;
  
  iVar7 = 0;
  if (g_NearPlaneDistance != 0) {
    if (0 < g_ClippedVertexCount) {
      iVar5 = 0;
      do {
        iVar3 = g_ClippedVertexBuffer[iVar5].projected_vertex.transformed_z;
        if (iVar7 < iVar3) {
          iVar7 = iVar3;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < g_ClippedVertexCount);
    }
    if (g_NearPlaneDistance <= iVar7) {
      g_SecondaryClipVertexCount = g_ClippedVertexCount;
      iVar6 = 0;
      memcpy(g_SecondaryClipVertexBuffer, g_ClippedVertexBuffer, g_ClippedVertexCount * sizeof(*g_SecondaryClipVertexBuffer));
      g_ClippedVertexCount = 0;
      if (0 < g_SecondaryClipVertexCount) {
        v1 = g_SecondaryClipVertexBuffer;
        do {
          uVar6 = iVar6 + 1;
          if (uVar6 == g_SecondaryClipVertexCount) {
            uVar6 = uVar6 ^ g_SecondaryClipVertexCount;
          }
          bVar4 = g_NearPlaneDistance <= (v1->projected_vertex).transformed_z;
          if (g_NearPlaneDistance <=
              g_SecondaryClipVertexBuffer[uVar6].projected_vertex.transformed_z) {
            bVar4 = bVar4 | 2;
          }
          switch(bVar4) {
          case 0:
            memcpy(g_ClippedVertexBuffer + g_ClippedVertexCount, v1, 0x30);
            g_ClippedVertexCount = g_ClippedVertexCount + 1;
            break;
          case 1:
            engine_clipper_c_interpolateVertexNearClip_FUN_00435e00
                      (g_SecondaryClipVertexBuffer + uVar6,v1,
                       g_ClippedVertexBuffer + g_ClippedVertexCount);
            g_ClippedVertexCount = g_ClippedVertexCount + 1;
            break;
          case 2:
            memcpy(g_ClippedVertexBuffer + g_ClippedVertexCount, v1, 0x30);
            g_ClippedVertexCount = g_ClippedVertexCount + 1;
            engine_clipper_c_interpolateVertexNearClip_FUN_00435e00
                      (v1,g_SecondaryClipVertexBuffer + uVar6,
                       g_ClippedVertexBuffer + g_ClippedVertexCount);
            g_ClippedVertexCount = g_ClippedVertexCount + 1;
          }
          iVar6 = iVar6 + 1;
          v1 = v1 + 1;
        } while (iVar6 < g_SecondaryClipVertexCount);
      }
    }
  }
  return;
}
