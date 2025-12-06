// Name: core_skeledit.cpp_CDeformableModel_saveStream_FUN_0058f120
// Address: 0058f120
// Address Range: [[0058f120, 0058f78c]]
// Convention: __cdecl
// Signature: void core_skeledit.cpp_CDeformableModel_saveStream_FUN_0058f120(CDeformableModel * this_ptr)

#include "nocturne.h"

void __cdecl core_skeledit_cpp_CDeformableModel_saveStream_FUN_0058f120(CDeformableModel *this_ptr)

{
  byte *pbVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  CSkeleton *pCVar10;
  byte *pbVar11;
  int *piVar12;
  ushort *puVar13;
  int unaff_ESI;
  int *piVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  FILE *pFVar20;
  CDeformableModel *in_stack_0000000c;
  FILE *in_stack_00000014;
  FILE *in_stack_00000018;
  uint *in_stack_0000001c;
  int in_stack_00000020;
  int *in_stack_00000024;
  FILE *in_stack_00000028;
  int *in_stack_00000030;
  FILE *in_stack_00000034;
  FILE *in_stack_00000038;
  FILE *in_stack_0000003c;
  FILE *in_stack_00000040;
  FILE *in_stack_00000044;
  FILE *in_stack_00000048;
  int in_stack_00000050;
  FILE *in_stack_0000005c;
  uint in_stack_ffffffd8;
  
  crt_stack_c_stack_probe_FUN_005ff9f3(0x74);
  pCVar10 = core_skeleton_cpp_CDeformableModel_getSkeletonPtr_FUN_0059a810(in_stack_0000000c);
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000014,"// version\n",pCVar10->bone_count);
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000018,"%d\n",DAT_00681864);
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000018,"// lodCount,textureSetCount,textureCount,boneCount,partCount\n");
  crt_stdio_c_fprintf_FUN_005fe6d0
            (in_stack_00000018,"%d,%d,%d,%d,%d\n",*in_stack_0000001c,in_stack_0000001c[0x2e],
             in_stack_0000001c[0x2f],in_stack_ffffffd8);
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000018,"// Lod list: VertexCount,triCount,capTriCount,pixelHeight,shadowOnlyFlag\n");
  iVar18 = 0;
  piVar12 = in_stack_00000024;
  piVar14 = in_stack_00000024;
  if (0 < *in_stack_00000024) {
    do {
      crt_stdio_c_fprintf_FUN_005fe6d0
                (in_stack_00000028,"%d,%d,%d,%d,%d\n","%d,%d,%d,%d,%d\n",piVar12[0xb],
                 piVar12[0x15],piVar12[0x1a],piVar14[1]);
      iVar18 = iVar18 + 1;
      piVar12 = piVar12 + 1;
      piVar14 = piVar14 + 2;
    } while (iVar18 < *in_stack_00000024);
  }
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000028,"// skeleton file\n");
  crt_stdio_c_fprintf_FUN_005fe6d0
            (in_stack_00000028,"%s\n",&in_stack_00000028[0x51e]._bufsize);
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000028,"// partList: \"name\", dominantBone, adjPartCount, adjpartList, lods(triCount, capTriCount)\n");
  this_ptr = (CDeformableModel *)0x0;
  if (0 < in_stack_00000030[0x1c50]) {
    do {
      iVar15 = 0;
      crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000034,"\"%s\", %d\n");
      for (iVar18 = 0; iVar18 < in_stack_00000030[(int)this_ptr * 0x18 + 0x1c63];
          iVar18 = iVar18 + 1) {
        iVar19 = iVar15 + 0x7190;
        iVar15 = iVar15 + 4;
        crt_stdio_c_fprintf_FUN_005fe6d0
                  (in_stack_00000034,"\t%d\n",
                   *(uint *)((int)in_stack_00000030 + iVar19 + (int)this_ptr * 0x60));
      }
      iVar18 = 0;
      if (0 < *in_stack_00000030) {
        do {
          crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000034,"\t%d, %d\n");
          iVar18 = iVar18 + 1;
        } while (iVar18 < *in_stack_00000030);
      }
      this_ptr = (CDeformableModel *)((int)&this_ptr->num_lods + 1);
    } while ((int)this_ptr < in_stack_00000030[0x1c50]);
  }
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000034,"// vertexList: boneCount, boneInfo(index, weight, x,y,z)\n");
  this_ptr = (CDeformableModel *)0x0;
  if (0 < (int)in_stack_00000034->_ptr) {
    iVar18 = 0;
    do {
      in_stack_00000014 = (FILE *)0x0;
      iVar15 = iVar18;
      for (in_stack_00000018 = (FILE *)0x0;
          (int)in_stack_00000018 < *(int *)((int)&in_stack_00000034[1]._handle + iVar18);
          in_stack_00000018 = (FILE *)((int)in_stack_00000018 + 1)) {
        pbVar11 = (byte *)((int)&in_stack_00000014->_ptr +
                          *(int *)((int)&in_stack_00000034[2]._link + iVar18));
        crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000038,"%d\n",(uint)*pbVar11);
        iVar19 = in_stack_00000020;
        for (iVar16 = 0; iVar16 < (int)(uint)*pbVar11; iVar16 = iVar16 + 1) {
          pbVar1 = (byte *)(iVar19 + 1);
          iVar19 = iVar19 + 1;
          crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000038,"%d, %g, %g,%g,%g\n",(uint)*pbVar1);
        }
        in_stack_00000014 = (FILE *)&in_stack_00000014[1]._ungotten;
      }
      iVar18 = iVar15 + 4;
      this_ptr = (CDeformableModel *)((int)&this_ptr->num_lods + 1);
    } while ((int)this_ptr < (int)in_stack_00000034->_ptr);
  }
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000038,"// triList: textureIndex, verts(index, u, v)\n");
  if (0 < (int)in_stack_00000038->_ptr) {
    this_ptr = (CDeformableModel *)0x0;
    pFVar20 = in_stack_00000038;
    do {
      iVar18 = 0;
      iVar15 = 0;
      for (iVar19 = 0; iVar19 < (int)(pFVar20[3]._ptr + pFVar20[3]._bufsize); iVar19 = iVar19 + 1) {
        uVar9 = pFVar20[4]._flag;
        iVar16 = iVar15 + 0x10;
        iVar17 = iVar15 + 10;
        iVar3 = iVar15 + 4;
        iVar4 = iVar15 + 0xe;
        iVar5 = iVar15 + 8;
        iVar6 = iVar15 + 2;
        iVar7 = iVar15 + 0xc;
        iVar8 = iVar15 + 6;
        puVar13 = (ushort *)(iVar15 + uVar9);
        puVar2 = (uint *)(pFVar20[5]._cnt + iVar18);
        iVar18 = iVar18 + 4;
        iVar15 = iVar15 + 0x12;
        crt_stdio_c_fprintf_FUN_005fe6d0
                  (in_stack_0000003c,"%d,%d,%d,%d,%d,%d,%d,%d,%d,%d\n",*puVar2,(uint)*puVar13,
                   (uint)*(ushort *)(iVar8 + uVar9) << 8,(uint)*(ushort *)(iVar7 + uVar9) << 8,
                   (uint)*(ushort *)(iVar6 + uVar9),(uint)*(ushort *)(iVar5 + uVar9) << 8,
                   (uint)*(ushort *)(iVar4 + uVar9) << 8,(uint)*(ushort *)(iVar3 + uVar9),
                   (uint)*(ushort *)(iVar17 + uVar9) << 8,(uint)*(ushort *)(iVar16 + uVar9) << 8);
      }
      pFVar20 = (FILE *)&pFVar20->_cnt;
      this_ptr = (CDeformableModel *)((int)&this_ptr->num_lods + 1);
    } while ((int)this_ptr < (int)in_stack_00000038->_ptr);
  }
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_0000003c,"// capTriList: matching part\n");
  iVar18 = 0;
  if (0 < (int)in_stack_0000003c->_ptr) {
    iVar15 = 0;
    do {
      iVar16 = 0;
      iVar19 = iVar15;
      for (iVar17 = 0; iVar17 < *(int *)((int)&in_stack_0000003c[3]._bufsize + iVar15);
          iVar17 = iVar17 + 1) {
        puVar2 = (uint *)(iVar16 + *(int *)((int)&in_stack_0000003c[5]._ungotten + iVar15));
        iVar16 = iVar16 + 4;
        crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000040,"%d\n",*puVar2);
      }
      iVar18 = iVar18 + 1;
      iVar15 = iVar19 + 4;
    } while (iVar18 < (int)in_stack_0000003c->_ptr);
  }
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000040,"// texture list\n");
  iVar18 = 0;
  if (0 < in_stack_00000040[6]._handle) {
    puVar13 = &in_stack_00000040[6]._ungotten;
    do {
      iVar15 = 0;
      if (0 < (int)in_stack_00000040[6]._bufsize) {
        iVar19 = (int)(puVar13 + 4);
        do {
          crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000044,"%s\n",iVar19);
          iVar15 = iVar15 + 1;
          iVar19 = iVar19 + 0x48;
        } while (iVar15 < (int)in_stack_00000040[6]._bufsize);
      }
      iVar18 = iVar18 + 1;
      puVar13 = puVar13 + 0xb40;
    } while (iVar18 < in_stack_00000040[6]._handle);
  }
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000044,"// bone origin list\n");
  iVar18 = 0;
  if (0 < unaff_ESI) {
    do {
      iVar18 = iVar18 + 1;
      crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000048,"%g,%g,%g\n");
    } while (iVar18 < unaff_ESI);
  }
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000048,"// defaultRootOffsetScale\n");
  crt_stdio_c_fprintf_FUN_005fe6d0
            (in_stack_00000048,"%g,%g,%g\n",
             SUB84 /* extract 2-byte value */((double)(float)in_stack_00000048[0x472]._flag,0),
             (int)((ulonglong)(double)(float)in_stack_00000048[0x472]._flag >> 0x20),
             SUB84 /* extract 2-byte value */((double)(float)in_stack_00000048[0x472]._handle,0),
             (int)((ulonglong)(double)(float)in_stack_00000048[0x472]._handle >> 0x20),
             SUB84 /* extract 2-byte value */((double)(float)in_stack_00000048[0x472]._bufsize,0));
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000048,"// biasUsed\n");
  crt_stdio_c_fprintf_FUN_005fe6d0
            (in_stack_00000048,"%g,%g,%g\n",
             SUB84 /* extract 2-byte value */((double)*(float *)(in_stack_00000050 + 0x8140),0),
             (int)((ulonglong)(double)*(float *)(in_stack_00000050 + 0x8140) >> 0x20),
             SUB84 /* extract 2-byte value */((double)*(float *)(in_stack_00000050 + 0x8144),0));
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000048,"// partForBoneList\n");
  iVar18 = 0;
  if (0 < (int)in_stack_00000014) {
    do {
      crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_0000005c,"%d\n");
      iVar18 = iVar18 + 1;
    } while (iVar18 < (int)in_stack_00000014);
  }
  if ((in_stack_0000005c->_flag & 0x20) != 0) {
    g_CurrentFilename = "..\\core\\skeledit.cpp";
    g_CurrentLineNumber = 0xbab;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDeformableModel::saveStream - error writing file!");
    return;
  }
  return;
}
