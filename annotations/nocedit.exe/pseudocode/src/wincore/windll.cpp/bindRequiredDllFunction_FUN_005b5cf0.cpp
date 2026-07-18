// Name: wincore_windll.cpp_bindRequiredDllFunction_FUN_005b5cf0
// Address: 005b5cf0
// Address Range: [[005b5cf0, 005b5d09]]
// Convention: __cdecl
// Signature: void __cdecl wincore_windll_cpp_bindRequiredDllFunction_FUN_005b5cf0(void **slot,void *proc)

#include "nocturne.h"

void __cdecl wincore_windll_cpp_bindRequiredDllFunction_FUN_005b5cf0(void **slot,void *proc)

{
  *slot = proc;
  if (proc != (void *)0x0) {
    return;
  }
  g_DLLFunctionsMissing = 1;
  return;
}
