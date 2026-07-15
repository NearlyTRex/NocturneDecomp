// Name: crt_stdio.c_write_string_FUN_100069b0
// Address: 100069b0
// Address Range: [[100069b0, 100069e6]]
// Convention: __cdecl
// Signature: void __cdecl crt_stdio_c_write_string_FUN_100069b0(char *str,int len,FILE *file,int *pnumwritten)

#include "nocturne.h"

void __cdecl write_string(char *str,int len,FILE *file,int *pnumwritten)

{
  do {
    if (len < 1) {
      return;
    }
    write_char((int)*str,file,pnumwritten);
    str = str + 1;
    len = len + -1;
  } while (*pnumwritten != -1);
  return;
}
