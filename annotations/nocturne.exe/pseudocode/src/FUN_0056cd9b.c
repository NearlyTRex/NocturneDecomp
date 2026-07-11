// Name: FUN_0056cd9b
// Address: 0056cd9b
// Address Range: [[0056cd9b, 0056ce56]]
// Convention: unknown
// Signature: int FUN_0056cd9b(int param_1,undefined4 param_2,uint param_3,undefined4 param_4)

#include "nocturne.h"

int FUN_0056cd9b(int param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x2c) == -1) {
    if ((param_3 & 8) != 0) {
      param_3 = param_3 | 2;
    }
    if (((param_3 & 2) != 0) && ((param_3 & 0xd) == 0)) {
      param_3 = param_3 | 0x10;
    }
    if ((((param_3 & 0x100) == 0) || ((param_3 & 0x80) == 0)) &&
       (((param_3 & 0x40) == 0 || ((param_3 & 0x20) == 0)))) {
      iVar1 = FUN_00570ad0(param_2,&param_3,param_4);
      *(int *)(param_1 + 0x2c) = iVar1;
      if (-1 < iVar1) {
        *(uint *)(param_1 + 0x30) = param_3;
        *(byte *)(param_1 + 0x39) = *(byte *)(param_1 + 0x39) & 0xfe;
        if ((param_3 & 4) != 0) {
          (**(code **)(*(int *)(param_1 + 0x28) + 0x18))(param_1,0,2,param_3);
        }
        return param_1;
      }
      *(uint *)(param_1 + 0x2c) = 0xffffffff;
    }
  }
  return 0;
}
