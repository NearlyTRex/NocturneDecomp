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
  int iVar5;
  float *pfVar6;
  int iVar7;
  CMatrix3x4f *pCVar8;
  byte bVar9;
  int in_stack_00000004;
  char *in_stack_00000008;
  int in_stack_0000000c;
  CMatrix3x4f *in_stack_fffffbd0;
  byte local_110 [2];
  int local_10e;
  float local_d8 [12];
  CMatrix3x4f local_a8;
  int local_78 [4];
  int local_68;
  float local_64;
  CVector3f local_58;
  CVector3f local_4c;
  byte local_40 [4];
  long local_3c;
  int local_38;
  float local_34;
  int local_30;
  int local_2c;
  FILE *local_28;
  int local_24;
  byte *local_20;
  byte *local_1c;
  int local_18;
  SIZE_T local_14;
  
  bVar9 = 0;
  crt_stack_c_stack_probe_FUN_005ff9f3(0x448);
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Importing vertex assignments from %s...");
  local_28 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                       (in_stack_00000008,(char *)0x0,"rb","..\\core\\skeledit.cpp",
                        0x593);
  if (local_28 == (FILE *)0x0) {
    g_CurrentFilename = "..\\core\\skeledit.cpp";
    g_CurrentLineNumber = 0x594;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("CDeformableModel::importVertexAssignmentsVPH can't open %s",in_stack_00000008);
  }
  crt_stdio_c_fread_FUN_005fd990(local_110,0x36,1,local_28);
  if (200 < local_10e) {
    g_CurrentFilename = "..\\core\\skeledit.cpp";
    g_CurrentLineNumber = 0x59b;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("Too many links in %s: %d, max is %d",in_stack_00000008,local_10e,200);
  }
  iVar5 = 0;
  if (0 < local_10e) {
    dest = &DAT_0365a3e8;
    iVar7 = 0;
    do {
      crt_stdio_c_fread_FUN_005fd990(&local_14,4,1,local_28);
      crt_memory_c_memset_FUN_005fde40(dest,0,0x32);
      crt_stdio_c_fread_FUN_005fd990(dest,local_14,1,local_28);
      uVar2 = core_skeledit_cpp_FUN_0058ac30();
      *(uint *)(&stack0xfffffbd0 + iVar7) = uVar2;
      iVar7 = iVar7 + 4;
      crt_stdio_c_fseek_FUN_005ffacc(local_28,0x102,1);
      iVar5 = iVar5 + 1;
      dest = dest + 0x32;
    } while (iVar5 < local_10e);
  }
  crt_stdio_c_fread_FUN_005fd990(local_40,4,1,local_28);
  file = local_28;
  crt_stdio_c_fread_FUN_005fd990(&local_3c,4,1,local_28);
  crt_stdio_c_fseek_FUN_005ffacc(file,local_3c,1);
  crt_stdio_c_fseek_FUN_005ffacc(file,0x30,1);
  crt_stdio_c_fread_FUN_005fd990(&local_38,4,1,file);
  local_2c = 0;
  if (0 < local_38) {
    local_24 = in_stack_0000000c + 4;
    local_30 = 0;
    do {
      local_20 = (byte *)(local_30 + *(int *)(in_stack_00000004 + 0x40));
      crt_stdio_c_fread_FUN_005fd990(local_78,0x20,1,local_28);
      if (local_68 == 0) {
        iVar7 = 0;
      }
      else {
        iVar5 = local_68;
        if (local_68 < 0) {
          iVar5 = local_78[0];
        }
        iVar7 = *(int *)(&stack0xfffffbd0 + iVar5 * 4);
        if (iVar7 < 0) {
          g_CurrentFilename = "..\\core\\skeledit.cpp";
          g_CurrentLineNumber = 0x5cc;
          core_main_c_displayErrorAndQuit_FUN_00506f10
                    ("vertex %d is influenced by bone %s, but this bone isn't in the .BON file!",local_2c,&DAT_0365a3e8 + iVar5 * 0x32);
        }
      }
      iVar5 = iVar7 * 0x84 + in_stack_0000000c;
      if ((*(int *)(iVar5 + 0x24) < 1) || (local_68 < 1)) {
        local_20[4] = 0;
        local_20[5] = 0;
        local_20[6] = 0x80;
        local_20[7] = 0x3f;
        *local_20 = 1;
        local_20[1] = (byte)iVar7;
      }
      else {
        *local_20 = 2;
        local_34 = local_64;
        fVar1 = local_64 * local_64 * local_64;
        local_20[1] = (byte)iVar7;
        *(float *)(local_20 + 4) = fVar1;
        local_20[2] = *(byte *)(iVar5 + 0x24);
        *(float *)(local_20 + 8) = 1.0 - fVar1;
      }
      local_58.x = *(float *)(local_20 + 0x10);
      pCVar4 = (CVector3f *)(local_20 + 0x10);
      local_58.y = *(float *)(local_20 + 0x14);
      local_58.z = *(float *)(local_20 + 0x18);
      local_1c = local_20;
      for (local_18 = 0; local_18 < (int)(uint)*local_20; local_18 = local_18 + 1) {
        core_xform_cpp_inverse_FUN_005f6210
                  ((CMatrix3x4f *)((uint)local_1c[1] * 0x84 + local_24 + 0x54),in_stack_fffffbd0);
        pfVar6 = local_d8;
        pCVar8 = &local_a8;
        for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
          pCVar8->m[0].w = *pfVar6;
          pfVar6 = pfVar6 + (uint)bVar9 * -2 + 1;
          pCVar8 = (CMatrix3x4f *)((int)pCVar8 + ((uint)bVar9 * -2 + 1) * 4);
        }
        pCVar3 = core_xform_cpp_transformVector3x4_FUN_005f4dc0(&local_4c,&local_58,&local_a8);
        if (pCVar4 != pCVar3) {
          pCVar4->x = pCVar3->x;
          pCVar4->y = pCVar3->y;
          pCVar4->z = pCVar3->z;
        }
        pCVar4 = pCVar4 + 1;
        local_1c = local_1c + 1;
      }
      local_30 = local_30 + 0x34;
      local_2c = local_2c + 1;
    } while (local_2c < local_38);
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_28,"..\\core\\skeledit.cpp",0x5f9);
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Imported vertex assignments from %s OK");
  return;
}
