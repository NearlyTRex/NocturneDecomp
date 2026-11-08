// Name: FUN_005c0a90
// Address: 005c0a90
// Address Range: [[005c0a90, 005c0af6]]
// Convention: unknown
// Signature: void FUN_005c0a90(void)

#include "nocturne.h"

void FUN_005c0a90(void)

{
  HANDLE pvVar1;
  
  pvVar1 = GetStdHandle(0xfffffff6);
  if ((pvVar1 == (HANDLE)0x0) || (pvVar1 == (HANDLE)0xffffffff)) {
    pvVar1 = (HANDLE)FUN_005c0af8();
  }
  FUN_005c0900(pvVar1);
  pvVar1 = GetStdHandle(0xfffffff5);
  if ((pvVar1 == (HANDLE)0x0) || (pvVar1 == (HANDLE)0xffffffff)) {
    pvVar1 = (HANDLE)FUN_005c0af8();
  }
  FUN_005c0900(pvVar1);
  pvVar1 = GetStdHandle(0xfffffff4);
  if ((pvVar1 == (HANDLE)0x0) || (pvVar1 == (HANDLE)0xffffffff)) {
    pvVar1 = (HANDLE)FUN_005c0af8();
  }
  FUN_005c0900(pvVar1);
  return;
}
