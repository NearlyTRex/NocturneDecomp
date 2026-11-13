// Name: support_trstream.cpp_CInStream_readLine_FUN_0057cc20
// Address: 0057cc20
// Address Range: [[0057cc20, 0057cc77]]
// Convention: __cdecl
// Signature: int __cdecl support_trstream_cpp_CInStream_readLine_FUN_0057cc20(CInStream *this_ptr,char *buffer,int size)

#include "nocturne.h"

int __cdecl support_trstream_cpp_CInStream_readLine_FUN_0057cc20(CInStream *this_ptr,char *buffer,int size)

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
LAB_0057cc51:
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
  goto LAB_0057cc51;
}
