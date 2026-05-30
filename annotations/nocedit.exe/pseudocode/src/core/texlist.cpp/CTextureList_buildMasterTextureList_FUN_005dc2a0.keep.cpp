// Name: core_texlist.cpp_CTextureList_buildMasterTextureList_FUN_005dc2a0
// Address: 005dc2a0
// MANUAL RECONSTRUCTION
// Address Range: [[005dc2a0, 005dc5de]]
// Convention: __cdecl
// Signature: void __cdecl core_texlist_cpp_CTextureList_buildMasterTextureList_FUN_005dc2a0(CTextureList *this_ptr)

#include "nocturne.h"

void __cdecl core_texlist_cpp_CTextureList_buildMasterTextureList_FUN_005dc2a0(CTextureList *this_ptr)

{
  long find_handle;
  int iVar2;
  int iVar3;
  char (*pacVar3) [16];
  char (*pacVar7) [16];
  char *pcVar9;
  _find_t _Stack_1e0;
  char acStack_c8 [80];
  char local_78 [80];
  int local_28;
  int local_1c;

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
      strcpy(acStack_c8,_Stack_1e0.name);
      if ((_Stack_1e0.size == 0x1000) || (_Stack_1e0.size == 0x10000)) {
        pacVar7 = this_ptr->master_texture_names + this_ptr->master_texture_count;
        strcpy(*pacVar7,acStack_c8);
        for (iVar2 = 0;
             this_ptr->master_texture_names[this_ptr->master_texture_count][iVar2] != '\0';
             iVar2 = iVar2 + 1) {
          this_ptr->master_texture_names[this_ptr->master_texture_count][iVar2] =
               (char)toupper((uint)(byte)
                     this_ptr->master_texture_names[this_ptr->master_texture_count][iVar2]);
        }
        if ((this_ptr->master_texture_count & 0x1f) == 0) {
          shape_edittool_cpp_CEditorTools_drawWindowStatusMessage_FUN_0049e870
                    (g_CEditorToolsPtr,"[%4d] %s",this_ptr->master_texture_count,acStack_c8);
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
    for (local_1c = 0; local_1c < this_ptr->master_texture_count + -1; local_1c = local_1c + 1) {
      pcVar9 = this_ptr->master_texture_names[local_1c];
      for (local_28 = local_1c + 1; local_28 < this_ptr->master_texture_count;
           local_28 = local_28 + 1) {
        pacVar3 = this_ptr->master_texture_names + local_28;
        if (0 < _strcmp(pcVar9,*pacVar3)) {
          strcpy(local_78,pcVar9);
          strcpy(pcVar9,*pacVar3);
          strcpy(*pacVar3,local_78);
        }
      }
    }
  }
  return;
}
