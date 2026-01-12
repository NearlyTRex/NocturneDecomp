// Name: core_skeledit.cpp_FUN_0058bd00
// Address: 0058bd00
// Address Range: [[0058bd00, 0058c188]]
// Convention: unknown
// Signature: undefined core_skeledit.cpp_FUN_0058bd00()

#include "nocturne.h"

void core_skeledit_cpp_FUN_0058bd00(void)

{
  float fVar1;
  FILE *file;
  uint uVar2;
  CVector3f *pCVar3;
  byte *dest;
  CVector3f *pCVar4;
  BADSPACEBASE *in_ESP;
  int iVar5;
  float *pfVar6;
  int iVar7;
  CMatrix3x4f *pCVar8;
  byte bVar9;
  int in_stack_0000000c;
  char *in_stack_00000010;
  int in_stack_00000014;
  CMatrix3x4f *in_stack_fffffbd8;
  byte auStack_108 [2];
  int iStack_106;
  float afStack_d0 [12];
  CMatrix3x4f CStack_a0;
  int aiStack_70 [4];
  int iStack_60;
  float fStack_5c;
  CVector3f local_50;
  CVector3f CStack_44;
  byte local_38 [4];
  long local_34;
  int local_30;
  float local_2c;
  int local_28;
  int local_24;
  FILE *local_20;
  int local_1c;
  byte *local_18;
  byte *local_14;
  int iStack_10;
  SIZE_T SStack_c;
  
  bVar9 = 0;
  crt_stack_c_stack_probe_FUN_005ff9f3(0x448);
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Importing vertex assignments from %s...");
  local_20 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                       (in_stack_00000010,(char *)0x0,"rb","..\\core\\skeledit.cpp",
                        0x593);
  if (local_20 == (FILE *)0x0) {
    g_CurrentFilename = "..\\core\\skeledit.cpp";
    g_CurrentLineNumber = 0x594;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("CDeformableModel::importVertexAssignmentsVPH can't open %s",in_stack_00000010);
  }
  crt_stdio_c_fread_FUN_005fd990(auStack_108,0x36,1,local_20);
  if (200 < iStack_106) {
    g_CurrentFilename = "..\\core\\skeledit.cpp";
    g_CurrentLineNumber = 0x59b;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("Too many links in %s: %d, max is %d",in_stack_00000010,iStack_106,200);
  }
  iVar5 = 0;
  if (0 < iStack_106) {
    dest = &DAT_0365a3e8;
    iVar7 = 0;
    do {
      crt_stdio_c_fread_FUN_005fd990(&SStack_c,4,1,local_20);
      crt_memory_c_memset_FUN_005fde40(dest,0,0x32);
      crt_stdio_c_fread_FUN_005fd990(dest,SStack_c,1,local_20);
      uVar2 = core_skeledit_cpp_FUN_0058ac30();
      *(uint *)(&stack0xfffffbd8 + iVar7) = uVar2;
      iVar7 = iVar7 + 4;
      crt_stdio_c_fseek_FUN_005ffacc(local_20,0x102,1);
      iVar5 = iVar5 + 1;
      dest = dest + 0x32;
    } while (iVar5 < iStack_106);
  }
  crt_stdio_c_fread_FUN_005fd990(local_38,4,1,local_20);
  file = local_20;
  crt_stdio_c_fread_FUN_005fd990(&local_34,4,1,local_20);
  crt_stdio_c_fseek_FUN_005ffacc(file,local_34,1);
  crt_stdio_c_fseek_FUN_005ffacc(file,0x30,1);
  crt_stdio_c_fread_FUN_005fd990(&local_30,4,1,file);
  local_24 = 0;
  if (0 < local_30) {
    local_1c = in_stack_00000014 + 4;
    local_28 = 0;
    do {
      local_18 = (byte *)(local_28 + *(int *)(in_stack_0000000c + 0x40));
      crt_stdio_c_fread_FUN_005fd990(aiStack_70,0x20,1,local_20);
      if (iStack_60 == 0) {
        iVar7 = 0;
      }
      else {
        iVar5 = iStack_60;
        if (iStack_60 < 0) {
          iVar5 = aiStack_70[0];
        }
        iVar7 = *(int *)(&stack0xfffffbd8 + iVar5 * 4);
        if (iVar7 < 0) {
          g_CurrentFilename = "..\\core\\skeledit.cpp";
          g_CurrentLineNumber = 0x5cc;
          core_main_c_displayErrorAndQuit_FUN_00506f10
                    ("vertex %d is influenced by bone %s, but this bone isn't in the .BON file!",local_24,&DAT_0365a3e8 + iVar5 * 0x32);
        }
      }
      iVar5 = iVar7 * 0x84 + in_stack_00000014;
      if ((*(int *)(iVar5 + 0x24) < 1) || (iStack_60 < 1)) {
        local_18[4] = 0;
        local_18[5] = 0;
        local_18[6] = 0x80;
        local_18[7] = 0x3f;
        *local_18 = 1;
        local_18[1] = (byte)iVar7;
      }
      else {
        *local_18 = 2;
        local_2c = fStack_5c;
        fVar1 = fStack_5c * fStack_5c * fStack_5c;
        local_18[1] = (byte)iVar7;
        *(float *)(local_18 + 4) = fVar1;
        local_18[2] = *(byte *)(iVar5 + 0x24);
        *(float *)(local_18 + 8) = 1.0 - fVar1;
      }
      local_50.x = *(float *)(local_18 + 0x10);
      pCVar4 = (CVector3f *)(local_18 + 0x10);
      local_50.y = *(float *)(local_18 + 0x14);
      local_50.z = *(float *)(local_18 + 0x18);
      local_14 = local_18;
      for (iStack_10 = 0; iStack_10 < (int)(uint)*local_18; iStack_10 = iStack_10 + 1) {
        core_xform_cpp_inverse_FUN_005f6210
                  ((CMatrix3x4f *)((uint)local_14[1] * 0x84 + local_1c + 0x54),in_stack_fffffbd8);
        pfVar6 = afStack_d0;
        pCVar8 = &CStack_a0;
        for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
          pCVar8->m[0].w = *pfVar6;
          pfVar6 = pfVar6 + (uint)bVar9 * -2 + 1;
          pCVar8 = (CMatrix3x4f *)((int)pCVar8 + ((uint)bVar9 * -2 + 1) * 4);
        }
        pCVar3 = core_xform_cpp_transformVector3x4_FUN_005f4dc0(&CStack_44,&local_50,&CStack_a0);
        if (pCVar4 != pCVar3) {
          pCVar4->x = pCVar3->x;
          pCVar4->y = pCVar3->y;
          pCVar4->z = pCVar3->z;
        }
        pCVar4 = pCVar4 + 1;
        local_14 = local_14 + 1;
      }
      local_28 = local_28 + 0x34;
      local_24 = local_24 + 1;
    } while (local_24 < local_30);
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_20,"..\\core\\skeledit.cpp",0x5f9);
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Imported vertex assignments from %s OK");
  return;
}
