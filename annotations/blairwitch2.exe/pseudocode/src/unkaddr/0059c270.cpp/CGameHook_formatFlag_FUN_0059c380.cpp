// Name: unkaddr_0059c270.cpp_CGameHook_formatFlag_FUN_0059c380
// Address: 0059c380
// Address Range: [[0059c380, 0059c3b1]]
// Convention: __cdecl
// Signature: void __cdecl unkaddr_0059c270_cpp_CGameHook_formatFlag_FUN_0059c380(CGameHook *this_ptr,undefined4 param_2,int param_3,char *param_4)

#include "nocturne.h"

void __cdecl unkaddr_0059c270_cpp_CGameHook_formatFlag_FUN_0059c380(CGameHook *this_ptr,uint param_2,int param_3,char *param_4)

{
  if (param_3 == 0) {
    _sprintf(param_4,"%s:OFF (%i)");
    return;
  }
  _sprintf(param_4,"%s:ON (%i)");
  return;
}
