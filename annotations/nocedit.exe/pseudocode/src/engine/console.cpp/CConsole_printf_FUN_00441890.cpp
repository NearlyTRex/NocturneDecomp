// Name: engine_console.cpp_CConsole_printf_FUN_00441890
// Address: 00441890
// Address Range: [[00441890, 00441969]]
// Convention: __cdecl
// Signature: void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format, ...)

#include "nocturne.h"

void __cdecl engine_console_cpp_CConsole_printf_FUN_00441890(CConsole *this_ptr,char *format,...)

{
  char cVar1;
  FILE *file;
  uint uVar2;
  int iVar3;
  BADSPACEBASE *in_ESP;
  char *pcVar4;
  byte bVar5;
  va_list_t local_14;
  
  bVar5 = 0;
  local_14 = &stack0x0000000c;
  crt_stdio_c_vsprintf_FUN_005fdba8(&stack0xffffefec,format,&local_14);
  iVar3 = 0;
  uVar2 = 0xffffffff;
  pcVar4 = &stack0xffffefec;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + (uint)bVar5 * -2 + 1;
  } while (cVar1 != '\0');
  if (0 < (int)(~uVar2 - 1)) {
    do {
      pcVar4 = &stack0xffffeff0 + iVar3;
      iVar3 = iVar3 + 1;
      engine_console_cpp_CConsole_writeChar_FUN_00441970(this_ptr,*pcVar4);
    } while (iVar3 < (int)(~uVar2 - 1));
  }
  engine_console_cpp_CConsole_writeChar_FUN_00441970(this_ptr,'\0');
  if (this_ptr->fileLoggingEnabled != 0) {
    file = shape_memdbg_cpp_openFile_FUN_0050f7a0
                     ("console.txt",(char *)0x0,"at","..\\engine\\console.cpp"
                      ,0x4a);
    if (file != (FILE *)0x0) {
      crt_stdio_c_fprintf_FUN_005fe6d0(file,"%s");
      shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\engine\\console.cpp",0x4d);
      return;
    }
  }
  return;
}
