// Name: core_script.cpp_FUN_005594a0
// Address: 005594a0
// Address Range: [[005594a0, 005594da]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_FUN_005594a0(int param_1,int param_2)

#include "nocturne.h"

void __cdecl core_script_cpp_FUN_005594a0(int param_1,int param_2)

{
  char *pcVar1;
  
  pcVar1 = core_script_cpp_FUN_005593f0((int *)param_1,(char *)param_2,100);
  if ((pcVar1 == (char *)0x0) && (DAT_0310ec9c != 0)) {
    core_event_cpp_CEventList_FUN_004add00(g_CEventListPtr);
    return;
  }
  return;
}
