// Name: core_texlist.cpp_CTextureList_buildMasterTextureList_FUN_005dc2a0
// Address: 005dc2a0
// Address Range: [[005dc2a0, 005dc5de]]
// Convention: __cdecl
// Signature: void __cdecl core_texlist_cpp_CTextureList_buildMasterTextureList_FUN_005dc2a0(CTextureList *this_ptr)

#include "nocturne.h"

void __cdecl core_texlist_cpp_CTextureList_buildMasterTextureList_FUN_005dc2a0(CTextureList *this_ptr)

{
  char cVar1;
  int iVar2;
  char (*pacVar3) [16];
  FILETIME *pFVar4;
  char *pcVar5;
  char (*pacVar6) [16];
  CHAR *pCVar7;
  char *pcVar8;
  char *pcVar9;
  _WIN32_FIND_DATAA _Stack_1e0;
  char local_78 [80];
  int local_28;
  HANDLE local_24;
  int local_20;
  int local_1c;
  int local_18;
  char (*local_14) [16];
  
  if (this_ptr->master_texture_count == 0) {
    this_ptr->current_master_selection = 0;
    local_24 = _findfirst("art\\*.raw",&_Stack_1e0);
    if (local_24 == (HANDLE)0xffffffff) {
      g_CurrentFilename = "..\\core\\texlist.cpp";
      g_CurrentLineNumber = 0xff;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Unable to build list of *.raw files!");
    }
    shape_edittool_cpp_CEditorTools_createCenteredDialog_FUN_0049e940
              (g_CEditorToolsPtr,"Please wait, building texture list...");
    do {
      pFVar4 = &_Stack_1e0.ftLastWriteTime;
      pCVar7 = _Stack_1e0.cFileName + 0xec;
      do {
        cVar1 = (char)pFVar4->dwLowDateTime;
        *pCVar7 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = *(char *)((int)&pFVar4->dwLowDateTime + 1);
        pFVar4 = (FILETIME *)((int)&pFVar4->dwLowDateTime + 2);
        pCVar7[1] = cVar1;
        pCVar7 = pCVar7 + 2;
      } while (cVar1 != '\0');
      if ((_Stack_1e0.ftLastAccessTime.dwHighDateTime == 0x1000) ||
         (_Stack_1e0.ftLastAccessTime.dwHighDateTime == 0x10000)) {
        pCVar7 = _Stack_1e0.cFileName + 0xec;
        pacVar3 = this_ptr->master_texture_names + this_ptr->master_texture_count;
        do {
          cVar1 = *pCVar7;
          (*pacVar3)[0] = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pCVar7[1];
          pCVar7 = pCVar7 + 2;
          (*pacVar3)[1] = cVar1;
          pacVar3 = (char (*) [16])(*pacVar3 + 2);
        } while (cVar1 != '\0');
        cVar1 = this_ptr->master_texture_names[this_ptr->master_texture_count][0];
        pacVar3 = this_ptr->master_texture_names + this_ptr->master_texture_count;
        while (cVar1 != '\0') {
          iVar2 = toupper((uint)(byte)(*pacVar3)[0]);
          (*pacVar3)[0] = (char)iVar2;
          cVar1 = (*pacVar3)[1];
          pacVar3 = (char (*) [16])(*pacVar3 + 1);
        }
        if ((this_ptr->master_texture_count & 0x1f) == 0) {
          shape_edittool_cpp_CEditorTools_drawWindowStatusMessage_FUN_0049e870
                    (g_CEditorToolsPtr,"[%4d] %s",this_ptr->master_texture_count,
                     _Stack_1e0.cFileName + 0xec);
        }
        iVar2 = this_ptr->master_texture_count + 1;
        this_ptr->master_texture_count = iVar2;
        if (4999 < iVar2) {
          g_CurrentFilename = "..\\core\\texlist.cpp";
          g_CurrentLineNumber = 0x124;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Too many editable textures!");
        }
      }
      iVar2 = _findnext(local_24,&_Stack_1e0);
    } while (iVar2 == 0);
    shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
    _findclose(local_24);
    local_14 = this_ptr->master_texture_names;
    local_20 = 0;
    for (local_1c = 0; local_1c < this_ptr->master_texture_count + -1; local_1c = local_1c + 1) {
      local_28 = local_1c + 1;
      if (local_28 < this_ptr->master_texture_count) {
        local_18 = local_20;
        pacVar3 = local_14 + local_28;
        do {
          pcVar9 = *local_14 + local_18;
          iVar2 = strcmp(pcVar9,*pacVar3);
          if (0 < iVar2) {
            pcVar8 = local_78;
            pcVar5 = pcVar9;
            do {
              cVar1 = *pcVar5;
              *pcVar8 = cVar1;
              pacVar6 = pacVar3;
              if (cVar1 == '\0') break;
              cVar1 = pcVar5[1];
              pcVar5 = pcVar5 + 2;
              pcVar8[1] = cVar1;
              pcVar8 = pcVar8 + 2;
            } while (cVar1 != '\0');
            do {
              cVar1 = (*pacVar6)[0];
              *pcVar9 = cVar1;
              if (cVar1 == '\0') break;
              cVar1 = (*pacVar6)[1];
              pcVar9[1] = cVar1;
              pcVar9 = pcVar9 + 2;
              pacVar6 = (char (*) [16])(*pacVar6 + 2);
            } while (cVar1 != '\0');
            pcVar9 = local_78;
            pacVar6 = pacVar3;
            do {
              cVar1 = *pcVar9;
              (*pacVar6)[0] = cVar1;
              if (cVar1 == '\0') break;
              cVar1 = pcVar9[1];
              pcVar9 = pcVar9 + 2;
              (*pacVar6)[1] = cVar1;
              pacVar6 = (char (*) [16])(*pacVar6 + 2);
            } while (cVar1 != '\0');
          }
          pacVar3 = pacVar3 + 1;
          local_28 = local_28 + 1;
        } while (local_28 < this_ptr->master_texture_count);
      }
      local_20 = local_20 + 0x10;
    }
  }
  return;
}
