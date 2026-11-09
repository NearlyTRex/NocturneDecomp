// Name: core_script.cpp_FUN_005295e0
// Address: 005295e0
// Address Range: [[005295e0, 00529709]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_FUN_005295e0(CScript *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_script_cpp_FUN_005295e0(CScript *this_ptr)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  void *pvVar4;
  uint uVar5;
  int index;
  byte bVar6;
  char *pcVar7;
  
  bVar6 = 0;
  core_script_cpp_FUN_00528da0(this_ptr);
  index = 0;
  do {
    iVar2 = shape_edittool_cpp_FUN_00486af0((CStrList *)&this_ptr->field_0x34);
    if (iVar2 <= index) {
      return;
    }
    pcVar7 = &DAT_01ed6008;
    pcVar3 = shape_edittool_cpp_CStrList_getStringAt_FUN_00482440
                       ((CStrList *)&this_ptr->field_0x34,index);
    core_script_cpp_trimLine_FUN_00528790(pcVar3,pcVar7);
    if (DAT_01ed6008 != '\0') {
      pvVar4 = realloc
                         (*(void **)&this_ptr->field_0x30,(*(int *)&this_ptr->field_0x2c + 1) * 8);
      *(void **)&this_ptr->field_0x30 = pvVar4;
      if (pvVar4 == (void *)0x0) {
        _DAT_01d71de0 = "..\\core\\script.cpp";
        _DAT_01d71de4 = 0x3a4;
        core_main_c_FUN_004e4330("Out of memory loading script at line %d",index + 1);
      }
      *(int *)(*(int *)&this_ptr->field_0x30 + *(int *)&this_ptr->field_0x2c * 8) = index + 1;
      uVar5 = 0xffffffff;
      pcVar3 = &DAT_01ed6008;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + (uint)bVar6 * -2 + 1;
      } while (cVar1 != '\0');
      pvVar4 = FUN_005a3650(~uVar5);
      *(void **)(*(int *)&this_ptr->field_0x30 + 4 + *(int *)&this_ptr->field_0x2c * 8) = pvVar4;
      if (*(int *)&this_ptr->field_0x30 == 0) {
        _DAT_01d71de0 = "..\\core\\script.cpp";
        _DAT_01d71de4 = 0x3a7;
        core_main_c_FUN_004e4330("Out of memory loading script at line %d",index + 1);
      }
      pcVar7 = &DAT_01ed6008;
      pcVar3 = *(char **)(*(int *)&this_ptr->field_0x30 + 4 + *(int *)&this_ptr->field_0x2c * 8);
      do {
        cVar1 = *pcVar7;
        *pcVar3 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar7[1];
        pcVar7 = pcVar7 + 2;
        pcVar3[1] = cVar1;
        pcVar3 = pcVar3 + 2;
      } while (cVar1 != '\0');
      *(int *)&this_ptr->field_0x2c = *(int *)&this_ptr->field_0x2c + 1;
    }
    index = index + 1;
  } while( true );
}
