// Name: sound_sndmain.cpp_FUN_00572b90
// Address: 00572b90
// Address Range: [[00572b90, 00572d1a]]
// Convention: unknown
// Signature: void sound_sndmain_cpp_FUN_00572b90(char *param_1,int param_2,int param_3,byte param_4)

#include "nocturne.h"

void sound_sndmain_cpp_FUN_00572b90(char *param_1,int param_2,int param_3,byte param_4)

{
  int iVar1;
  
  if (param_2 == 0) {
    *param_1 = '\0';
  }
  else {
    iVar1 = _sprintf(param_1,(char *)0x5f3e7e);
    param_1 = param_1 + iVar1;
  }
  if ((param_4 & 1) != 0) {
    iVar1 = _sprintf(param_1," channel=%d%s");
    param_1 = param_1 + iVar1;
  }
  if ((param_4 & 2) != 0) {
    if (*(int *)(param_3 + 0x20) == 0) {
      iVar1 = _sprintf(param_1,(char *)0x5f3e8f);
      param_1 = param_1 + iVar1;
    }
    if (*(int *)(param_3 + 0x20) == 1) {
      iVar1 = _sprintf(param_1," posPtrFloat=%p");
      param_1 = param_1 + iVar1;
    }
    if (*(int *)(param_3 + 0x20) == 2) {
      iVar1 = _sprintf(param_1," posPtrDouble=%p");
      param_1 = param_1 + iVar1;
    }
  }
  if ((param_4 & 4) != 0) {
    if (*(int *)(param_3 + 0x34) == 0) {
      iVar1 = _sprintf(param_1,(char *)0x5f3ec1);
      param_1 = param_1 + iVar1;
    }
    if (*(int *)(param_3 + 0x34) == 1) {
      iVar1 = _sprintf(param_1," velPtrFloat=%p");
      param_1 = param_1 + iVar1;
    }
    if (*(int *)(param_3 + 0x34) == 2) {
      iVar1 = _sprintf(param_1," velPtrDouble=%p");
      param_1 = param_1 + iVar1;
    }
  }
  if ((param_4 & 8) != 0) {
    iVar1 = _sprintf(param_1,(char *)0x5f3ef3);
    param_1 = param_1 + iVar1;
  }
  if ((param_4 & 0x10) != 0) {
    iVar1 = _sprintf(param_1,(char *)0x5f3efb);
    param_1 = param_1 + iVar1;
  }
  if ((param_4 & 0x20) == 0) {
    return;
  }
  _sprintf(param_1," delay=%lg");
  return;
}
