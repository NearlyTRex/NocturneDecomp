// Name: shape_meshlod.cpp_CLodMesh_exportToS3D_FUN_0051c100
// Address: 0051c100
// Address Range: [[0051c100, 0051c26b]]
// Convention: __cdecl
// Signature: int shape_meshlod.cpp_CLodMesh_exportToS3D_FUN_0051c100(CLodMesh * this_ptr, FILE * file_ptr)

#include "nocturne.h"

int __cdecl shape_meshlod_cpp_CLodMesh_exportToS3D_FUN_0051c100(CLodMesh *this_ptr,FILE *file_ptr)

{
  CLodFace *pCVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uStack00000014;
  
  crt_stdio_c_fprintf_FUN_005fe6d0(file_ptr,"// S3D version\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file_ptr,"%d\n",0x67);
  iVar2 = shape_meshlod_cpp_CLodMesh_countUnprocessedFaces_FUN_005164d0(this_ptr);
  crt_stdio_c_fprintf_FUN_005fe6d0(file_ptr,"// numTextures,numTris,numVerts,numParts,numFrames,numLights,numCameras\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file_ptr,"0,%d,%d,1,1,0,0\n",iVar2);
  crt_stdio_c_fprintf_FUN_005fe6d0(file_ptr,"// partList: firstVert,numVerts,firstTri,numTris,\"name\"\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file_ptr,"0,%d,0,%d, \"TheOnlyPart\"\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file_ptr,"// texture list: name\n");
  iVar2 = 0;
  crt_stdio_c_fprintf_FUN_005fe6d0(file_ptr,"// triList: textureIndex,vertices(index, texX, texY)\n");
  if (0 < this_ptr->tri_count) {
    iVar3 = 0;
    do {
      pCVar1 = this_ptr->tri_data;
      if (*(int *)((int)pCVar1->edge_perpendiculars + iVar3 + -0x14) == 0) {
        crt_stdio_c_fprintf_FUN_005fe6d0
                  (file_ptr,"%d, %d,%f,%f, %d,%f,%f, %d,%f,%f\n","%d, %d,%f,%f, %d,%f,%f, %d,%f,%f\n",0xffffffff
                   ,*(uint *)((int)(pCVar1->uv_coords + -2) + iVar3 + 4),
                   (double)*(float *)((int)pCVar1->uv_coords[0] + iVar3),
                   (double)*(float *)((int)pCVar1->uv_coords[0] + iVar3 + 4),
                   *(uint *)((int)(pCVar1->uv_coords + -1) + iVar3),
                   (double)*(float *)((int)pCVar1->uv_coords[1] + iVar3),
                   (double)*(float *)((int)pCVar1->uv_coords[1] + iVar3 + 4));
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x8c;
    } while (iVar2 < this_ptr->tri_count);
  }
  iVar3 = 0;
  iVar2 = crt_stdio_c_fprintf_FUN_005fe6d0(file_ptr,"// vertexList: x,y,z\n");
  if (0 < this_ptr->vertex_count) {
    iVar4 = 0;
    do {
      uStack00000014 =
           (uint)
           ((ulonglong)(double)*(float *)(this_ptr->vertex_data->lod_workspace + iVar4 + -8) >> 0x20
           );
      iVar4 = iVar4 + 0x4c4;
      iVar3 = iVar3 + 1;
      iVar2 = crt_stdio_c_fprintf_FUN_005fe6d0(file_ptr,"%f,%f,%f\n");
    } while (iVar3 < this_ptr->vertex_count);
  }
  return iVar2;
}
