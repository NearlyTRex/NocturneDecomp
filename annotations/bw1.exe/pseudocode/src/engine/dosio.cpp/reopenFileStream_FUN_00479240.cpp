// Name: engine_dosio.cpp_reopenFileStream_FUN_00479240
// Address: 00479240
// Address Range: [[00479240, 00479314]]
// Convention: __cdecl
// Signature: void __cdecl engine_dosio_cpp_reopenFileStream_FUN_00479240(char *param_1,undefined4 param_2,undefined4 param_3,_FILE *param_4,undefined4 param_5,uint param_6)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_dosio_cpp_reopenFileStream_FUN_00479240(char *param_1,uint param_2,uint param_3,_FILE *param_4,uint param_5,uint param_6)

{
  int iVar1;
  int unaff_EBX;
  char acStack_214 [4];
  uint uStack_210;
  char acStack_114 [264];
  
  _fflush(param_4);
  ios_clear((ios *)(param_4 + *(int *)(*(int *)param_4 + 4)),0);
  engine_dosio_cpp_FUN_00478e20(acStack_214,param_1,param_5);
  if ((param_6 & 0x52) == 0) {
    iVar1 = engine_dosio_cpp_findFile_FUN_00478e90(acStack_214);
    if (iVar1 != 0) {
      openFile(param_4,acStack_114,param_6,_DAT_00608528);
      if (unaff_EBX != 0) {
        uStack_210 = 0x479308;
        istream_seekg(param_4 + 0x44,unaff_EBX);
        return;
      }
    }
  }
  else {
    if (param_1 != (char *)0x0) {
      _mkdir(param_1);
    }
    openFile(param_4,acStack_214,param_6,_DAT_00608528);
  }
  return;
}
