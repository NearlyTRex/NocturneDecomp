// Name: FUN_005c8d50
// Address: 005c8d50
// Address Range: [[005c8d50, 005c8db6]]
// Convention: unknown
// Signature: void FUN_005c8d50(void)

#include "nocturne.h"

void FUN_005c8d50(void)

{
  HANDLE pvVar1;
  
  pvVar1 = GetStdHandle(0xfffffff6);
  if ((pvVar1 == (HANDLE)0x0) || (pvVar1 == (HANDLE)0xffffffff)) {
    pvVar1 = (HANDLE)FUN_005c8db8();
  }
  FUN_005c8bc0(pvVar1);
  pvVar1 = GetStdHandle(0xfffffff5);
  if ((pvVar1 == (HANDLE)0x0) || (pvVar1 == (HANDLE)0xffffffff)) {
    pvVar1 = (HANDLE)FUN_005c8db8();
  }
  FUN_005c8bc0(pvVar1);
  pvVar1 = GetStdHandle(0xfffffff4);
  if ((pvVar1 == (HANDLE)0x0) || (pvVar1 == (HANDLE)0xffffffff)) {
    pvVar1 = (HANDLE)FUN_005c8db8();
  }
  FUN_005c8bc0(pvVar1);
  return;
}
