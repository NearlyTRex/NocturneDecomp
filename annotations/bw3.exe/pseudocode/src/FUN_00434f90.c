// Name: FUN_00434f90
// Address: 00434f90
// Address Range: [[00434f90, 00435003]]
// Convention: unknown
// Signature: undefined8 FUN_00434f90(undefined4 param_1,byte *param_2,uint param_3,int param_4)

#include "nocturne.h"

ulonglong FUN_00434f90(uint param_1,byte *param_2,uint param_3,int param_4)

{
  byte *pbVar1;
  uint uVar2;
  byte abStack_104 [256];
  
  pbVar1 = (byte *)FUN_00435010(param_1,abStack_104);
  if ((-1 < param_4) && (param_4 < 0x100)) {
    abStack_104[param_4] = (byte)param_4;
  }
  uVar2 = 0;
  if (param_3 != 0) {
    do {
      pbVar1 = param_2 + 1;
      uVar2 = uVar2 + 1;
      *param_2 = abStack_104[*param_2];
      param_2 = pbVar1;
    } while (uVar2 < param_3);
  }
  return CONCAT44(uVar2,pbVar1);
}
