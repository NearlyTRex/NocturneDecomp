// Name: core_script.cpp_CScript_FUN_00567010
// Address: 00567010
// Address Range: [[00567010, 00567076]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_CScript_FUN_00567010(CScript *this_ptr,char *param_2,int *param_3)

#include "nocturne.h"

void __cdecl core_script_cpp_CScript_FUN_00567010(CScript *this_ptr,char *param_2,int *param_3)

{
  char cVar1;
  char *pcVar2;
  char local_200 [500];
  
  cVar1 = *param_2;
  while (cVar1 != '\0') {
    cVar1 = *param_2;
    pcVar2 = local_200;
    while ((cVar1 != ';' && (*param_2 != '\0'))) {
      cVar1 = *param_2;
      param_2 = param_2 + 1;
      *pcVar2 = cVar1;
      cVar1 = *param_2;
      pcVar2 = pcVar2 + 1;
    }
    *pcVar2 = '\0';
    core_script_cpp_CScript_FUN_00567080(this_ptr,local_200,param_3);
    if (*param_2 == ';') {
      param_2 = param_2 + 1;
    }
    cVar1 = *param_2;
  }
  return;
}
