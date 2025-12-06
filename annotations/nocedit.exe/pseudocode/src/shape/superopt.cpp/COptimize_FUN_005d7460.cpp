// Name: shape_superopt.cpp_COptimize_FUN_005d7460
// Address: 005d7460
// Address Range: [[005d7460, 005d7688]]
// Convention: __cdecl
// Signature: void shape_superopt.cpp_COptimize_FUN_005d7460(COptimize * this_ptr)

#include "nocturne.h"

void __cdecl shape_superopt_cpp_COptimize_FUN_005d7460(COptimize *this_ptr)

{
  double dVar1;
  byte bVar2;
  double dVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int in_stack_00000008;
  int in_stack_0000000c;
  double dStack_40;
  uint local_30;
  int local_2c;
  uint uStack_24;
  int iStack_1c;
  int iStack_14;
  
  *(byte *)(in_stack_00000008 + 0x61) = *(byte *)(in_stack_00000008 + 0x61) | 0x20;
  dVar1 = this_ptr->field2_0x24;
  do {
    local_30 = 0;
    bVar4 = true;
    if (*(int *)(in_stack_0000000c + 8) != 0) {
      local_2c = 0;
      do {
        iVar6 = local_2c + *(int *)(in_stack_0000000c + 0xc);
        if (((*(byte *)(iVar6 + 0x61) & 0x80) == 0) && ((*(byte *)(iVar6 + 0x61) & 0x20) != 0)) {
          dVar3 = (double)(**(code **)(*(int *)(iVar6 + 100) + 0x84))();
          uStack_24 = 0;
          if (*(int *)(in_stack_0000000c + 8) != 0) {
            iStack_1c = 0;
            do {
              iVar7 = *(int *)(in_stack_0000000c + 0xc) + iStack_1c;
              if ((((*(byte *)(iVar7 + 0x61) & 0xa0) == 0) &&
                  (*(int *)(iVar7 + 0x5c) == *(int *)(iVar6 + 0x5c))) &&
                 (1.0 - dVar1 <=
                  *(double *)(iVar7 + 0x50) * *(double *)(iVar6 + 0x50) +
                  *(double *)(iVar7 + 0x40) * *(double *)(iVar6 + 0x40) +
                  *(double *)(iVar7 + 0x48) * *(double *)(iVar6 + 0x48))) {
                dStack_40 = (double)(**(code **)(*(int *)(iVar7 + 100) + 0x84))();
                dStack_40 = dStack_40 - dVar3;
                if (dStack_40 < 0.0) {
                  dStack_40 = -dStack_40;
                }
                if ((dStack_40 <= this_ptr->field3_0x2c) &&
                   (iVar5 = (**(code **)(*(int *)(iVar6 + 100) + 0x74))(), iVar5 != 0)) {
                  uVar8 = 0;
                  if (*(int *)(in_stack_0000000c + 8) != 0) {
                    iStack_14 = 0;
                    do {
                      bVar2 = *(byte *)(*(int *)(in_stack_0000000c + 0xc) + iStack_14 + 0x61);
                      if ((((bVar2 & 0x80) == 0) && ((bVar2 & 0x20) != 0)) &&
                         ((iVar5 = (**(code **)(*(int *)(iVar7 + 100) + 0x7c))(), iVar5 != 0 ||
                          ((iVar5 = (**(code **)(*(int *)(iVar7 + 100) + 0x78))(), iVar5 != 0 ||
                           (iVar5 = (**(code **)(*(int *)(iVar7 + 100) + 0x80))(), iVar5 != 0))))))
                      break;
                      iStack_14 = iStack_14 + 0x68;
                      uVar8 = uVar8 + 1;
                    } while (uVar8 < *(uint *)(in_stack_0000000c + 8));
                  }
                  if (uVar8 == *(uint *)(in_stack_0000000c + 8)) {
                    bVar4 = false;
                    *(byte *)(iVar7 + 0x61) = *(byte *)(iVar7 + 0x61) | 0x20;
                  }
                }
              }
              uStack_24 = uStack_24 + 1;
              iStack_1c = iStack_1c + 0x68;
            } while (uStack_24 < *(uint *)(in_stack_0000000c + 8));
          }
        }
        local_2c = local_2c + 0x68;
        local_30 = local_30 + 1;
      } while (local_30 < *(uint *)(in_stack_0000000c + 8));
    }
    if (bVar4) {
      return;
    }
  } while( true );
}
