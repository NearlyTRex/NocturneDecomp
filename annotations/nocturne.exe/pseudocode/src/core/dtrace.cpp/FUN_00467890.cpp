// Name: core_dtrace.cpp_FUN_00467890
// Address: 00467890
// Address Range: [[00467890, 004678cd]]
// Convention: unknown
// Signature: undefined4 core_dtrace_cpp_FUN_00467890(undefined4 param_1,char *param_2)

#include "nocturne.h"

uint core_dtrace_cpp_FUN_00467890(uint param_1,char *param_2)

{
  _FILE *file_handle;
  
  file_handle = engine_dosio_cpp_getFile_FUN_00456a60("data",param_2,"rb");
  if (file_handle == (_FILE *)0x0) {
    return 0;
  }
  core_dtrace_cpp_FUN_004676c0(param_1,file_handle);
  _fclose(file_handle);
  return 1;
}
