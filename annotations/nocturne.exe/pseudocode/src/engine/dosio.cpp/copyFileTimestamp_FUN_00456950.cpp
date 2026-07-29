// Name: engine_dosio.cpp_copyFileTimestamp_FUN_00456950
// Address: 00456950
// Address Range: [[00456950, 0045699a]]
// Convention: __cdecl
// Signature: int __cdecl engine_dosio_cpp_copyFileTimestamp_FUN_00456950(char *source_file,uint modtime)

#include "nocturne.h"

int __cdecl engine_dosio_cpp_copyFileTimestamp_FUN_00456950(char *source_file,uint modtime)

{
  int iVar1;
  _stat _Stack_50;
  _utimbuf _Stack_8;
  
  _Stack_8.actime = modtime;
  _Stack_8.modtime = modtime;
  iVar1 = getFileStat(source_file,&_Stack_50);
  if (iVar1 == 0) {
    _Stack_8.actime = _Stack_50._st_atime;
  }
  iVar1 = _utime_00600c1e(source_file,&_Stack_8);
  return (uint)(iVar1 == 0);
}
