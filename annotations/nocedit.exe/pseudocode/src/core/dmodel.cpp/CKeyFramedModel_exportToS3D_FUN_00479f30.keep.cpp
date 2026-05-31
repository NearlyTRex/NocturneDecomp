// Name: core_dmodel.cpp_CKeyFramedModel_exportToS3D_FUN_00479f30
// Address: 00479f30
// MANUAL RECONSTRUCTION
// Address Range: [[00479f30, 0047a3a3] [0060a318, 0060a37d]]
// Convention: __cdecl
// Signature: void __cdecl core_dmodel_cpp_CKeyFramedModel_exportToS3D_FUN_00479f30(CKeyFramedModel *this_ptr,char *filename)

#include "nocturne.h"

void __cdecl core_dmodel_cpp_CKeyFramedModel_exportToS3D_FUN_00479f30(CKeyFramedModel *this_ptr,char *filename)

{
  _FILE *p_Var5;
  int iVar6;
  SMRGLPrimitiveQuad *pSVar7;
  SMRGLPrimitiveQuad *quad;
  int iVar7;
  int iVar8;
  char *pcVar9;
  int iVar9;
  int iVar10;
  char local_14c [256];
  int local_28;
  int local_20;
  CVector3i *pCVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  p_Var5 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                     (filename,(char *)0x0,"wt","..\\core\\dmodel.cpp",0x75b);
  if (p_Var5 == (_FILE *)0x0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Can't create %s",filename);
    return;
  }
  _fprintf(p_Var5,"// .S3D version\n");
  _fprintf(p_Var5,"103\n");
  iVar8 = 0;
  iVar6 = 0;
  if (0 < this_ptr->poly_count) {
    pSVar7 = this_ptr->poly_vert_list;
    do {
      iVar8 = iVar8 + (pSVar7->base).base.count + -2;
      iVar6 = iVar6 + 1;
      pSVar7 = pSVar7 + 1;
    } while (iVar6 < this_ptr->poly_count);
  }
  _fprintf(p_Var5,"// numTextures,numTris,numVerts,numParts,numFrames,numLights,numCameras\n");
  _fprintf(p_Var5,"%d,%d,%d,1,%d,0,0\n",this_ptr->texture_count,iVar8,this_ptr->vertex_count,
             this_ptr->frame_count);
  splitpath(filename,(char *)0x0,(char *)0x0,local_14c,(char *)0x0);
  _fprintf(p_Var5,"// partList: firstVert,numVerts,firstTri,numTris,\"name\"\n");
  _fprintf(p_Var5,"0,%d,0,%d,\"%s\"\n",this_ptr->vertex_count,iVar8,local_14c);
  _fprintf(p_Var5,"// texture list: name\n");
  iVar7 = 0;
  if (0 < this_ptr->texture_count) {
    pcVar9 = this_ptr->texture_list[0].textures[0].texture_name;
    do {
      _fprintf(p_Var5,"%s\n",pcVar9);
      iVar7 = iVar7 + 1;
      pcVar9 = pcVar9 + 0x48;
    } while (iVar7 < this_ptr->texture_count);
  }
  _fprintf(p_Var5,"// triList: materialIndex,vertices(index, texX, texY)\n");
  local_20 = 0;
  if (0 < this_ptr->poly_count) {
    local_28 = 0;
    do {
      quad = this_ptr->poly_vert_list + local_20;
      for (iVar9 = 2; iVar9 < quad->base.base.count; iVar9 = iVar9 + 1) {
        _fprintf(p_Var5,"%d, %d,%g,%g, %d,%g,%g, %d,%g,%g\n",
                   this_ptr->poly_texture_index_list[local_20],
                   quad->vertices[0].vertex_index,
                   (double)quad->vertices[0].texture_u * 1.52587890625e-05,
                   (double)quad->vertices[0].texture_v * 1.52587890625e-05,
                   quad->vertices[iVar9 + -1].vertex_index,
                   (double)quad->vertices[iVar9 + -1].texture_u * 1.52587890625e-05,
                   (double)quad->vertices[iVar9 + -1].texture_v * 1.52587890625e-05,
                   quad->vertices[iVar9].vertex_index,
                   (double)quad->vertices[iVar9].texture_u * 1.52587890625e-05,
                   (double)quad->vertices[iVar9].texture_v * 1.52587890625e-05);
      }
      local_20 = local_20 + 1;
    } while (local_20 < this_ptr->poly_count);
  }
  _fprintf(p_Var5,"// vertList: x,y,z\n");
  for (iVar10 = 0; iVar10 < this_ptr->vertex_count * this_ptr->frame_count; iVar10 = iVar10 + 1) {
    pCVar1 = this_ptr->vertex_list;
    dVar2 = (double)pCVar1[iVar10].z * 0.00390625;
    dVar3 = (double)pCVar1[iVar10].y * 0.00390625;
    dVar4 = (double)pCVar1[iVar10].x * 0.00390625;
    _fprintf(p_Var5,"%g,%g,%g\n",dVar4,dVar3,dVar2);
  }
  _fprintf(p_Var5,"// lightList: \"name\", type, x,y,z, r,g,b, (type-specific info)\n");
  _fprintf(p_Var5,"// cameraList: \"name\", x,y,z, p,b,h, fov(rad)\n");
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(p_Var5,"..\\core\\dmodel.cpp",0x7a0);
  return;
}
