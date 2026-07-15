// Name: crt_signal.c_siglookup_FUN_1000bda0
// Address: 1000bda0
// Address Range: [[1000bda0, 1000bdd0]]
// Convention: __cdecl
// Signature: _XCPT_ACTION * __cdecl crt_signal_c_siglookup_FUN_1000bda0(int signum,_XCPT_ACTION *table)

#include "nocturne.h"

_XCPT_ACTION * __cdecl siglookup(int signum,_XCPT_ACTION *table)

{
  _XCPT_ACTION *p_Var1;
  
  p_Var1 = table;
  do {
    if (p_Var1->SigNum == signum) break;
    p_Var1 = p_Var1 + 1;
  } while (p_Var1 < table + 0x0000000A);
  return (_XCPT_ACTION *)(-(uint)(p_Var1->SigNum == signum) & (uint)p_Var1);
}
