// Name: core_game.cpp_CGame_FUN_004e36f0
// Address: 004e36f0
// Address Range: [[004e36f0, 004e37f7]]
// Convention: __cdecl
// Signature: void core_game.cpp_CGame_FUN_004e36f0(CGame * this_ptr)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_FUN_004e36f0(CGame *this_ptr)

{
  char cVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  char *pcVar3;
  char *pcVar4;
  int *piVar5;
  char *directory;
  bool auto_select_flag;
  char acStack_204 [8];
  char acStack_1fc [240];
  char local_10c [4];
  char acStack_108 [4];
  char acStack_104 [248];
  
  this_ptr->need_chapter_reload = 0;
  *(byte *)&this_ptr->save_version = 0;
  crt_string_c_splitpath_FUN_005ff178
            (&g_CurrentSaveFile,(char *)0x0,(char *)0x0,(char *)0x0,local_10c);
  iVar2 = crt_string_c_stricmp_FUN_005fe7f0(acStack_108,"noc");
  if ((iVar2 == 0) ||
     (iVar2 = crt_string_c_stricmp_FUN_005fe7f0(acStack_104,".noc"), iVar2 == 0)) {
    pcVar4 = acStack_204;
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
    acStack_204[0] = '\0';
  }
  pcVar3 = acStack_204;
  auto_select_flag = true;
  directory = "*.noc";
  pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Select file to load");
  iVar2 = shape_edittool_cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
                    (g_CEditorToolsPtr,pcVar4,directory,pcVar3,auto_select_flag);
  pcVar4 = acStack_1fc;
  if (iVar2 == 0) {
    return;
  }
  piVar5 = &this_ptr->save_version;
  this_ptr->need_chapter_reload = 1;
  do {
    cVar1 = *pcVar4;
    *(char *)piVar5 = cVar1;
    if (cVar1 == '\0') {
      return;
    }
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    *(char *)((int)piVar5 + 1) = cVar1;
    piVar5 = (int *)((int)piVar5 + 2);
  } while (cVar1 != '\0');
  return;
}
