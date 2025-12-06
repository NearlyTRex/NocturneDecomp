// Name: core_skeledit.cpp_readNonEmptyLine_FUN_005895f0
// Address: 005895f0
// Address Range: [[005895f0, 005896a1]]
// Convention: __cdecl
// Signature: int core_skeledit.cpp_readNonEmptyLine_FUN_005895f0(char * buffer, FILE * file, int require_content)

#include "nocturne.h"

int __cdecl
core_skeledit_cpp_readNonEmptyLine_FUN_005895f0(char *buffer,FILE *file,int require_content)

{
  int iVar1;
  char *pcVar2;
  FILE *pFVar3;
  int in_stack_00000018;
  
  crt_stack_c_stack_probe_FUN_005ff9f3(0x1c);
  do {
    do {
      iVar1 = crt_stdio_c_fgetc_FUN_005fe840((FILE *)require_content);
      if (iVar1 == -1) {
        if (in_stack_00000018 != 0) {
          g_CurrentFilename = "..\\core\\skeledit.cpp";
          g_CurrentLineNumber = 0xd0;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Unexpected end of file!");
        }
        return 0;
      }
      pFVar3 = file;
    } while ((g_CharacterClassificationTable[(byte)((char)iVar1 + 1)] & 2U) != 0);
    do {
      *(char *)&pFVar3->_ptr = (char)iVar1;
      pFVar3 = (FILE *)((int)&pFVar3->_ptr + 1);
      iVar1 = crt_stdio_c_fgetc_FUN_005fe840((FILE *)require_content);
      if ((iVar1 == -1) || (iVar1 == 0xd)) break;
    } while (iVar1 != 10);
    *(byte *)&pFVar3->_ptr = 0;
    pcVar2 = crt_string_c_strstr_FUN_005fedd0((char *)file,"//");
    if (pcVar2 != (char *)0x0) {
      *pcVar2 = '\0';
    }
    if (*(char *)&file->_ptr != '\0') {
      return 1;
    }
  } while( true );
}
