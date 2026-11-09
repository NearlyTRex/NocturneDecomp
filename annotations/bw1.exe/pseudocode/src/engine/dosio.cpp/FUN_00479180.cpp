// Name: engine_dosio.cpp_FUN_00479180
// Address: 00479180
// Address Range: [[00479180, 0047923c]]
// Convention: __cdecl
// Signature: _FILE * __cdecl engine_dosio_cpp_FUN_00479180(char *directory,char *filename,char *mode)

#include "nocturne.h"

_FILE * __cdecl engine_dosio_cpp_FUN_00479180(char *directory,char *filename,char *mode)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  _FILE *p_Var4;
  byte *pbVar5;
  byte local_220 [256];
  byte local_120 [256];
  int local_20;
  
  engine_dosio_cpp_FUN_00478e20(local_220,directory,filename);
  bVar2 = *mode;
  pbVar5 = (byte *)mode;
  while (bVar2 != 0) {
    iVar3 = toupper((uint)*pbVar5);
    if (iVar3 == 0x57) {
      if (directory != (char *)0x0) {
        unkafter_dosio_cpp_FUN_004798c0(directory);
      }
      p_Var4 = (_FILE *)_fopen(local_220,mode);
      return p_Var4;
    }
    pbVar1 = pbVar5 + 1;
    pbVar5 = pbVar5 + 1;
    bVar2 = *pbVar1;
  }
  iVar3 = engine_dosio_cpp_findFile_FUN_00478e90(local_220);
  if ((iVar3 != 0) &&
     (p_Var4 = (_FILE *)_fopen(local_120,mode), p_Var4 != (_FILE *)0x0)) {
    if (local_20 != 0) {
      _fseek(p_Var4,local_20,0);
    }
    return p_Var4;
  }
  return (_FILE *)0x0;
}
