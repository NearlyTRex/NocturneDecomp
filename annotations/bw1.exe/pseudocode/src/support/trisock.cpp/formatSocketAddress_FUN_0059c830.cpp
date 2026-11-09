// Name: support_trisock.cpp_formatSocketAddress_FUN_0059c830
// Address: 0059c830
// Address Range: [[0059c830, 0059c87b]]
// Convention: __cdecl
// Signature: void __cdecl support_trisock_cpp_formatSocketAddress_FUN_0059c830(uchar *param_1,char *param_2)

#include "nocturne.h"

void __cdecl support_trisock_cpp_formatSocketAddress_FUN_0059c830(uchar *param_1,char *param_2)

{
  char *pcVar1;
  
  support_trisock_cpp_formatIPAddress_FUN_0059c590(param_1,param_2);
  do {
    pcVar1 = param_2;
    if (*param_2 == '\0') goto LAB_0059c870;
    if (*param_2 == '\0') break;
    pcVar1 = param_2 + 1;
    if (*pcVar1 == '\0') goto LAB_0059c870;
    param_2 = param_2 + 2;
  } while (*pcVar1 != '\0');
  pcVar1 = (char *)0x0;
LAB_0059c870:
  FUN_005bfb40(pcVar1,&DAT_005f8368,*(ushort *)(param_1 + 4));
  return;
}
