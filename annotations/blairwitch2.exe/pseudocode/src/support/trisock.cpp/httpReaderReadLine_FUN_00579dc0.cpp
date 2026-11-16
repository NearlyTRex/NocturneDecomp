// Name: support_trisock.cpp_httpReaderReadLine_FUN_00579dc0
// Address: 00579dc0
// Address Range: [[00579dc0, 00579e33]]
// Convention: __cdecl
// Signature: int __cdecl support_trisock_cpp_httpReaderReadLine_FUN_00579dc0(void *reader,char *line_out,int line_size,void *status_callback,char *status_text)

#include "nocturne.h"

int __cdecl support_trisock_cpp_httpReaderReadLine_FUN_00579dc0(void *reader,char *line_out,int line_size,void *status_callback,char *status_text)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  while( true ) {
    iVar1 = support_trisock_cpp_httpReaderGetChar_FUN_00579cf0(reader,status_callback,status_text);
    if (iVar1 < 0) break;
    if (iVar1 != 0xd) {
      if (iVar1 == 10) goto LAB_00579e23;
      if (((&DAT_0061ed94)[(byte)((char)iVar1 + 1)] & 2) != 0) {
        iVar1 = 0x20;
      }
      if (iVar2 < line_size + -1) {
        iVar2 = iVar2 + 1;
        *line_out = (char)iVar1;
        line_out = line_out + 1;
      }
    }
  }
  if (*(int *)reader == 0) {
    return 0;
  }
LAB_00579e23:
  status_text[iVar2] = '\0';
  return 1;
}
