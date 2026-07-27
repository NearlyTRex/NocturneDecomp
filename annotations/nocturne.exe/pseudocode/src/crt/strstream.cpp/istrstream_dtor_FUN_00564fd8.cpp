// Name: crt_strstream.cpp_istrstream_dtor_FUN_00564fd8
// Address: 00564fd8
// Address Range: [[00564fd8, 00565071]]
// Convention: __cdecl
// Signature: int * __cdecl crt_strstream_cpp_istrstream_dtor_FUN_00564fd8(int *param_1,byte param_2)

#include "nocturne.h"

int * __cdecl crt_strstream_cpp_istrstream_dtor_FUN_00564fd8(int *param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((param_2 & 4) == 0) {
    *(int *)((int)param_1 + *(int *)(*param_1 + 4) + -4) = *(int *)(*param_1 + 4);
    param_1[0x11] = (int)&PTR_crt_strstream_cpp_istrstream_dtor_FUN_00564fd8_005a4744;
    param_1[0x14] = (int)&PTR_crt_unknown_c_FUN_00564faa_005a474c;
    *(byte ***)((int)param_1 + *(int *)(*param_1 + 4) + 0x28) =
         &PTR_crt_unknown_c_FUN_00564fc0_005a4754;
    iVar1 = FUN_0056b6e8(param_1 + 0x12,1);
    param_1 = (int *)FUN_0056b5ad(iVar1 + -0x48,1);
    if ((param_2 & 1) == 0) {
      iVar1 = FUN_0056b633(param_1 + 0x16,1);
      param_1 = (int *)(iVar1 + -0x58);
    }
    if ((param_2 & 2) == 0) {
      return param_1;
    }
    FUN_00564494(param_1);
  }
  else {
    uVar2 = __vec_delete(param_1,&DAT_0059b4b0);
    shape_memdbg_cpp_free_FUN_00564486(uVar2);
  }
  return param_1;
}
