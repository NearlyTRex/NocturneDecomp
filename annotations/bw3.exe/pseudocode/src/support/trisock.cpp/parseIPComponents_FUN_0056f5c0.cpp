// Name: support_trisock.cpp_parseIPComponents_FUN_0056f5c0
// Address: 0056f5c0
// Address Range: [[0056f5c0, 0056f621]]
// Convention: __cdecl
// Signature: int __cdecl support_trisock_cpp_parseIPComponents_FUN_0056f5c0(uint *result_ptr,char *dotted_decimal_string)

#include "nocturne.h"

int __cdecl support_trisock_cpp_parseIPComponents_FUN_0056f5c0(uint *result_ptr,char *dotted_decimal_string)

{
  int iVar1;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  
  iVar1 = sscanf(dotted_decimal_string,"%d.%d.%d.%d");
  if (iVar1 != 4) {
    return 0;
  }
  iVar1 = support_trisock_cpp_buildIPAddress_FUN_0056f630
                    ((uint8_t *)result_ptr,iStack_14,iStack_10,iStack_c,iStack_8);
  return iVar1;
}
