// Name: crt_io.c_file_exists_FUN_0060f380
// Address: 0060f380
// Address Range: [[0060f380, 0060f399]]
// Convention: __watcallStack
// Signature: BOOL __watcallStack crt_io_c_file_exists_FUN_0060f380(char *filename)

#include "nocturne.h"

BOOL __watcallStack crt_io_c_file_exists_FUN_0060f380(char *filename)

{
  int iVar1;
  
  iVar1 = crt_io_c_check_file_access_FUN_0060c9f0(filename,0);
  return (uint)(iVar1 == 0);
}
