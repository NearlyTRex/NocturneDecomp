// Name: core_game.cpp_CGame_promptLoadGame_FUN_004e36f0
// Address: 004e36f0
// Address Range: [[004e36f0, 004e37f7]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_promptLoadGame_FUN_004e36f0(CGame *this_ptr)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_promptLoadGame_FUN_004e36f0(CGame *this_ptr)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char *directory;
  char *target_filename;
  char *auto_select_flag;
  uint unknown;
  char local_210 [260];
  char local_10c [256];
  
  this_ptr->need_chapter_reload = 0;
  this_ptr->chapter_reload_filename[0] = '\0';
  splitpath
            (&g_CurrentSaveFile,(char *)0x0,(char *)0x0,(char *)0x0,local_10c);
  iVar2 = stricmp(local_10c,"noc");
  if ((iVar2 == 0) ||
     (iVar2 = stricmp(local_10c,".noc"), iVar2 == 0)) {
    pcVar4 = local_210;
    pcVar3 = &g_CurrentSaveFile;
    do {
      cVar1 = *pcVar3;
      *pcVar4 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      pcVar4[1] = cVar1;
      pcVar4 = pcVar4 + 2;
    } while (cVar1 != '\0');
  }
  else {
    local_210[0] = '\0';
  }
  auto_select_flag = local_210;
  pcVar3 = local_210;
  unknown = 1;
  target_filename = "*.noc";
  directory = "save";
  pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Select file to load");
  iVar2 = shape_edittool_cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
                    (g_CEditorToolsPtr,pcVar4,directory,target_filename,(int)auto_select_flag,
                     unknown);
  if (iVar2 == 0) {
    return;
  }
  pcVar4 = this_ptr->chapter_reload_filename;
  this_ptr->need_chapter_reload = 1;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') {
      return;
    }
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  return;
}
