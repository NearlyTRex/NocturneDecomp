// Name: crt_signal.c_siglookup2_FUN_1000bb30
// Address: 1000bb30
// Address Range: [[1000bb30, 1000bbb2]]
// Convention: __cdecl
// Signature: void * __cdecl crt_signal_c_siglookup2_FUN_1000bb30(int sig)

#include "nocturne.h"

void * __cdecl siglookup2(int sig)

{
  uint *puVar1;
  code *pcVar2;
  uint uVar3;
  
  _lock(1);
  if (sig == 0) {
    puVar1 = &DAT_100178f8;
    uVar3 = 2;
    pcVar2 = DAT_100178f8;
  }
  else {
    puVar1 = &DAT_100178fc;
    uVar3 = 0x15;
    pcVar2 = DAT_100178fc;
  }
  if (pcVar2 == (code *)0x0) {
    _unlock(1);
    return (void *)0x0;
  }
  if (pcVar2 != (code *)0x1) {
    *puVar1 = 0;
    _unlock(1);
    (*pcVar2)(uVar3);
    return (void *)0x1;
  }
  _unlock(1);
  return (void *)0x1;
}
