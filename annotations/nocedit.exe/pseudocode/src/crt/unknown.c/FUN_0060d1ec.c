// Name: crt_unknown.c_FUN_0060d1ec
// Address: 0060d1ec
// Address Range: [[0060d1ec, 0060d212]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_0060d1ec(void)

#include "nocturne.h"

void FUN_0060d1ec(void)

{
  int iVar1;
  
  iVar1 = FUN_0060cf80();
  if (iVar1 != 0) {
    unregisterConsoleHandler();
    setSignalHandler(4,2);
    setSignalHandler(7,2);
  }
  return;
}
