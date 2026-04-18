// Name: core_game.cpp_CGame_promptLoadGame_FUN_004e36f0
// Address: 004e36f0
// MANUAL RECONSTRUCTION
// Address Range: [[004e36f0, 004e37f7]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_promptLoadGame_FUN_004e36f0(CGame *this_ptr)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_promptLoadGame_FUN_004e36f0(CGame *this_ptr)

{
  int iVar2;
  int iVar3;
  char *pcVar5;
  char *output_filename;
  char local_210 [260];
  char local_10c [256];
  uint unknown;
  char *directory;
  char *target_filename;

  this_ptr->need_chapter_reload = 0;
  this_ptr->chapter_reload_filename[0] = '\0';
  splitpath
            (g_CurrentSaveFile,(char *)0x0,(char *)0x0,(char *)0x0,local_10c);
  iVar2 = _stricmp(local_10c,"noc");
  if ((iVar2 == 0) ||
     (iVar3 = _stricmp(local_10c,".noc"), iVar3 == 0)) {
    strcpy(local_210,g_CurrentSaveFile);
  }
  else {
    local_210[0] = '\0';
  }
  output_filename = local_210;
  unknown = 1;
  target_filename = "*.noc";
  directory = "save";
  pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Select file to load");
  iVar3 = shape_edittool_cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
                    (g_CEditorToolsPtr,pcVar5,directory,target_filename,output_filename,unknown);
  if (iVar3 == 0) {
    return;
  }
  this_ptr->need_chapter_reload = 1;
  strcpy(this_ptr->chapter_reload_filename,local_210);
  return;
}
