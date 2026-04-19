// Name: engine_console.cpp_CConsole_printf_FUN_00441890
// Address: 00441890
// MANUAL RECONSTRUCTION
// Address Range: [[00441890, 00441969]]
// Convention: __cdecl
// Signature: void __cdecl engine_console_cpp_CConsole_printf_FUN_00441890(CConsole *this_ptr,char *format,...)

#include "nocturne.h"

void __cdecl engine_console_cpp_CConsole_printf_FUN_00441890(CConsole *this_ptr,char *format,...)

{
  _FILE *file;
  int iVar3;
  char *pcVar4;
  int iLen;
  char local_1014 [4096];
  va_list_t local_14;

  VA_START_T(local_14, format);
  _vsprintf(local_1014,format,local_14);
  iVar3 = 0;
  VA_END_T(local_14);
  iLen = strlen(local_1014);
  if (0 < iLen) {
    do {
      pcVar4 = local_1014 + iVar3;
      iVar3 = iVar3 + 1;
      engine_console_cpp_CConsole_writeChar_FUN_00441970(this_ptr,*pcVar4);
    } while (iVar3 < iLen);
  }
  engine_console_cpp_CConsole_writeChar_FUN_00441970(this_ptr,'\0');
  if (this_ptr->file_logging_enabled != 0) {
    file = shape_memdbg_cpp_openFile_FUN_0050f7a0
                     (g_ConsoleLogFilename,(char *)0x0,"at","..\\engine\\console.cpp",
                      0x4a);
    if (file != (_FILE *)0x0) {
      _fprintf(file,"%s",local_1014);
      shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\engine\\console.cpp",0x4d);
      return;
    }
  }
  return;
}
