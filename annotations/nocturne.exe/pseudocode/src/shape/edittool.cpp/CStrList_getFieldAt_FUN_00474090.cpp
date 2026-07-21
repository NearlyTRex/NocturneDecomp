// Name: shape_edittool.cpp_CStrList_getFieldAt_FUN_00474090
// Address: 00474090
// Address Range: [[00474090, 00474132]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CStrList_getFieldAt_FUN_00474090(undefined4 param_1,char *param_2,undefined4 param_3,int param_4)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CStrList_getFieldAt_FUN_00474090(uint param_1,char *param_2,uint param_3,int param_4)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char local_134 [300];
  
  pcVar3 = (char *)shape_edittool_cpp_CStrList_getStringAt_FUN_00474080(param_1,param_3);
  for (; (pcVar3 != (char *)0x0 && (0 < param_4)); param_4 = param_4 + -1) {
    cVar1 = *pcVar3;
    pcVar4 = local_134;
    pcVar2 = pcVar3;
    while ((pcVar3 = pcVar2, cVar1 != '\0' && (pcVar3 = pcVar2 + 1, *pcVar2 != '\t'))) {
      *pcVar4 = *pcVar2;
      pcVar4 = pcVar4 + 1;
      cVar1 = *pcVar3;
      pcVar2 = pcVar3;
    }
    *pcVar4 = '\0';
  }
  if (pcVar3 != (char *)0x0) {
    cVar1 = *pcVar3;
    while ((cVar1 != '\0' && (*pcVar3 != '\t'))) {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      *param_2 = cVar1;
      cVar1 = *pcVar3;
      param_2 = param_2 + 1;
    }
    *param_2 = '\0';
    return;
  }
  *param_2 = '\0';
  return;
}
