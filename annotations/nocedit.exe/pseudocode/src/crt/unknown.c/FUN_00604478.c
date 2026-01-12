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
  byte *puVar1;
  ulong count;
  byte *puVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  byte *puVar6;
  uint *puVar7;
  uint *puVar8;
  byte bVar9;
  int *in_stack_00000004;
  uint *in_stack_00000008;
  byte *in_stack_0000000c;
  char cStack00000010;
  uint *in_stack_00000014;
  char cVar10;
  
  bVar9 = 0;
  iVar4 = in_stack_00000004[1];
  if (iVar4 < 1) {
    puVar1 = (byte *)(*in_stack_00000004 + iVar4);
  }
  else {
    puVar1 = (byte *)((*in_stack_00000004 - iVar4) + 1);
  }
  if ((*(byte *)(in_stack_00000004 + 2) & 4) != 0) {
    if ((int)in_stack_0000000c < (int)puVar1) {
      puVar1 = in_stack_0000000c;
    }
    puVar1 = puVar1 + -1;
    if ((int)puVar1 < 0) {
      puVar1 = (byte *)0x0;
    }
  }
  puVar6 = (byte *)in_stack_00000004[1];
  if ((int)puVar6 < 1) {
    puVar6 = &DAT_00000001;
    *(byte *)in_stack_00000014 = 0x30;
  }
  else {
    if ((int)in_stack_0000000c < (int)puVar6) {
      puVar6 = in_stack_0000000c;
    }
    puVar7 = in_stack_00000008;
    puVar8 = in_stack_00000014;
    for (uVar5 = (uint)puVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    for (uVar5 = (uint)puVar6 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(byte *)puVar8 = *(byte *)puVar7;
      puVar7 = (uint *)((int)puVar7 + 1);
      puVar8 = (uint *)((int)puVar8 + 1);
    }
    in_stack_00000008 = (uint *)((int)in_stack_00000008 + (int)puVar6);
    in_stack_0000000c = in_stack_0000000c + -(int)puVar6;
    if ((int)puVar6 < in_stack_00000004[1]) {
      count = in_stack_00000004[1] - (int)puVar6;
      crt_memory_c_memset_FUN_005fde40
                ((byte *)((int)in_stack_00000014 + (int)puVar6),0x30,count);
      puVar6 = puVar6 + count;
    }
  }
  in_stack_00000004[6] = (int)puVar6;
  if (((*(byte *)(in_stack_00000004 + 2) & 8) == 0) &&
     ((0 < (int)puVar1 || ((*(byte *)(in_stack_00000004 + 2) & 0x10) != 0)))) {
    puVar2 = puVar6 + (int)in_stack_00000014;
    puVar6 = puVar6 + 1;
    *puVar2 = 0x2e;
  }
  if (in_stack_00000004[1] < 0) {
    iVar4 = -in_stack_00000004[1];
    puVar1 = (byte *)((int)in_stack_00000014 + (int)puVar6);
    crt_memory_c_memset_FUN_005fde40(puVar1,iVar4,iVar4);
    puVar6 = puVar6 + iVar4;
  }
  if (0 < (int)puVar1) {
    if ((int)puVar1 < (int)in_stack_0000000c) {
      in_stack_0000000c = puVar1;
    }
    if (in_stack_0000000c != (byte *)0x0) {
      puVar7 = (uint *)((int)in_stack_00000014 + (int)puVar6);
      for (uVar5 = (uint)in_stack_0000000c >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar7 = *in_stack_00000008;
        in_stack_00000008 = in_stack_00000008 + (uint)bVar9 * -2 + 1;
        puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
      }
      for (uVar5 = (uint)in_stack_0000000c & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(byte *)puVar7 = *(byte *)in_stack_00000008;
        in_stack_00000008 = (uint *)((int)in_stack_00000008 + (uint)bVar9 * -2 + 1);
        puVar7 = (uint *)((int)puVar7 + (uint)bVar9 * -2 + 1);
      }
      puVar6 = puVar6 + (int)in_stack_0000000c;
    }
    in_stack_00000004[7] = (int)puVar6;
    in_stack_00000004[8] = (int)puVar1 - (int)in_stack_0000000c;
  }
  if (in_stack_00000004[3] != 0) {
    puVar1 = puVar6 + (int)in_stack_00000014;
    puVar6 = puVar6 + 1;
    *puVar1 = (char)in_stack_00000004[3];
  }
  puVar1 = puVar6 + 1;
  if (_cStack00000010 < 0) {
    _cStack00000010 = -_cStack00000010;
    puVar6[(int)in_stack_00000014] = 0x2d;
  }
  else {
    puVar6[(int)in_stack_00000014] = 0x2b;
  }
  iVar4 = in_stack_00000004[4];
  switch(iVar4) {
  case 0:
    if (_cStack00000010 < 1000) {
      iVar4 = 3;
      goto switchD_0060463b_default;
    }
    goto LAB_00604672;
  case 1:
    if (9 < _cStack00000010) {
      iVar4 = 2;
    }
  case 2:
    break;
  case 3:
    goto switchD_0060463b_caseD_3;
  default:
    goto switchD_0060463b_default;
  }
  if (99 < _cStack00000010) {
    iVar4 = 3;
  }
switchD_0060463b_caseD_3:
  if (999 < _cStack00000010) {
LAB_00604672:
    iVar4 = 4;
  }
switchD_0060463b_default:
  in_stack_00000004[4] = iVar4;
  if (3 < iVar4) {
    cVar10 = '\0';
    if (999 < _cStack00000010) {
      cVar10 = (char)(_cStack00000010 / 1000);
      _cStack00000010 = _cStack00000010 % 1000;
    }
    pcVar3 = puVar1 + (int)in_stack_00000014;
    puVar1 = puVar6 + 2;
    *pcVar3 = cVar10 + '0';
  }
  if (2 < iVar4) {
    cVar10 = '\0';
    if (99 < _cStack00000010) {
      cVar10 = (char)(_cStack00000010 / 100);
      _cStack00000010 = _cStack00000010 % 100;
    }
    pcVar3 = puVar1 + (int)in_stack_00000014;
    puVar1 = puVar1 + 1;
    *pcVar3 = cVar10 + '0';
  }
  if (1 < iVar4) {
    cVar10 = '\0';
    if (9 < _cStack00000010) {
      cVar10 = (char)(_cStack00000010 / 10);
      _cStack00000010 = _cStack00000010 % 10;
    }
    pcVar3 = puVar1 + (int)in_stack_00000014;
    puVar1 = puVar1 + 1;
    *pcVar3 = cVar10 + '0';
  }
  puVar1[(int)in_stack_00000014] = cStack00000010 + '0';
  in_stack_00000004[9] = (int)(puVar1 + 1) - in_stack_00000004[7];
  (puVar1 + 1)[(int)in_stack_00000014] = 0;
  return;
}
