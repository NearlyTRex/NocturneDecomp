// Name: support_trstream.cpp_CInStream_readLine_FUN_005a07a0
// Address: 005a07a0
// Address Range: [[005a07a0, 005a07f7]]
// Convention: __cdecl
// Signature: int __cdecl support_trstream_cpp_CInStream_readLine_FUN_005a07a0(CInStream *this_ptr,char *buffer,int size)

#include "nocturne.h"

int __cdecl support_trstream_cpp_CInStream_readLine_FUN_005a07a0(CInStream *this_ptr,char *buffer,int size)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  while( true ) {
    iVar1 = (**(code **)((int)this_ptr->vtable + 4))(this_ptr);
    if (iVar1 == -1) {
      *buffer = '\0';
      if (iVar2 == 0) {
        iVar2 = -1;
      }
      return iVar2;
    }
    if (iVar1 < 0) break;
    if (iVar1 != 0xd) {
      if (iVar1 == 10) {
LAB_005a07d1:
        *buffer = '\0';
        return iVar2;
      }
      if (iVar2 < size + -1) {
        iVar2 = iVar2 + 1;
        *buffer = (char)iVar1;
        buffer = buffer + 1;
      }
    }
  }
  iVar2 = -2;
  goto LAB_005a07d1;
}
