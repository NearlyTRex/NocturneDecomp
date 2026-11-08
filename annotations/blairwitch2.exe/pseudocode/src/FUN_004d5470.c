// Name: FUN_004d5470
// Address: 004d5470
// Address Range: [[004d5470, 004d55d2]]
// Convention: unknown
// Signature: void FUN_004d5470(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004d5470(int param_1,float param_2)

{
  float fVar1;
  uint uVar2;
  byte bVar3;
  uint auStackY_1808 [1519];
  byte *puVar4;
  uint local_2c;
  uint local_1c;
  
  bVar3 = 0;
  if (*(int *)(param_1 + 0x25660) != 0) {
    if (*(int *)(param_1 + 0x25640) == 0) {
      fVar1 = *(float *)(param_1 + 0x25668) - param_2 * (float)_DAT_005da856;
      *(float *)(param_1 + 0x25668) = fVar1;
      if (fVar1 < 0.0) {
        *(uint *)(param_1 + 0x25668) = 0;
      }
    }
    else {
      fVar1 = param_2 * (float)_DAT_005da856 + *(float *)(param_1 + 0x25668);
      *(float *)(param_1 + 0x25668) = fVar1;
      if (1.0 < fVar1) {
        *(uint *)(param_1 + 0x25668) = 0x3f800000;
      }
    }
    uVar2 = FUN_00503860(param_1 + 0x2b4,"shoot",1);
    uVar2 = FUN_00502f10(uVar2);
    FUN_00545a60(param_1 + 0x2b4,uVar2,0,*(uint *)(param_1 + 0x25668),_DAT_01cee0f4,
                 &LAB_00544cc0);
    *(float *)(param_1 + 0x2566c) =
         *(float *)(param_1 + 0x10a94) * _DAT_005da85e * (float)_DAT_005da856 * param_2 +
         *(float *)(param_1 + 0x2566c);
    if (*(int *)(param_1 + 0x2566c) < 0x3f490fdc) {
      if (*(float *)(param_1 + 0x2566c) < _DAT_005da862) {
        *(uint *)(param_1 + 0x2566c) = 0xbf490fdb;
      }
    }
    else {
      *(uint *)(param_1 + 0x2566c) = 0x3f490fdb;
    }
    FUN_00593fa0(*(uint *)(param_1 + 0x2566c));
    puVar4 = &LAB_00544cc0;
    local_1c = local_2c;
    *(uint *)((int)&stack0xffffffe8 + (uint)bVar3 * 0xfffffffe * 4) =
         *(uint *)(&stack0xffffffd8 + (uint)bVar3 * -8);
    uVar2 = _DAT_01cee0f4;
    *(uint *)(&stack0xffffffec + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
         *(uint *)(&stack0xffffffdc + (uint)bVar3 * -8 + (uint)bVar3 * -8);
    *(uint *)
     ((int)(&stack0xffffffec + (uint)bVar3 * -8 + (uint)bVar3 * -8) + ((uint)bVar3 * -2 + 1) * 4) =
         *(uint *)
          ((int)(&stack0xffffffdc + (uint)bVar3 * -8 + (uint)bVar3 * -8) +
          ((uint)bVar3 * -2 + 1) * 4);
    FUN_00546f40(param_1 + 0x2b4,&stack0xffffffe4,*(uint *)(param_1 + 0x25668),uVar2,puVar4);
  }
  return;
}
