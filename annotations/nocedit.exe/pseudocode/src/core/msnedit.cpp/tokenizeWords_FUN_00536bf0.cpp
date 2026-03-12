// Name: core_msnedit.cpp_tokenizeWords_FUN_00536bf0
// Address: 00536bf0
// Address Range: [[00536bf0, 00536cc6]]
// Convention: __cdecl
// Signature: void __cdecl core_msnedit_cpp_tokenizeWords_FUN_00536bf0(char *str,CStrList *word_list)

#include "nocturne.h"

void __cdecl core_msnedit_cpp_tokenizeWords_FUN_00536bf0(char *str,CStrList *word_list)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  char *pcVar4;
  char local_d8 [200];
  uint local_10;
  char cVar2;
  byte *pbVar1;
  
  cVar2 = *str;
  do {
    if (cVar2 == '\0') {
      return;
    }
    while (((cVar1 = *str, pcVar4 = local_d8,
            (g_CharacterClassificationTable[(byte)(cVar1 + 1)] & 0xe0) != 0 ||
            (pcVar4 = local_d8, cVar1 == '-')) || (pcVar4 = local_d8, cVar1 == '_'))) {
      do {
        do {
          *pcVar4 = *str;
          pbVar1 = (byte *)(str + 1);
          bVar2 = *pbVar1;
          str = str + 1;
          pcVar4 = pcVar4 + 1;
        } while ((g_CharacterClassificationTable[(byte)(bVar2 + 1)] & 0xe0) != 0);
      } while ((bVar2 == 0x2d) || (bVar2 == 0x5f));
      *pcVar4 = '\0';
      iVar3 = _stricmp(local_d8,"none");
      if ((iVar3 == 0) ||
         (iVar4 = _stricmp(local_d8,"true"), iVar4 == 0))
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
