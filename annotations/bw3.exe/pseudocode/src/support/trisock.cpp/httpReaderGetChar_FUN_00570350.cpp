// Name: support_trisock.cpp_httpReaderGetChar_FUN_00570350
// Address: 00570350
// Address Range: [[00570350, 00570415]]
// Convention: __cdecl
// Signature: int __cdecl support_trisock_cpp_httpReaderGetChar_FUN_00570350(void *reader,void *status_callback,char *status_text)

#include "nocturne.h"

int __cdecl support_trisock_cpp_httpReaderGetChar_FUN_00570350(void *reader,void *status_callback,char *status_text)

{
  uint uVar1;
  int iVar2;
  
  if (*(int *)((int)reader + 0x808) < 1) {
    *(uint *)((int)reader + 0x808) = 0;
    *(char **)((int)reader + 0x80c) = (char *)((int)reader + 8);
    while( true ) {
      iVar2 = (*status_callback)(0,status_text);
      if (iVar2 == 0) {
        return -1;
      }
      iVar2 = support_trisock_cpp_CSocket_receiveSocketData_FUN_0056fb10
                        (*(CSocket **)((int)reader + 4),(char *)((int)reader + 8),0x800,
                         (SNetworkAddr *)0x0);
      if ((iVar2 == -2) && (uVar1 = 0xfffffffe, *(int *)reader != 0)) break;
      if (iVar2 < 0) {
        (*status_callback)(1,"Error communicating with server");
        return -1;
      }
      if (0 < iVar2) {
        *(int *)((int)reader + 0x808) = iVar2;
        *(int *)((int)reader + 0x80c) = (int)reader + 9;
        *(int *)((int)reader + 0x808) = iVar2 + -1;
        return (uint)*(byte *)((int)reader + 8);
      }
    }
  }
  else {
    uVar1 = (uint)**(byte **)((int)reader + 0x80c);
    *(byte **)((int)reader + 0x80c) = *(byte **)((int)reader + 0x80c) + 1;
    *(int *)((int)reader + 0x808) = *(int *)((int)reader + 0x808) + -1;
  }
  return uVar1;
}
