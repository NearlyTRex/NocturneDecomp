// Name: core_skeledit.cpp_FUN_0058bd00
// Address: 0058bd00
// Address Range: [[0058bd00, 0058c188]]
// Convention: unknown
// Signature: undefined core_skeledit.cpp_FUN_0058bd00()

#include "nocturne.h"

void core_skeledit_cpp_FUN_0058bd00(void)

{
  float fVar1;
  uint uVar2;
  CVector3f *pCVar3;
  FILE *pFVar4;
  byte *dest;
  CVector3f *pCVar5;
  BADSPACEBASE *in_ESP;
  int iVar6;
  float *pfVar7;
  int iVar8;
  CMatrix3x4f *pCVar9;
  byte bVar10;
  int in_stack_0000000c;
  char *in_stack_00000010;
  int in_stack_00000014;
  CMatrix3x4f *in_stack_fffffbd8;
  byte auStack_120 [6];
  int iStack_11a;
  float afStack_cc [12];
  CMatrix3x4f CStack_9c;
  FILE *pFStack_6c;
  int iStack_60;
  FILE *pFStack_5c;
  uint local_50;
  CVector3f local_4c;
  CVector3f local_40;
  FILE *local_34;
  FILE *local_30;
  FILE *local_2c;
  int local_28;
  FILE *local_24;
  FILE *local_20;
  int local_1c;
  byte *local_18;
  byte *local_14;
  int iStack_10;
  int iStack_c;
  
  bVar10 = 0;
  crt_stack_c_stack_probe_FUN_005ff9f3(0x448);
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Importing vertex assignments from %s...");
  local_40.z = (float)shape_memdbg_cpp_openFile_FUN_0050f7a0
                                (in_stack_00000010,(char *)0x0,"rb",
                                 "..\\core\\skeledit.cpp",0x593);
  if ((FILE *)local_40.z == (FILE *)0x0) {
    g_CurrentFilename = "..\\core\\skeledit.cpp";
    g_CurrentLineNumber = 0x594;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("CDeformableModel::importVertexAssignmentsVPH can't open %s",in_stack_00000010);
  }
  crt_stdio_c_fread_FUN_005fd990(auStack_120,0x36,1,(FILE *)local_40.z);
  if (200 < iStack_11a) {
    g_CurrentFilename = "..\\core\\skeledit.cpp";
    g_CurrentLineNumber = 0x59b;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("Too many links in %s: %d, max is %d",in_stack_00000010,iStack_11a,200);
  }
  iVar6 = 0;
  if (0 < iStack_11a) {
    dest = &DAT_0365a3e8;
    iVar8 = 0;
    do {
      crt_stdio_c_fread_FUN_005fd990(&local_20,4,1,local_34);
      crt_memory_c_memset_FUN_005fde40(dest,0,0x32);
      crt_stdio_c_fread_FUN_005fd990(dest,(SIZE_T)local_18,1,local_2c);
      uVar2 = core_skeledit_cpp_FUN_0058ac30();
      *(uint *)(&stack0xfffffbd4 + iVar8) = uVar2;
      iVar8 = iVar8 + 4;
      crt_stdio_c_fseek_FUN_005ffacc(local_24,0x102,1);
      iVar6 = iVar6 + 1;
      dest = dest + 0x32;
    } while (iVar6 < iStack_11a);
  }
  crt_stdio_c_fread_FUN_005fd990(&local_4c,4,1,local_34);
  pFVar4 = local_30;
  crt_stdio_c_fread_FUN_005fd990(&local_4c.z,4,1,local_30);
  crt_stdio_c_fseek_FUN_005ffacc(pFVar4,(long)local_40.x,1);
  crt_stdio_c_fseek_FUN_005ffacc(pFVar4,0x30,1);
  crt_stdio_c_fread_FUN_005fd990(&local_34,4,1,pFVar4);
  local_24 = (FILE *)0x0;
  if (0 < (int)local_30) {
    local_1c = in_stack_00000014 + 4;
    local_28 = 0;
    do {
      local_18 = (byte *)(local_28 + *(int *)(in_stack_0000000c + 0x40));
      crt_stdio_c_fread_FUN_005fd990(&CStack_9c.m[2].z,0x20,1,local_20);
      if (pFStack_5c == (FILE *)0x0) {
        iVar6 = 0;
      }
      else {
        pFVar4 = pFStack_5c;
        if ((int)pFStack_5c < 0) {
          pFVar4 = pFStack_6c;
        }
        iVar6 = *(int *)(&stack0xfffffbd8 + (int)pFVar4 * 4);
        if (iVar6 < 0) {
          in_stack_fffffbd8 = (CMatrix3x4f *)(&DAT_0365a3e8 + (int)pFVar4 * 0x32);
          g_CurrentFilename = "..\\core\\skeledit.cpp";
          g_CurrentLineNumber = 0x5cc;
          core_main_c_displayErrorAndQuit_FUN_00506f10("vertex %d is influenced by bone %s, but this bone isn't in the .BON file!");
        }
      }
      iVar8 = iVar6 * 0x84 + in_stack_00000014;
      if ((*(int *)(iVar8 + 0x24) < 1) || (iStack_60 < 1)) {
        local_18[4] = 0;
        local_18[5] = 0;
        local_18[6] = 0x80;
        local_18[7] = 0x3f;
        *local_18 = 1;
        local_18[1] = (byte)iVar6;
      }
      else {
        *local_18 = 2;
        local_2c = pFStack_5c;
        fVar1 = (float)pFStack_5c * (float)pFStack_5c * (float)pFStack_5c;
        local_18[1] = (byte)iVar6;
        *(float *)(local_18 + 4) = fVar1;
        local_18[2] = *(byte *)(iVar8 + 0x24);
        *(float *)(local_18 + 8) = 1.0 - fVar1;
      }
      local_50 = *(uint *)(local_18 + 0x10);
      pCVar5 = (CVector3f *)(local_18 + 0x10);
      local_4c.x = *(float *)(local_18 + 0x14);
      local_4c.y = *(float *)(local_18 + 0x18);
      iStack_10 = 0;
      local_14 = local_18;
      while (iStack_10 < (int)(uint)*local_18) {
        core_xform_cpp_inverse_FUN_005f6210
                  ((CMatrix3x4f *)((uint)local_14[1] * 0x84 + local_1c + 0x54),in_stack_fffffbd8);
        in_stack_fffffbd8 = &CStack_9c;
        pfVar7 = afStack_cc;
        pCVar9 = &CStack_9c;
        for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
          pCVar9->m[0].w = *pfVar7;
          pfVar7 = pfVar7 + (uint)bVar10 * -2 + 1;
          pCVar9 = (CMatrix3x4f *)((int)pCVar9 + ((uint)bVar10 * -2 + 1) * 4);
        }
        pCVar3 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                           (&local_40,&local_4c,in_stack_fffffbd8);
        if (pCVar5 != pCVar3) {
          pCVar5->x = pCVar3->x;
          pCVar5->y = pCVar3->y;
          pCVar5->z = pCVar3->z;
        }
        pCVar5 = pCVar5 + 1;
        iStack_c = iStack_c + 1;
      }
      local_28 = local_28 + 0x34;
      local_24 = (FILE *)((int)local_24 + 1);
    } while ((int)local_24 < (int)local_30);
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_20,"..\\core\\skeledit.cpp",0x5f9);
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Imported vertex assignments from %s OK");
  return;
}
