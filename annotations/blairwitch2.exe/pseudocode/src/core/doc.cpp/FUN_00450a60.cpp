// Name: core_doc.cpp_FUN_00450a60
// Address: 00450a60
// Address Range: [[00450a60, 00450ac1]]
// Convention: unknown
// Signature: void core_doc_cpp_FUN_00450a60(int param_1,char *param_2,char *param_3)

#include "nocturne.h"

void core_doc_cpp_FUN_00450a60(int param_1,char *param_2,char *param_3)

{
  char cVar1;
  char *pcVar2;
  
  core_charactr_cpp_FUN_0042b440(param_1,param_2,param_3);
  pcVar2 = (char *)(param_1 + 0x257b0);
  do {
    cVar1 = *param_2;
    *pcVar2 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = param_2[1];
    param_2 = param_2 + 2;
    pcVar2[1] = cVar1;
    pcVar2 = pcVar2 + 2;
  } while (cVar1 != '\0');
  pcVar2 = (char *)(param_1 + 0x258b0);
  do {
    cVar1 = *param_3;
    *pcVar2 = cVar1;
    if (cVar1 == '\0') {
      return;
    }
    cVar1 = param_3[1];
    param_3 = param_3 + 2;
    pcVar2[1] = cVar1;
    pcVar2 = pcVar2 + 2;
  } while (cVar1 != '\0');
  return;
}
