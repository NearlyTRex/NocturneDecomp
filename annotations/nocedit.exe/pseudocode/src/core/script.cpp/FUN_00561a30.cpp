// Name: core_script.cpp_FUN_00561a30
// Address: 00561a30
// Address Range: [[00561a30, 00561c69]]
// Convention: unknown
// Signature: int core_script_cpp_FUN_00561a30(void)

#include "nocturne.h"

/* Signature: byte core_script.cpp_FUN_00561a30(uint param_1, uint param_2,
   uint param_3, uint param_4, uint param_5, uint param_6, uint
   param_7) */

int core_script_cpp_FUN_00561a30(void)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  char *pcVar5;
  byte bVar6;
  char *in_stack_00000004;
  char *in_stack_00000008;
  char *in_stack_0000000c;
  char *in_stack_00000010;
  uint in_stack_00000014;
  void *in_stack_00000018;
  uint in_stack_ffffffd0;
  int local_18;
  
  bVar6 = 0;
  shape_edittool_cpp_CStrList_ctor_FUN_004a2a20((CStrList *)&stack0xffffffd0);
  iVar2 = core_script_cpp_FUN_00567310();
  memset(in_stack_00000018,0,0x328);
  if (iVar2 < 0) {
    uVar4 = 0xffffffff;
    pcVar3 = in_stack_00000004;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + (uint)bVar6 * -2 + 1;
    } while (cVar1 != '\0');
    if (~uVar4 - 1 < in_stack_00000014) {
      uVar4 = 0xffffffff;
      pcVar3 = in_stack_00000004;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + (uint)bVar6 * -2 + 1;
      } while (cVar1 != '\0');
      in_stack_00000014 = ~uVar4 - 1;
    }
    pcVar3 = in_stack_00000004;
    pcVar5 = in_stack_00000008;
    for (uVar4 = in_stack_00000014 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(uint *)pcVar5 = *(uint *)pcVar3;
      pcVar3 = pcVar3 + (uint)bVar6 * -8 + 4;
      pcVar5 = pcVar5 + (uint)bVar6 * -8 + 4;
    }
    for (uVar4 = in_stack_00000014 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar5 = *pcVar3;
      pcVar3 = pcVar3 + (uint)bVar6 * -2 + 1;
      pcVar5 = pcVar5 + (uint)bVar6 * -2 + 1;
    }
    in_stack_00000008[in_stack_00000014] = '\0';
    in_stack_00000004 = in_stack_00000004 + in_stack_00000014;
    *in_stack_0000000c = '\0';
    do {
      cVar1 = *in_stack_00000004;
      *in_stack_00000010 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = in_stack_00000004[1];
      in_stack_00000004 = in_stack_00000004 + 2;
      in_stack_00000010[1] = cVar1;
      in_stack_00000010 = in_stack_00000010 + 2;
    } while (cVar1 != '\0');
    shape_edittool_cpp_CStrList_dtor_FUN_004a2a40((CStrList *)&stack0xffffffd0,0,in_stack_ffffffd0);
    return 0x20;
  }
  pcVar3 = in_stack_00000004;
  pcVar5 = in_stack_00000008;
  for (uVar4 = in_stack_00000014 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(uint *)pcVar5 = *(uint *)pcVar3;
    pcVar3 = pcVar3 + (uint)bVar6 * -8 + 4;
    pcVar5 = pcVar5 + (uint)bVar6 * -8 + 4;
  }
  for (uVar4 = in_stack_00000014 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar5 = *pcVar3;
    pcVar3 = pcVar3 + (uint)bVar6 * -2 + 1;
    pcVar5 = pcVar5 + (uint)bVar6 * -2 + 1;
  }
  in_stack_00000008[in_stack_00000014] = '\0';
  local_18 = -1;
  pcVar3 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70((CStrList *)&stack0xffffffd0,iVar2);
  do {
    pcVar5 = pcVar3;
    if (*pcVar3 == '(') goto LAB_00561ae9;
    if (*pcVar3 == '\0') break;
    pcVar5 = pcVar3 + 1;
    if (*pcVar5 == '(') goto LAB_00561ae9;
    pcVar3 = pcVar3 + 2;
  } while (*pcVar5 != '\0');
  pcVar5 = (char *)0x0;
LAB_00561ae9:
  if (pcVar5 != (char *)0x0) {
    shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70((CStrList *)&stack0xffffffd0,iVar2);
    local_18 = core_script_cpp_FUN_00561690();
  }
  if (local_18 < 0) {
    pcVar3 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                       ((CStrList *)&stack0xffffffd0,iVar2);
    do {
      cVar1 = *pcVar3;
      *in_stack_0000000c = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      in_stack_0000000c[1] = cVar1;
      in_stack_0000000c = in_stack_0000000c + 2;
    } while (cVar1 != '\0');
    local_18 = 0x20;
    *in_stack_00000010 = '\0';
  }
  pcVar3 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70((CStrList *)&stack0xffffffd0,iVar2);
  uVar4 = 0xffffffff;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + (uint)bVar6 * -2 + 1;
  } while (cVar1 != '\0');
  in_stack_00000004 = in_stack_00000004 + (~uVar4 - 1) + in_stack_00000014;
  iVar2 = -1;
  do {
    pcVar3 = in_stack_00000010;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar3 = in_stack_00000010 + (uint)bVar6 * -2 + 1;
    cVar1 = *in_stack_00000010;
    in_stack_00000010 = pcVar3;
  } while (cVar1 != '\0');
  pcVar3 = pcVar3 + -1;
  do {
    cVar1 = *in_stack_00000004;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = in_stack_00000004[1];
    in_stack_00000004 = in_stack_00000004 + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  shape_edittool_cpp_CStrList_dtor_FUN_004a2a40((CStrList *)&stack0xffffffd0,0,in_stack_ffffffd0);
  return local_18;
}
