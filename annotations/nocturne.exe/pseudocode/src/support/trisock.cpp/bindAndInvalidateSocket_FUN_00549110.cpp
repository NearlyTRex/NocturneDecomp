// Name: support_trisock.cpp_bindAndInvalidateSocket_FUN_00549110
// Address: 00549110
// Address Range: [[00549110, 00549142]]
// Convention: __cdecl
// Signature: bool __cdecl support_trisock_cpp_bindAndInvalidateSocket_FUN_00549110(undefined4 *param_1)

#include "nocturne.h"

bool __cdecl support_trisock_cpp_bindAndInvalidateSocket_FUN_00549110(uint *param_1)

{
  int iVar1;
  
  iVar1 = support_trisock_cpp_isSocketValid_FUN_00548f60(param_1);
  if (iVar1 == 0) {
    return true;
  }
  iVar1 = Ordinal_3(*param_1);
  *param_1 = 0xffffffff;
  return iVar1 == 0;
}
