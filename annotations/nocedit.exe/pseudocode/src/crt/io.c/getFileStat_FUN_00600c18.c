// Name: crt_io.c_getFileStat_FUN_00600c18
// Address: 00600c18
// Address Range: [[00600c18, 00600c1c]]
// Convention: __cdecl
// Signature: int __cdecl crt_io_c_getFileStat_FUN_00600c18(char *filename,_stat *file_info)

#include "nocturne.h"

int __cdecl getFileStat(char *filename,_stat *file_info)

{
  int iVar1;
  
  iVar1 = getFileStat(filename,file_info);
  return iVar1;
}
