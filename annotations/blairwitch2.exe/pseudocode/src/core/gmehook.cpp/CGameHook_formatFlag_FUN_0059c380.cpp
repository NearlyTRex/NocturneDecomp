// Name: core_gmehook.cpp_CGameHook_formatFlag_FUN_0059c380
// Address: 0059c380
// Address Range: [[0059c380, 0059c3b1]]
// Convention: __cdecl
// Signature: void __cdecl core_gmehook_cpp_CGameHook_formatFlag_FUN_0059c380(CGameHook *this_ptr,char *label,int value,char *buffer)

#include "nocturne.h"

void __cdecl core_gmehook_cpp_CGameHook_formatFlag_FUN_0059c380(CGameHook *this_ptr,char *label,int value,char *buffer)

{
  if (value == 0) {
    _sprintf(buffer,"%s:OFF (%i)");
    return;
  }
  _sprintf(buffer,"%s:ON (%i)");
  return;
}
