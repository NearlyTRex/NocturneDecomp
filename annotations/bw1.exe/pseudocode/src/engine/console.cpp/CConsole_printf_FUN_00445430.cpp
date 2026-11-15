// Name: engine_console.cpp_CConsole_printf_FUN_00445430
// Address: 00445430
// Address Range: [[00445430, 004454f9]]
// Convention: __cdecl
// Signature: void __cdecl engine_console_cpp_CConsole_printf_FUN_00445430(CConsole *this_ptr,char *format)

#include "nocturne.h"

void __cdecl engine_console_cpp_CConsole_printf_FUN_00445430(CConsole *this_ptr,char *format)

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
  _vsprintf(local_1014,format,(va_list_t)&local_14);
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
      engine_console_cpp_CConsole_writeChar_FUN_00445500(this_ptr,*pcVar4);
    } while (iVar3 < (int)(~uVar2 - 1));
  }
  engine_console_cpp_CConsole_writeChar_FUN_00445500(this_ptr,'\0');
  if (this_ptr->file_logging_enabled != 0) {
    file_handle = _fopen("console.txt",&DAT_005d6cf7);
    if (file_handle != (_FILE *)0x0) {
      FUN_005c03c0(file_handle,&DAT_005d6cfa,local_1014);
      _fclose(file_handle);
      return;
    }
  }
  return;
}
