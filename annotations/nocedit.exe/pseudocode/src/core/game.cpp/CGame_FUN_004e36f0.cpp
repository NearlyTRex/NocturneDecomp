// Name: core_game.cpp_CGame_FUN_004e36f0
// Address: 004e36f0
// Address Range: [[004e36f0, 004e37f7]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_FUN_004e36f0(CGame *this_ptr)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_FUN_004e36f0(CGame *this_ptr)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  int *piVar5;
  char *directory;
  char *target_filename;
  char *auto_select_flag;
  char local_210 [260];
  char local_10c [256];
  
  this_ptr->need_chapter_reload = 0;
  *(byte *)&this_ptr->save_version = 0;
  crt_string_c_splitpath_FUN_005ff178
            (&g_CurrentSaveFile,(char *)0x0,(char *)0x0,(char *)0x0,local_10c);
  iVar2 = crt_string_c_stricmp_FUN_005fe7f0(local_10c,"noc");
  if ((iVar2 == 0) ||
     (iVar2 = crt_string_c_stricmp_FUN_005fe7f0(local_10c,".noc"), iVar2 == 0)) {
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
  target_filename = "*.noc";
  directory = "save";
  pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Select file to load");
  iVar2 = shape_edittool_cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
                    (g_CEditorToolsPtr,pcVar4,directory,target_filename,(int)auto_select_flag);
  if (iVar2 == 0) {
    return;
  }
  piVar5 = &this_ptr->save_version;
  this_ptr->need_chapter_reload = 1;
  do {
    cVar1 = *pcVar3;
    *(char *)piVar5 = cVar1;
    if (cVar1 == '\0') {
      return;
    }
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    *(char *)((int)piVar5 + 1) = cVar1;
    piVar5 = (int *)((int)piVar5 + 2);
  } while (cVar1 != '\0');
  return;
}
