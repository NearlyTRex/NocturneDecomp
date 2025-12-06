// Name: engine_dosio.c_copyFileTimestamp_FUN_00481910
// Address: 00481910
// Address Range: [[00481910, 0048195a]]
// Convention: __cdecl
// Signature: int engine_dosio.c_copyFileTimestamp_FUN_00481910(char * source_file, char * dest_file)

#include "nocturne.h"

int __cdecl engine_dosio_c_copyFileTimestamp_FUN_00481910(char *source_file,char *dest_file)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  char *pcStack_32;
  char *local_4;
  
  local_4 = dest_file;
  iVar1 = crt_io_c_stat_thunk_00600c18(source_file,(stat *)&stack0xffffffb0);
  if (iVar1 == 0) {
    local_4 = pcStack_32;
  }
  iVar1 = crt_io_c_utime_thunk_00600c1e(dest_file,(utimbuf *)&local_4);
  return (uint)(iVar1 == 0);
}
