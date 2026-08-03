// Name: core_game.cpp_CGame_promptLoadGame_FUN_004a6570
// Address: 004a6570
// Address Range: [[004a6570, 004a6677]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_promptLoadGame_FUN_004a6570(CGame *this_ptr)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_promptLoadGame_FUN_004a6570(CGame *this_ptr)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char *search_directory;
  char *file_pattern;
  char *output_filename;
  uint flags;
  char local_210 [260];
  char local_10c [256];
  
  this_ptr->need_chapter_reload = 0;
  this_ptr->chapter_reload_filename[0] = '\0';
  splitpath(&DAT_01c78598,(char *)0x0,(char *)0x0,(char *)0x0,local_10c);
  iVar2 = _stricmp(local_10c,"noc");
  if ((iVar2 == 0) ||
     (iVar2 = _stricmp(local_10c,".noc"), iVar2 == 0)) {
    pcVar4 = local_210;
    pcVar3 = &DAT_01c78598;
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
  output_filename = local_210;
  pcVar3 = local_210;
  flags = 1;
  file_pattern = "*.noc";
  search_directory = "save";
  pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Select file to load");
  iVar2 = shape_edittool_cpp_CEditorTools_showFileSelectionDialog_FUN_00470550
                    (g_CEditorTools_PTR_005b6d50,pcVar4,search_directory,file_pattern,
                     output_filename,flags);
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
