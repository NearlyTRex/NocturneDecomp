// Name: shape_edittool.cpp_CStrList_findByFirstField_FUN_00474180
// Address: 00474180
// Address Range: [[00474180, 00474226]]
// Convention: unknown
// Signature: int shape_edittool_cpp_CStrList_findByFirstField_FUN_00474180(int *param_1,char *param_2)

#include "nocturne.h"

int shape_edittool_cpp_CStrList_findByFirstField_FUN_00474180(int *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  char acStack_19c [200];
  char acStack_d4 [200];
  
  pcVar2 = acStack_d4;
  cVar1 = *param_2;
  while ((cVar1 != '\0' && (*param_2 != '\t'))) {
    cVar1 = *param_2;
    param_2 = param_2 + 1;
    *pcVar2 = cVar1;
    cVar1 = *param_2;
    pcVar2 = pcVar2 + 1;
  }
  *pcVar2 = '\0';
  iVar5 = 0;
  if (0 < *param_1) {
    do {
      pcVar2 = (char *)shape_edittool_cpp_CStrList_getStringAt_FUN_00474080(param_1,iVar5);
      cVar1 = *pcVar2;
      pcVar4 = acStack_19c;
      while ((cVar1 != '\0' && (*pcVar2 != '\t'))) {
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
        *pcVar4 = cVar1;
        cVar1 = *pcVar2;
        pcVar4 = pcVar4 + 1;
      }
      *pcVar4 = '\0';
      iVar3 = _stricmp(acStack_19c,acStack_d4);
      if (iVar3 == 0) {
        return iVar5;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *param_1);
  }
  return -1;
}
