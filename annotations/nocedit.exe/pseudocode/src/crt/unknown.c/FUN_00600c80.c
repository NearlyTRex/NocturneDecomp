// Name: crt_unknown.c_FUN_00600c80
// Address: 00600c80
// Address Range: [[00600c80, 00600ced]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_00600c80(void)

#include "nocturne.h"

void crt_unknown_c_FUN_00600c80(void)

{
  int iVar1;
  SIZE_T SVar2;
  SIZE_T count;
  int in_stack_00000004;
  int in_stack_00000008;
  SIZE_T in_stack_0000000c;
  byte local_20c [512];
  
  iVar1 = lseek(in_stack_00000004,in_stack_00000008,0);
  if (iVar1 == in_stack_00000008) {
    memset(local_20c,0,0x200);
    do {
      count = 0x200;
      if ((int)in_stack_0000000c < 0x200) {
        count = in_stack_0000000c;
      }
      SVar2 = write(in_stack_00000004,local_20c,count);
    } while ((SVar2 == count) &&
            (in_stack_0000000c = in_stack_0000000c - count, in_stack_0000000c != 0));
  }
  return;
}
