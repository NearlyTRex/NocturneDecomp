// Name: shape_superopt.cpp_FUN_005c8160
// Address: 005c8160
// Address Range: [[005c8160, 005c8273]]
// Convention: unknown
// Signature: undefined shape_superopt.cpp_FUN_005c8160()

#include "nocturne.h"

void shape_superopt_cpp_FUN_005c8160(void)

{
  int *piVar1;
  int iVar2;
  void *dest;
  bool bVar3;
  int iVar4;
  int unaff_EBP;
  int *src;
  int *dest_00;
  uint uVar5;
  int in_stack_00000004;
  int *local_28;
  uint local_14;
  
  piVar1 = *(int **)(in_stack_00000004 + 0x30);
  do {
    bVar3 = true;
    local_14 = 0;
    local_28 = piVar1;
    if (*(int *)(in_stack_00000004 + 0x2c) != 0) {
      do {
        if (!bVar3) break;
        iVar2 = *local_28;
        dest = (void *)local_28[1];
        uVar5 = local_14 + 1;
        if (uVar5 < *(uint *)(in_stack_00000004 + 0x2c)) {
          dest_00 = piVar1 + uVar5 * 0x18;
          src = piVar1 + uVar5 * 0x18 + 0x18;
          do {
            if (!bVar3) break;
            if (((void *)*dest_00 == dest) && (dest_00[1] == iVar2)) {
              crt_string_c_memmove_FUN_005fe5e0
                        (dest_00,src,((*(int *)(in_stack_00000004 + 0x2c) - uVar5) + -1) * 0x60);
              iVar4 = *(int *)(in_stack_00000004 + 0x2c) + -1;
              *(int *)(in_stack_00000004 + 0x2c) = iVar4;
              crt_string_c_memmove_FUN_005fe5e0(dest,local_28,((iVar4 - unaff_EBP) + -1) * 0x60);
              bVar3 = false;
              *(int *)(in_stack_00000004 + 0x2c) = *(int *)(in_stack_00000004 + 0x2c) + -1;
            }
            dest_00 = dest_00 + 0x18;
            uVar5 = uVar5 + 1;
            src = src + 0x18;
          } while (uVar5 < *(uint *)(in_stack_00000004 + 0x2c));
        }
        local_14 = local_14 + 1;
        local_28 = local_28 + 0x18;
      } while (local_14 < *(uint *)(in_stack_00000004 + 0x2c));
    }
    if (bVar3) {
      return;
    }
  } while( true );
}
