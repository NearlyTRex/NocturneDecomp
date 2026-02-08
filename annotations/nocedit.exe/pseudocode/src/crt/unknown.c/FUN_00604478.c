// Name: crt_unknown.c_FUN_00604478
// Address: 00604478
// Address Range: [[00604478, 00604778]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_00604478(void)

#include "nocturne.h"

void FUN_00604478(void)

{
  byte *puVar1;
  char *pcVar2;
  ulong uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  uint *puVar9;
  byte bVar10;
  int *in_stack_00000004;
  uint *in_stack_00000008;
  uint in_stack_0000000c;
  char cStack00000010;
  uint *in_stack_00000014;
  uint local_18;
  uint local_14;
  
  bVar10 = 0;
  iVar7 = in_stack_00000004[1];
  if (iVar7 < 1) {
    local_18 = *in_stack_00000004 + iVar7;
  }
  else {
    local_18 = (*in_stack_00000004 - iVar7) + 1;
  }
  if ((*(byte *)(in_stack_00000004 + 2) & 4) != 0) {
    if ((int)in_stack_0000000c < (int)local_18) {
      local_18 = in_stack_0000000c;
    }
    local_18 = local_18 - 1;
    if ((int)local_18 < 0) {
      local_18 = 0;
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
    puVar8 = in_stack_00000008;
    puVar9 = in_stack_00000014;
    for (uVar6 = local_14 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar9 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
    }
    for (uVar6 = local_14 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(byte *)puVar9 = *(byte *)puVar8;
      puVar8 = (uint *)((int)puVar8 + 1);
      puVar9 = (uint *)((int)puVar9 + 1);
    }
    in_stack_00000008 = (uint *)((int)in_stack_00000008 + local_14);
    in_stack_0000000c = in_stack_0000000c - local_14;
    if ((int)local_14 < in_stack_00000004[1]) {
      uVar3 = in_stack_00000004[1] - local_14;
      memset((byte *)((int)in_stack_00000014 + local_14),0x30,uVar3)
      ;
      local_14 = local_14 + uVar3;
    }
  }
  in_stack_00000004[6] = local_14;
  uVar6 = local_14;
  if (((*(byte *)(in_stack_00000004 + 2) & 8) == 0) &&
     ((0 < (int)local_18 || ((*(byte *)(in_stack_00000004 + 2) & 0x10) != 0)))) {
    uVar6 = local_14 + 1;
    *(byte *)(local_14 + (int)in_stack_00000014) = 0x2e;
  }
  if (in_stack_00000004[1] < 0) {
    uVar3 = -in_stack_00000004[1];
    memset((byte *)((int)in_stack_00000014 + uVar6),0x30,uVar3);
    uVar6 = uVar6 + uVar3;
  }
  if (0 < (int)local_18) {
    if ((int)local_18 < (int)in_stack_0000000c) {
      in_stack_0000000c = local_18;
    }
    if (in_stack_0000000c != 0) {
      puVar8 = (uint *)((int)in_stack_00000014 + uVar6);
      for (uVar4 = in_stack_0000000c >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar8 = *in_stack_00000008;
        in_stack_00000008 = in_stack_00000008 + (uint)bVar10 * -2 + 1;
        puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
      }
      for (uVar4 = in_stack_0000000c & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(byte *)puVar8 = *(byte *)in_stack_00000008;
        in_stack_00000008 = (uint *)((int)in_stack_00000008 + (uint)bVar10 * -2 + 1);
        puVar8 = (uint *)((int)puVar8 + (uint)bVar10 * -2 + 1);
      }
      uVar6 = uVar6 + in_stack_0000000c;
    }
    in_stack_00000004[7] = uVar6;
    in_stack_00000004[8] = local_18 - in_stack_0000000c;
  }
  if (in_stack_00000004[3] != 0) {
    puVar1 = (byte *)(uVar6 + (int)in_stack_00000014);
    uVar6 = uVar6 + 1;
    *puVar1 = (char)in_stack_00000004[3];
  }
  iVar7 = uVar6 + 1;
  if (_cStack00000010 < 0) {
    _cStack00000010 = -_cStack00000010;
    *(byte *)(uVar6 + (int)in_stack_00000014) = 0x2d;
  }
  else {
    *(byte *)(uVar6 + (int)in_stack_00000014) = 0x2b;
  }
  iVar5 = in_stack_00000004[4];
  switch(iVar5) {
  case 0:
    if (_cStack00000010 < 1000) {
      iVar5 = 3;
      goto switchD_0060463b_default;
    }
    goto LAB_00604672;
  case 1:
    if (9 < _cStack00000010) {
      iVar5 = 2;
    }
  case 2:
    break;
  case 3:
    goto switchD_0060463b_caseD_3;
  default:
    goto switchD_0060463b_default;
  }
  if (99 < _cStack00000010) {
    iVar5 = 3;
  }
switchD_0060463b_caseD_3:
  if (999 < _cStack00000010) {
LAB_00604672:
    iVar5 = 4;
  }
switchD_0060463b_default:
  in_stack_00000004[4] = iVar5;
  if (3 < iVar5) {
    local_14._0_1_ = '\0';
    if (999 < _cStack00000010) {
      local_14._0_1_ = (char)(_cStack00000010 / 1000);
      _cStack00000010 = _cStack00000010 % 1000;
    }
    pcVar2 = (char *)(iVar7 + (int)in_stack_00000014);
    iVar7 = uVar6 + 2;
    *pcVar2 = (char)local_14 + '0';
  }
  if (2 < iVar5) {
    local_14._0_1_ = '\0';
    if (99 < _cStack00000010) {
      local_14._0_1_ = (char)(_cStack00000010 / 100);
      _cStack00000010 = _cStack00000010 % 100;
    }
    pcVar2 = (char *)(iVar7 + (int)in_stack_00000014);
    iVar7 = iVar7 + 1;
    *pcVar2 = (char)local_14 + '0';
  }
  if (1 < iVar5) {
    local_14._0_1_ = '\0';
    if (9 < _cStack00000010) {
      local_14._0_1_ = (char)(_cStack00000010 / 10);
      _cStack00000010 = _cStack00000010 % 10;
    }
    pcVar2 = (char *)(iVar7 + (int)in_stack_00000014);
    iVar7 = iVar7 + 1;
    *pcVar2 = (char)local_14 + '0';
  }
  *(char *)(iVar7 + (int)in_stack_00000014) = cStack00000010 + '0';
  in_stack_00000004[9] = (iVar7 + 1) - in_stack_00000004[7];
  *(byte *)(iVar7 + 1 + (int)in_stack_00000014) = 0;
  return;
}
