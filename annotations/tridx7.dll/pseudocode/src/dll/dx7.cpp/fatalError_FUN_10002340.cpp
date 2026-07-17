// Name: dll_dx7.cpp_fatalError_FUN_10002340
// Address: 10002340
// Address Range: [[10002340, 10002365]]
// Convention: __cdecl
// Signature: void __cdecl dll_dx7_cpp_fatalError_FUN_10002340(char *message)

#include "nocturne.h"

void __cdecl dll_dx7_cpp_fatalError_FUN_10002340(char *message)

{
  dll_dx7_cpp_APIDLLkill_FUN_10002460();
  MessageBoxA(g_WindowHandle,message,"DirectX6 3D Driver error",0x10);
                    /* WARNING: Subroutine does not return */
  ExitProcess(1);
}
