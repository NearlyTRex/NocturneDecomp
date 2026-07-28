// Name: crt_string.c__strcmp_FUN_005649c0
// Address: 005649c0
// Address Range: [[005649c0, 00564a6b]]
// Convention: __cdecl
// Signature: int __cdecl crt_string_c__strcmp_FUN_005649c0(char *str1,char *str2)

#include "nocturne.h"

int __cdecl _strcmp(char *str1,char *str2)

{
  byte bVar1;
  byte bVar3;
  uint uVar4;
  bool bVar5;
  uint uVar2;
  
  if (str1 != str2) {
    do {
      uVar2 = *(uint *)str1;
      uVar4 = *(uint *)str2;
      if (uVar4 != uVar2) {
LAB_00564a43:
        bVar1 = (byte)uVar2;
        bVar5 = bVar1 < (byte)uVar4;
        if (bVar1 == (byte)uVar4) {
          if (bVar1 == 0) {
            return 0;
          }
          bVar1 = (byte)(uVar2 >> 8);
          bVar3 = (byte)(uVar4 >> 8);
          bVar5 = bVar1 < bVar3;
          if (bVar1 == bVar3) {
            if (bVar1 == 0) {
              return 0;
            }
            bVar1 = (byte)(uVar2 >> 0x10);
            bVar3 = (byte)(uVar4 >> 0x10);
            bVar5 = bVar1 < bVar3;
            if (bVar1 == bVar3) {
              if (bVar1 == 0) {
                return 0;
              }
              bVar5 = (byte)(uVar2 >> 0x18) < (byte)(uVar4 >> 0x18);
            }
          }
        }
        return -(uint)bVar5 | 1;
      }
      if ((uVar2 + 0xfefefeff & ~uVar4 & 0x80808080) != 0) {
        return 0;
      }
      uVar2 = *(uint *)((int)str1 + 4);
      uVar4 = *(uint *)((int)str2 + 4);
      if (uVar4 != uVar2) goto LAB_00564a43;
      if ((uVar2 + 0xfefefeff & ~uVar4 & 0x80808080) != 0) {
        return 0;
      }
      uVar2 = *(uint *)((int)str1 + 8);
      uVar4 = *(uint *)((int)str2 + 8);
      if (uVar4 != uVar2) goto LAB_00564a43;
      if ((uVar2 + 0xfefefeff & ~uVar4 & 0x80808080) != 0) {
        return 0;
      }
      uVar2 = *(uint *)((int)str1 + 0xc);
      uVar4 = *(uint *)((int)str2 + 0xc);
      if (uVar4 != uVar2) goto LAB_00564a43;
      str1 = (char *)((int)str1 + 0x10);
      str2 = (char *)((int)str2 + 0x10);
    } while ((uVar2 + 0xfefefeff & ~uVar4 & 0x80808080) == 0);
  }
  return 0;
}
