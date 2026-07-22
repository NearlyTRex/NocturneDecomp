// Name: engine_3d.c_FUN_00404680
// Address: 00404680
// Address Range: [[00404680, 0040470d]]
// Convention: unknown
// Signature: int engine_3d_c_FUN_00404680(int param_1,int param_2)

#include "nocturne.h"

int engine_3d_c_FUN_00404680(int param_1,int param_2)

{
  byte uVar1;
  int iVar2;
  
  if (-1 < param_1) {
    iVar2 = *(int *)(&DAT_005acbc4 + param_1 * 4) * 3;
    uVar1 = *(byte *)
             ((byte)(&DAT_01bf7720)
                    [(uint)(*(byte *)(iVar2 + 0x1c00649) >> 3) * 0x20 +
                     (uint)((byte)(&DAT_01c00648)[iVar2] >> 3) * 0x400 +
                     (uint)(*(byte *)(iVar2 + 0x1c0064a) >> 3)] + 0x1bf5520 + (param_2 >> 8) * 0x100
             );
    return CONCAT13(uVar1,CONCAT12(uVar1,CONCAT11(uVar1,uVar1)));
  }
  return param_1 * -0x1010101;
}
