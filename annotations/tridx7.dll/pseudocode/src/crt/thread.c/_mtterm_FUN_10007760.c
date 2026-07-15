// Name: crt_thread.c__mtterm_FUN_10007760
// Address: 10007760
// Address Range: [[10007760, 10007780]]
// Convention: __cdecl
// Signature: void __cdecl crt_thread_c__mtterm_FUN_10007760(void)

#include "nocturne.h"

void __cdecl _mtterm(void)

{
  _mtdeletelocks();
  if (DAT_10016da4 != -1) {
    TlsFree(DAT_10016da4);
    DAT_10016da4 = -1;
  }
  return;
}
