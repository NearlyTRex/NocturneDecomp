// Name: engine_dosio.cpp_reopenFileStream_FUN_00479240
// Address: 00479240
// Address Range: [[00479240, 00479314]]
// Convention: __cdecl
// Signature: void __cdecl engine_dosio_cpp_reopenFileStream_FUN_00479240(char *param_1,undefined4 param_2,uint param_3,int *param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_dosio_cpp_reopenFileStream_FUN_00479240(char *param_1,uint param_2,uint param_3,int *param_4)

{
  int iVar1;
  byte auStack_220 [256];
  byte auStack_120 [256];
  int iStack_20;
  
  FUN_005c1f9c(param_4);
  FUN_005c1fd7(*(int *)(*param_4 + 4) + (int)param_4,0);
  engine_dosio_cpp_FUN_00478e20(auStack_220,param_1,param_2);
  if ((param_3 & 0x52) == 0) {
    iVar1 = engine_dosio_cpp_findFile_FUN_00478e90(auStack_220);
    if (iVar1 != 0) {
      FUN_005c2019(param_4,auStack_120,param_3,_DAT_00608528);
      if (iStack_20 != 0) {
        FUN_005c2078(param_4 + 0x11,iStack_20);
        return;
      }
    }
  }
  else {
    if (param_1 != (char *)0x0) {
      _mkdir(param_1);
    }
    FUN_005c2019(param_4,auStack_220,param_3,_DAT_00608528);
  }
  return;
}
