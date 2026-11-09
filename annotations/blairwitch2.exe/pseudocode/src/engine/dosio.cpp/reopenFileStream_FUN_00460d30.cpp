// Name: engine_dosio.cpp_reopenFileStream_FUN_00460d30
// Address: 00460d30
// Address Range: [[00460d30, 00460e04]]
// Convention: __cdecl
// Signature: void __cdecl engine_dosio_cpp_reopenFileStream_FUN_00460d30(char *param_1,undefined4 param_2,uint param_3,int *param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_dosio_cpp_reopenFileStream_FUN_00460d30(char *param_1,uint param_2,uint param_3,int *param_4)

{
  int iVar1;
  byte auStack_220 [256];
  byte auStack_120 [256];
  int iStack_20;
  
  FUN_005b9bbc(param_4);
  FUN_005b9bf7(*(int *)(*param_4 + 4) + (int)param_4,0);
  engine_dosio_cpp_FUN_00460910(auStack_220,param_1,param_2);
  if ((param_3 & 0x52) == 0) {
    iVar1 = engine_dosio_cpp_findFile_FUN_00460980(auStack_220);
    if (iVar1 != 0) {
      FUN_005b9c39(param_4,auStack_120,param_3,_DAT_006013f0);
      if (iStack_20 != 0) {
        FUN_005b9c98(param_4 + 0x11,iStack_20);
        return;
      }
    }
  }
  else {
    if (param_1 != (char *)0x0) {
      _mkdir(param_1);
    }
    FUN_005b9c39(param_4,auStack_220,param_3,_DAT_006013f0);
  }
  return;
}
