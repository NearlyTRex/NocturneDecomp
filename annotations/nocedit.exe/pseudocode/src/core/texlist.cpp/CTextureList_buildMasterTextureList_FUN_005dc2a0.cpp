// Name: core_texlist.cpp_CTextureList_buildMasterTextureList_FUN_005dc2a0
// Address: 005dc2a0
// Address Range: [[005dc2a0, 005dc5de]]
// Convention: __cdecl
// Signature: void core_texlist.cpp_CTextureList_buildMasterTextureList_FUN_005dc2a0(CTextureList * this_ptr)

#include "nocturne.h"

void __cdecl
core_texlist_cpp_CTextureList_buildMasterTextureList_FUN_005dc2a0(CTextureList *this_ptr)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  BADSPACEBASE *in_ESP;
  HANDLE unaff_EBP;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  int unaff_EDI;
  char *pcVar9;
  char *pcVar10;
  int in_stack_00000010;
  int in_stack_0000001c;
  int in_stack_00000020;
  DWORD DStack_1c4;
  char acStack_1c0 [260];
  char acStack_bc [96];
  char acStack_5c [60];
  HANDLE local_20;
  HANDLE local_18;
  int iVar11;
  
  if (this_ptr->master_texture_count == 0) {
    this_ptr->current_master_selection = 0;
    local_20 = crt_io_c_findFirstFileWrapper_FUN_006021f0
                         ("art\\*.raw",(LPWIN32_FIND_DATAA)&stack0xfffffe20);
    if (local_20 == (HANDLE)0xffffffff) {
      g_CurrentFilename = "..\\core\\texlist.cpp";
      g_CurrentLineNumber = 0xff;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Unable to build list of *.raw files!");
    }
    shape_edittool_cpp_CEditorTools_createCenteredDialog_FUN_0049e940
              (g_CEditorToolsPtr,"Please wait, building texture list...");
    do {
      pcVar6 = acStack_1c0;
      pcVar9 = acStack_bc;
      do {
        cVar1 = *pcVar6;
        *pcVar9 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar6[1];
        pcVar6 = pcVar6 + 2;
        pcVar9[1] = cVar1;
        pcVar9 = pcVar9 + 2;
      } while (cVar1 != '\0');
      if ((DStack_1c4 == 0x1000) || (DStack_1c4 == 0x10000)) {
        pcVar6 = acStack_bc;
        pcVar9 = (char *)(*(int *)(in_stack_00000010 + 0x6d64) * 0x10 + in_stack_00000010 + 0x6d68);
        do {
          cVar1 = *pcVar6;
          *pcVar9 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar6[1];
          pcVar6 = pcVar6 + 2;
          pcVar9[1] = cVar1;
          pcVar9 = pcVar9 + 2;
        } while (cVar1 != '\0');
        pbVar5 = (byte *)(*(int *)(in_stack_00000010 + 0x6d64) * 0x10 + in_stack_00000010 + 0x6d68);
        bVar2 = *pbVar5;
        while (bVar2 != 0) {
          iVar3 = crt_ctype_c_toupper_FUN_005ff9e0((uint)*pbVar5);
          *pbVar5 = (byte)iVar3;
          bVar2 = pbVar5[1];
          pbVar5 = pbVar5 + 1;
        }
        if ((*(byte *)(in_stack_00000010 + 0x6d64) & 0x1f) == 0) {
          shape_edittool_cpp_CEditorTools_drawWindowStatusMessage_FUN_0049e870
                    (g_CEditorToolsPtr,"[%4d] %s");
        }
        iVar3 = *(int *)(in_stack_00000010 + 0x6d64) + 1;
        *(int *)(in_stack_00000010 + 0x6d64) = iVar3;
        if (4999 < iVar3) {
          g_CurrentFilename = "..\\core\\texlist.cpp";
          g_CurrentLineNumber = 0x124;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Too many editable textures!");
        }
      }
      iVar3 = crt_io_c_findNextFileWrapper_FUN_00602300
                        (local_18,(LPWIN32_FIND_DATAA)&stack0xfffffe2c);
    } while (iVar3 == 0);
    shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
    crt_io_c_findCloseWrapper_FUN_00602380(unaff_EBP);
    iVar11 = 0;
    for (iVar3 = 0; iVar3 < *(int *)(in_stack_0000001c + 0x6d64) + -1; iVar3 = iVar3 + 1) {
      if (iVar3 + 1 < *(int *)(in_stack_0000001c + 0x6d64)) {
        pcVar6 = (char *)((iVar3 + 1) * 0x10 + in_stack_0000001c + 0x6d68);
        do {
          pcVar9 = (char *)(in_stack_0000001c + 0x6d68 + iVar11);
          iVar4 = crt_string_c_strcmp_FUN_005fef20(pcVar9,pcVar6);
          if (0 < iVar4) {
            pcVar10 = acStack_5c;
            pcVar7 = pcVar9;
            do {
              cVar1 = *pcVar7;
              *pcVar10 = cVar1;
              pcVar8 = pcVar6;
              if (cVar1 == '\0') break;
              cVar1 = pcVar7[1];
              pcVar7 = pcVar7 + 2;
              pcVar10[1] = cVar1;
              pcVar10 = pcVar10 + 2;
            } while (cVar1 != '\0');
            do {
              cVar1 = *pcVar8;
              *pcVar9 = cVar1;
              if (cVar1 == '\0') break;
              cVar1 = pcVar8[1];
              pcVar9[1] = cVar1;
              pcVar9 = pcVar9 + 2;
              pcVar8 = pcVar8 + 2;
            } while (cVar1 != '\0');
            pcVar9 = acStack_5c;
            pcVar10 = pcVar6;
            do {
              cVar1 = *pcVar9;
              *pcVar10 = cVar1;
              if (cVar1 == '\0') break;
              cVar1 = pcVar9[1];
              pcVar9 = pcVar9 + 2;
              pcVar10[1] = cVar1;
              pcVar10 = pcVar10 + 2;
            } while (cVar1 != '\0');
          }
          pcVar6 = pcVar6 + 0x10;
          unaff_EDI = unaff_EDI + 1;
        } while (unaff_EDI < *(int *)(in_stack_00000020 + 0x6d64));
      }
      iVar11 = iVar11 + 0x10;
    }
  }
  return;
}
