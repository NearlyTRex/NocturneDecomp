// Name: core_msnedit.cpp_tokenizeWords_FUN_00536bf0
// Address: 00536bf0
// Address Range: [[00536bf0, 00536cc6]]
// Convention: __cdecl
// Signature: void __cdecl core_msnedit_cpp_tokenizeWords_FUN_00536bf0(char *str,CStrList *word_list)

#include "nocturne.h"

void __cdecl core_msnedit_cpp_tokenizeWords_FUN_00536bf0(char *str,CStrList *word_list)

{
  byte *pbVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  char local_d8 [200];
  uint local_10;
  
  cVar2 = *str;
  do {
    if (cVar2 == '\0') {
      return;
    }
    while (((cVar2 = *str, pcVar4 = local_d8,
            (g_CharacterClassificationTable[(byte)(cVar2 + 1)] & 0xe0) != 0 ||
            (pcVar4 = local_d8, cVar2 == '-')) || (pcVar4 = local_d8, cVar2 == '_'))) {
      do {
        do {
          *pcVar4 = *str;
          pbVar1 = (byte *)(str + 1);
          local_10 = (uint)*pbVar1;
          str = str + 1;
          pcVar4 = pcVar4 + 1;
        } while ((g_CharacterClassificationTable[(byte)(*pbVar1 + 1)] & 0xe0) != 0);
      } while ((local_10 == 0x2d) || (local_10 == 0x5f));
      *pcVar4 = '\0';
      iVar3 = _stricmp(local_d8,"none");
      if ((iVar3 == 0) ||
         (iVar3 = _stricmp(local_d8,"true"), iVar3 == 0))
      goto LAB_00536c76;
      shape_edittool_cpp_CStrList_add_FUN_004a2b80(word_list,local_d8);
      if (*str == '\0') {
        return;
      }
    }
    str = str + 1;
LAB_00536c76:
    cVar2 = *str;
  } while( true );
}
