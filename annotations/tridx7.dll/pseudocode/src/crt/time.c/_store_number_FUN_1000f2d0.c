// Name: crt_time.c__store_number_FUN_1000f2d0
// Address: 1000f2d0
// Address Range: [[1000f2d0, 1000f357]]
// Convention: __cdecl
// Signature: void __cdecl crt_time_c__store_number_FUN_1000f2d0(int value,uint width,char **buf,size_t *count)

#include "nocturne.h"

void __cdecl _store_number(int value,uint width,char **buf,size_t *count)

{
  uint uVar1;
  uint uVar2;
  
  if (DAT_10018214 != 0) {
    _store_number_rev(value,buf,count);
    return;
  }
  if (width < *count) {
    DAT_10018214 = 0;
    uVar1 = 0;
    uVar2 = width;
    while (uVar2 = uVar2 - 1, uVar2 != 0xffffffff) {
      (*buf)[uVar2] = (char)(value % 10) + '0';
      value = value / 10;
      uVar1 = width;
    }
    *buf = *buf + uVar1;
    *count = *count - uVar1;
    return;
  }
  *count = 0;
  return;
}
