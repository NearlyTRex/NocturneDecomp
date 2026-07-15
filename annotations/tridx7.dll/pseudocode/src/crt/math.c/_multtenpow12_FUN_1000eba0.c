// Name: crt_math.c__multtenpow12_FUN_1000eba0
// Address: 1000eba0
// Address Range: [[1000eba0, 1000ec1a]]
// Convention: __cdecl
// Signature: void __cdecl crt_math_c__multtenpow12_FUN_1000eba0(_LDBL12 *ld12,uint pow,int flag)

#include "nocturne.h"

void __cdecl _multtenpow12(_LDBL12 *ld12,uint pow,int flag)

{
  _LDBL12 *p_Var1;
  uint uVar2;
  _LDBL12 *b;
  byte **ppuVar3;
  uint uVar4;
  _LDBL12 local_c;
  
  ppuVar3 = &PTR_s_M_d_yy_10012d4c_10018200;
  if (pow != 0) {
    if ((int)pow < 0) {
      pow = -pow;
      ppuVar3 = (byte **)&DAT_10018360;
    }
    if (flag == 0) {
      ld12->ld12[0] = '\0';
      ld12->ld12[1] = '\0';
    }
    while (pow != 0) {
      ppuVar3 = ppuVar3 + 0x15;
      uVar4 = (int)pow >> 3;
      uVar2 = pow & 7;
      pow = uVar4;
      if (uVar2 != 0) {
        p_Var1 = (_LDBL12 *)(ppuVar3 + uVar2 * 3);
        b = p_Var1;
        if (0x7fff < *(ushort *)p_Var1->ld12) {
          b = &local_c;
          local_c.ld12._0_2_ = SUB42(*(uint *)p_Var1->ld12,0);
          local_c.ld12._2_2_ = SUB42((uint)*(uint *)p_Var1->ld12 >> 0x10,0);
          local_c.ld12._4_2_ = SUB42(*(uint *)(p_Var1->ld12 + 4),0);
          local_c.ld12._6_2_ = SUB42((uint)*(uint *)(p_Var1->ld12 + 4) >> 0x10,0);
          local_c.ld12._8_4_ = *(uint *)(p_Var1->ld12 + 8);
          local_c.ld12._2_4_ = CONCAT22(local_c.ld12._4_2_,local_c.ld12._2_2_) + -1;
        }
        __multtwelve(ld12,b);
      }
    }
  }
  return;
}
