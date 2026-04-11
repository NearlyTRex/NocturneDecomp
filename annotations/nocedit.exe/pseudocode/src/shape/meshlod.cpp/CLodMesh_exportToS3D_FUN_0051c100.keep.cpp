// Name: shape_meshlod.cpp_CLodMesh_exportToS3D_FUN_0051c100
// Address: 0051c100
// MANUAL RECONSTRUCTION
// Address Range: [[0051c100, 0051c26b]]
// Convention: __cdecl
// Signature: int __cdecl shape_meshlod_cpp_CLodMesh_exportToS3D_FUN_0051c100(CLodMesh *this_ptr,_FILE *file_ptr)

#include "nocturne.h"

int __cdecl shape_meshlod_cpp_CLodMesh_exportToS3D_FUN_0051c100(CLodMesh *this_ptr,_FILE *file_ptr)

{
  int iVar6;
  int iVar1;
  int iVar2;
  CLodFace *face;
  CLodVert *vert;

  _fprintf(file_ptr,"// S3D version\n");
  _fprintf(file_ptr,"%d\n",0x67);
  iVar6 = shape_meshlod_cpp_CLodMesh_countUnprocessedFaces_FUN_005164d0(this_ptr);
  _fprintf(file_ptr,"// numTextures,numTris,numVerts,numParts,numFrames,numLights,numCameras\n");
  _fprintf(file_ptr,"0,%d,%d,1,1,0,0\n",iVar6,this_ptr->vertex_count);
  _fprintf(file_ptr,"// partList: firstVert,numVerts,firstTri,numTris,\"name\"\n");
  _fprintf(file_ptr,"0,%d,0,%d, \"TheOnlyPart\"\n",this_ptr->vertex_count,iVar6);
  _fprintf(file_ptr,"// texture list: name\n");
  iVar1 = 0;
  _fprintf(file_ptr,"// triList: textureIndex,vertices(index, texX, texY)\n");
  if (0 < this_ptr->tri_count) {
    do {
      face = this_ptr->tri_data + iVar1;
      if (face->processed_flag == 0) {
        _fprintf(file_ptr,"%d, %d,%f,%f, %d,%f,%f, %d,%f,%f\n",-1,
                   face->vertex_idx_0,
                   (double)face->uv_coords[0][0],(double)face->uv_coords[0][1],
                   face->vertex_idx_1,
                   (double)face->uv_coords[1][0],(double)face->uv_coords[1][1],
                   face->vertex_idx_2,
                   (double)face->uv_coords[2][0],(double)face->uv_coords[2][1]);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < this_ptr->tri_count);
  }
  iVar2 = 0;
  iVar1 = _fprintf(file_ptr,"// vertexList: x,y,z\n");
  if (0 < this_ptr->vertex_count) {
    do {
      vert = this_ptr->vertex_data + iVar2;
      iVar2 = iVar2 + 1;
      iVar1 = _fprintf(file_ptr,"%f,%f,%f\n",
                         (double)vert->position.x,
                         (double)vert->position.y,
                         (double)vert->position.z);
    } while (iVar2 < this_ptr->vertex_count);
  }
  return iVar1;
}
