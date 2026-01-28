// Name: core_setedit.cpp_FUN_0057e430
// Address: 0057e430
// Address Range: [[0057e430, 0057e77b]]
// Convention: unknown
// Signature: void core_setedit_cpp_FUN_0057e430(void)

#include "nocturne.h"

/* Signature: byte core_setedit.cpp_FUN_0057e430(uint param_1, uint param_2) */

void core_setedit_cpp_FUN_0057e430(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *in_stack_00000004;
  int in_stack_00000008;
  int *local_20;
  int *local_1c;
  int *local_18;
  int local_10;
  int *local_c;
  int local_8;
  
  if ((-1 < in_stack_00000008) && (in_stack_00000008 < *in_stack_00000004)) {
    iVar2 = *in_stack_00000004 + -1;
    local_8 = in_stack_00000008;
    *in_stack_00000004 = iVar2;
    if (in_stack_00000008 < iVar2) {
      local_1c = in_stack_00000004 + in_stack_00000008 * 0x69 + 0xaa;
      local_18 = in_stack_00000004 + in_stack_00000008 * 0x69 + 0x41;
      local_10 = in_stack_00000008 << 4;
      local_c = in_stack_00000004 + in_stack_00000008 * 0x69 + 0x6a;
      local_20 = in_stack_00000004 + in_stack_00000008 * 0x69 + 1;
      do {
        piVar4 = local_c;
        piVar5 = local_20;
        for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
          *piVar5 = *piVar4;
          piVar4 = piVar4 + 1;
          piVar5 = piVar5 + 1;
        }
        if (local_1c != local_18) {
          *local_18 = *local_1c;
          local_18[1] = local_1c[1];
          local_18[2] = local_1c[2];
        }
        if (local_20 + 0x43 != local_c + 0x43) {
          local_20[0x43] = local_c[0x43];
          local_20[0x44] = local_c[0x44];
          local_20[0x45] = local_c[0x45];
        }
        local_20[0x46] = local_c[0x46];
        local_20[0x47] = local_c[0x47];
        local_20[0x48] = local_c[0x48];
        local_20[0x49] = local_c[0x49];
        local_20[0x4a] = local_c[0x4a];
        local_20[0x4b] = local_c[0x4b];
        local_20[0x4c] = local_c[0x4c];
        local_20[0x4d] = local_c[0x4d];
        local_20[0x4e] = local_c[0x4e];
        local_20[0x4f] = local_c[0x4f];
        local_20[0x50] = local_c[0x50];
        local_20[0x51] = local_c[0x51];
        local_20[0x52] = local_c[0x52];
        local_20[0x53] = local_c[0x53];
        local_20[0x54] = local_c[0x54];
        local_20[0x55] = local_c[0x55];
        local_20[0x56] = local_c[0x56];
        local_20[0x57] = local_c[0x57];
        if (local_20 + 0x58 != local_c + 0x58) {
          local_20[0x58] = local_c[0x58];
          local_20[0x59] = local_c[0x59];
          local_20[0x5a] = local_c[0x5a];
        }
        local_20[0x5b] = local_c[0x5b];
        local_20[0x5c] = local_c[0x5c];
        local_20[0x5d] = local_c[0x5d];
        local_20[0x5e] = local_c[0x5e];
        if (local_20 + 0x5f != local_c + 0x5f) {
          local_20[0x5f] = local_c[0x5f];
          local_20[0x60] = local_c[0x60];
          local_20[0x61] = local_c[0x61];
        }
        if (local_20 + 0x62 != local_c + 0x62) {
          local_20[0x62] = local_c[0x62];
          local_20[99] = local_c[99];
          local_20[100] = local_c[100];
        }
        local_20[0x65] = local_c[0x65];
        local_20[0x66] = local_c[0x66];
        local_20[0x67] = local_c[0x67];
        local_20[0x68] = local_c[0x68];
        iVar2 = 0;
        if (0 < in_stack_00000004[0x668b]) {
          iVar3 = (int)in_stack_00000004 + local_8 + 0x19a30;
          iVar1 = (int)in_stack_00000004 + local_10 + 0x19a30;
          do {
            *(byte *)(iVar3 + 0x128) = *(byte *)(iVar3 + 0x129);
            *(uint *)(iVar1 + 0x224) = *(uint *)(iVar1 + 0x234);
            *(uint *)(iVar1 + 0x228) = *(uint *)(iVar1 + 0x238);
            *(uint *)(iVar1 + 0x22c) = *(uint *)(iVar1 + 0x23c);
            *(uint *)(iVar1 + 0x230) = *(uint *)(iVar1 + 0x240);
            iVar2 = iVar2 + 1;
            iVar3 = iVar3 + 0x1898;
            iVar1 = iVar1 + 0x1898;
          } while (iVar2 < in_stack_00000004[0x668b]);
        }
        local_1c = local_1c + 0x69;
        local_18 = local_18 + 0x69;
        local_c = local_c + 0x69;
        local_20 = local_20 + 0x69;
        local_10 = local_10 + 0x10;
        local_8 = local_8 + 1;
      } while (local_8 < *in_stack_00000004);
    }
    in_stack_00000004[*in_stack_00000004 * 0x69 + 0x67] = 0;
    in_stack_00000004[*in_stack_00000004 * 0x69 + 0x66] = 0;
  }
  return;
}
