// Name: support_codec.cpp_FUN_00434c00
// Address: 00434c00
// Address Range: [[00434c00, 00434c4a]]
// Convention: unknown
// Signature: undefined4 support_codec_cpp_FUN_00434c00(int param_1,int *param_2)

#include "nocturne.h"

uint support_codec_cpp_FUN_00434c00(int param_1,int *param_2)

{
  int iVar1;
  int iStack_4;
  
  iVar1 = support_codec_cpp_FUN_004338d0(param_1 + 4,&iStack_4);
  if (iStack_4 < 1) {
    return 1;
  }
  (**(code **)(*param_2 + 4))(param_2,"!()*+0123456789ABCDEFGHJKLMNPQRSTUVWXYZabcdefghijkmnopqrstuvwxyz"[iVar1]);
  return 1;
}
