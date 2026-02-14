// Name: shape_superopt.cpp_COptimize_FUN_005d7460
// Address: 005d7460
// Address Range: [[005d7460, 005d7688]]
// Convention: __cdecl
// Signature: void __cdecl shape_superopt_cpp_COptimize_FUN_005d7460(COptimize *this_ptr)

#include "nocturne.h"

void __cdecl shape_superopt_cpp_COptimize_FUN_005d7460(COptimize *this_ptr)

{
  double dVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint extraout_EDX;
  uint extraout_EDX_00;
  int iVar7;
  int iVar8;
  uint uVar9;
  int in_stack_00000008;
  int in_stack_0000000c;
  double dStack_40;
  uint local_30;
  int local_2c;
  uint uStack_24;
  int iStack_1c;
  int iStack_14;
  
  *(byte *)(in_stack_00000008 + 0x61) = *(byte *)(in_stack_00000008 + 0x61) | 0x20;
  dVar1 = this_ptr->unk2;
  do {
    local_30 = 0;
    bVar2 = true;
    if (*(int *)(in_stack_0000000c + 8) != 0) {
      local_2c = 0;
      do {
        iVar7 = local_2c + *(int *)(in_stack_0000000c + 0xc);
        if (((*(byte *)(iVar7 + 0x61) & 0x80) == 0) && ((*(byte *)(iVar7 + 0x61) & 0x20) != 0)) {
          uVar3 = (**(code **)(*(int *)(iVar7 + 100) + 0x84))(iVar7);
          uStack_24 = 0;
          if (*(int *)(in_stack_0000000c + 8) != 0) {
            iStack_1c = 0;
            do {
              iVar8 = *(int *)(in_stack_0000000c + 0xc) + iStack_1c;
              if ((((*(byte *)(iVar8 + 0x61) & 0xa0) == 0) &&
                  (*(int *)(iVar8 + 0x5c) == *(int *)(iVar7 + 0x5c))) &&
                 (1.0 - dVar1 <=
                  *(double *)(iVar8 + 0x50) * *(double *)(iVar7 + 0x50) +
                  *(double *)(iVar8 + 0x40) * *(double *)(iVar7 + 0x40) +
                  *(double *)(iVar8 + 0x48) * *(double *)(iVar7 + 0x48))) {
                uVar4 = (**(code **)(*(int *)(iVar8 + 100) + 0x84))(iVar8);
                dStack_40 = (double)CONCAT44(extraout_EDX_00,uVar4) -
                            (double)CONCAT44(extraout_EDX,uVar3);
                if (dStack_40 < 0.0) {
                  dStack_40 = -dStack_40;
                }
                if ((dStack_40 <= this_ptr->unk3) &&
                   (iVar5 = (**(code **)(*(int *)(iVar7 + 100) + 0x74))(iVar7,iVar8), iVar5 != 0)) {
                  uVar9 = 0;
                  if (*(int *)(in_stack_0000000c + 8) != 0) {
                    iStack_14 = 0;
                    do {
                      iVar5 = *(int *)(in_stack_0000000c + 0xc) + iStack_14;
                      if ((((*(byte *)(iVar5 + 0x61) & 0x80) == 0) &&
                          ((*(byte *)(iVar5 + 0x61) & 0x20) != 0)) &&
                         ((iVar6 = (**(code **)(*(int *)(iVar8 + 100) + 0x7c))(iVar8,iVar5),
                          iVar6 != 0 ||
                          ((iVar6 = (**(code **)(*(int *)(iVar8 + 100) + 0x78))(iVar8,iVar5),
                           iVar6 != 0 ||
                           (iVar5 = (**(code **)(*(int *)(iVar8 + 100) + 0x80))(iVar8,iVar5),
                           iVar5 != 0)))))) break;
                      iStack_14 = iStack_14 + 0x68;
                      uVar9 = uVar9 + 1;
                    } while (uVar9 < *(uint *)(in_stack_0000000c + 8));
                  }
                  if (uVar9 == *(uint *)(in_stack_0000000c + 8)) {
                    bVar2 = false;
                    *(byte *)(iVar8 + 0x61) = *(byte *)(iVar8 + 0x61) | 0x20;
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
    if (bVar2) {
      return;
    }
  } while( true );
}
