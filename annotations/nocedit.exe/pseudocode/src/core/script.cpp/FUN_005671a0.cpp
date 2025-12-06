// Name: core_script.cpp_FUN_005671a0
// Address: 005671a0
// Address Range: [[005671a0, 0056730b]]
// Convention: unknown
// Signature: undefined core_script.cpp_FUN_005671a0()

#include "nocturne.h"

/* Signature: byte core_script.cpp_FUN_005671a0(uint param_1, uint param_2,
   uint param_3) */

void core_script_cpp_FUN_005671a0(void)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int index;
  BADSPACEBASE *in_ESP;
  char *pcVar4;
  char *pcVar5;
  uint *puVar6;
  byte bVar7;
  char *in_stack_00000004;
  CStrList_vtable *in_stack_0000000c;
  CStrList *in_stack_fffffed8;
  char *in_stack_fffffedc;
  char **in_stack_fffffee4;
  char *in_stack_fffffeec;
  char acStack_10c [236];
  CStrList local_20;
  
  bVar7 = 0;
  shape_edittool_cpp_CStrList_ctor_FUN_004a2a20(&local_20);
  core_script_cpp_FUN_00567310();
  index = 0;
  puVar6 = (uint *)&stack0xfffffed0;
  for (iVar3 = 0x45; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = in_stack_0000000c->dtor;
    in_stack_0000000c = (CStrList_vtable *)((int)in_stack_0000000c + (uint)bVar7 * -8 + 4);
    puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
  }
  do {
    iVar3 = shape_edittool_cpp_getFontBitmapCount_FUN_004a6ed0((CBitFont *)&local_20.data_array);
    if (iVar3 <= index) {
      shape_edittool_cpp_CStrList_dtor_FUN_004a2a40
                ((CStrList *)&local_20.vtable,0,(uint)in_stack_fffffed8);
      return;
    }
    pcVar2 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                       ((CStrList *)&local_20.vtable,index);
    in_stack_fffffed8 = (CStrList *)&stack0xfffffedc;
    pcVar5 = pcVar2;
    do {
      pcVar4 = pcVar5;
      if (*pcVar5 == '(') goto LAB_00567250;
      if (*pcVar5 == '\0') break;
      pcVar4 = pcVar5 + 1;
      if (*pcVar4 == '(') goto LAB_00567250;
      pcVar5 = pcVar5 + 2;
    } while (*pcVar4 != '\0');
    pcVar4 = (char *)0x0;
LAB_00567250:
    if (pcVar4 == (char *)0x0) {
      in_stack_fffffed8 =
           (CStrList *)
           shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70((CStrList *)&stack0xfffffff0,index);
      iVar3 = crt_string_c_stricmp_FUN_005fe7f0((char *)in_stack_fffffed8,in_stack_fffffedc);
      if (iVar3 != 0) {
        in_stack_fffffed8 = (CStrList *)&stack0xfffffff8;
        pcVar5 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(in_stack_fffffed8,index);
        in_stack_fffffedc = (char *)0x5672a9;
        iVar3 = crt_string_c_stricmp_FUN_005fe7f0(pcVar5,(char *)in_stack_fffffee4);
        if (iVar3 != 0) {
          in_stack_fffffedc = (char *)0x5672c3;
          pcVar5 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                             ((CStrList *)&stack0x00000000,index);
          in_stack_fffffee4 = (char **)0x5672cc;
          iVar3 = crt_string_c_stricmp_FUN_005fe7f0(pcVar5,in_stack_fffffeec);
          pcVar5 = acStack_10c;
          if (iVar3 != 0) {
            do {
              cVar1 = *pcVar2;
              *pcVar5 = cVar1;
              if (cVar1 == '\0') break;
              cVar1 = pcVar2[1];
              pcVar2 = pcVar2 + 2;
              pcVar5[1] = cVar1;
              pcVar5 = pcVar5 + 2;
            } while (cVar1 != '\0');
            in_stack_fffffeec = in_stack_00000004;
            core_script_cpp_CScript_ReallocSomething_FUN_00567510();
          }
        }
      }
    }
    else {
      core_script_cpp_CScript_ParseCounterUsed_FUN_00567490();
    }
    index = index + 1;
  } while( true );
}
