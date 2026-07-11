// Name: FUN_005649c0
// Address: 005649c0
// Address Range: [[005649c0, 00564a6b]]
// Convention: unknown
// Signature: ulonglong FUN_005649c0(uint *param_1,uint *param_2)

#include "nocturne.h"

ulonglong FUN_005649c0(uint *param_1,uint *param_2)

{
  byte bVar1;
  byte bVar3;
  uint uVar4;
  uint in_EDX;
  bool bVar5;
  uint uVar2;
  
  if (param_1 != param_2) {
    do {
      uVar2 = *param_1;
      uVar4 = *param_2;
      if (uVar4 != uVar2) {
LAB_00564a43:
        bVar1 = (byte)uVar2;
        bVar5 = bVar1 < (byte)uVar4;
        if (bVar1 == (byte)uVar4) {
          if (bVar1 == 0) break;
          bVar1 = (byte)(uVar2 >> 8);
          bVar3 = (byte)(uVar4 >> 8);
          bVar5 = bVar1 < bVar3;
          if (bVar1 == bVar3) {
            if (bVar1 == 0) break;
            bVar1 = (byte)(uVar2 >> 0x10);
            bVar3 = (byte)(uVar4 >> 0x10);
            bVar5 = bVar1 < bVar3;
            if (bVar1 == bVar3) {
              if (bVar1 == 0) break;
              bVar5 = (byte)(uVar2 >> 0x18) < (byte)(uVar4 >> 0x18);
            }
          }
        }
        return CONCAT44(in_EDX,-(uint)bVar5) | 1;
      }
      if ((uVar2 + 0xfefefeff & ~uVar4 & 0x80808080) != 0) break;
      uVar2 = param_1[1];
      uVar4 = param_2[1];
      if (uVar4 != uVar2) goto LAB_00564a43;
      if ((uVar2 + 0xfefefeff & ~uVar4 & 0x80808080) != 0) break;
      uVar2 = param_1[2];
      uVar4 = param_2[2];
      if (uVar4 != uVar2) goto LAB_00564a43;
      if ((uVar2 + 0xfefefeff & ~uVar4 & 0x80808080) != 0) break;
      uVar2 = param_1[3];
      uVar4 = param_2[3];
      if (uVar4 != uVar2) goto LAB_00564a43;
      param_1 = param_1 + 4;
      param_2 = param_2 + 4;
    } while ((uVar2 + 0xfefefeff & ~uVar4 & 0x80808080) == 0);
  }
  return (ulonglong)in_EDX << 0x20;
}
