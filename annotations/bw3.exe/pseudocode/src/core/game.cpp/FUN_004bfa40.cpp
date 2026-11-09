// Name: core_game.cpp_FUN_004bfa40
// Address: 004bfa40
// Address Range: [[004bfa40, 004bfb47]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_FUN_004bfa40(CGame *this_ptr)

#include "nocturne.h"

void __cdecl core_game_cpp_FUN_004bfa40(CGame *this_ptr)

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
  
  *(uint *)&this_ptr->field_0xa78 = 0;
  this_ptr->field_0xa7c = 0;
  splitpath(&DAT_01d225c8,(char *)0x0,(char *)0x0,(char *)0x0,local_10c);
  iVar2 = _stricmp(local_10c,&DAT_005c3a88);
  if ((iVar2 == 0) ||
     (iVar2 = _stricmp(local_10c,&DAT_005c3a8c), iVar2 == 0)) {
    pcVar4 = local_210;
    pcVar3 = &DAT_01d225c8;
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
  file_pattern = "*.sav";
  search_directory = &DAT_005c3a97;
  pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Select file to load");
  iVar2 = shape_edittool_cpp_FUN_0047db70
                    (g_CEditorToolsPtr,pcVar4,search_directory,file_pattern,output_filename,flags);
  if (iVar2 == 0) {
    return;
  }
  pcVar4 = &this_ptr->field_0xa7c;
  *(uint *)&this_ptr->field_0xa78 = 1;
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
