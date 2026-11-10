// Name: support_trisock.cpp_formatSocketAddress_FUN_0059c830
// Address: 0059c830
// Address Range: [[0059c830, 0059c87b]]
// Convention: __cdecl
// Signature: void __cdecl support_trisock_cpp_formatSocketAddress_FUN_0059c830(uchar *param_1,char *param_2)

#include "nocturne.h"

void __cdecl support_trisock_cpp_formatSocketAddress_FUN_0059c830(uchar *param_1,char *param_2)

{
  char *buffer;
  
  support_trisock_cpp_formatIPAddress_FUN_0059c590(param_1,param_2);
  do {
    buffer = param_2;
    if (*param_2 == '\0') goto LAB_0059c870;
    if (*param_2 == '\0') break;
    buffer = param_2 + 1;
    if (*buffer == '\0') goto LAB_0059c870;
    param_2 = param_2 + 2;
  } while (*buffer != '\0');
  buffer = (char *)0x0;
LAB_0059c870:
  _sprintf(buffer,&DAT_005f8368);
  return;
}
