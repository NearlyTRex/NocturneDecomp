// Name: core_skeledit.cpp_readQuotedString_FUN_00589740
// Address: 00589740
// Address Range: [[00589740, 005897ae]]
// Convention: __cdecl
// Signature: void __cdecl core_skeledit_cpp_readQuotedString_FUN_00589740(_FILE *file_handle,char *buffer)

#include "nocturne.h"

void __cdecl core_skeledit_cpp_readQuotedString_FUN_00589740(_FILE *file_handle,char *buffer)

{
  int iVar1;
  int iVar2;
  
  __STK();
  *buffer = '\0';
  while( true ) {
    iVar1 = _fgetc(file_handle);
    if (iVar1 < 0) {
      return;
    }
    if (iVar1 == 10) break;
    if (iVar1 == 0x22) {
      while( true ) {
        iVar1 = _fgetc(file_handle);
        if (iVar1 < 0) {
          return;
        }
        if (iVar1 == 10) break;
        if (iVar1 == 0x22) {
          iVar1 = 1;
          do {
            iVar2 = _fgetc(file_handle);
            if (iVar2 < 0) {
              return;
            }
          } while ((iVar2 != 10) || (iVar1 = iVar1 + -1, 0 < iVar1));
          return;
        }
        *buffer = (char)iVar1;
        buffer[1] = '\0';
        buffer = buffer + 1;
      }
      return;
    }
  }
  return;
}
