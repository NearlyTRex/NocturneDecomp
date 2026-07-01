// Name: support_trisock.cpp_buildIPAddressOrDie_FUN_005e1750
// Address: 005e1750
// Address Range: [[005e1750, 005e17b4]]
// Convention: __cdecl
// Signature: uint8_t * __cdecl support_trisock_cpp_buildIPAddressOrDie_FUN_005e1750(uchar *dest_ip,int octet1,int octet2,int octet3,int octet4)

#include "nocturne.h"

uint8_t * __cdecl support_trisock_cpp_buildIPAddressOrDie_FUN_005e1750(uchar *dest_ip,int octet1,int octet2,int octet3,int octet4)

{
  int iVar1;
  
  iVar1 = support_trisock_cpp_buildIPAddress_FUN_005e1870(dest_ip,octet1,octet2,octet3,octet4);
  if (iVar1 != 0) {
    return dest_ip;
  }
  g_CurrentFilename = "..\\support\\trisock.cpp";
  g_CurrentLineNumber = 65;
  core_main_c_displayErrorAndQuit_FUN_00506f10
            ("Invalid IP values: %d, %d, %d, %d",octet1,octet2,octet3,octet4);
  return dest_ip;
}
