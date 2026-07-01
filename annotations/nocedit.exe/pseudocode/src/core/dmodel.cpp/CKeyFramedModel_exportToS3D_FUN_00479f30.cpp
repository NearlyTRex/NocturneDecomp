// Name: core_dmodel.cpp_CKeyFramedModel_exportToS3D_FUN_00479f30
// Address: 00479f30
// Address Range: [[00479f30, 0047a3a3] [0060a318, 0060a37d]]
// Convention: __cdecl
// Signature: void __cdecl core_dmodel_cpp_CKeyFramedModel_exportToS3D_FUN_00479f30(CKeyFramedModel *this_ptr,char *filename)

#include "nocturne.h"

void __cdecl core_dmodel_cpp_CKeyFramedModel_exportToS3D_FUN_00479f30(CKeyFramedModel *this_ptr,char *filename)

{
  double dVar1;
  double dVar5;
  _FILE *p_Var5;
  int iVar6;
  SMRGLPrimitiveQuad *pSVar7;
  int iVar7;
  int iVar8;
  char *pcVar9;
  int iVar9;
  int iVar10;
  int *piVar10;
  byte bVar11;
  int aiStackY_1034 [935];
  char local_14c [256];
  int local_48 [4];
  int local_38;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  _FILE *local_18;
  int local_14;
  int local_10;
  CVector3i *pCVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  p_Var5 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                     (filename,(char *)0x0,"wt","..\\core\\dmodel.cpp",1883);
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
    local_24 = 0;
    local_28 = 0;
    do {
      iVar10 = (int)&(((SMRGLPrimitiveQuad *)(this_ptr->poly_vert_list->vertices + -2))->base).base.
                     type + local_28;
      iVar9 = 2;
      iVar7 = iVar10;
      if (2 < *(int *)(iVar10 + 4)) {
        do {
          dVar1 = (double)*(int *)(iVar7 + 0x38) * 1.52587890625e-05;
          dVar5 = (double)*(int *)(iVar7 + 0x34) * 1.52587890625e-05;
          _fprintf(p_Var5,"%d, %d,%g,%g, %d,%g,%g, %d,%g,%g\n",
                     *(uint *)((int)this_ptr->poly_texture_index_list + local_24),
                     *(uint *)(iVar10 + 0x18),
                     (double)*(int *)(iVar10 + 0x1c) * 1.52587890625e-05,
                     (double)*(int *)(iVar10 + 0x20) * 1.52587890625e-05,*(uint *)(iVar7 + 0x24)
                     ,(double)*(int *)(iVar7 + 0x28) * 1.52587890625e-05,
                     (double)*(int *)(iVar7 + 0x2c) * 1.52587890625e-05,*(uint *)(iVar7 + 0x30),
                     SUB84(__BITCAST_UINT64(dVar5),0),(int)((ulonglong)dVar5 >> 0x20),SUB84(__BITCAST_UINT64(dVar1),0),
                     (int)((ulonglong)dVar1 >> 0x20));
          iVar9 = iVar9 + 1;
          iVar7 = iVar7 + 0xc;
        } while (iVar9 < *(int *)(iVar10 + 4));
      }
      local_28 = local_28 + 0x48;
      local_24 = local_24 + 4;
      local_20 = local_20 + 1;
    } while (local_20 < this_ptr->poly_count);
  }
  _fprintf(p_Var5,"// vertList: x,y,z\n");
  iVar7 = 0;
  for (iVar10 = 0; iVar10 < this_ptr->vertex_count * this_ptr->frame_count; iVar10 = iVar10 + 1) {
    pCVar1 = this_ptr->vertex_list;
    dVar2 = (double)*(int *)((int)&pCVar1->z + iVar7) * 0.00390625;
    dVar3 = (double)*(int *)((int)&pCVar1->y + iVar7) * 0.00390625;
    dVar4 = (double)*(int *)((int)&pCVar1->x + iVar7) * 0.00390625;
    iVar7 = iVar7 + 0xc;
    _fprintf(p_Var5,"%g,%g,%g\n",SUB84(__BITCAST_UINT64(dVar4),0),(int)((ulonglong)dVar4 >> 0x20),SUB84(__BITCAST_UINT64(dVar3),0)
               ,(int)((ulonglong)dVar3 >> 0x20),SUB84(__BITCAST_UINT64(dVar2),0),(int)((ulonglong)dVar2 >> 0x20));
  }
  _fprintf(p_Var5,"// lightList: \"name\", type, x,y,z, r,g,b, (type-specific info)\n");
  _fprintf(p_Var5,"// cameraList: \"name\", x,y,z, p,b,h, fov(rad)\n");
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(p_Var5,"..\\core\\dmodel.cpp",1952);
  return;
}
