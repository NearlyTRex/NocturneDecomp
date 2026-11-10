// Name: support_trisock.cpp_formatSocketAddress_FUN_00578f50
// Address: 00578f50
// Address Range: [[00578f50, 00578f9b]]
// Convention: __cdecl
// Signature: void __cdecl support_trisock_cpp_formatSocketAddress_FUN_00578f50(uchar *param_1,char *param_2)

#include "nocturne.h"

void __cdecl support_trisock_cpp_formatSocketAddress_FUN_00578f50(uchar *param_1,char *param_2)

{
  char *buffer;
  
  support_trisock_cpp_formatIPAddress_FUN_00578cb0(param_1,param_2);
  do {
    buffer = param_2;
    if (*param_2 == '\0') goto LAB_00578f90;
    if (*param_2 == '\0') break;
    buffer = param_2 + 1;
    if (*buffer == '\0') goto LAB_00578f90;
    param_2 = param_2 + 2;
  } while (*buffer != '\0');
  buffer = (char *)0x0;
LAB_00578f90:
  _sprintf(buffer,&DAT_005ed04e);
  return;
}
