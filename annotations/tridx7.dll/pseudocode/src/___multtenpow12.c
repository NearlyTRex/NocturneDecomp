// Name: ___multtenpow12
// Address: 1000eba0
// Address Range: [[1000eba0, 1000ec1a]]
// Convention: unknown
// Signature: void ___multtenpow12(undefined2 *param_1,uint param_2,int param_3)

#include "nocturne.h"

/* Library Function - Single Match
void ___multtenpow12(ushort *param_1,uint param_2,int param_3)

{
  byte **ppuVar1;
  uint uVar2;
  byte **ppuVar3;
  byte **ppuVar4;
  uint uVar5;
  ushort local_c;
  uint uStack_a;
  ushort uStack_6;
  byte *local_4;
  
  ppuVar4 = &PTR_s_M_d_yy_10012d4c_10018200;
  if (param_2 != 0) {
    if ((int)param_2 < 0) {
      param_2 = -param_2;
      ppuVar4 = (byte **)&DAT_10018360;
    }
    if (param_3 == 0) {
      *param_1 = 0;
    }
    while (param_2 != 0) {
      ppuVar4 = ppuVar4 + 0x15;
      uVar5 = (int)param_2 >> 3;
      uVar2 = param_2 & 7;
      param_2 = uVar5;
      if (uVar2 != 0) {
        ppuVar1 = ppuVar4 + uVar2 * 3;
        ppuVar3 = ppuVar1;
        if (0x7fff < *(ushort *)ppuVar1) {
          ppuVar3 = (byte **)&local_c;
          local_c = SUB42(*ppuVar1,0);
          uStack_a._0_2_ = (ushort)((uint)*ppuVar1 >> 0x10);
          uStack_a._2_2_ = SUB42(ppuVar1[1],0);
          uStack_6 = (ushort)((uint)ppuVar1[1] >> 0x10);
          local_4 = ppuVar1[2];
          uStack_a = CONCAT22(uStack_a._2_2_,(ushort)uStack_a) + -1;
        }
        FUN_1000e8f0(param_1,ppuVar3);
      }
    }
  }
  return;
}
