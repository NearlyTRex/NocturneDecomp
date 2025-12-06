// Name: core_dmodel.cpp_CKeyFramedModel_exportToS3D_FUN_00479f30
// Address: 00479f30
// Address Range: [[00479f30, 0047a3a3]]
// Convention: __cdecl
// Signature: void core_dmodel.cpp_CKeyFramedModel_exportToS3D_FUN_00479f30(CKeyFramedModel * this_ptr, char * filename)

#include "nocturne.h"

void __cdecl
core_dmodel_cpp_CKeyFramedModel_exportToS3D_FUN_00479f30(CKeyFramedModel *this_ptr,char *filename)

{
  uint uVar1;
  FILE *pFVar2;
  int iVar3;
  int iVar4;
  BADSPACEBASE *in_ESP;
  FILE *unaff_EBP;
  int iVar5;
  FILE *unaff_ESI;
  uint *puVar6;
  byte bVar7;
  FILE *in_stack_0000000c;
  FILE *in_stack_00000010;
  FILE *in_stack_00000014;
  int in_stack_00000028;
  int in_stack_0000002c;
  int in_stack_00000030;
  int aiStackY_100c [935];
  uint local_24;
  int local_20;
  int local_1c;
  streambuf *local_18;
  FILE *local_14;
  int local_10;
  
  bVar7 = 0;
  pFVar2 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                     (filename,(char *)0x0,"wt","..\\core\\dmodel.cpp",0x75b);
  local_14 = pFVar2;
  if (pFVar2 == (FILE *)0x0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Can't create %s",filename);
    return;
  }
  crt_stdio_c_fprintf_FUN_005fe6d0(pFVar2,"// .S3D version\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(pFVar2,"103\n");
  iVar5 = 0;
  iVar3 = 0;
  if (0 < (int)in_stack_00000010[9]._bufsize) {
    iVar4 = *(int *)&in_stack_00000010[9]._ungotten;
    do {
      iVar5 = iVar5 + *(int *)(iVar4 + 4) + -2;
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x48;
    } while (iVar3 < (int)in_stack_00000010[9]._bufsize);
  }
  crt_stdio_c_fprintf_FUN_005fe6d0(unaff_EBP,"// numTextures,numTris,numVerts,numParts,numFrames,numLights,numCameras\n");
  crt_stdio_c_fprintf_FUN_005fe6d0
            (unaff_ESI,"%d,%d,%d,1,%d,0,0\n",in_stack_00000014[10]._link,iVar5,
             in_stack_00000014[9]._link,in_stack_00000014[9]._cnt);
  crt_string_c_splitpath_FUN_005ff178(filename,(char *)0x0,(char *)0x0,&stack0xfffffec8,(char *)0x0)
  ;
  crt_stdio_c_fprintf_FUN_005fe6d0(unaff_ESI,"// partList: firstVert,numVerts,firstTri,numTris,\"name\"\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(unaff_ESI,"0,%d,0,%d,\"%s\"\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(unaff_ESI,"// texture list: name\n");
  iVar3 = 0;
  if (0 < *(int *)(in_stack_00000028 + 0x120)) {
    do {
      crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_0000000c,"%s\n");
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(in_stack_00000028 + 0x120));
  }
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_0000000c,"// triList: materialIndex,vertices(index, texX, texY)\n");
  filename = (char *)0x0;
  if (0 < *(int *)(in_stack_0000002c + 0x110)) {
    this_ptr = (CKeyFramedModel *)0x0;
    iVar3 = 0;
    do {
      in_stack_00000014 = (FILE *)(iVar3 + *(int *)(in_stack_0000002c + 0x114));
      iVar5 = 2;
      pFVar2 = in_stack_00000014;
      if (2 < in_stack_00000014->_cnt) {
        do {
          puVar6 = (uint *)((int)in_stack_00000014 + (uint)bVar7 * -8 + 0x1c);
          local_24 = *(uint *)&in_stack_00000014->_ungotten;
          *(uint *)((int)&stack0xffffffe0 + (uint)bVar7 * -8) = *puVar6;
          *(uint *)((int)&stack0xffffffe4 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
               puVar6[(uint)bVar7 * -2 + 1];
          puVar6 = (uint *)((int)pFVar2 + (uint)bVar7 * -8 + 0x28);
          local_18 = pFVar2[1]._link;
          (&local_14)[(uint)bVar7 * -2] = (FILE *)*puVar6;
          (&local_10)[(uint)bVar7 * -2 + (uint)bVar7 * -2] = puVar6[(uint)bVar7 * -2 + 1];
          puVar6 = (uint *)((int)pFVar2 + (uint)bVar7 * -8 + 0x34);
          uVar1 = pFVar2[1]._bufsize;
          *(uint *)(&stack0xfffffff8 + (uint)bVar7 * -8) = *puVar6;
          *(uint *)(&stack0xfffffffc + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
               puVar6[(uint)bVar7 * -2 + 1];
          crt_stdio_c_fprintf_FUN_005fe6d0
                    (in_stack_00000010,"%d, %d,%g,%g, %d,%g,%g, %d,%g,%g\n",
                     *(uint *)(this_ptr->model_filename + *(int *)(in_stack_0000002c + 0x118))
                     ,local_24,(double)local_20 * 1.52587890625e-05,(double)local_1c * 1.52587890625e-05
                     ,local_18,(double)(int)local_14 * 1.52587890625e-05,
                     (double)local_10 * 1.52587890625e-05,uVar1);
          iVar5 = iVar5 + 1;
          pFVar2 = (FILE *)&pFVar2->_flag;
        } while (iVar5 < in_stack_00000014->_cnt);
      }
      iVar3 = iVar3 + 0x48;
      this_ptr = (CKeyFramedModel *)(this_ptr->model_filename + 4);
      filename = filename + 1;
    } while ((int)filename < *(int *)(in_stack_0000002c + 0x110));
  }
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000010,"// vertList: x,y,z\n");
  for (iVar3 = 0; iVar3 < *(int *)(in_stack_00000030 + 0x104) * *(int *)(in_stack_00000030 + 0x100);
      iVar3 = iVar3 + 1) {
    crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000014,"%g,%g,%g\n");
  }
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000014,"// lightList: \"name\", type, x,y,z, r,g,b, (type-specific info)\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000014,"// cameraList: \"name\", x,y,z, p,b,h, fov(rad)\n");
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(in_stack_00000014,"..\\core\\dmodel.cpp",0x7a0);
  return;
}
