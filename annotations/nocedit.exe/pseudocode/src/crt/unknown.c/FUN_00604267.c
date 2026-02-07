// Name: crt_unknown.c_FUN_00604267
// Address: 00604267
// Address Range: [[00604267, 0060445d]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_00604267(void)

#include "nocturne.h"

/* Signature: byte FUN_00604267(uint param_1, uint param_2, uint param_3,
   uint param_4, uint param_5) */

void FUN_00604267(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  uint *in_stack_00000004;
  char *in_stack_00000008;
  uint in_stack_0000000c;
  uint in_stack_00000010;
  char *in_stack_00000014;
  uint local_14;
  
  local_14 = *in_stack_00000004;
  uVar1 = in_stack_00000010 + 1;
  uVar3 = 0;
  if ((in_stack_00000004[2] & 4) != 0) {
    if (((int)in_stack_0000000c < (int)local_14) && ((in_stack_00000004[2] & 0x10) == 0)) {
      local_14 = in_stack_0000000c;
    }
    local_14 = local_14 - uVar1;
    if ((int)local_14 < 0) {
      local_14 = 0;
    }
  }
  if ((int)uVar1 < 1) {
    if ((in_stack_00000004[2] & 8) == 0) {
      *in_stack_00000014 = '0';
      uVar3 = 1;
      if ((0 < (int)local_14) || ((in_stack_00000004[2] & 0x10) != 0)) {
        uVar3 = 2;
        in_stack_00000014[1] = '.';
      }
    }
    in_stack_00000004[7] = uVar3;
    in_stack_00000010 = uVar1;
    if (-local_14 != uVar1 && (int)local_14 <= (int)-uVar1) {
      in_stack_00000010 = -local_14;
    }
    in_stack_00000004[6] = in_stack_00000010;
    local_14 = local_14 + in_stack_00000010;
    in_stack_00000004[8] = in_stack_00000010;
    in_stack_00000004[8] = -in_stack_00000010;
    if ((int)local_14 < (int)in_stack_0000000c) {
      in_stack_0000000c = local_14;
    }
    pcVar4 = in_stack_00000014 + uVar3;
    for (uVar1 = in_stack_0000000c >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(uint *)pcVar4 = *(uint *)in_stack_00000008;
      in_stack_00000008 = in_stack_00000008 + 4;
      pcVar4 = pcVar4 + 4;
    }
    for (uVar1 = in_stack_0000000c & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
      *pcVar4 = *in_stack_00000008;
      in_stack_00000008 = in_stack_00000008 + 1;
      pcVar4 = pcVar4 + 1;
    }
    in_stack_00000004[9] = in_stack_0000000c;
    local_14 = local_14 - in_stack_0000000c;
    uVar3 = uVar3 + in_stack_0000000c;
  }
  else {
    if ((int)uVar1 <= (int)in_stack_0000000c) {
      pcVar4 = in_stack_00000008;
      pcVar5 = in_stack_00000014;
      for (uVar3 = uVar1 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(uint *)pcVar5 = *(uint *)pcVar4;
        pcVar4 = pcVar4 + 4;
        pcVar5 = pcVar5 + 4;
      }
      for (uVar3 = uVar1 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *pcVar5 = *pcVar4;
        pcVar4 = pcVar4 + 1;
        pcVar5 = pcVar5 + 1;
      }
      in_stack_0000000c = in_stack_0000000c - uVar1;
      in_stack_00000004[6] = uVar1;
      uVar3 = uVar1;
      if ((in_stack_00000004[2] & 8) == 0) {
        if ((0 < (int)local_14) || ((in_stack_00000004[2] & 0x10) != 0)) {
          in_stack_00000014[uVar1] = '.';
          uVar3 = in_stack_00000010 + 2;
        }
      }
      else if (*in_stack_00000014 == '0') {
        in_stack_00000004[6] = 0;
      }
      if ((int)local_14 < (int)in_stack_0000000c) {
        in_stack_0000000c = local_14;
      }
      pcVar4 = in_stack_00000008 + uVar1;
      pcVar5 = in_stack_00000014 + uVar3;
      for (uVar2 = in_stack_0000000c >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(uint *)pcVar5 = *(uint *)pcVar4;
        pcVar4 = pcVar4 + 4;
        pcVar5 = pcVar5 + 4;
      }
      for (uVar1 = in_stack_0000000c & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
        *pcVar5 = *pcVar4;
        pcVar4 = pcVar4 + 1;
        pcVar5 = pcVar5 + 1;
      }
      uVar3 = uVar3 + in_stack_0000000c;
      in_stack_00000004[7] = uVar3;
      in_stack_00000004[8] = local_14 - in_stack_0000000c;
      goto LAB_00604458;
    }
    pcVar4 = in_stack_00000014;
    for (uVar3 = in_stack_0000000c >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(uint *)pcVar4 = *(uint *)in_stack_00000008;
      in_stack_00000008 = in_stack_00000008 + 4;
      pcVar4 = pcVar4 + 4;
    }
    for (uVar3 = in_stack_0000000c & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar4 = *in_stack_00000008;
      in_stack_00000008 = in_stack_00000008 + 1;
      pcVar4 = pcVar4 + 1;
    }
    in_stack_00000004[7] = in_stack_0000000c;
    in_stack_00000004[8] = uVar1 - in_stack_0000000c;
    in_stack_00000004[6] = uVar1;
    uVar3 = in_stack_0000000c;
    if (((in_stack_00000004[2] & 8) == 0) &&
       ((0 < (int)local_14 || ((in_stack_00000004[2] & 0x10) != 0)))) {
      in_stack_00000014[in_stack_0000000c] = '.';
      uVar3 = in_stack_0000000c + 1;
      in_stack_00000004[9] = 1;
    }
  }
  in_stack_00000004[10] = local_14;
LAB_00604458:
  in_stack_00000014[uVar3] = '\0';
  return;
}
