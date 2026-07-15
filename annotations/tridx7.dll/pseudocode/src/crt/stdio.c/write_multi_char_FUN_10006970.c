// Name: crt_stdio.c_write_multi_char_FUN_10006970
// Address: 10006970
// Address Range: [[10006970, 100069a0]]
// Convention: __cdecl
// Signature: void __cdecl crt_stdio_c_write_multi_char_FUN_10006970(int ch,int count,FILE *file,int *pnumwritten)

#include "nocturne.h"

void __cdecl write_multi_char(int ch,int count,FILE *file,int *pnumwritten)

{
  do {
    if (count < 1) {
      return;
    }
    write_char(ch,file,pnumwritten);
    count = count + -1;
  } while (*pnumwritten != -1);
  return;
}
