// Name: support_trisock.cpp_buildIPAddress_FUN_00548c60
// Address: 00548c60
// Address Range: [[00548c60, 00548cc1]]
// Convention: __cdecl
// Signature: int __cdecl support_trisock_cpp_buildIPAddress_FUN_00548c60(uint8_t *dest_ip,int octet1,int octet2,int octet3,int octet4)

#include "nocturne.h"

int __cdecl support_trisock_cpp_buildIPAddress_FUN_00548c60(uint8_t *dest_ip,int octet1,int octet2,int octet3,int octet4)

{
  if (((((-1 < octet1) && (octet1 < 0x100)) && (-1 < octet2)) && ((octet2 < 0x100 && (-1 < octet3)))
      ) && ((octet3 < 0x100 && ((-1 < octet4 && (octet4 < 0x100)))))) {
    dest_ip[1] = (uint8_t)octet2;
    dest_ip[2] = (uint8_t)octet3;
    dest_ip[3] = (uint8_t)octet4;
    *dest_ip = (uint8_t)octet1;
    return 1;
  }
  return 0;
}
