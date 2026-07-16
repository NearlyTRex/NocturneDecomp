// Name: dll_dx7.cpp_APIDLLunlockFrame_FUN_10002e60
// Address: 10002e60
// Address Range: [[10002e60, 10002e91]]
// Convention: __cdecl
// Signature: int __cdecl dll_dx7_cpp_APIDLLunlockFrame_FUN_10002e60(void)

#include "nocturne.h"

int __cdecl dll_dx7_cpp_APIDLLunlockFrame_FUN_10002e60(void)

{
  int iVar1;
  
                    /* 0x2e60  35  APIDLLunlockFrame */
  if (g_FrameLocked == 0) {
    return 0;
  }
  g_FrameLocked = 0;
  iVar1 = dll_dx7_cpp_FUN_10002c50();
  if (iVar1 == 0) {
    dll_dx7_cpp_FUN_10002340("Cannot unlock back buffer");
  }
  return 1;
}
