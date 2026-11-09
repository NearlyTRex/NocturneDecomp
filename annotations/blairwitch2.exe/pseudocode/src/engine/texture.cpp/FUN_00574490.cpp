// Name: engine_texture.cpp_FUN_00574490
// Address: 00574490
// Address Range: [[00574490, 00574510]]
// Convention: unknown
// Signature: int engine_texture_cpp_FUN_00574490(int param_1,int param_2,char *param_3)

#include "nocturne.h"

int engine_texture_cpp_FUN_00574490(int param_1,int param_2,char *param_3)

{
  int iVar1;
  int iVar2;
  char *str1;
  
  if ((-1 < param_2) && (param_2 < 0x400)) {
    iVar2 = _stricmp((char *)(param_2 * 0x60 + param_1 + 8),param_3);
    if (iVar2 == 0) {
      return param_2;
    }
  }
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x18004)) {
    str1 = (char *)(param_1 + 8);
    do {
      iVar1 = _stricmp(str1,param_3);
      if (iVar1 == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      str1 = str1 + 0x60;
    } while (iVar2 < *(int *)(param_1 + 0x18004));
  }
  return -1;
}
