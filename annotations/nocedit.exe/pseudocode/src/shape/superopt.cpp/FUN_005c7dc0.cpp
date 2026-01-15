// Name: shape_superopt.cpp_FUN_005c7dc0
// Address: 005c7dc0
// Address Range: [[005c7dc0, 005c7fac]]
// Convention: unknown
// Signature: undefined shape_superopt.cpp_FUN_005c7dc0()

#include "nocturne.h"

void shape_superopt_cpp_FUN_005c7dc0(void)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  void *dest;
  uint *puVar5;
  int in_stack_00000004;
  uint *local_38;
  uint *local_34;
  uint local_2c;
  void *local_20;
  uint local_18;
  
  do {
    iVar1 = *(int *)(in_stack_00000004 + 0x30);
    local_2c = 0;
    bVar2 = true;
    if (*(int *)(in_stack_00000004 + 0x2c) != 0) {
      local_38 = (uint *)(iVar1 + 0x10);
      local_34 = (uint *)(iVar1 + 0x28);
      do {
        if (!bVar2) break;
        local_18 = local_2c + 1;
        if (local_18 < *(uint *)(in_stack_00000004 + 0x2c)) {
          iVar3 = local_18 * 0x60;
          puVar5 = (uint *)(iVar3 + 0x10 + iVar1);
          dest = (void *)(iVar1 + iVar3);
          local_20 = (void *)(iVar3 + 0x60 + iVar1);
          iVar3 = iVar1 + local_2c * 0x60;
          do {
            if (!bVar2) break;
            iVar4 = shape_superopt_cpp_FUN_005c7fb0();
            if (iVar4 != 0) {
              if (((*(double *)(iVar3 + 0x28) == *(double *)((int)dest + 0x10)) &&
                  (*(double *)(iVar3 + 0x30) == *(double *)((int)dest + 0x18))) &&
                 (*(double *)(iVar3 + 0x38) == *(double *)((int)dest + 0x20))) {
                *local_34 = *(uint *)((int)dest + 0x28);
                local_34[1] = *(uint *)((int)dest + 0x2c);
                local_34[2] = *(uint *)((int)dest + 0x30);
                local_34[3] = *(uint *)((int)dest + 0x34);
                *(ulonglong *)(local_34 + 4) = *(ulonglong *)((int)dest + 0x38);
                local_34[10] = *(uint *)((int)dest + 0x50);
                local_34[0xb] = *(uint *)((int)dest + 0x54);
                local_34[0xc] = *(uint *)((int)dest + 0x58);
                local_34[0xd] = *(uint *)((int)dest + 0x5c);
              }
              else {
                *local_38 = *puVar5;
                local_38[1] = puVar5[1];
                local_38[2] = puVar5[2];
                local_38[3] = puVar5[3];
                local_38[4] = puVar5[4];
                local_38[5] = puVar5[5];
                local_38[0xc] = puVar5[0xc];
                local_38[0xd] = puVar5[0xd];
                local_38[0xe] = puVar5[0xe];
                local_38[0xf] = puVar5[0xf];
              }
              crt_string_c_memmove_FUN_005fe5e0
                        (dest,local_20,((*(int *)(in_stack_00000004 + 0x2c) - local_18) + -1) * 0x60
                        );
              bVar2 = false;
              *(int *)(in_stack_00000004 + 0x2c) = *(int *)(in_stack_00000004 + 0x2c) + -1;
            }
            puVar5 = puVar5 + 0x18;
            dest = (void *)((int)dest + 0x60);
            local_20 = (void *)((int)local_20 + 0x60);
            local_18 = local_18 + 1;
          } while (local_18 < *(uint *)(in_stack_00000004 + 0x2c));
        }
        local_38 = local_38 + 0x18;
        local_34 = local_34 + 0x18;
        local_2c = local_2c + 1;
      } while (local_2c < *(uint *)(in_stack_00000004 + 0x2c));
    }
    if (bVar2) {
      return;
    }
  } while( true );
}
