// Name: core_script.cpp_FUN_00561a30
// Address: 00561a30
// Address Range: [[00561a30, 00561c69]]
// Convention: unknown
// Signature: undefined core_script.cpp_FUN_00561a30()

#include "nocturne.h"

/* Signature: byte core_script.cpp_FUN_00561a30(uint param_1, uint param_2,
   uint param_3, uint param_4, uint param_5, uint param_6, uint
   param_7) */

char * core_script_cpp_FUN_00561a30
                 (uint param_1,uint param_2,int unaff_EBX,uint param_4,
                 char *param_5)

{
  char cVar1;
  CStrList_vtable *d2;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  BADSPACEBASE *in_ESP;
  int unaff_ESI;
  char *pcVar5;
  char *pcVar6;
  byte bVar7;
  int unaff_retaddr;
  char *in_stack_00000014;
  byte *in_stack_00000018;
  char *in_stack_0000001c;
  void *in_stack_00000020;
  char *in_stack_00000024;
  byte *in_stack_00000028;
  char *in_stack_0000002c;
  CStrList_vtable *in_stack_ffffffdc;
  
  bVar7 = 0;
  shape_edittool_cpp_CStrList_ctor_FUN_004a2a20((CStrList *)&stack0xffffffd0);
  d2 = (CStrList_vtable *)core_script_cpp_FUN_00567310();
  crt_memory_c_memset_FUN_005fde40(in_stack_00000020,0,0x328);
  if (unaff_ESI < 0) {
    uVar3 = 0xffffffff;
    pcVar2 = param_5;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + (uint)bVar7 * -2 + 1;
    } while (cVar1 != '\0');
    pcVar2 = in_stack_00000014;
    if ((char *)(~uVar3 - 1) < in_stack_00000014) {
      uVar3 = 0xffffffff;
      pcVar2 = param_5;
      do {
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + (uint)bVar7 * -2 + 1;
      } while (cVar1 != '\0');
      pcVar2 = (char *)(~uVar3 - 1);
    }
    pcVar5 = param_5;
    pcVar6 = in_stack_00000014;
    for (uVar3 = (uint)pcVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(uint *)pcVar6 = *(uint *)pcVar5;
      pcVar5 = pcVar5 + (uint)bVar7 * -8 + 4;
      pcVar6 = pcVar6 + (uint)bVar7 * -8 + 4;
    }
    for (uVar3 = (uint)pcVar2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar6 = *pcVar5;
      pcVar5 = pcVar5 + (uint)bVar7 * -2 + 1;
      pcVar6 = pcVar6 + (uint)bVar7 * -2 + 1;
    }
    in_stack_00000014[(int)pcVar2] = '\0';
    param_5 = param_5 + (int)pcVar2;
    *in_stack_00000018 = 0;
    do {
      cVar1 = *param_5;
      *in_stack_0000001c = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = param_5[1];
      param_5 = param_5 + 2;
      in_stack_0000001c[1] = cVar1;
      in_stack_0000001c = in_stack_0000001c + 2;
    } while (cVar1 != '\0');
    shape_edittool_cpp_CStrList_dtor_FUN_004a2a40
              ((CStrList *)&stack0xffffffdc,0,(uint)in_stack_ffffffdc);
    return (char *)0x20;
  }
  pcVar2 = param_5;
  pcVar5 = in_stack_00000014;
  for (uVar3 = (uint)d2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(uint *)pcVar5 = *(uint *)pcVar2;
    pcVar2 = pcVar2 + (uint)bVar7 * -8 + 4;
    pcVar5 = pcVar5 + (uint)bVar7 * -8 + 4;
  }
  for (uVar3 = (uint)d2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar5 = *pcVar2;
    pcVar2 = pcVar2 + (uint)bVar7 * -2 + 1;
    pcVar5 = pcVar5 + (uint)bVar7 * -2 + 1;
  }
  in_stack_00000014[(int)d2] = '\0';
  pcVar2 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                     ((CStrList *)&stack0xffffffdc,unaff_ESI);
  do {
    pcVar5 = pcVar2;
    if (*pcVar2 == '(') goto LAB_00561ae9;
    if (*pcVar2 == '\0') break;
    pcVar5 = pcVar2 + 1;
    if (*pcVar5 == '(') goto LAB_00561ae9;
    pcVar2 = pcVar2 + 2;
  } while (*pcVar5 != '\0');
  pcVar5 = (char *)0x0;
LAB_00561ae9:
  if (pcVar5 != (char *)0x0) {
    shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70((CStrList *)&stack0xffffffe0,unaff_EBX);
    unaff_retaddr = core_script_cpp_FUN_00561690();
  }
  if (unaff_retaddr < 0) {
    pcVar2 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                       ((CStrList *)&stack0xffffffe8,unaff_EBX);
    do {
      cVar1 = *pcVar2;
      *in_stack_00000024 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      in_stack_00000024[1] = cVar1;
      in_stack_00000024 = in_stack_00000024 + 2;
    } while (cVar1 != '\0');
    *in_stack_00000028 = 0;
  }
  pcVar2 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                     ((CStrList *)&stack0xffffffe8,unaff_EBX);
  uVar3 = 0xffffffff;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + (uint)bVar7 * -2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = param_5 + (~uVar3 - 1) + unaff_ESI;
  iVar4 = -1;
  do {
    pcVar5 = in_stack_0000002c;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pcVar5 = in_stack_0000002c + (uint)bVar7 * -2 + 1;
    cVar1 = *in_stack_0000002c;
    in_stack_0000002c = pcVar5;
  } while (cVar1 != '\0');
  pcVar5 = pcVar5 + -1;
  do {
    cVar1 = *pcVar2;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar2[1];
    pcVar2 = pcVar2 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  shape_edittool_cpp_CStrList_dtor_FUN_004a2a40((CStrList *)&stack0xffffffec,0,(uint)d2);
  return param_5;
}
