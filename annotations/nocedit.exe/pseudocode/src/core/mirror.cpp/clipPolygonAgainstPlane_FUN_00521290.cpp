// Name: core_mirror.cpp_clipPolygonAgainstPlane_FUN_00521290
// Address: 00521290
// Address Range: [[00521290, 005213b8]]
// Convention: __cdecl
// Signature: void core_mirror.cpp_clipPolygonAgainstPlane_FUN_00521290(SClipPlane * clip_plane, CVector3f * input_vertices, int input_count, CVector3f * output_vertices, int * output_count)

#include "nocturne.h"

void __cdecl
core_mirror_cpp_clipPolygonAgainstPlane_FUN_00521290
          (SClipPlane *clip_plane,CVector3f *input_vertices,int input_count,
          CVector3f *output_vertices,int *output_count)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  CVector3f *pCVar4;
  CVector3f *pCVar5;
  CVector3f *vertex_a;
  int local_14;
  
  *output_count = 0;
  local_14 = 0;
  vertex_a = input_vertices;
  if (0 < input_count) {
    do {
      uVar3 = local_14 + 1;
      if (uVar3 == input_count) {
        uVar3 = uVar3 ^ input_count;
      }
      pCVar5 = input_vertices + uVar3;
      bVar2 = 0.0 < (float)clip_plane->C * vertex_a->z +
                    (float)clip_plane->A * vertex_a->x + (float)clip_plane->B * vertex_a->y +
                    (float)clip_plane->D;
      if (0.0 < (float)clip_plane->C * pCVar5->z +
                (float)clip_plane->A * pCVar5->x + (float)clip_plane->B * pCVar5->y +
                (float)clip_plane->D) {
        bVar2 = bVar2 | 2;
      }
      switch(bVar2) {
      case 0:
        pCVar5 = output_vertices + *output_count;
        if (pCVar5 != vertex_a) {
          pCVar5->x = vertex_a->x;
          pCVar5->y = vertex_a->y;
          pCVar5->z = vertex_a->z;
        }
        *output_count = *output_count + 1;
        break;
      case 1:
        core_mirror_cpp_computePlaneIntersection_FUN_00521160
                  (clip_plane,pCVar5,vertex_a,output_vertices + *output_count);
        *output_count = *output_count + 1;
        break;
      case 2:
        pCVar4 = output_vertices + *output_count;
        if (pCVar4 != vertex_a) {
          pCVar4->x = vertex_a->x;
          pCVar4->y = vertex_a->y;
          pCVar4->z = vertex_a->z;
        }
        iVar1 = *output_count;
        *output_count = iVar1 + 1;
        core_mirror_cpp_computePlaneIntersection_FUN_00521160
                  (clip_plane,vertex_a,pCVar5,output_vertices + iVar1 + 1);
        *output_count = *output_count + 1;
      }
      local_14 = local_14 + 1;
      vertex_a = vertex_a + 1;
    } while (local_14 < input_count);
  }
  return;
}
