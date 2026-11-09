// Name: support_codec.cpp_FUN_00441580
// Address: 00441580
// Address Range: [[00441580, 004415ca]]
// Convention: unknown
// Signature: undefined4 support_codec_cpp_FUN_00441580(int param_1,int *param_2)

#include "nocturne.h"

uint support_codec_cpp_FUN_00441580(int param_1,int *param_2)

{
  int iVar1;
  int iStack_4;
  
  iVar1 = support_codec_cpp_FUN_00440240(param_1 + 4,&iStack_4);
  if (iStack_4 < 1) {
    return 1;
  }
  (**(code **)(*param_2 + 4))(param_2,"!()*+0123456789ABCDEFGHJKLMNPQRSTUVWXYZabcdefghijkmnopqrstuvwxyz"[iVar1]);
  return 1;
}
