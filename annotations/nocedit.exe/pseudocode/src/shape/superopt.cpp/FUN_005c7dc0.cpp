// Name: shape_superopt.cpp_FUN_005c7dc0
// Address: 005c7dc0
// Address Range: [[005c7dc0, 005c7fac]]
// Convention: unknown
// Signature: undefined shape_superopt.cpp_FUN_005c7dc0()

#include "nocturne.h"

void shape_superopt_cpp_FUN_005c7dc0(void)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  uint *n;
  void *dest;
  uint *unaff_EBP;
  uint *puVar4;
  int in_stack_00000004;
  int local_34;
  uint local_2c;
  void *local_1c;
  double *local_18;
  
  iVar1 = *(int *)(in_stack_00000004 + 0x30);
  local_2c = 0;
  if (*(int *)(in_stack_00000004 + 0x2c) != 0) {
    puVar2 = (uint *)(iVar1 + 0x10);
    local_34 = iVar1 + 0x28;
    do {
      local_18 = (double *)(local_2c + 1);
      n = puVar2;
      if (local_18 < *(double **)(in_stack_00000004 + 0x2c)) {
        puVar4 = (uint *)((int)local_18 * 0x60 + 0x10 + iVar1);
        dest = (void *)(iVar1 + (int)local_18 * 0x60);
        local_1c = (void *)(iVar1 + local_2c * 0x60 + 0x28);
        do {
          iVar3 = shape_superopt_cpp_FUN_005c7fb0();
          if (iVar3 != 0) {
            if (((*local_18 == *(double *)((int)dest + 0x10)) &&
                (local_18[1] == *(double *)((int)dest + 0x18))) &&
               (local_18[2] == *(double *)((int)dest + 0x20))) {
              *unaff_EBP = *(uint *)((int)dest + 0x28);
              unaff_EBP[1] = *(uint *)((int)dest + 0x2c);
              unaff_EBP[2] = *(uint *)((int)dest + 0x30);
              unaff_EBP[3] = *(uint *)((int)dest + 0x34);
              *(ulonglong *)(unaff_EBP + 4) = *(ulonglong *)((int)dest + 0x38);
              unaff_EBP[10] = *(uint *)((int)dest + 0x50);
              unaff_EBP[0xb] = *(uint *)((int)dest + 0x54);
              unaff_EBP[0xc] = *(uint *)((int)dest + 0x58);
              unaff_EBP[0xd] = *(uint *)((int)dest + 0x5c);
            }
            else {
              *puVar2 = *puVar4;
              puVar2[1] = puVar4[1];
              puVar2[2] = puVar4[2];
              puVar2[3] = puVar4[3];
              puVar2[4] = puVar4[4];
              puVar2[5] = puVar4[5];
              puVar2[0xc] = puVar4[0xc];
              puVar2[0xd] = puVar4[0xd];
              puVar2[0xe] = puVar4[0xe];
              puVar2[0xf] = puVar4[0xf];
            }
            n = (uint *)(((*(int *)(in_stack_00000004 + 0x2c) - local_34) + -1) * 0x60);
            crt_string_c_memmove_FUN_005fe5e0(dest,local_1c,(SIZE_T)n);
            local_1c = (void *)0x0;
            *(int *)(in_stack_00000004 + 0x2c) = *(int *)(in_stack_00000004 + 0x2c) + -1;
          }
          puVar4 = puVar4 + 0x18;
          dest = (void *)((int)dest + 0x60);
          local_18 = (double *)((int)local_18 + 1);
        } while (local_18 < *(double **)(in_stack_00000004 + 0x2c));
      }
      puVar2 = n + 0x18;
      local_34 = local_34 + 0x60;
      local_2c = local_2c + 1;
    } while (local_2c < *(uint *)(in_stack_00000004 + 0x2c));
  }
  return;
}
