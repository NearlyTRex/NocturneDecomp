// Name: dll_dx7.cpp_APIDLLlockFrame_FUN_10002d90
// Address: 10002d90
// Address Range: [[10002d90, 10002db9]]
// Convention: __cdecl
// Signature: int __cdecl dll_dx7_cpp_APIDLLlockFrame_FUN_10002d90(void)

#include "nocturne.h"

int __cdecl dll_dx7_cpp_APIDLLlockFrame_FUN_10002d90(void)

{
  int iVar1;
  
                    /* 0x2d90  21  APIDLLlockFrame */
  if (g_InScene != 0) {
    dll_dx7_cpp_APIDLLendScene_FUN_10002d10();
  }
  iVar1 = dll_dx7_cpp_lockBackBuffer_FUN_10002dc0();
  if (iVar1 == 0) {
    return 0;
  }
  g_FrameLocked = 1;
  return 1;
}
