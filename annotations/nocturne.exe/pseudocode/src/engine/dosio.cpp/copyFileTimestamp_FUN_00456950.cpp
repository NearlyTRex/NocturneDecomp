// Name: engine_dosio.cpp_copyFileTimestamp_FUN_00456950
// Address: 00456950
// Address Range: [[00456950, 0045699a]]
// Convention: __cdecl
// Signature: int __cdecl engine_dosio_cpp_copyFileTimestamp_FUN_00456950(char *source_file,uint modtime)

#include "nocturne.h"

int __cdecl engine_dosio_cpp_copyFileTimestamp_FUN_00456950(char *source_file,uint modtime)

{
  int iVar1;
  WatcomStat WStack_50;
  WatcomUtimbuf WStack_8;
  
  WStack_8.actime = modtime;
  WStack_8.modtime = modtime;
  iVar1 = getFileStat(source_file,&WStack_50);
  if (iVar1 == 0) {
    WStack_8.actime = WStack_50._st_atime;
  }
  iVar1 = _utime(source_file,&WStack_8);
  return (uint)(iVar1 == 0);
}
