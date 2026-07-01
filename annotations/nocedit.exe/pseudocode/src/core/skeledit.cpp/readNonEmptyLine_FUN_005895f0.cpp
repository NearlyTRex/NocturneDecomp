// Name: core_skeledit.cpp_readNonEmptyLine_FUN_005895f0
// Address: 005895f0
// Address Range: [[005895f0, 005896a1]]
// Convention: __cdecl
// Signature: int __cdecl core_skeledit_cpp_readNonEmptyLine_FUN_005895f0(char *buffer,_FILE *file,int require_content)

#include "nocturne.h"

int __cdecl core_skeledit_cpp_readNonEmptyLine_FUN_005895f0(char *buffer,_FILE *file,int require_content)

{
  int iVar1;
  char *pcVar2;
  
  do {
    do {
      iVar1 = _fgetc(file);
      if (iVar1 == -1) {
        if (require_content != 0) {
          g_CurrentFilename = "..\\core\\skeledit.cpp";
          g_CurrentLineNumber = 208;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Unexpected end of file!");
        }
        return 0;
      }
      pcVar2 = buffer;
    } while ((g_CharacterClassificationTable[(byte)((char)iVar1 + 1)] & 2) != 0);
    do {
      *pcVar2 = (char)iVar1;
      pcVar2 = pcVar2 + 1;
      iVar1 = _fgetc(file);
      if ((iVar1 == -1) || (iVar1 == 0xd)) break;
    } while (iVar1 != 10);
    *pcVar2 = '\0';
    pcVar2 = strstr(buffer,"//");
    if (pcVar2 != (char *)0x0) {
      *pcVar2 = '\0';
    }
    if (*buffer != '\0') {
      return 1;
    }
  } while( true );
}
