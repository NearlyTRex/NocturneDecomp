// Name: support_trisock.cpp_formatSocketAddress_FUN_0056f820
// Address: 0056f820
// Address Range: [[0056f820, 0056f86b]]
// Convention: __cdecl
// Signature: void __cdecl support_trisock_cpp_formatSocketAddress_FUN_0056f820(uchar *param_1,char *param_2)

#include "nocturne.h"

void __cdecl support_trisock_cpp_formatSocketAddress_FUN_0056f820(uchar *param_1,char *param_2)

{
  char *buffer;
  
  support_trisock_cpp_formatIPAddress_FUN_0056f580(param_1,param_2);
  do {
    buffer = param_2;
    if (*param_2 == '\0') goto LAB_0056f860;
    if (*param_2 == '\0') break;
    buffer = param_2 + 1;
    if (*buffer == '\0') goto LAB_0056f860;
    param_2 = param_2 + 2;
  } while (*buffer != '\0');
  buffer = (char *)0x0;
LAB_0056f860:
  _sprintf(buffer,&DAT_005d68d7);
  return;
}
