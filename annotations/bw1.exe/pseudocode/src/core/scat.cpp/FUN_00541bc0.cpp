// Name: core_scat.cpp_FUN_00541bc0
// Address: 00541bc0
// Address Range: [[00541bc0, 00541c6b]]
// Convention: unknown
// Signature: undefined4 core_scat_cpp_FUN_00541bc0(CCharacter *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_scat_cpp_FUN_00541bc0(CCharacter *param_1)

{
  int iVar1;
  uint uVar2;
  float fVar3;
  
  iVar1 = core_charactr_cpp_FUN_0042f240(param_1);
  uVar2 = 0;
  if (iVar1 != 0) {
    iVar1 = *(int *)&param_1[2].field_0x7c20;
    if (iVar1 != 0) {
      (**(code **)(*(int *)(iVar1 + 0x154) + 0x10))(iVar1);
      uVar2 = 0;
      if (*(int *)&param_1[2].field_0x7c20 != 0) {
        switch(*(uint *)(*(int *)&param_1[2].field_0x7c20 + 0x2e0)) {
        default:
          uVar2 = 2;
          break;
        case 8:
          uVar2 = 0;
        }
      }
      fVar3 = (float)core_charactr_cpp_FUN_00434590(param_1,uVar2);
      if ((float)_DAT_005ede97 < fVar3) {
        (**(code **)(*(int *)(*(int *)&param_1[2].field_0x7c20 + 0x154) + 0xf0))
                  (*(int *)&param_1[2].field_0x7c20);
        return 1;
      }
      return 1;
    }
    uVar2 = 1;
  }
  return uVar2;
}
