// Name: dll_dx7.cpp_FUN_10002340
// Address: 10002340
// Address Range: [[10002340, 10002365]]
// Convention: unknown
// Signature: void dll_dx7_cpp_FUN_10002340(LPCSTR param_1)

#include "nocturne.h"

void dll_dx7_cpp_FUN_10002340(LPCSTR param_1)

{
  dll_dx7_cpp_APIDLLkill_FUN_10002460();
  MessageBoxA(g_WindowHandle,param_1,"DirectX6 3D Driver error",0x10);
                    /* WARNING: Subroutine does not return */
  ExitProcess(1);
}
