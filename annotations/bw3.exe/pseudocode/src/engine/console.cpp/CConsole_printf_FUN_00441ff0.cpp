// Name: engine_console.cpp_CConsole_printf_FUN_00441ff0
// Address: 00441ff0
// Address Range: [[00441ff0, 004420b9]]
// Convention: __cdecl
// Signature: void __cdecl engine_console_cpp_CConsole_printf_FUN_00441ff0(CConsole *this_ptr,char *format)

#include "nocturne.h"

void __cdecl engine_console_cpp_CConsole_printf_FUN_00441ff0(CConsole *this_ptr,char *format)

{
  char cVar1;
  _FILE *p_Var2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  byte bVar6;
  char local_1014 [4096];
  byte *local_14;
  
  bVar6 = 0;
  local_14 = &stack0x0000000c;
  _vsprintf(local_1014,format,(va_list_t)&local_14);
  iVar4 = 0;
  local_14 = (byte *)0x0;
  uVar3 = 0xffffffff;
  pcVar5 = local_1014;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + (uint)bVar6 * -2 + 1;
  } while (cVar1 != '\0');
  if (0 < (int)(~uVar3 - 1)) {
    do {
      pcVar5 = local_1014 + iVar4;
      iVar4 = iVar4 + 1;
      engine_console_cpp_CConsole_writeChar_FUN_004420c0(this_ptr,*pcVar5);
    } while (iVar4 < (int)(~uVar3 - 1));
  }
  engine_console_cpp_CConsole_writeChar_FUN_004420c0(this_ptr,'\0');
  if (this_ptr->file_logging_enabled != 0) {
    p_Var2 = _fopen("console.txt",&DAT_005b93df);
    if (p_Var2 != (_FILE *)0x0) {
      FUN_005a3140(p_Var2,&DAT_005b93e2,local_1014);
      _fclose(p_Var2);
      return;
    }
  }
  return;
}
