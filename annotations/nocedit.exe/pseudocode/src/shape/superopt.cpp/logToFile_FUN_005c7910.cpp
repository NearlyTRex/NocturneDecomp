// Name: shape_superopt.cpp_logToFile_FUN_005c7910
// Address: 005c7910
// Address Range: [[005c7910, 005c7994]]
// Convention: __cdecl
// Signature: void __cdecl shape_superopt_cpp_logToFile_FUN_005c7910(char *format,...)

#include "nocturne.h"

void __cdecl shape_superopt_cpp_logToFile_FUN_005c7910(char *format,...)

{
  FILE *stream;
  byte *local_8;
  
  if (g_LogInitialized == 0) {
    crt_io_c_deleteFile_FUN_005ff9d0("log.txt");
    g_LogInitialized = 1;
  }
  stream = shape_memdbg_cpp_openFile_FUN_0050f7a0
                     ("log.txt",(char *)0x0,"at","..\\shape\\superopt.cpp",
                      0x34);
  if (stream == (FILE *)0x0) {
    return;
  }
  local_8 = &stack0x00000008;
  crt_stdio_c_fprintf_FUN_006021c0(stream,format,&local_8);
  local_8 = (byte *)0x0;
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(stream,"..\\shape\\superopt.cpp",0x3a);
  return;
}
