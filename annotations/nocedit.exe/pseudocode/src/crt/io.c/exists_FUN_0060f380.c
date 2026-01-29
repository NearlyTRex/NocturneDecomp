// Name: crt_io.c_exists_FUN_0060f380
// Address: 0060f380
// Address Range: [[0060f380, 0060f399]]
// Convention: __watcallStack
// Signature: BOOL __watcallStack crt_io_c_exists_FUN_0060f380(char *filename)

#include "nocturne.h"

BOOL __watcallStack exists(char *filename)

{
  int iVar1;
  
  iVar1 = access(filename,0);
  return (uint)(iVar1 == 0);
}
