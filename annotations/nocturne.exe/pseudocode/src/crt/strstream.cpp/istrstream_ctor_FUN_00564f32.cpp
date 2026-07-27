// Name: crt_strstream.cpp_istrstream_ctor_FUN_00564f32
// Address: 00564f32
// Address Range: [[00564f32, 00564fa9]]
// Convention: __cdecl
// Signature: void __cdecl crt_strstream_cpp_istrstream_ctor_FUN_00564f32(undefined4 *param_1,byte param_2,undefined4 param_3,undefined4 param_4)

#include "nocturne.h"

void __cdecl crt_strstream_cpp_istrstream_ctor_FUN_00564f32(uint *param_1,byte param_2,uint param_3,uint param_4)

{
  int iVar1;
  int *piVar2;
  
  if ((param_2 & 1) == 0) {
    *param_1 = &DAT_005a4730;
    param_1[0x12] = &DAT_005a4738;
    iVar1 = FUN_0056b503(param_1 + 0x16);
    param_1 = (uint *)(iVar1 + -0x58);
  }
  iVar1 = FUN_0056b405(param_1,1,param_3,param_4,0);
  iVar1 = FUN_0056b67d(iVar1 + 0x48,1);
  piVar2 = (int *)(iVar1 + -0x48);
  *(int *)((int)piVar2 + *(int *)(*piVar2 + 4) + -4) = *(int *)(*piVar2 + 4);
  *(byte ***)(iVar1 + -4) = &PTR_crt_strstream_cpp_istrstream_dtor_FUN_00564fd8_005a4744;
  *(byte ***)(iVar1 + 8) = &PTR_crt_unknown_c_FUN_00564faa_005a474c;
  *(byte ***)(*(int *)(*piVar2 + 4) + 0x28 + (int)piVar2) =
       &PTR_crt_unknown_c_FUN_00564fc0_005a4754;
  return;
}
