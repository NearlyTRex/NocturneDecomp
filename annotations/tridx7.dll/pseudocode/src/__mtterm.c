// Name: __mtterm
// Address: 10007760
// Address Range: [[10007760, 10007780]]
// Convention: __cdecl
// Signature: void __cdecl __mtterm(void)

#include "nocturne.h"

/* Library Function - Single Match
void __cdecl __mtterm(void)

{
  __mtdeletelocks();
  if (DAT_10016da4 != -1) {
    TlsFree(DAT_10016da4);
    DAT_10016da4 = -1;
  }
  return;
}
