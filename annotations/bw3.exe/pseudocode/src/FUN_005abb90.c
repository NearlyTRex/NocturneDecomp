// Name: FUN_005abb90
// Address: 005abb90
// Address Range: [[005abb90, 005abbf6]]
// Convention: unknown
// Signature: void FUN_005abb90(void)

#include "nocturne.h"

void FUN_005abb90(void)

{
  HANDLE pvVar1;
  
  pvVar1 = GetStdHandle(0xfffffff6);
  if ((pvVar1 == (HANDLE)0x0) || (pvVar1 == (HANDLE)0xffffffff)) {
    pvVar1 = (HANDLE)FUN_005abbf8();
  }
  FUN_005aba00(pvVar1);
  pvVar1 = GetStdHandle(0xfffffff5);
  if ((pvVar1 == (HANDLE)0x0) || (pvVar1 == (HANDLE)0xffffffff)) {
    pvVar1 = (HANDLE)FUN_005abbf8();
  }
  FUN_005aba00(pvVar1);
  pvVar1 = GetStdHandle(0xfffffff4);
  if ((pvVar1 == (HANDLE)0x0) || (pvVar1 == (HANDLE)0xffffffff)) {
    pvVar1 = (HANDLE)FUN_005abbf8();
  }
  FUN_005aba00(pvVar1);
  return;
}
