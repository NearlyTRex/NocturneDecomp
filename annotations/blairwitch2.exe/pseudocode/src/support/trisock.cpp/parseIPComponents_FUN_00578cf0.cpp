// Name: support_trisock.cpp_parseIPComponents_FUN_00578cf0
// Address: 00578cf0
// Address Range: [[00578cf0, 00578d51]]
// Convention: __cdecl
// Signature: int __cdecl support_trisock_cpp_parseIPComponents_FUN_00578cf0(uint *result_ptr,char *dotted_decimal_string)

#include "nocturne.h"

int __cdecl support_trisock_cpp_parseIPComponents_FUN_00578cf0(uint *result_ptr,char *dotted_decimal_string)

{
  int iVar1;
  uint uStack_14;
  uint uStack_10;
  uint uStack_c;
  uint uStack_8;
  
  iVar1 = sscanf(dotted_decimal_string,"%d.%d.%d.%d");
  if (iVar1 != 4) {
    return 0;
  }
  iVar1 = support_trisock_cpp_buildIPAddress_FUN_00578d60
                    (result_ptr,uStack_14,uStack_10,uStack_c,uStack_8);
  return iVar1;
}
