// Name: core_texlist.cpp_CTextureList_buildMasterTextureList_FUN_005dc2a0
// Address: 005dc2a0
// MANUAL RECONSTRUCTION
// Address Range: [[005dc2a0, 005dc5de]]
// Convention: __cdecl
// Signature: void __cdecl core_texlist_cpp_CTextureList_buildMasterTextureList_FUN_005dc2a0(CTextureList *this_ptr)

#include "nocturne.h"

void __cdecl core_texlist_cpp_CTextureList_buildMasterTextureList_FUN_005dc2a0(CTextureList *this_ptr)

{
  char cVar2;
  long find_handle;
  int iVar2;
  int iVar3;
  char (*pacVar3) [16];
  FILETIME *pFVar4;
  CHAR *pCVar4;
  char *pcVar5;
  char (*pacVar6) [16];
  char *pcVar6;
  CHAR *pCVar7;
  char (*pacVar7) [16];
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  _WIN32_FIND_DATAA _Stack_1e0;
  char local_78 [80];
  int local_28;
  int local_20;
  int local_1c;
  char (*local_14) [16];
  char cVar1;
  
  if (this_ptr->master_texture_count == 0) {
    this_ptr->current_master_selection = 0;
    find_handle = _findfirst("art\\*.raw",&_Stack_1e0);
    if (find_handle == -1) {
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
        cVar2 = (char)pFVar4->dwLowDateTime;
        *pCVar7 = cVar2;
        if (cVar2 == '\0') break;
        cVar1 = *(char *)((int)&pFVar4->dwLowDateTime + 1);
        pFVar4 = (FILETIME *)((int)&pFVar4->dwLowDateTime + 2);
        pCVar7[1] = cVar1;
        pCVar7 = pCVar7 + 2;
      } while (cVar1 != '\0');
      if ((_Stack_1e0.ftLastAccessTime.dwHighDateTime == 0x1000) ||
         (_Stack_1e0.ftLastAccessTime.dwHighDateTime == 0x10000)) {
        pCVar4 = _Stack_1e0.cFileName + 0xec;
        pacVar7 = this_ptr->master_texture_names + this_ptr->master_texture_count;
        do {
          cVar2 = *pCVar4;
          (*pacVar7)[0] = cVar2;
          if (cVar2 == '\0') break;
          cVar2 = pCVar4[1];
          pCVar4 = pCVar4 + 2;
          (*pacVar7)[1] = cVar2;
          pacVar7 = (char (*) [16])(*pacVar7 + 2);
        } while (cVar2 != '\0');
        cVar2 = this_ptr->master_texture_names[this_ptr->master_texture_count][0];
        pacVar7 = this_ptr->master_texture_names + this_ptr->master_texture_count;
        while (cVar2 != '\0') {
          iVar2 = toupper((uint)(byte)(*pacVar7)[0]);
          (*pacVar7)[0] = (char)iVar2;
          cVar2 = (*pacVar7)[1];
          pacVar7 = (char (*) [16])(*pacVar7 + 1);
        }
        if ((this_ptr->master_texture_count & 0x1f) == 0) {
          shape_edittool_cpp_CEditorTools_drawWindowStatusMessage_FUN_0049e870
                    (g_CEditorToolsPtr,"[%4d] %s",this_ptr->master_texture_count,
                     _Stack_1e0.cFileName + 0xec);
        }
        iVar3 = this_ptr->master_texture_count + 1;
        this_ptr->master_texture_count = iVar3;
        if (4999 < iVar3) {
          g_CurrentFilename = "..\\core\\texlist.cpp";
          g_CurrentLineNumber = 0x124;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Too many editable textures!");
        }
      }
      iVar3 = _findnext(find_handle,&_Stack_1e0);
    } while (iVar3 == 0);
    shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
    _findclose(find_handle);
    local_20 = 0;
    for (local_1c = 0; local_1c < this_ptr->master_texture_count + -1; local_1c = local_1c + 1) {
      local_28 = local_1c + 1;
      if (local_28 < this_ptr->master_texture_count) {
        pacVar3 = this_ptr->master_texture_names + local_1c + 1;
        do {
          pcVar9 = this_ptr->master_texture_names[0] + local_20;
          iVar3 = _strcmp(pcVar9,*pacVar3);
          if (0 < iVar3) {
            pcVar8 = local_78;
            pcVar5 = pcVar9;
            do {
              cVar2 = *pcVar5;
              *pcVar8 = cVar2;
              pacVar6 = pacVar3;
              if (cVar2 == '\0') break;
              cVar2 = pcVar5[1];
              pcVar5 = pcVar5 + 2;
              pcVar8[1] = cVar2;
              pcVar8 = pcVar8 + 2;
            } while (cVar2 != '\0');
            do {
              cVar2 = (*pacVar6)[0];
              *pcVar9 = cVar2;
              if (cVar2 == '\0') break;
              cVar2 = (*pacVar6)[1];
              pacVar6 = (char (*) [16])(*pacVar6 + 2);
              pcVar9[1] = cVar2;
              pcVar9 = pcVar9 + 2;
            } while (cVar2 != '\0');
            pcVar6 = local_78;
            pcVar10 = *pacVar3;
            do {
              cVar2 = *pcVar6;
              *pcVar10 = cVar2;
              if (cVar2 == '\0') break;
              cVar2 = pcVar6[1];
              pcVar6 = pcVar6 + 2;
              pcVar10[1] = cVar2;
              pcVar10 = pcVar10 + 2;
            } while (cVar2 != '\0');
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
