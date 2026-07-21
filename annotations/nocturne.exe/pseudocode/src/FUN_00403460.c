// Name: FUN_00403460
// Address: 00403460
// Address Range: [[00403460, 004034f0]]
// Convention: unknown
// Signature: void FUN_00403460(undefined4 param_1)

#include "nocturne.h"

void FUN_00403460(uint param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = engine_dosio_cpp_getFileSize_FUN_004568c0(&DAT_005771fc,param_1);
  if (iVar1 == 0x1000) {
    FUN_004031a0(0);
  }
  else {
    iVar1 = engine_dosio_cpp_getFile_FUN_00456a60(&DAT_00577203,param_1,&DAT_00577200);
    if (iVar1 == 0) {
      FUN_004031a0(0);
      FUN_00403500(param_1);
    }
    else {
      _fread(0x1bf5620,0x100,0x20,iVar1);
      _fclose(iVar1);
    }
  }
  iVar1 = 0;
  do {
    iVar2 = iVar1 + 1;
    *(byte *)(iVar1 + 0x1bf5520) = *(byte *)(iVar1 + 0x1bf5620);
    *(byte *)(iVar1 + 0x1bf7620) = *(byte *)(iVar1 + 0x1bf7520);
    iVar1 = iVar2;
  } while (iVar2 < 0x100);
  return;
}
