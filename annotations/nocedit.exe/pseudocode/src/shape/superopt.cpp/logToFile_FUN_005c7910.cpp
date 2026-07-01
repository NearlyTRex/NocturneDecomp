// Name: shape_superopt.cpp_logToFile_FUN_005c7910
// Address: 005c7910
// Address Range: [[005c7910, 005c7994]]
// Convention: __cdecl
// Signature: void __cdecl shape_superopt_cpp_logToFile_FUN_005c7910(char *format,...)

#include "nocturne.h"

void __cdecl shape_superopt_cpp_logToFile_FUN_005c7910(char *format,...)

{
  _FILE *stream;
  va_list_t local_8;
  
  if (g_LogInitialized == 0) {
    remove("log.txt");
    g_LogInitialized = 1;
  }
  stream = shape_memdbg_cpp_openFile_FUN_0050f7a0
                     ("log.txt",(char *)0x0,"at","..\\shape\\superopt.cpp",
                      52);
  if (stream == (_FILE *)0x0) {
    return;
  }
  VA_START_T(local_8, format);
  _fprintf(stream,format,&local_8);
  VA_END_T(local_8);
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(stream,"..\\shape\\superopt.cpp",58);
  return;
}
