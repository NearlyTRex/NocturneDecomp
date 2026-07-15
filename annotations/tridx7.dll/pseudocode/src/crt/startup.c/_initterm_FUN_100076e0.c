// Name: crt_startup.c__initterm_FUN_100076e0
// Address: 100076e0
// Address Range: [[100076e0, 100076ff]]
// Convention: __cdecl
// Signature: void __cdecl crt_startup_c__initterm_FUN_100076e0(char *pfbegin,char *pfend)

#include "nocturne.h"

void __cdecl _initterm(char *pfbegin,char *pfend)

{
  for (; pfbegin < pfend; pfbegin = pfbegin + 4) {
    if (*(code **)pfbegin != (code *)0x0) {
      (**(code **)pfbegin)();
    }
  }
  return;
}
