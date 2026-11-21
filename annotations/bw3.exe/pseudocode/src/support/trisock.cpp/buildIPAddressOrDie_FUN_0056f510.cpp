// Name: support_trisock.cpp_buildIPAddressOrDie_FUN_0056f510
// Address: 0056f510
// Address Range: [[0056f510, 0056f574]]
// Convention: __cdecl
// Signature: uint8_t * __cdecl support_trisock_cpp_buildIPAddressOrDie_FUN_0056f510(uchar *dest_ip,int octet1,int octet2,int octet3,int octet4)

#include "nocturne.h"

uint8_t * __cdecl support_trisock_cpp_buildIPAddressOrDie_FUN_0056f510(uchar *dest_ip,int octet1,int octet2,int octet3,int octet4)

{
  int iVar1;
  
  iVar1 = support_trisock_cpp_buildIPAddress_FUN_0056f630(dest_ip,octet1,octet2,octet3,octet4);
  if (iVar1 != 0) {
    return dest_ip;
  }
  g_CurrentFilename = "..\\support\\trisock.cpp";
  g_CurrentLineNumber = 98;
  core_main_c_displayErrorAndQuit_FUN_004e4330("Invalid IP values: %d, %d, %d, %d");
  return dest_ip;
}
