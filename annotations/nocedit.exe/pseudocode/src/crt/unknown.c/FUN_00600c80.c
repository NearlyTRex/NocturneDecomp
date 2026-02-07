// Name: crt_unknown.c_FUN_00600c80
// Address: 00600c80
// Address Range: [[00600c80, 00600ced]]
// Convention: __cdecl
// Signature: void __cdecl crt_unknown_c_FUN_00600c80(int param_1,int param_2,SIZE_T param_3)

#include "nocturne.h"

void __cdecl FUN_00600c80(int param_1,int param_2,SIZE_T param_3)

{
  int iVar1;
  SIZE_T SVar2;
  SIZE_T count;
  byte local_20c [512];
  
  iVar1 = lseek(param_1,param_2,0);
  if (iVar1 == param_2) {
    memset(local_20c,0,0x200);
    do {
      count = 0x200;
      if ((int)param_3 < 0x200) {
        count = param_3;
      }
      SVar2 = write(param_1,local_20c,count);
    } while ((SVar2 == count) && (param_3 = param_3 - count, param_3 != 0));
  }
  return;
}
