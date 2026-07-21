// Name: engine_dosio.cpp_getFile_FUN_00456a60
// Address: 00456a60
// Address Range: [[00456a60, 00456b1c]]
// Convention: __cdecl
// Signature: int __cdecl engine_dosio_cpp_getFile_FUN_00456a60(int param_1,undefined4 param_2,char *param_3)

#include "nocturne.h"

int __cdecl engine_dosio_cpp_getFile_FUN_00456a60(int param_1,uint param_2,char *param_3)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  byte local_220 [256];
  byte local_120 [256];
  int local_20;
  
  engine_dosio_cpp_getRelativeFilePath_FUN_00456700(local_220,param_1,param_2);
  cVar2 = *param_3;
  pcVar4 = param_3;
  while (cVar2 != '\0') {
    iVar3 = toupper(*pcVar4);
    if (iVar3 == 0x57) {
      if (param_1 != 0) {
        _mkdir(param_1);
      }
      iVar3 = _fopen(local_220,param_3);
      return iVar3;
    }
    pcVar1 = pcVar4 + 1;
    pcVar4 = pcVar4 + 1;
    cVar2 = *pcVar1;
  }
  iVar3 = engine_dosio_cpp_findFile_FUN_004567a0(local_220);
  if ((iVar3 != 0) && (iVar3 = _fopen(local_120,param_3), iVar3 != 0)) {
    if (local_20 != 0) {
      _fseek(iVar3,local_20,0);
    }
    return iVar3;
  }
  return 0;
}
