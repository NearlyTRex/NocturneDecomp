// Name: crt_fstream.cpp_ofstream_ctor_FUN_0056511e
// Address: 0056511e
// Address Range: [[0056511e, 0056519b]]
// Convention: __cdecl
// Signature: void __cdecl crt_fstream_cpp_ofstream_ctor_FUN_0056511e(undefined4 *param_1,byte param_2,undefined4 param_3,uint param_4,undefined4 param_5)

#include "nocturne.h"

void __cdecl crt_fstream_cpp_ofstream_ctor_FUN_0056511e(uint *param_1,byte param_2,uint param_3,uint param_4,uint param_5)

{
  int iVar1;
  int *piVar2;
  
  if ((param_2 & 1) == 0) {
    *param_1 = &DAT_005a4810;
    param_1[0x11] = &DAT_005a4818;
    iVar1 = FUN_0056b503(param_1 + 0x14);
    param_1 = (uint *)(iVar1 + -0x50);
  }
  iVar1 = FUN_0056b75d(param_1,1,param_3,param_4 | 2,param_5);
  iVar1 = FUN_0056b4a9(iVar1 + 0x44,1);
  piVar2 = (int *)(iVar1 + -0x44);
  *(int *)((int)piVar2 + *(int *)(*piVar2 + 4) + -4) = *(int *)(*piVar2 + 4);
  *(byte ***)(iVar1 + -4) = &PTR_crt_fstream_cpp_ofstream_dtor_FUN_005651ca_005a4824;
  *(byte ***)(iVar1 + 4) = &PTR_crt_unknown_c_FUN_0056519c_005a482c;
  *(byte ***)(*(int *)(*piVar2 + 4) + 0x28 + (int)piVar2) =
       &PTR_crt_unknown_c_FUN_005651b2_005a4834;
  return;
}
