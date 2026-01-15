// Name: core_dmodel.cpp_CKeyFramedModel_exportToS3D_FUN_00479f30
// Address: 00479f30
// Address Range: [[00479f30, 0047a3a3]]
// Convention: __cdecl
// Signature: void core_dmodel.cpp_CKeyFramedModel_exportToS3D_FUN_00479f30(CKeyFramedModel * this_ptr, char * filename)

#include "nocturne.h"

void __cdecl
core_dmodel_cpp_CKeyFramedModel_exportToS3D_FUN_00479f30(CKeyFramedModel *this_ptr,char *filename)

{
  CVector3i **ppCVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  FILE *pFVar5;
  int iVar6;
  SMRGLPrimitiveQuad **ppSVar7;
  int iVar8;
  char *pcVar9;
  int *piVar10;
  byte bVar11;
  int aiStackY_1034 [935];
  char local_14c [256];
  uint local_4c;
  int local_48 [4];
  int local_38;
  uint local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  FILE *local_18;
  int local_14;
  int local_10;
  
  bVar11 = 0;
  pFVar5 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                     (filename,(char *)0x0,"wt","..\\core\\dmodel.cpp",0x75b);
  local_18 = pFVar5;
  if (pFVar5 != (FILE *)0x0) {
    crt_stdio_c_fprintf_FUN_005fe6d0(pFVar5,"// .S3D version\n");
    crt_stdio_c_fprintf_FUN_005fe6d0(pFVar5,"103\n");
    iVar8 = 0;
    iVar6 = 0;
    if (0 < this_ptr->poly_count) {
      ppSVar7 = this_ptr->poly_vert_list;
      do {
        iVar8 = (int)&ppSVar7[1][-1].vertices[3].texture_v + iVar8 + 2;
        iVar6 = iVar6 + 1;
        ppSVar7 = ppSVar7 + 0x12;
      } while (iVar6 < this_ptr->poly_count);
    }
    crt_stdio_c_fprintf_FUN_005fe6d0(local_18,"// numTextures,numTris,numVerts,numParts,numFrames,numLights,numCameras\n");
    pFVar5 = local_18;
    crt_stdio_c_fprintf_FUN_005fe6d0
              (local_18,"%d,%d,%d,1,%d,0,0\n",this_ptr->texture_count,iVar8,
               this_ptr->vertex_count,this_ptr->frame_count);
    crt_string_c_splitpath_FUN_005ff178(filename,(char *)0x0,(char *)0x0,local_14c,(char *)0x0);
    crt_stdio_c_fprintf_FUN_005fe6d0(pFVar5,"// partList: firstVert,numVerts,firstTri,numTris,\"name\"\n");
    crt_stdio_c_fprintf_FUN_005fe6d0
              (pFVar5,"0,%d,0,%d,\"%s\"\n",this_ptr->vertex_count,iVar8,local_14c);
    crt_stdio_c_fprintf_FUN_005fe6d0(pFVar5,"// texture list: name\n");
    pFVar5 = local_18;
    iVar6 = 0;
    if (0 < this_ptr->texture_count) {
      pcVar9 = this_ptr->texture_list[0].base.texture_name;
      do {
        crt_stdio_c_fprintf_FUN_005fe6d0(pFVar5,"%s\n",pcVar9);
        iVar6 = iVar6 + 1;
        pcVar9 = pcVar9 + 0x48;
      } while (iVar6 < this_ptr->texture_count);
    }
    crt_stdio_c_fprintf_FUN_005fe6d0(local_18,"// triList: materialIndex,vertices(index, texX, texY)\n");
    local_20 = 0;
    if (0 < this_ptr->poly_count) {
      local_24 = 0;
      local_28 = 0;
      do {
        local_14 = local_28 + (int)this_ptr->poly_vert_list;
        iVar6 = 2;
        if (2 < *(int *)(local_14 + 4)) {
          local_1c = local_24;
          iVar8 = local_14;
          do {
            piVar10 = (int *)(local_14 + 0x1c + (uint)bVar11 * -8);
            local_4c = *(uint *)(local_14 + 0x18);
            local_48[(uint)bVar11 * -2] = *piVar10;
            local_48[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] = piVar10[(uint)bVar11 * -2 + 1];
            piVar10 = (int *)(iVar8 + 0x28 + (uint)bVar11 * -8);
            local_48[2] = *(uint *)(iVar8 + 0x24);
            local_48[(uint)bVar11 * -2 + 3] = *piVar10;
            local_48[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4] = piVar10[(uint)bVar11 * -2 + 1];
            piVar10 = (int *)(iVar8 + 0x34 + (uint)bVar11 * -8);
            local_34 = *(uint *)(iVar8 + 0x30);
            local_48[(uint)bVar11 * -2 + 6] = *piVar10;
            local_48[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7] = piVar10[(uint)bVar11 * -2 + 1];
            local_10 = local_48[0];
            crt_stdio_c_fprintf_FUN_005fe6d0
                      (local_18,"%d, %d,%g,%g, %d,%g,%g, %d,%g,%g\n",
                       *(uint *)((int)this_ptr->poly_texture_index_list + local_1c),local_4c,
                       (double)local_48[0] * 1.52587890625e-05,(double)local_48[1] * 1.52587890625e-05,
                       local_48[2],(double)local_48[3] * 1.52587890625e-05,
                       (double)local_38 * 1.52587890625e-05,local_34,
                       SUB84 /* extract 2-byte value */((double)local_30 * 1.52587890625e-05,0),
                       (int)((ulonglong)((double)local_30 * 1.52587890625e-05) >> 0x20),
                       SUB84 /* extract 2-byte value */((double)local_2c * 1.52587890625e-05,0),
                       (int)((ulonglong)((double)local_2c * 1.52587890625e-05) >> 0x20));
            iVar6 = iVar6 + 1;
            iVar8 = iVar8 + 0xc;
          } while (iVar6 < *(int *)(local_14 + 4));
        }
        local_28 = local_28 + 0x48;
        local_24 = local_24 + 4;
        local_20 = local_20 + 1;
      } while (local_20 < this_ptr->poly_count);
    }
    crt_stdio_c_fprintf_FUN_005fe6d0(local_18,"// vertList: x,y,z\n");
    iVar6 = 0;
    for (iVar8 = 0; pFVar5 = local_18, iVar8 < this_ptr->vertex_count * this_ptr->frame_count;
        iVar8 = iVar8 + 1) {
      ppCVar1 = this_ptr->vertex_list;
      dVar2 = (double)*(int *)(iVar6 + 8 + (int)ppCVar1) * 0.00390625;
      dVar3 = (double)*(int *)(iVar6 + 4 + (int)ppCVar1) * 0.00390625;
      dVar4 = (double)*(int *)(iVar6 + (int)ppCVar1) * 0.00390625;
      iVar6 = iVar6 + 0xc;
      crt_stdio_c_fprintf_FUN_005fe6d0
                (local_18,"%g,%g,%g\n",SUB84 /* extract 2-byte value */(dVar4,0),(int)((ulonglong)dVar4 >> 0x20),
                 SUB84 /* extract 2-byte value */(dVar3,0),(int)((ulonglong)dVar3 >> 0x20),SUB84 /* extract 2-byte value */(dVar2,0),
                 (int)((ulonglong)dVar2 >> 0x20));
    }
    crt_stdio_c_fprintf_FUN_005fe6d0(local_18,"// lightList: \"name\", type, x,y,z, r,g,b, (type-specific info)\n");
    crt_stdio_c_fprintf_FUN_005fe6d0(pFVar5,"// cameraList: \"name\", x,y,z, p,b,h, fov(rad)\n");
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar5,"..\\core\\dmodel.cpp",0x7a0);
    return;
  }
  shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
            (g_CEditorToolsPtr,"Can't create %s",filename);
  return;
}
