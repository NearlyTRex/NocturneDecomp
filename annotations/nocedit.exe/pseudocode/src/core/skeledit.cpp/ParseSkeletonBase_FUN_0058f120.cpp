// Name: core_skeledit.cpp_ParseSkeletonBase_FUN_0058f120
// Address: 0058f120
// Address Range: [[0058f120, 0058f78c]]
// Convention: unknown
// Signature: undefined core_skeledit.cpp_ParseSkeletonBase_FUN_0058f120()
// Cross-references:
//   core_skeledit.cpp_CDeformableModel_save_FUN_0058f040 (0058f040) at 0058f0be [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_version_0064b1ef
//   TerminatedCString s_d_0064b1fb
//   TerminatedCString s_lodCount_textureSetCount_0064b1ff
//   TerminatedCString s_d_d_d_d_d_0064b23d
//   TerminatedCString s_Lod_list_VertexCount_tri_0064b24d
//   TerminatedCString s_d_d_d_d_d_0064b297
//   TerminatedCString s_skeleton_file_0064b2a7
//   TerminatedCString s_s_0064b2b9
//   TerminatedCString s_partList_name_dominantBo_0064b2bd
//   TerminatedCString s_s_d_0064b318
//   TerminatedCString s_d_0064b322
//   TerminatedCString s_d_d_0064b327
//   TerminatedCString s_vertexList_boneCount_bon_0064b330
//   TerminatedCString s_d_0064b36a
//   TerminatedCString s_d_g_g_g_g_0064b36e
//   TerminatedCString s_triList_textureIndex_ver_0064b380
//   TerminatedCString s_d_d_d_d_d_d_d_d_d_d_0064b3ae
//   TerminatedCString s_capTriList_matching_part_0064b3cd
//   TerminatedCString s_d_0064b3eb
//   TerminatedCString s_texture_list_0064b3ef
//   TerminatedCString s_s_0064b400
//   TerminatedCString s_bone_origin_list_0064b404
//   TerminatedCString s_g_g_g_0064b419
//   TerminatedCString s_defaultRootOffsetScale_0064b423
//   TerminatedCString s_g_g_g_0064b43e
//   TerminatedCString s_biasUsed_0064b448
//   TerminatedCString s_g_g_g_0064b455
//   TerminatedCString s_partForBoneList_0064b45f
//   TerminatedCString s_d_0064b473
//   TerminatedCString s_core_skeledit_cpp_0064b477
//   TerminatedCString s_CDeformableModel_saveStr_0064b48c
//   undefined4 DAT_00681864
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_skeleton.cpp_CDeformableModel_getSkeletonPtr_FUN_0059a810
//   crt_stack.c_stack_probe_FUN_005ff9f3
//   crt_stdio.c_fprintf_FUN_005fe6d0

#include "nocturne.h"

void core_skeledit_cpp_ParseSkeletonBase_FUN_0058f120(void)

{
  byte *pbVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  CSkeleton *pCVar11;
  byte *pbVar12;
  int *piVar13;
  int iVar14;
  ushort *puVar15;
  int unaff_ESI;
  int *piVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  FILE *pFVar21;
  CDeformableModel *in_stack_0000000c;
  FILE *in_stack_00000014;
  FILE *in_stack_00000018;
  undefined4 *in_stack_0000001c;
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
  undefined4 in_stack_ffffffd8;
  
  crt_stack_c_stack_probe_FUN_005ff9f3(0x74);
  pCVar11 = core_skeleton_cpp_CDeformableModel_getSkeletonPtr_FUN_0059a810(in_stack_0000000c);
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000014,"// version\n",pCVar11->bone_count);
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000018,"%d\n",DAT_00681864);
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000018,"// lodCount,textureSetCount,textureCount,boneCount,partCount\n");
  crt_stdio_c_fprintf_FUN_005fe6d0
            (in_stack_00000018,"%d,%d,%d,%d,%d\n",*in_stack_0000001c,in_stack_0000001c[0x2e],
             in_stack_0000001c[0x2f],in_stack_ffffffd8);
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000018,"// Lod list: VertexCount,triCount,capTriCount,pixelHeight,shadowOnlyFlag\n");
  iVar19 = 0;
  piVar13 = in_stack_00000024;
  piVar16 = in_stack_00000024;
  if (0 < *in_stack_00000024) {
    do {
      crt_stdio_c_fprintf_FUN_005fe6d0
                (in_stack_00000028,"%d,%d,%d,%d,%d\n","%d,%d,%d,%d,%d\n",piVar13[0xb],
                 piVar13[0x15],piVar13[0x1a],piVar16[1]);
      iVar19 = iVar19 + 1;
      piVar13 = piVar13 + 1;
      piVar16 = piVar16 + 2;
    } while (iVar19 < *in_stack_00000024);
  }
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000028,"// skeleton file\n");
  crt_stdio_c_fprintf_FUN_005fe6d0
            (in_stack_00000028,"%s\n",&in_stack_00000028[0x51e]._bufsize);
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000028,"// partList: \"name\", dominantBone, adjPartCount, adjpartList, lods(triCount, capTriCount)\n");
  iVar19 = 0;
  if (0 < in_stack_00000030[0x1c50]) {
    do {
      iVar17 = 0;
      crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000034,"\"%s\", %d\n");
      for (iVar14 = 0; iVar14 < in_stack_00000030[iVar19 * 0x18 + 0x1c63]; iVar14 = iVar14 + 1) {
        iVar20 = iVar17 + 0x7190;
        iVar17 = iVar17 + 4;
        crt_stdio_c_fprintf_FUN_005fe6d0
                  (in_stack_00000034,"\t%d\n",
                   *(undefined4 *)((int)in_stack_00000030 + iVar20 + iVar19 * 0x60));
      }
      iVar14 = 0;
      if (0 < *in_stack_00000030) {
        do {
          crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000034,"\t%d, %d\n");
          iVar14 = iVar14 + 1;
        } while (iVar14 < *in_stack_00000030);
      }
      iVar19 = iVar19 + 1;
    } while (iVar19 < in_stack_00000030[0x1c50]);
  }
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000034,"// vertexList: boneCount, boneInfo(index, weight, x,y,z)\n");
  iVar19 = 0;
  if (0 < (int)in_stack_00000034->_ptr) {
    iVar14 = 0;
    do {
      in_stack_00000014 = (FILE *)0x0;
      iVar17 = iVar14;
      for (in_stack_00000018 = (FILE *)0x0;
          (int)in_stack_00000018 < *(int *)((int)&in_stack_00000034[1]._handle + iVar14);
          in_stack_00000018 = (FILE *)((int)in_stack_00000018 + 1)) {
        pbVar12 = (byte *)((int)&in_stack_00000014->_ptr +
                          *(int *)((int)&in_stack_00000034[2]._link + iVar14));
        crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000038,"%d\n",(uint)*pbVar12);
        iVar20 = in_stack_00000020;
        for (iVar18 = 0; iVar18 < (int)(uint)*pbVar12; iVar18 = iVar18 + 1) {
          pbVar1 = (byte *)(iVar20 + 1);
          iVar20 = iVar20 + 1;
          crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000038,"%d, %g, %g,%g,%g\n",(uint)*pbVar1);
        }
        in_stack_00000014 = (FILE *)&in_stack_00000014[1]._ungotten;
      }
      iVar14 = iVar17 + 4;
      iVar19 = iVar19 + 1;
    } while (iVar19 < (int)in_stack_00000034->_ptr);
  }
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000038,"// triList: textureIndex, verts(index, u, v)\n");
  if (0 < (int)in_stack_00000038->_ptr) {
    iVar19 = 0;
    pFVar21 = in_stack_00000038;
    do {
      iVar14 = 0;
      iVar17 = 0;
      for (iVar20 = 0; iVar20 < (int)(pFVar21[3]._ptr + pFVar21[3]._bufsize); iVar20 = iVar20 + 1) {
        uVar10 = pFVar21[4]._flag;
        iVar18 = iVar17 + 0x10;
        iVar3 = iVar17 + 10;
        iVar4 = iVar17 + 4;
        iVar5 = iVar17 + 0xe;
        iVar6 = iVar17 + 8;
        iVar7 = iVar17 + 2;
        iVar8 = iVar17 + 0xc;
        iVar9 = iVar17 + 6;
        puVar15 = (ushort *)(iVar17 + uVar10);
        puVar2 = (undefined4 *)(pFVar21[5]._cnt + iVar14);
        iVar14 = iVar14 + 4;
        iVar17 = iVar17 + 0x12;
        crt_stdio_c_fprintf_FUN_005fe6d0
                  (in_stack_0000003c,"%d,%d,%d,%d,%d,%d,%d,%d,%d,%d\n",*puVar2,(uint)*puVar15,
                   (uint)*(ushort *)(iVar9 + uVar10) << 8,(uint)*(ushort *)(iVar8 + uVar10) << 8,
                   (uint)*(ushort *)(iVar7 + uVar10),(uint)*(ushort *)(iVar6 + uVar10) << 8,
                   (uint)*(ushort *)(iVar5 + uVar10) << 8,(uint)*(ushort *)(iVar4 + uVar10),
                   (uint)*(ushort *)(iVar3 + uVar10) << 8,(uint)*(ushort *)(iVar18 + uVar10) << 8);
      }
      pFVar21 = (FILE *)&pFVar21->_cnt;
      iVar19 = iVar19 + 1;
    } while (iVar19 < (int)in_stack_00000038->_ptr);
  }
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_0000003c,"// capTriList: matching part\n");
  iVar19 = 0;
  if (0 < (int)in_stack_0000003c->_ptr) {
    iVar14 = 0;
    do {
      iVar17 = 0;
      for (iVar20 = 0; iVar20 < *(int *)((int)&in_stack_0000003c[3]._bufsize + iVar14);
          iVar20 = iVar20 + 1) {
        puVar2 = (undefined4 *)(iVar17 + *(int *)((int)&in_stack_0000003c[5]._ungotten + iVar14));
        iVar17 = iVar17 + 4;
        crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000040,"%d\n",*puVar2);
      }
      iVar19 = iVar19 + 1;
      iVar14 = iVar14 + 4;
    } while (iVar19 < (int)in_stack_0000003c->_ptr);
  }
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000040,"// texture list\n");
  iVar19 = 0;
  if (0 < in_stack_00000040[6]._handle) {
    puVar15 = &in_stack_00000040[6]._ungotten;
    do {
      iVar14 = 0;
      if (0 < (int)in_stack_00000040[6]._bufsize) {
        iVar17 = (int)(puVar15 + 4);
        do {
          crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000044,"%s\n",iVar17);
          iVar14 = iVar14 + 1;
          iVar17 = iVar17 + 0x48;
        } while (iVar14 < (int)in_stack_00000040[6]._bufsize);
      }
      iVar19 = iVar19 + 1;
      puVar15 = puVar15 + 0xb40;
    } while (iVar19 < in_stack_00000040[6]._handle);
  }
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000044,"// bone origin list\n");
  iVar19 = 0;
  if (0 < unaff_ESI) {
    do {
      iVar19 = iVar19 + 1;
      crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000048,"%g,%g,%g\n");
    } while (iVar19 < unaff_ESI);
  }
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000048,"// defaultRootOffsetScale\n");
  crt_stdio_c_fprintf_FUN_005fe6d0
            (in_stack_00000048,"%g,%g,%g\n",
             SUB84((double)(float)in_stack_00000048[0x472]._flag,0),
             (int)((ulonglong)(double)(float)in_stack_00000048[0x472]._flag >> 0x20),
             SUB84((double)(float)in_stack_00000048[0x472]._handle,0),
             (int)((ulonglong)(double)(float)in_stack_00000048[0x472]._handle >> 0x20),
             SUB84((double)(float)in_stack_00000048[0x472]._bufsize,0));
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000048,"// biasUsed\n");
  crt_stdio_c_fprintf_FUN_005fe6d0
            (in_stack_00000048,"%g,%g,%g\n",
             SUB84((double)*(float *)(in_stack_00000050 + 0x8140),0),
             (int)((ulonglong)(double)*(float *)(in_stack_00000050 + 0x8140) >> 0x20),
             SUB84((double)*(float *)(in_stack_00000050 + 0x8144),0));
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000048,"// partForBoneList\n");
  iVar19 = 0;
  if (0 < (int)in_stack_00000014) {
    do {
      crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_0000005c,"%d\n");
      iVar19 = iVar19 + 1;
    } while (iVar19 < (int)in_stack_00000014);
  }
  if ((in_stack_0000005c->_flag & 0x20) != 0) {
    g_CurrentFilename = "..\\core\\skeledit.cpp";
    g_CurrentLineNumber = 0xbab;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDeformableModel::saveStream - error writing file!");
    return;
  }
  return;
}


// Assembly code:
// 0058f120: PUSH 0x74
//   Label: core_skeledit.cpp_ParseSkeletonBase_FUN_0058f120
// 0058f125: CALL crt_stack.c_stack_probe_FUN_005ff9f3
//   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)
// 0058f12a: PUSH EBX
// 0058f12b: PUSH ESI
// 0058f12c: PUSH EDI
// 0058f12d: PUSH EBP
// 0058f12e: SUB ESP,0x30
// 0058f131: MOV EDX,dword ptr [ESP + 0x44]
//   XREF to: Stack[0x4] (READ)
// 0058f135: PUSH EDX
// 0058f136: CALL core_skeleton.cpp_CDeformableModel_getSkeletonPtr_FUN_0059a810
//   XREF to: 0059a810 (UNCONDITIONAL_CALL)
// 0058f13b: ADD ESP,0x4
// 0058f13e: PUSH 0x64b1ef
//   XREF to: 0064b1ef (DATA)
// 0058f143: MOV ECX,dword ptr [ESP + 0x4c]
//   XREF to: Stack[0x8] (READ)
// 0058f147: MOV EAX,dword ptr [EAX + 0x28558]
// 0058f14d: PUSH ECX
// 0058f14e: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x40] (WRITE)
// 0058f152: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0058f157: ADD ESP,0x8
// 0058f15a: MOV EBX,dword ptr [0x00681864]
//   XREF to: 00681864 (READ)
// 0058f160: PUSH EBX
// 0058f161: PUSH 0x64b1fb
//   XREF to: 0064b1fb (DATA)
// 0058f166: MOV ESI,dword ptr [ESP + 0x50]
//   XREF to: Stack[0x8] (READ)
// 0058f16a: PUSH ESI
// 0058f16b: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0058f170: ADD ESP,0xc
// 0058f173: PUSH 0x64b1ff
//   XREF to: 0064b1ff (DATA)
// 0058f178: PUSH ESI
// 0058f179: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0058f17e: ADD ESP,0x8
// 0058f181: MOV EAX,dword ptr [ESP + 0x44]
//   XREF to: Stack[0x4] (READ)
// 0058f185: MOV EBP,dword ptr [EAX + 0x7140]
// 0058f18b: PUSH EBP
// 0058f18c: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x40] (READ)
// 0058f190: PUSH EAX
// 0058f191: MOV EAX,dword ptr [ESP + 0x4c]
//   XREF to: Stack[0x4] (READ)
// 0058f195: MOV EDX,dword ptr [EAX + 0xbc]
// 0058f19b: PUSH EDX
// 0058f19c: MOV ECX,dword ptr [EAX + 0xb8]
// 0058f1a2: PUSH ECX
// 0058f1a3: MOV EBX,dword ptr [EAX]
// 0058f1a5: PUSH EBX
// 0058f1a6: PUSH 0x64b23d
//   XREF to: 0064b23d (DATA)
// 0058f1ab: PUSH ESI
// 0058f1ac: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0058f1b1: ADD ESP,0x1c
// 0058f1b4: PUSH 0x64b24d
//   XREF to: 0064b24d (DATA)
// 0058f1b9: PUSH ESI
// 0058f1ba: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0058f1bf: ADD ESP,0x8
// 0058f1c2: MOV EAX,dword ptr [ESP + 0x44]
//   XREF to: Stack[0x4] (READ)
// 0058f1c6: MOV EDI,ESI
// 0058f1c8: MOV EBP,dword ptr [EAX]
// 0058f1ca: XOR EDI,ESI
// 0058f1cc: TEST EBP,EBP
// 0058f1ce: JLE 0x0058f210
//   XREF to: 0058f210 (CONDITIONAL_JUMP)
// 0058f1d0: MOV ESI,EAX
// 0058f1d2: MOV EBX,EAX
// 0058f1d4: MOV EAX,dword ptr [ESI + 0x8]
//   Label: LAB_0058f1d4
// 0058f1d7: PUSH EAX
// 0058f1d8: MOV EDX,dword ptr [ESI + 0x4]
// 0058f1db: PUSH EDX
// 0058f1dc: MOV ECX,dword ptr [EBX + 0x68]
// 0058f1df: PUSH ECX
// 0058f1e0: MOV EBP,dword ptr [EBX + 0x54]
// 0058f1e3: PUSH EBP
// 0058f1e4: MOV EAX,dword ptr [EBX + 0x2c]
// 0058f1e7: PUSH EAX
// 0058f1e8: PUSH 0x64b297
//   XREF to: 0064b297 (DATA)
// 0058f1ed: MOV EDX,dword ptr [ESP + 0x60]
//   XREF to: Stack[0x8] (READ)
// 0058f1f1: PUSH EDX
// 0058f1f2: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0058f1f7: ADD ESP,0x1c
// 0058f1fa: MOV EAX,dword ptr [ESP + 0x44]
//   XREF to: Stack[0x4] (READ)
// 0058f1fe: ADD EBX,0x4
// 0058f201: INC EDI
// 0058f202: MOV ECX,dword ptr [EAX]
// 0058f204: ADD ESI,0x8
// 0058f207: CMP EDI,ECX
// 0058f209: JL 0x0058f1d4
//   XREF to: 0058f1d4 (CONDITIONAL_JUMP)
// 0058f20b: LEA EAX,[EAX]
// 0058f20e: MOV ECX,ECX
// 0058f210: PUSH 0x64b2a7
//   Label: LAB_0058f210
//   XREF to: 0064b2a7 (DATA)
// 0058f215: MOV EBX,dword ptr [ESP + 0x4c]
//   XREF to: Stack[0x8] (READ)
// 0058f219: PUSH EBX
// 0058f21a: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0058f21f: ADD ESP,0x8
// 0058f222: MOV EAX,dword ptr [ESP + 0x44]
//   XREF to: Stack[0x4] (READ)
// 0058f226: ADD EAX,0x8f5c
// 0058f22b: PUSH EAX
// 0058f22c: PUSH 0x64b2b9
//   XREF to: 0064b2b9 (DATA)
// 0058f231: PUSH EBX
// 0058f232: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0058f237: ADD ESP,0xc
// 0058f23a: PUSH 0x64b2bd
//   XREF to: 0064b2bd (DATA)
// 0058f23f: PUSH EBX
// 0058f240: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0058f245: ADD ESP,0x8
// 0058f248: MOV EAX,dword ptr [ESP + 0x44]
//   XREF to: Stack[0x4] (READ)
// 0058f24c: XOR EBP,EBP
// 0058f24e: MOV EDX,dword ptr [EAX + 0x7140]
// 0058f254: MOV dword ptr [ESP + 0x1c],EBP
//   XREF to: Stack[-0x24] (WRITE)
// 0058f258: TEST EDX,EDX
// 0058f25a: JLE 0x0058f2f6
//   XREF to: 0058f2f6 (CONDITIONAL_JUMP)
// 0058f260: ADD EAX,0x7144
// 0058f265: MOV EBP,dword ptr [ESP + 0x44]
//   XREF to: Stack[0x4] (READ)
// 0058f269: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 0058f26d: IMUL EDI,dword ptr [ESP + 0x1c],0x60
//   Label: LAB_0058f26d
//   XREF to: Stack[-0x24] (READ)
// 0058f272: MOV EBX,dword ptr [EBP + 0x718c]
// 0058f278: PUSH EBX
// 0058f279: MOV ESI,dword ptr [EBP + 0x71a0]
// 0058f27f: PUSH ESI
// 0058f280: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x3c] (READ)
// 0058f284: PUSH EAX
// 0058f285: PUSH 0x64b318
//   XREF to: 0064b318 (DATA)
// 0058f28a: MOV EDX,dword ptr [ESP + 0x58]
//   XREF to: Stack[0x8] (READ)
// 0058f28e: PUSH EDX
// 0058f28f: XOR EBX,EBX
// 0058f291: XOR ESI,ESI
// 0058f293: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0058f298: ADD ESP,0x14
// 0058f29b: MOV EAX,dword ptr [ESP + 0x44]
//   Label: LAB_0058f29b
//   XREF to: Stack[0x4] (READ)
// 0058f29f: ADD EAX,EDI
// 0058f2a1: CMP EBX,dword ptr [EAX + 0x718c]
// 0058f2a7: JGE 0x0058f3cb
//   XREF to: 0058f3cb (CONDITIONAL_JUMP)
// 0058f2ad: MOV EDX,dword ptr [ESI + EAX*0x1 + 0x7190]
// 0058f2b4: PUSH EDX
// 0058f2b5: PUSH 0x64b322
//   XREF to: 0064b322 (DATA)
// 0058f2ba: MOV ECX,dword ptr [ESP + 0x50]
//   XREF to: Stack[0x8] (READ)
// 0058f2be: PUSH ECX
// 0058f2bf: ADD ESI,0x4
// 0058f2c2: INC EBX
// 0058f2c3: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0058f2c8: ADD ESP,0xc
// 0058f2cb: JMP 0x0058f29b
//   XREF to: 0058f29b (UNCONDITIONAL_JUMP)
// 0058f2cd: MOV ECX,dword ptr [ESP + 0x4]
//   Label: LAB_0058f2cd
//   XREF to: Stack[-0x3c] (READ)
// 0058f2d1: MOV EBX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x24] (READ)
// 0058f2d5: MOV EDX,dword ptr [ESP + 0x44]
//   XREF to: Stack[0x4] (READ)
// 0058f2d9: ADD EBP,0x60
// 0058f2dc: ADD ECX,0x60
// 0058f2df: INC EBX
// 0058f2e0: MOV ESI,dword ptr [EDX + 0x7140]
// 0058f2e6: MOV dword ptr [ESP + 0x4],ECX
//   XREF to: Stack[-0x3c] (WRITE)
// 0058f2ea: MOV dword ptr [ESP + 0x1c],EBX
//   XREF to: Stack[-0x24] (WRITE)
// 0058f2ee: CMP EBX,ESI
// 0058f2f0: JL 0x0058f26d
//   XREF to: 0058f26d (CONDITIONAL_JUMP)
// 0058f2f6: PUSH 0x64b330
//   Label: LAB_0058f2f6
//   XREF to: 0064b330 (DATA)
// 0058f2fb: MOV EDI,dword ptr [ESP + 0x4c]
//   XREF to: Stack[0x8] (READ)
// 0058f2ff: PUSH EDI
// 0058f300: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0058f305: ADD ESP,0x8
// 0058f308: MOV EAX,dword ptr [ESP + 0x44]
//   XREF to: Stack[0x4] (READ)
// 0058f30c: XOR EBP,EBP
// 0058f30e: MOV EDX,dword ptr [EAX]
// 0058f310: MOV dword ptr [ESP + 0x18],EBP
//   XREF to: Stack[-0x28] (WRITE)
// 0058f314: TEST EDX,EDX
// 0058f316: JLE 0x0058f433
//   XREF to: 0058f433 (CONDITIONAL_JUMP)
// 0058f31c: MOV dword ptr [ESP + 0x8],EBP
//   XREF to: Stack[-0x38] (WRITE)
// 0058f320: MOV EAX,dword ptr [ESP + 0x8]
//   Label: LAB_0058f320
//   XREF to: Stack[-0x38] (READ)
// 0058f324: XOR EBX,EBX
// 0058f326: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0058f32a: MOV dword ptr [ESP + 0x24],EBX
//   XREF to: Stack[-0x1c] (WRITE)
// 0058f32e: MOV dword ptr [ESP + 0x28],EBX
//   XREF to: Stack[-0x18] (WRITE)
// 0058f332: MOV EAX,dword ptr [ESP + 0x44]
//   Label: LAB_0058f332
//   XREF to: Stack[0x4] (READ)
// 0058f336: ADD EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x20] (READ)
// 0058f33a: MOV EDX,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x18] (READ)
// 0058f33e: CMP EDX,dword ptr [EAX + 0x2c]
// 0058f341: JGE 0x0058f411
//   XREF to: 0058f411 (CONDITIONAL_JUMP)
// 0058f347: MOV EDX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x1c] (READ)
// 0058f34b: MOV EAX,dword ptr [EAX + 0x40]
// 0058f34e: ADD EDX,EAX
// 0058f350: XOR EAX,EAX
// 0058f352: MOV AL,byte ptr [EDX]
// 0058f354: PUSH EAX
// 0058f355: PUSH 0x64b36a
//   XREF to: 0064b36a (DATA)
// 0058f35a: MOV ESI,dword ptr [ESP + 0x50]
//   XREF to: Stack[0x8] (READ)
// 0058f35e: PUSH ESI
// 0058f35f: MOV dword ptr [ESP + 0x38],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 0058f363: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0058f368: ADD ESP,0xc
// 0058f36b: MOV EDI,dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x14] (READ)
// 0058f36f: XOR ESI,ESI
// 0058f371: MOV EBP,EDI
// 0058f373: MOV EBX,EDI
// 0058f375: MOV EDX,dword ptr [ESP + 0x2c]
//   Label: LAB_0058f375
//   XREF to: Stack[-0x14] (READ)
// 0058f379: XOR EAX,EAX
// 0058f37b: MOV AL,byte ptr [EDX]
// 0058f37d: CMP ESI,EAX
// 0058f37f: JGE 0x0058f4fd
//   XREF to: 0058f4fd (CONDITIONAL_JUMP)
// 0058f385: SUB ESP,0x8
// 0058f388: FLD float ptr [EBX + 0x18]
// 0058f38b: FSTP double ptr [ESP]
//   XREF to: Stack[-0x48] (DATA)
// 0058f38e: SUB ESP,0x8
// 0058f391: FLD float ptr [EBX + 0x14]
// 0058f394: FSTP double ptr [ESP]
//   XREF to: Stack[-0x50] (DATA)
// 0058f397: SUB ESP,0x8
// 0058f39a: FLD float ptr [EBX + 0x10]
// 0058f39d: FSTP double ptr [ESP]
//   XREF to: Stack[-0x58] (DATA)
// 0058f3a0: XOR EAX,EAX
// 0058f3a2: SUB ESP,0x8
// 0058f3a5: FLD float ptr [EBP + 0x4]
// 0058f3a8: FSTP double ptr [ESP]
//   XREF to: Stack[-0x60] (DATA)
// 0058f3ab: MOV AL,byte ptr [EDI + 0x1]
// 0058f3ae: PUSH EAX
// 0058f3af: INC EDI
// 0058f3b0: PUSH 0x64b36e
//   XREF to: 0064b36e (DATA)
// 0058f3b5: MOV EAX,dword ptr [ESP + 0x70]
//   XREF to: Stack[0x8] (READ)
// 0058f3b9: ADD EBP,0x4
// 0058f3bc: PUSH EAX
// 0058f3bd: ADD EBX,0xc
// 0058f3c0: INC ESI
// 0058f3c1: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0058f3c6: ADD ESP,0x2c
// 0058f3c9: JMP 0x0058f375
//   XREF to: 0058f375 (UNCONDITIONAL_JUMP)
// 0058f3cb: MOV EAX,dword ptr [ESP + 0x44]
//   Label: LAB_0058f3cb
//   XREF to: Stack[0x4] (READ)
// 0058f3cf: MOV EBX,dword ptr [EAX]
// 0058f3d1: XOR ESI,ESI
// 0058f3d3: TEST EBX,EBX
// 0058f3d5: JLE 0x0058f2cd
//   XREF to: 0058f2cd (CONDITIONAL_JUMP)
// 0058f3db: MOV EBX,EBP
// 0058f3dd: MOV EDI,dword ptr [EBX + 0x7178]
//   Label: LAB_0058f3dd
// 0058f3e3: PUSH EDI
// 0058f3e4: MOV EAX,dword ptr [EBX + 0x7164]
// 0058f3ea: PUSH EAX
// 0058f3eb: PUSH 0x64b327
//   XREF to: 0064b327 (DATA)
// 0058f3f0: MOV EDX,dword ptr [ESP + 0x54]
//   XREF to: Stack[0x8] (READ)
// 0058f3f4: PUSH EDX
// 0058f3f5: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0058f3fa: ADD ESP,0x10
// 0058f3fd: MOV EAX,dword ptr [ESP + 0x44]
//   XREF to: Stack[0x4] (READ)
// 0058f401: INC ESI
// 0058f402: MOV ECX,dword ptr [EAX]
// 0058f404: ADD EBX,0x4
// 0058f407: CMP ESI,ECX
// 0058f409: JGE 0x0058f2cd
//   XREF to: 0058f2cd (CONDITIONAL_JUMP)
// 0058f40f: JMP 0x0058f3dd
//   XREF to: 0058f3dd (UNCONDITIONAL_JUMP)
// 0058f411: MOV EBX,dword ptr [ESP + 0x8]
//   Label: LAB_0058f411
//   XREF to: Stack[-0x38] (READ)
// 0058f415: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x28] (READ)
// 0058f419: MOV EDX,dword ptr [ESP + 0x44]
//   XREF to: Stack[0x4] (READ)
// 0058f41d: ADD EBX,0x4
// 0058f420: INC ESI
// 0058f421: MOV EDI,dword ptr [EDX]
// 0058f423: MOV dword ptr [ESP + 0x8],EBX
//   XREF to: Stack[-0x38] (WRITE)
// 0058f427: MOV dword ptr [ESP + 0x18],ESI
//   XREF to: Stack[-0x28] (WRITE)
// 0058f42b: CMP ESI,EDI
// 0058f42d: JL 0x0058f320
//   XREF to: 0058f320 (CONDITIONAL_JUMP)
// 0058f433: PUSH 0x64b380
//   Label: LAB_0058f433
//   XREF to: 0064b380 (DATA)
// 0058f438: MOV EBP,dword ptr [ESP + 0x4c]
//   XREF to: Stack[0x8] (READ)
// 0058f43c: PUSH EBP
// 0058f43d: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0058f442: ADD ESP,0x8
// 0058f445: XOR EAX,EAX
// 0058f447: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 0058f44b: MOV EAX,dword ptr [ESP + 0x44]
//   XREF to: Stack[0x4] (READ)
// 0058f44f: CMP dword ptr [EAX],0x0
// 0058f452: JLE 0x0058f538
//   XREF to: 0058f538 (CONDITIONAL_JUMP)
// 0058f458: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 0058f45c: MOV EBX,dword ptr [ESP + 0x10]
//   Label: LAB_0058f45c
//   XREF to: Stack[-0x30] (READ)
// 0058f460: XOR EBP,EBP
// 0058f462: XOR ESI,ESI
// 0058f464: XOR EDI,EDI
// 0058f466: MOV EDX,dword ptr [EBX + 0x68]
//   Label: LAB_0058f466
// 0058f469: MOV EAX,dword ptr [EBX + 0x54]
// 0058f46c: ADD EAX,EDX
// 0058f46e: CMP EDI,EAX
// 0058f470: JGE 0x0058f516
//   XREF to: 0058f516 (CONDITIONAL_JUMP)
// 0058f476: MOV EAX,dword ptr [EBX + 0x7c]
// 0058f479: XOR EDX,EDX
// 0058f47b: MOV DX,word ptr [ESI + EAX*0x1 + 0x10]
// 0058f480: SHL EDX,0x8
// 0058f483: PUSH EDX
// 0058f484: XOR EDX,EDX
// 0058f486: MOV DX,word ptr [ESI + EAX*0x1 + 0xa]
// 0058f48b: SHL EDX,0x8
// 0058f48e: PUSH EDX
// 0058f48f: XOR EDX,EDX
// 0058f491: MOV DX,word ptr [ESI + EAX*0x1 + 0x4]
// 0058f496: PUSH EDX
// 0058f497: XOR EDX,EDX
// 0058f499: MOV DX,word ptr [ESI + EAX*0x1 + 0xe]
// 0058f49e: SHL EDX,0x8
// 0058f4a1: PUSH EDX
// 0058f4a2: XOR EDX,EDX
// 0058f4a4: MOV DX,word ptr [ESI + EAX*0x1 + 0x8]
// 0058f4a9: SHL EDX,0x8
// 0058f4ac: PUSH EDX
// 0058f4ad: XOR EDX,EDX
// 0058f4af: MOV DX,word ptr [ESI + EAX*0x1 + 0x2]
// 0058f4b4: PUSH EDX
// 0058f4b5: XOR EDX,EDX
// 0058f4b7: MOV DX,word ptr [ESI + EAX*0x1 + 0xc]
// 0058f4bc: SHL EDX,0x8
// 0058f4bf: PUSH EDX
// 0058f4c0: XOR EDX,EDX
// 0058f4c2: MOV DX,word ptr [ESI + EAX*0x1 + 0x6]
// 0058f4c7: SHL EDX,0x8
// 0058f4ca: MOV AX,word ptr [ESI + EAX*0x1]
// 0058f4ce: PUSH EDX
// 0058f4cf: AND EAX,0xffff
// 0058f4d4: PUSH EAX
// 0058f4d5: MOV EAX,dword ptr [EBX + 0x90]
// 0058f4db: MOV ECX,dword ptr [EAX + EBP*0x1]
// 0058f4de: PUSH ECX
// 0058f4df: PUSH 0x64b3ae
//   XREF to: 0064b3ae (DATA)
// 0058f4e4: MOV EAX,dword ptr [ESP + 0x74]
//   XREF to: Stack[0x8] (READ)
// 0058f4e8: ADD EBP,0x4
// 0058f4eb: PUSH EAX
// 0058f4ec: ADD ESI,0x12
// 0058f4ef: INC EDI
// 0058f4f0: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0058f4f5: ADD ESP,0x30
// 0058f4f8: JMP 0x0058f466
//   XREF to: 0058f466 (UNCONDITIONAL_JUMP)
// 0058f4fd: MOV EBP,dword ptr [ESP + 0x28]
//   Label: LAB_0058f4fd
//   XREF to: Stack[-0x18] (READ)
// 0058f501: MOV EDI,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x1c] (READ)
// 0058f505: INC EBP
// 0058f506: ADD EDI,0x34
// 0058f509: MOV dword ptr [ESP + 0x28],EBP
//   XREF to: Stack[-0x18] (WRITE)
// 0058f50d: MOV dword ptr [ESP + 0x24],EDI
//   XREF to: Stack[-0x1c] (WRITE)
// 0058f511: JMP 0x0058f332
//   XREF to: 0058f332 (UNCONDITIONAL_JUMP)
// 0058f516: MOV EDI,dword ptr [ESP + 0x10]
//   Label: LAB_0058f516
//   XREF to: Stack[-0x30] (READ)
// 0058f51a: MOV EBP,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x2c] (READ)
// 0058f51e: MOV EDX,dword ptr [ESP + 0x44]
//   XREF to: Stack[0x4] (READ)
// 0058f522: ADD EDI,0x4
// 0058f525: INC EBP
// 0058f526: MOV ECX,dword ptr [EDX]
// 0058f528: MOV dword ptr [ESP + 0x10],EDI
//   XREF to: Stack[-0x30] (WRITE)
// 0058f52c: MOV dword ptr [ESP + 0x14],EBP
//   XREF to: Stack[-0x2c] (WRITE)
// 0058f530: CMP EBP,ECX
// 0058f532: JL 0x0058f45c
//   XREF to: 0058f45c (CONDITIONAL_JUMP)
// 0058f538: PUSH 0x64b3cd
//   Label: LAB_0058f538
//   XREF to: 0064b3cd (DATA)
// 0058f53d: MOV EBX,dword ptr [ESP + 0x4c]
//   XREF to: Stack[0x8] (READ)
// 0058f541: PUSH EBX
// 0058f542: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0058f547: ADD ESP,0x8
// 0058f54a: MOV EAX,dword ptr [ESP + 0x44]
//   XREF to: Stack[0x4] (READ)
// 0058f54e: MOV ESI,dword ptr [EAX]
// 0058f550: XOR EBP,EBP
// 0058f552: TEST ESI,ESI
// 0058f554: JLE 0x0058f5a5
//   XREF to: 0058f5a5 (CONDITIONAL_JUMP)
// 0058f556: MOV dword ptr [ESP + 0xc],EBP
//   XREF to: Stack[-0x34] (WRITE)
// 0058f55a: MOV EDI,dword ptr [ESP + 0xc]
//   Label: LAB_0058f55a
//   XREF to: Stack[-0x34] (READ)
// 0058f55e: XOR EBX,EBX
// 0058f560: XOR ESI,ESI
// 0058f562: MOV EAX,dword ptr [ESP + 0x44]
//   Label: LAB_0058f562
//   XREF to: Stack[0x4] (READ)
// 0058f566: ADD EAX,EDI
// 0058f568: CMP ESI,dword ptr [EAX + 0x68]
// 0058f56b: JGE 0x0058f58f
//   XREF to: 0058f58f (CONDITIONAL_JUMP)
// 0058f56d: MOV EAX,dword ptr [EAX + 0xa4]
// 0058f573: MOV ECX,dword ptr [EBX + EAX*0x1]
// 0058f576: PUSH ECX
// 0058f577: PUSH 0x64b3eb
//   XREF to: 0064b3eb (DATA)
// 0058f57c: MOV EAX,dword ptr [ESP + 0x50]
//   XREF to: Stack[0x8] (READ)
// 0058f580: PUSH EAX
// 0058f581: ADD EBX,0x4
// 0058f584: INC ESI
// 0058f585: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0058f58a: ADD ESP,0xc
// 0058f58d: JMP 0x0058f562
//   XREF to: 0058f562 (UNCONDITIONAL_JUMP)
// 0058f58f: MOV EDX,dword ptr [ESP + 0xc]
//   Label: LAB_0058f58f
//   XREF to: Stack[-0x34] (READ)
// 0058f593: MOV EAX,dword ptr [ESP + 0x44]
//   XREF to: Stack[0x4] (READ)
// 0058f597: INC EBP
// 0058f598: ADD EDX,0x4
// 0058f59b: MOV ECX,dword ptr [EAX]
// 0058f59d: MOV dword ptr [ESP + 0xc],EDX
//   XREF to: Stack[-0x34] (WRITE)
// 0058f5a1: CMP EBP,ECX
// 0058f5a3: JL 0x0058f55a
//   XREF to: 0058f55a (CONDITIONAL_JUMP)
// 0058f5a5: PUSH 0x64b3ef
//   Label: LAB_0058f5a5
//   XREF to: 0064b3ef (DATA)
// 0058f5aa: MOV EBX,dword ptr [ESP + 0x4c]
//   XREF to: Stack[0x8] (READ)
// 0058f5ae: PUSH EBX
// 0058f5af: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0058f5b4: ADD ESP,0x8
// 0058f5b7: MOV EAX,dword ptr [ESP + 0x44]
//   XREF to: Stack[0x4] (READ)
// 0058f5bb: MOV ESI,dword ptr [EAX + 0xb8]
// 0058f5c1: XOR EDI,EDI
// 0058f5c3: TEST ESI,ESI
// 0058f5c5: JLE 0x0058f61a
//   XREF to: 0058f61a (CONDITIONAL_JUMP)
// 0058f5c7: LEA EBP,[EAX + 0xc0]
// 0058f5cd: MOV EAX,dword ptr [ESP + 0x44]
//   Label: LAB_0058f5cd
//   XREF to: Stack[0x4] (READ)
// 0058f5d1: MOV EDX,dword ptr [EAX + 0xbc]
// 0058f5d7: XOR ESI,ESI
// 0058f5d9: TEST EDX,EDX
// 0058f5db: JLE 0x0058f605
//   XREF to: 0058f605 (CONDITIONAL_JUMP)
// 0058f5dd: LEA EBX,[EBP + 0x8]
// 0058f5e0: PUSH EBX
//   Label: LAB_0058f5e0
// 0058f5e1: PUSH 0x64b400
//   XREF to: 0064b400 (DATA)
// 0058f5e6: MOV EAX,dword ptr [ESP + 0x50]
//   XREF to: Stack[0x8] (READ)
// 0058f5ea: PUSH EAX
// 0058f5eb: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0058f5f0: ADD ESP,0xc
// 0058f5f3: MOV EAX,dword ptr [ESP + 0x44]
//   XREF to: Stack[0x4] (READ)
// 0058f5f7: INC ESI
// 0058f5f8: MOV EDX,dword ptr [EAX + 0xbc]
// 0058f5fe: ADD EBX,0x48
// 0058f601: CMP ESI,EDX
// 0058f603: JL 0x0058f5e0
//   XREF to: 0058f5e0 (CONDITIONAL_JUMP)
// 0058f605: MOV EAX,dword ptr [ESP + 0x44]
//   Label: LAB_0058f605
//   XREF to: Stack[0x4] (READ)
// 0058f609: INC EDI
// 0058f60a: MOV EDX,dword ptr [EAX + 0xb8]
// 0058f610: ADD EBP,0x1680
// 0058f616: CMP EDI,EDX
// 0058f618: JL 0x0058f5cd
//   XREF to: 0058f5cd (CONDITIONAL_JUMP)
// 0058f61a: PUSH 0x64b404
//   Label: LAB_0058f61a
//   XREF to: 0064b404 (DATA)
// 0058f61f: MOV ECX,dword ptr [ESP + 0x4c]
//   XREF to: Stack[0x8] (READ)
// 0058f623: PUSH ECX
// 0058f624: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0058f629: ADD ESP,0x8
// 0058f62c: MOV EBX,dword ptr [ESP]
//   XREF to: Stack[-0x40] (DATA)
// 0058f62f: XOR ESI,ESI
// 0058f631: TEST EBX,EBX
// 0058f633: JLE 0x0058f680
//   XREF to: 0058f680 (CONDITIONAL_JUMP)
// 0058f635: MOV EBX,dword ptr [ESP + 0x44]
//   XREF to: Stack[0x4] (READ)
// 0058f639: MOV EDI,dword ptr [ESP]
//   XREF to: Stack[-0x40] (DATA)
// 0058f63c: ADD EBX,0x7c90
// 0058f642: SUB ESP,0x8
//   Label: LAB_0058f642
// 0058f645: FLD float ptr [EBX + 0x8]
// 0058f648: FSTP double ptr [ESP]
//   XREF to: Stack[-0x48] (DATA)
// 0058f64b: SUB ESP,0x8
// 0058f64e: FLD float ptr [EBX + 0x4]
// 0058f651: FSTP double ptr [ESP]
//   XREF to: Stack[-0x50] (DATA)
// 0058f654: SUB ESP,0x8
// 0058f657: FLD float ptr [EBX]
// 0058f659: FSTP double ptr [ESP]
//   XREF to: Stack[-0x58] (DATA)
// 0058f65c: PUSH 0x64b419
//   XREF to: 0064b419 (DATA)
// 0058f661: MOV ECX,dword ptr [ESP + 0x64]
//   XREF to: Stack[0x8] (READ)
// 0058f665: PUSH ECX
// 0058f666: ADD EBX,0xc
// 0058f669: INC ESI
// 0058f66a: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0058f66f: ADD ESP,0x20
// 0058f672: CMP ESI,EDI
// 0058f674: JL 0x0058f642
//   XREF to: 0058f642 (CONDITIONAL_JUMP)
// 0058f676: LEA EAX,[EAX]
// 0058f67c: LEA EDX,[EDX]
// 0058f680: PUSH 0x64b423
//   Label: LAB_0058f680
//   XREF to: 0064b423 (DATA)
// 0058f685: MOV EBP,dword ptr [ESP + 0x4c]
//   XREF to: Stack[0x8] (READ)
// 0058f689: PUSH EBP
// 0058f68a: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0058f68f: ADD ESP,0x8
// 0058f692: MOV EAX,dword ptr [ESP + 0x44]
//   XREF to: Stack[0x4] (READ)
// 0058f696: SUB ESP,0x8
// 0058f699: FLD float ptr [EAX + 0x7c8c]
// 0058f69f: FSTP double ptr [ESP]
//   XREF to: Stack[-0x48] (DATA)
// 0058f6a2: SUB ESP,0x8
// 0058f6a5: FLD float ptr [EAX + 0x7c88]
// 0058f6ab: FSTP double ptr [ESP]
//   XREF to: Stack[-0x50] (DATA)
// 0058f6ae: SUB ESP,0x8
// 0058f6b1: FLD float ptr [EAX + 0x7c84]
// 0058f6b7: FSTP double ptr [ESP]
//   XREF to: Stack[-0x58] (DATA)
// 0058f6ba: PUSH 0x64b43e
//   XREF to: 0064b43e (DATA)
// 0058f6bf: PUSH EBP
// 0058f6c0: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0058f6c5: ADD ESP,0x20
// 0058f6c8: PUSH 0x64b448
//   XREF to: 0064b448 (DATA)
// 0058f6cd: PUSH EBP
// 0058f6ce: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0058f6d3: ADD ESP,0x8
// 0058f6d6: MOV EAX,dword ptr [ESP + 0x44]
//   XREF to: Stack[0x4] (READ)
// 0058f6da: SUB ESP,0x8
// 0058f6dd: FLD float ptr [EAX + 0x8148]
// 0058f6e3: FSTP double ptr [ESP]
//   XREF to: Stack[-0x48] (DATA)
// 0058f6e6: SUB ESP,0x8
// 0058f6e9: FLD float ptr [EAX + 0x8144]
// 0058f6ef: FSTP double ptr [ESP]
//   XREF to: Stack[-0x50] (DATA)
// 0058f6f2: SUB ESP,0x8
// 0058f6f5: FLD float ptr [EAX + 0x8140]
// 0058f6fb: FSTP double ptr [ESP]
//   XREF to: Stack[-0x58] (DATA)
// 0058f6fe: PUSH 0x64b455
//   XREF to: 0064b455 (DATA)
// 0058f703: PUSH EBP
// 0058f704: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0058f709: ADD ESP,0x20
// 0058f70c: PUSH 0x64b45f
//   XREF to: 0064b45f (DATA)
// 0058f711: PUSH EBP
// 0058f712: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0058f717: ADD ESP,0x8
// 0058f71a: MOV EBX,EBP
// 0058f71c: MOV ESI,dword ptr [ESP]
//   XREF to: Stack[-0x40] (DATA)
// 0058f71f: XOR EBX,EBP
// 0058f721: TEST ESI,ESI
// 0058f723: JLE 0x0058f750
//   XREF to: 0058f750 (CONDITIONAL_JUMP)
// 0058f725: MOV ESI,dword ptr [ESP + 0x44]
//   XREF to: Stack[0x4] (READ)
// 0058f729: MOV EBP,dword ptr [ESP + 0x48]
//   XREF to: Stack[0x8] (READ)
// 0058f72d: MOV EDI,dword ptr [ESI + 0x8c3c]
//   Label: LAB_0058f72d
// 0058f733: PUSH EDI
// 0058f734: PUSH 0x64b473
//   XREF to: 0064b473 (DATA)
// 0058f739: PUSH EBP
// 0058f73a: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0058f73f: ADD ESP,0xc
// 0058f742: INC EBX
// 0058f743: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x40] (DATA)
// 0058f746: ADD ESI,0x4
// 0058f749: CMP EBX,EAX
// 0058f74b: JL 0x0058f72d
//   XREF to: 0058f72d (CONDITIONAL_JUMP)
// 0058f74d: LEA EAX,[EAX]
// 0058f750: MOV EAX,dword ptr [ESP + 0x48]
//   Label: LAB_0058f750
//   XREF to: Stack[0x8] (READ)
// 0058f754: TEST byte ptr [EAX + 0xc],0x20
// 0058f758: JNZ 0x0058f762
//   XREF to: 0058f762 (CONDITIONAL_JUMP)
// 0058f75a: ADD ESP,0x30
// 0058f75d: POP EBP
// 0058f75e: POP EDI
// 0058f75f: POP ESI
// 0058f760: POP EBX
// 0058f761: RET
// 0058f762: MOV EDX,0x64b477
//   Label: LAB_0058f762
//   XREF to: 0064b477 (PARAM)
// 0058f767: MOV ECX,0xbab
// 0058f76c: PUSH 0x64b48c
//   XREF to: 0064b48c (DATA)
// 0058f771: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 0058f777: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 0058f77d: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0058f782: ADD ESP,0x4
// 0058f785: ADD ESP,0x30
// 0058f788: POP EBP
// 0058f789: POP EDI
// 0058f78a: POP ESI
// 0058f78b: POP EBX
// 0058f78c: RET
