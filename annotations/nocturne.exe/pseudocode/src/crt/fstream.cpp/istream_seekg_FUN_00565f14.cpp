// Name: crt_fstream.cpp_istream_seekg_FUN_00565f14
// Address: 00565f14
// Address Range: [[00565f14, 00565f62]]
// Convention: __cdecl
// Signature: int * __cdecl crt_fstream_cpp_istream_seekg_FUN_00565f14(int *param_1,undefined4 param_2)

#include "nocturne.h"

int * __cdecl crt_fstream_cpp_istream_seekg_FUN_00565f14(int *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = FUN_0056ce57(param_1,1);
  if (iVar1 != 0) {
    iVar1 = *(int *)((int)param_1 + *(int *)(*param_1 + 4) + 4);
    iVar1 = (**(code **)(*(int *)(iVar1 + 0x28) + 0x18))(iVar1,param_2,0,1);
    if (iVar1 == -1) {
      FUN_0056b327(*(int *)(*param_1 + 4) + (int)param_1,2);
      return param_1;
    }
  }
  return param_1;
}
