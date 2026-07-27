// Name: crt_fstream.cpp_ifstream_ctor_FUN_00565072
// Address: 00565072
// Address Range: [[00565072, 005650ef]]
// Convention: __cdecl
// Signature: void __cdecl crt_fstream_cpp_ifstream_ctor_FUN_00565072(undefined4 *param_1,byte param_2,undefined4 param_3,uint param_4,undefined4 param_5)

#include "nocturne.h"

void __cdecl crt_fstream_cpp_ifstream_ctor_FUN_00565072(uint *param_1,byte param_2,uint param_3,uint param_4,uint param_5)

{
  int iVar1;
  int *piVar2;
  
  if ((param_2 & 1) == 0) {
    *param_1 = &DAT_005a47a4;
    param_1[0x11] = &DAT_005a47ac;
    iVar1 = FUN_0056b503(param_1 + 0x15);
    param_1 = (uint *)(iVar1 + -0x54);
  }
  iVar1 = FUN_0056b75d(param_1,1,param_3,param_4 | 1,param_5);
  iVar1 = FUN_0056b67d(iVar1 + 0x44,1);
  piVar2 = (int *)(iVar1 + -0x44);
  *(int *)((int)piVar2 + *(int *)(*piVar2 + 4) + -4) = *(int *)(*piVar2 + 4);
  *(byte ***)(iVar1 + -4) = &PTR_crt_fstream_cpp_ifstream_dtor_FUN_00565264_005a47b8;
  *(byte ***)(iVar1 + 8) = &PTR_crt_unknown_c_FUN_005650f0_005a47c0;
  *(byte ***)(*(int *)(*piVar2 + 4) + 0x28 + (int)piVar2) =
       &PTR_crt_unknown_c_FUN_00565106_005a47c8;
  return;
}
