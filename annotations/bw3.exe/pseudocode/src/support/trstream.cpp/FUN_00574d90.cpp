// Name: support_trstream.cpp_FUN_00574d90
// Address: 00574d90
// Address Range: [[00574d90, 00574db4]]
// Convention: unknown
// Signature: int support_trstream_cpp_FUN_00574d90(int *param_1,int *param_2)

#include "nocturne.h"

int support_trstream_cpp_FUN_00574d90(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = param_1[1];
  *param_2 = param_1[4];
  param_1[1] = 0;
  (**(code **)(*param_1 + 0x14))(param_1);
  return iVar1;
}
