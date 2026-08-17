// Name: crt_unknown.c_GetConsoleInputHandle_FUN_005714e0
// Address: 005714e0
// Address Range: [[005714e0, 005714ea]]
// Convention: __watcallRegister
// Signature: HANDLE __watcallRegister crt_unknown_c_GetConsoleInputHandle_FUN_005714e0(void)

#include "nocturne.h"

HANDLE __watcallRegister GetConsoleInputHandle(void)

{
  InitializeConsoleHandles();
  return DAT_005c20d0;
}
