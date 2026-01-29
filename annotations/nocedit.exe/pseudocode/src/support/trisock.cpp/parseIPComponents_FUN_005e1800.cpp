// Name: support_trisock.cpp_parseIPComponents_FUN_005e1800
// Address: 005e1800
// Address Range: [[005e1800, 005e1861]]
// Convention: __cdecl
// Signature: int __cdecl support_trisock_cpp_parseIPComponents_FUN_005e1800(uint *result_ptr,char *dotted_decimal_string)

#include "nocturne.h"

int __cdecl
support_trisock_cpp_parseIPComponents_FUN_005e1800(uint *result_ptr,char *dotted_decimal_string)

{
  int iVar1;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  iVar1 = sscanf
                    (dotted_decimal_string,"%d.%d.%d.%d",&local_14,&local_10,&local_c,&local_8)
  ;
  if (iVar1 != 4) {
    return 0;
  }
  iVar1 = support_trisock_cpp_buildIPAddress_FUN_005e1870
                    ((uint8_t *)result_ptr,local_14,local_10,local_c,local_8);
  return iVar1;
}
