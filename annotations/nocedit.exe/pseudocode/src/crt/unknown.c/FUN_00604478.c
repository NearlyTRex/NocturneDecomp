// Name: crt_unknown.c_FUN_00604478
// Address: 00604478
// Address Range: [[00604478, 00604778]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_00604478()

#include "nocturne.h"

/* Signature: byte FUN_00604478(uint param_1, uint param_2, uint param_3,
   uint param_4, uint param_5) */

void crt_unknown_c_FUN_00604478(void)

{
  ulong uVar1;
  byte *puVar2;
  char *pcVar3;
  ulong uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  uint *puVar10;
  ushort in_ES;
  byte bVar11;
  int *in_stack_00000004;
  uint *in_stack_00000008;
  ulong in_stack_0000000c;
  char cStack00000010;
  uint *in_stack_00000014;
  ulong local_14;
  
  bVar11 = 0;
  iVar8 = in_stack_00000004[1];
  if (iVar8 < 1) {
    uVar1 = *in_stack_00000004 + iVar8;
  }
  else {
    uVar1 = (*in_stack_00000004 - iVar8) + 1;
  }
  if ((*(byte *)(in_stack_00000004 + 2) & 4) != 0) {
    if ((int)in_stack_0000000c < (int)uVar1) {
      uVar1 = in_stack_0000000c;
    }
    uVar1 = uVar1 - 1;
    if ((int)uVar1 < 0) {
      uVar1 = 0;
    }
  }
  local_14 = in_stack_00000004[1];
  if ((int)local_14 < 1) {
    local_14 = 1;
    *(byte *)in_stack_00000014 = 0x30;
  }
  else {
    if ((int)in_stack_0000000c < (int)local_14) {
      local_14 = in_stack_0000000c;
    }
    puVar9 = in_stack_00000008;
    puVar10 = in_stack_00000014;
    for (uVar7 = local_14 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar10 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar10 = puVar10 + 1;
    }
    for (uVar7 = local_14 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(byte *)puVar10 = *(byte *)puVar9;
      puVar9 = (uint *)((int)puVar9 + 1);
      puVar10 = (uint *)((int)puVar10 + 1);
    }
    in_stack_00000008 = (uint *)((int)in_stack_00000008 + local_14);
    in_stack_0000000c = in_stack_0000000c - local_14;
    if ((int)local_14 < in_stack_00000004[1]) {
      uVar4 = in_stack_00000004[1] - local_14;
      crt_memory_c_memset_FUN_005fde40((byte *)((int)in_stack_00000014 + local_14),0x30,uVar4)
      ;
      local_14 = local_14 + uVar4;
    }
  }
  in_stack_00000004[6] = local_14;
  uVar7 = local_14;
  if (((*(byte *)(in_stack_00000004 + 2) & 8) == 0) &&
     ((0 < (int)uVar1 || ((*(byte *)(in_stack_00000004 + 2) & 0x10) != 0)))) {
    uVar7 = local_14 + 1;
    *(byte *)(local_14 + (int)in_stack_00000014) = 0x2e;
  }
  if (in_stack_00000004[1] < 0) {
    uVar4 = -in_stack_00000004[1];
    uVar1 = uVar4;
    crt_memory_c_memset_FUN_005fde40((byte *)((int)in_stack_00000014 + uVar7),0x30,uVar4);
    uVar7 = uVar7 + uVar4;
  }
  if (0 < (int)uVar1) {
    if ((int)uVar1 < (int)in_stack_0000000c) {
      in_stack_0000000c = uVar1;
    }
    if (in_stack_0000000c != 0) {
      uVar1 = CONCAT22 /* combine 2-byte values */((short)(uVar1 >> 0x10),in_ES);
      puVar9 = (uint *)((int)in_stack_00000014 + uVar7);
      for (uVar5 = in_stack_0000000c >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar9 = *in_stack_00000008;
        in_stack_00000008 = in_stack_00000008 + (uint)bVar11 * -2 + 1;
        puVar9 = puVar9 + (uint)bVar11 * -2 + 1;
      }
      for (uVar5 = in_stack_0000000c & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(byte *)puVar9 = *(byte *)in_stack_00000008;
        in_stack_00000008 = (uint *)((int)in_stack_00000008 + (uint)bVar11 * -2 + 1);
        puVar9 = (uint *)((int)puVar9 + (uint)bVar11 * -2 + 1);
      }
      uVar7 = uVar7 + in_stack_0000000c;
    }
    in_stack_00000004[7] = uVar7;
    in_stack_00000004[8] = uVar1 - in_stack_0000000c;
  }
  if (in_stack_00000004[3] != 0) {
    puVar2 = (byte *)(uVar7 + (int)in_stack_00000014);
    uVar7 = uVar7 + 1;
    *puVar2 = (char)in_stack_00000004[3];
  }
  iVar8 = uVar7 + 1;
  if (_cStack00000010 < 0) {
    _cStack00000010 = -_cStack00000010;
    *(byte *)(uVar7 + (int)in_stack_00000014) = 0x2d;
  }
  else {
    *(byte *)(uVar7 + (int)in_stack_00000014) = 0x2b;
  }
  iVar6 = in_stack_00000004[4];
  switch(iVar6) {
  case 0:
    if (_cStack00000010 < 1000) {
      iVar6 = 3;
      goto switchD_0060463b_default;
    }
    goto LAB_00604672;
  case 1:
    if (9 < _cStack00000010) {
      iVar6 = 2;
    }
  case 2:
    break;
  case 3:
    goto switchD_0060463b_caseD_3;
  default:
    goto switchD_0060463b_default;
  }
  if (99 < _cStack00000010) {
    iVar6 = 3;
  }
switchD_0060463b_caseD_3:
  if (999 < _cStack00000010) {
LAB_00604672:
    iVar6 = 4;
  }
switchD_0060463b_default:
  in_stack_00000004[4] = iVar6;
  if (3 < iVar6) {
    local_14._0_1_ = '\0';
    if (999 < _cStack00000010) {
      local_14._0_1_ = (char)(_cStack00000010 / 1000);
      _cStack00000010 = _cStack00000010 % 1000;
    }
    pcVar3 = (char *)(iVar8 + (int)in_stack_00000014);
    iVar8 = uVar7 + 2;
    *pcVar3 = (char)local_14 + '0';
  }
  if (2 < iVar6) {
    local_14._0_1_ = '\0';
    if (99 < _cStack00000010) {
      local_14._0_1_ = (char)(_cStack00000010 / 100);
      _cStack00000010 = _cStack00000010 % 100;
    }
    pcVar3 = (char *)(iVar8 + (int)in_stack_00000014);
    iVar8 = iVar8 + 1;
    *pcVar3 = (char)local_14 + '0';
  }
  if (1 < iVar6) {
    local_14._0_1_ = '\0';
    if (9 < _cStack00000010) {
      local_14._0_1_ = (char)(_cStack00000010 / 10);
      _cStack00000010 = _cStack00000010 % 10;
    }
    pcVar3 = (char *)(iVar8 + (int)in_stack_00000014);
    iVar8 = iVar8 + 1;
    *pcVar3 = (char)local_14 + '0';
  }
  *(char *)(iVar8 + (int)in_stack_00000014) = cStack00000010 + '0';
  in_stack_00000004[9] = (iVar8 + 1) - in_stack_00000004[7];
  *(byte *)(iVar8 + 1 + (int)in_stack_00000014) = 0;
  return;
}
