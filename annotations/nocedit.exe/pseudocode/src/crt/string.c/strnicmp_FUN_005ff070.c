// Name: crt_string.c_strnicmp_FUN_005ff070
// Address: 005ff070
// Address Range: [[005ff070, 005ff0c7]]
// Convention: __watcallStack
// Signature: int crt_string.c_strnicmp_FUN_005ff070(char * str1, char * str2, int count)

#include "nocturne.h"

int __watcallStack crt_string_c_strnicmp_FUN_005ff070(char *str1,char *str2,int count)

{
  byte bVar2;
  uint uVar1;
  
  if (count != 0) {
    do {
      bVar2 = *str1;
      uVar1 = (uint)CONCAT11 /* combine 2-byte values */(*str2,bVar2);
      if ((0x40 < bVar2) && (bVar2 < 0x5b)) {
        uVar1 = (uint)CONCAT11 /* combine 2-byte values */(*str2,bVar2 + 0x20);
      }
      bVar2 = (byte)(uVar1 >> 8);
      if ((0x40 < bVar2) && (bVar2 < 0x5b)) {
        uVar1 = (uint)CONCAT11 /* combine 2-byte values */(bVar2 + 0x20,(char)uVar1);
      }
      bVar2 = (byte)(uVar1 >> 8);
      if ((byte)uVar1 != bVar2) {
        return (uVar1 & 0xff) - (uint)bVar2;
      }
      if (bVar2 == 0) {
        return 0;
      }
      str1 = (char *)((byte *)str1 + 1);
      str2 = str2 + 1;
      count = count + -1;
    } while (count != 0);
  }
  return 0;
}
