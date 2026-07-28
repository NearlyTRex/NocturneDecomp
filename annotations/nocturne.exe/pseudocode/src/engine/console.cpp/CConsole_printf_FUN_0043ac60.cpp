// Name: engine_console.cpp_CConsole_printf_FUN_0043ac60
// Address: 0043ac60
// Address Range: [[0043ac60, 0043ad29]]
// Convention: unknown
// Signature: void engine_console_cpp_CConsole_printf_FUN_0043ac60(int *param_1,char *param_2)

#include "nocturne.h"

void engine_console_cpp_CConsole_printf_FUN_0043ac60(int *param_1,char *param_2)

{
  char cVar1;
  _FILE *file_handle;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  byte bVar5;
  char local_1014 [4096];
  byte *local_14;
  
  bVar5 = 0;
  local_14 = &stack0x0000000c;
  _vsprintf(local_1014,param_2,(va_list_t)&local_14);
  iVar3 = 0;
  local_14 = (byte *)0x0;
  uVar2 = 0xffffffff;
  pcVar4 = local_1014;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + (uint)bVar5 * -2 + 1;
  } while (cVar1 != '\0');
  if (0 < (int)(~uVar2 - 1)) {
    do {
      pcVar4 = local_1014 + iVar3;
      iVar3 = iVar3 + 1;
      engine_console_cpp_CConsole_writeChar_FUN_0043ad30(param_1,*pcVar4);
    } while (iVar3 < (int)(~uVar2 - 1));
  }
  engine_console_cpp_CConsole_writeChar_FUN_0043ad30(param_1,0);
  if (*param_1 != 0) {
    file_handle = _fopen("console.txt","at");
    if (file_handle != (_FILE *)0x0) {
      _fprintf(file_handle,"%s",local_1014);
      _fclose(file_handle);
      return;
    }
  }
  return;
}
