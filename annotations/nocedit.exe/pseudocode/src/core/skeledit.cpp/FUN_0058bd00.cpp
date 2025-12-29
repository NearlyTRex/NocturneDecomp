// Name: core_skeledit.cpp_FUN_0058bd00
// Address: 0058bd00
// Address Range: [[0058bd00, 0058c188]]
// Convention: unknown
// Signature: undefined core_skeledit.cpp_FUN_0058bd00()

#include "nocturne.h"

void core_skeledit_cpp_FUN_0058bd00(void)

{
  byte *pbVar1;
  uint uVar2;
  CVector3f *pCVar3;
  float fVar4;
  byte *dest;
  int iVar5;
  CVector3f *pCVar6;
  BADSPACEBASE *in_ESP;
  FILE *unaff_EBP;
  int iVar7;
  float *pfVar8;
  SIZE_T unaff_EDI;
  int iVar9;
  CMatrix3x4f *pCVar10;
  byte bVar11;
  FILE *in_stack_00000008;
  byte *in_stack_0000000c;
  byte *in_stack_00000010;
  byte *in_stack_00000014;
  int in_stack_00000018;
  int in_stack_0000001c;
  int in_stack_00000020;
  CMatrix3x4f *in_stack_fffffc00;
  byte auStack_fc [6];
  int iStack_f6;
  int iStack_f2;
  float afStack_a4 [12];
  CMatrix3x4f CStack_74;
  float local_3c;
  int local_38;
  float local_34;
  uint local_28;
  CVector3f local_24;
  CVector3f local_18;
  FILE *pFStack_c;
  FILE *pFVar12;
  
  bVar11 = 0;
  crt_stack_c_stack_probe_FUN_005ff9f3(0x448);
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Importing vertex assignments from %s...");
  pbVar1 = in_stack_00000010;
  local_18.x = (float)shape_memdbg_cpp_openFile_FUN_0050f7a0
                                ((char *)in_stack_00000010,(char *)0x0,"rb",
                                 "..\\core\\skeledit.cpp",0x593);
  if ((FILE *)local_18.x == (FILE *)0x0) {
    g_CurrentFilename = "..\\core\\skeledit.cpp";
    g_CurrentLineNumber = 0x594;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDeformableModel::importVertexAssignmentsVPH can't open %s",pbVar1);
  }
  crt_stdio_c_fread_FUN_005fd990(auStack_fc,0x36,1,(FILE *)local_18.y);
  if (200 < iStack_f6) {
    g_CurrentFilename = "..\\core\\skeledit.cpp";
    g_CurrentLineNumber = 0x59b;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("Too many links in %s: %d, max is %d",in_stack_00000010,iStack_f6,200);
  }
  iVar7 = 0;
  if (0 < iStack_f2) {
    dest = &DAT_0365a3e8;
    iVar9 = 0;
    do {
      crt_stdio_c_fread_FUN_005fd990(&stack0x00000008,4,1,pFStack_c);
      crt_memory_c_memset_FUN_005fde40(dest,0,0x32);
      crt_stdio_c_fread_FUN_005fd990(dest,unaff_EDI,1,(FILE *)local_18.x);
      uVar2 = core_skeledit_cpp_FUN_0058ac30();
      *(uint *)(&stack0xfffffbe8 + iVar9) = uVar2;
      iVar9 = iVar9 + 4;
      crt_stdio_c_fseek_FUN_005ffacc((FILE *)local_18.z,0x102,1);
      iVar7 = iVar7 + 1;
      dest = dest + 0x32;
    } while (iVar7 < iStack_f2);
  }
  crt_stdio_c_fread_FUN_005fd990(&local_24,4,1,pFStack_c);
  pFVar12 = unaff_EBP;
  crt_stdio_c_fread_FUN_005fd990(&local_24.z,4,1,unaff_EBP);
  crt_stdio_c_fseek_FUN_005ffacc(unaff_EBP,(long)local_18.x,1);
  crt_stdio_c_fseek_FUN_005ffacc(unaff_EBP,0x30,1);
  crt_stdio_c_fread_FUN_005fd990(&pFStack_c,4,1,unaff_EBP);
  iVar7 = 0;
  if (0 < (int)pFVar12) {
    in_stack_0000000c = in_stack_00000014 + 4;
    iVar9 = 0;
    do {
      in_stack_00000010 = (byte *)(iVar9 + *(int *)(in_stack_0000000c + 0x40));
      crt_stdio_c_fread_FUN_005fd990(&CStack_74.m[2].z,0x20,1,in_stack_00000008);
      if (local_3c == 0.0) {
        iVar5 = 0;
      }
      else {
        fVar4 = local_3c;
        if ((int)local_3c < 0) {
          fVar4 = CStack_74.m[2].y;
        }
        iVar5 = *(int *)(&stack0xfffffc00 + (int)fVar4 * 4);
        if (iVar5 < 0) {
          g_CurrentFilename = "..\\core\\skeledit.cpp";
          g_CurrentLineNumber = 0x5cc;
          core_main_c_displayErrorAndQuit_FUN_00506f10("vertex %d is influenced by bone %s, but this bone isn't in the .BON file!");
        }
      }
      if ((*(int *)(in_stack_00000014 + iVar5 * 0x84 + 0x24) < 1) || (local_38 < 1)) {
        in_stack_00000010[4] = 0;
        in_stack_00000010[5] = 0;
        in_stack_00000010[6] = 0x80;
        in_stack_00000010[7] = 0x3f;
        *in_stack_00000010 = 1;
        in_stack_00000010[1] = (byte)iVar5;
      }
      else {
        *in_stack_00000010 = 2;
        fVar4 = local_34 * local_34 * local_34;
        in_stack_00000010[1] = (byte)iVar5;
        *(float *)(in_stack_00000010 + 4) = fVar4;
        in_stack_00000010[2] = in_stack_00000014[iVar5 * 0x84 + 0x24];
        *(float *)(in_stack_00000010 + 8) = 1.0 - fVar4;
      }
      local_28 = *(uint *)(in_stack_00000010 + 0x10);
      pCVar6 = (CVector3f *)(in_stack_00000010 + 0x10);
      local_24.x = *(float *)(in_stack_00000010 + 0x14);
      local_24.y = *(float *)(in_stack_00000010 + 0x18);
      in_stack_00000018 = 0;
      in_stack_00000014 = in_stack_00000010;
      while (in_stack_00000018 < (int)(uint)*in_stack_00000010) {
        core_xform_cpp_inverse_FUN_005f6210
                  ((CMatrix3x4f *)(in_stack_0000000c + (uint)in_stack_00000014[1] * 0x84 + 0x54),
                   in_stack_fffffc00);
        in_stack_fffffc00 = &CStack_74;
        pfVar8 = afStack_a4;
        pCVar10 = &CStack_74;
        for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
          pCVar10->m[0].w = *pfVar8;
          pfVar8 = pfVar8 + (uint)bVar11 * -2 + 1;
          pCVar10 = (CMatrix3x4f *)((int)pCVar10 + ((uint)bVar11 * -2 + 1) * 4);
        }
        pCVar3 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                           (&local_18,&local_24,in_stack_fffffc00);
        if (pCVar6 != pCVar3) {
          pCVar6->x = pCVar3->x;
          pCVar6->y = pCVar3->y;
          pCVar6->z = pCVar3->z;
        }
        pCVar6 = pCVar6 + 1;
        in_stack_0000001c = in_stack_0000001c + 1;
        in_stack_00000020 = in_stack_00000020 + 1;
      }
      iVar9 = iVar9 + 0x34;
      iVar7 = iVar7 + 1;
    } while (iVar7 < (int)pFVar12);
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(in_stack_00000008,"..\\core\\skeledit.cpp",0x5f9);
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Imported vertex assignments from %s OK");
  return;
}
