// Name: shape_meshlod.cpp_CLodMesh_exportToS3D_FUN_0051c100
// Address: 0051c100
// Address Range: [[0051c100, 0051c26b]]
// Convention: __cdecl
// Signature: int __cdecl shape_meshlod_cpp_CLodMesh_exportToS3D_FUN_0051c100(CLodMesh *this_ptr,_FILE *file_ptr)

#include "nocturne.h"

int __cdecl shape_meshlod_cpp_CLodMesh_exportToS3D_FUN_0051c100(CLodMesh *this_ptr,_FILE *file_ptr)

{
  double dVar1;
  CLodFace *pCVar2;
  CLodVert *pCVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  _fprintf(file_ptr,"// S3D version\n");
  _fprintf(file_ptr,"%d\n");
  iVar6 = shape_meshlod_cpp_CLodMesh_countUnprocessedFaces_FUN_005164d0(this_ptr);
  _fprintf(file_ptr,"// numTextures,numTris,numVerts,numParts,numFrames,numLights,numCameras\n");
  _fprintf(file_ptr,"0,%d,%d,1,1,0,0\n",iVar6);
  _fprintf(file_ptr,"// partList: firstVert,numVerts,firstTri,numTris,\"name\"\n");
  _fprintf(file_ptr,"0,%d,0,%d, \"TheOnlyPart\"\n",this_ptr->vertex_count)
  ;
  _fprintf(file_ptr,"// texture list: name\n");
  iVar6 = 0;
  _fprintf(file_ptr,"// triList: textureIndex,vertices(index, texX, texY)\n");
  if (0 < this_ptr->tri_count) {
    iVar7 = 0;
    do {
      pCVar2 = this_ptr->tri_data;
      if (*(int *)((int)pCVar2->edge_perpendiculars + iVar7 + -0x14) == 0) {
        dVar1 = (double)*(float *)((int)pCVar2->uv_coords[1] + iVar7 + 4);
        _fprintf(file_ptr,"%d, %d,%f,%f, %d,%f,%f, %d,%f,%f\n",0xffffffff,
                   *(uint *)((int)(pCVar2->uv_coords + -2) + iVar7 + 4),
                   (double)*(float *)((int)pCVar2->uv_coords[0] + iVar7),
                   (double)*(float *)((int)pCVar2->uv_coords[0] + iVar7 + 4),
                   *(uint *)((int)(pCVar2->uv_coords + -1) + iVar7),
                   (double)*(float *)((int)pCVar2->uv_coords[1] + iVar7),SUB84(__BITCAST_UINT64(dVar1),0),
                   (int)((ulonglong)dVar1 >> 0x20),
                   *(uint *)((int)(pCVar2->uv_coords + -1) + iVar7 + 4),
                   (double)*(float *)((int)pCVar2->uv_coords[2] + iVar7),
                   (double)*(float *)((int)pCVar2->uv_coords[2] + iVar7 + 4));
      }
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 + 0x8c;
    } while (iVar6 < this_ptr->tri_count);
  }
  iVar7 = 0;
  iVar6 = _fprintf(file_ptr,"// vertexList: x,y,z\n");
  if (0 < this_ptr->vertex_count) {
    iVar8 = 0;
    do {
      pCVar3 = this_ptr->vertex_data;
      iVar6 = iVar8 + -8;
      iVar4 = iVar8 + -0xc;
      iVar5 = iVar8 + -0x10;
      iVar8 = iVar8 + 0x4c4;
      iVar7 = iVar7 + 1;
      iVar6 = _fprintf(file_ptr,"%f,%f,%f\n",
                         SUB84(__BITCAST_UINT64((double)*(float *)(pCVar3->lod_workspace + iVar5)),0),
                         (int)((ulonglong)(double)*(float *)(pCVar3->lod_workspace + iVar5) >> 0x20)
                         ,(double)*(float *)(pCVar3->lod_workspace + iVar4),
                         (double)*(float *)(pCVar3->lod_workspace + iVar6));
    } while (iVar7 < this_ptr->vertex_count);
  }
  return iVar6;
}
