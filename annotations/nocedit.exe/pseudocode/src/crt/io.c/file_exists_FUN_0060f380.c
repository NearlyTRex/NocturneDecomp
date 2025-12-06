// Name: crt_io.c_file_exists_FUN_0060f380
// Address: 0060f380
// Address Range: [[0060f380, 0060f399]]
// Convention: __watcallStack
// Signature: bool crt_io.c_file_exists_FUN_0060f380(char * filename)

#include "nocturne.h"

bool __watcallStack crt_io_c_file_exists_FUN_0060f380(char *filename)

{
  int iVar1;
  
  iVar1 = crt_io_c_check_file_access_FUN_0060c9f0(filename,0);
  return iVar1 == 0;
}
