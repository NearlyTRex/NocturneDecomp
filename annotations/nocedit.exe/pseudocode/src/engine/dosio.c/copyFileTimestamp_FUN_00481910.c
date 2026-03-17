// Name: engine_dosio.c_copyFileTimestamp_FUN_00481910
// Address: 00481910
// Address Range: [[00481910, 0048195a]]
// Convention: __cdecl
// Signature: int __cdecl engine_dosio_c_copyFileTimestamp_FUN_00481910(char *source_file,char *dest_file)

#include "nocturne.h"

int __cdecl engine_dosio_c_copyFileTimestamp_FUN_00481910(char *source_file,char *dest_file)

{
  int iVar1;
  int iVar2;
  _stat _Stack_50;
  _utimbuf local_8;
  
  local_8.actime = (time_t)dest_file;
  local_8.modtime = (time_t)dest_file;
  iVar1 = getFileStat(source_file,&_Stack_50);
  if (iVar1 == 0) {
    local_8.actime = _Stack_50._st_atime;
  }
  iVar2 = _utime(source_file,&local_8);
  return (uint)(iVar2 == 0);
}
