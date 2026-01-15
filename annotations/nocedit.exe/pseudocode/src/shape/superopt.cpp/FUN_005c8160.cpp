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
  int iVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int *src;
  int *dest;
  uint uVar7;
  int in_stack_00000004;
  int *local_28;
  uint local_14;
  
  piVar1 = *(int **)(in_stack_00000004 + 0x30);
  do {
    bVar4 = true;
    local_14 = 0;
    local_28 = piVar1;
    if (*(int *)(in_stack_00000004 + 0x2c) != 0) {
      do {
        if (!bVar4) break;
        iVar2 = *local_28;
        iVar3 = local_28[1];
        uVar7 = local_14 + 1;
        if (uVar7 < *(uint *)(in_stack_00000004 + 0x2c)) {
          iVar5 = uVar7 * 0x18;
          dest = piVar1 + uVar7 * 0x18;
          src = piVar1 + uVar7 * 0x18 + 0x18;
          do {
            if (!bVar4) break;
            if ((*dest == iVar3) && (dest[1] == iVar2)) {
              crt_string_c_memmove_FUN_005fe5e0
                        (dest,src,((*(int *)(in_stack_00000004 + 0x2c) - uVar7) + -1) * 0x60);
              iVar6 = *(int *)(in_stack_00000004 + 0x2c) + -1;
              *(int *)(in_stack_00000004 + 0x2c) = iVar6;
              crt_string_c_memmove_FUN_005fe5e0
                        (local_28,piVar1 + iVar5,((iVar6 - local_14) + -1) * 0x60);
              bVar4 = false;
              *(int *)(in_stack_00000004 + 0x2c) = *(int *)(in_stack_00000004 + 0x2c) + -1;
            }
            dest = dest + 0x18;
            uVar7 = uVar7 + 1;
            src = src + 0x18;
          } while (uVar7 < *(uint *)(in_stack_00000004 + 0x2c));
        }
        local_14 = local_14 + 1;
        local_28 = local_28 + 0x18;
      } while (local_14 < *(uint *)(in_stack_00000004 + 0x2c));
    }
    if (bVar4) {
      return;
    }
  } while( true );
}
