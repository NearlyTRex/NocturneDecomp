// Name: FUN_0056e1a0
// Address: 0056e1a0
// Address Range: [[0056e1a0, 0056e206]]
// Convention: unknown
// Signature: void FUN_0056e1a0(void)

#include "nocturne.h"

void FUN_0056e1a0(void)

{
  HANDLE pvVar1;
  
  pvVar1 = GetStdHandle(0xfffffff6);
  if ((pvVar1 == (HANDLE)0x0) || (pvVar1 == (HANDLE)0xffffffff)) {
    pvVar1 = (HANDLE)FUN_0056e208();
  }
  FUN_0056e010(pvVar1);
  pvVar1 = GetStdHandle(0xfffffff5);
  if ((pvVar1 == (HANDLE)0x0) || (pvVar1 == (HANDLE)0xffffffff)) {
    pvVar1 = (HANDLE)FUN_0056e208();
  }
  FUN_0056e010(pvVar1);
  pvVar1 = GetStdHandle(0xfffffff4);
  if ((pvVar1 == (HANDLE)0x0) || (pvVar1 == (HANDLE)0xffffffff)) {
    pvVar1 = (HANDLE)FUN_0056e208();
  }
  FUN_0056e010(pvVar1);
  return;
}
