// Name: dll_dx7.cpp_APIDLLselectCard_FUN_100052c0
// Address: 100052c0
// Address Range: [[100052c0, 100052dd]]
// Convention: __cdecl
// Signature: int __cdecl dll_dx7_cpp_APIDLLselectCard_FUN_100052c0(int card_index)

#include "nocturne.h"

int __cdecl dll_dx7_cpp_APIDLLselectCard_FUN_100052c0(int card_index)

{
  int iVar1;
  
                    /* 0x52c0  26  APIDLLselectCard */
  g_SelectedCardIndex = card_index;
  iVar1 = dll_dx7_cpp_APIDLLinit_FUN_10001a80(g_WindowHandle,&g_ExternalRendererBridge);
  return iVar1;
}
