// Name: core_script.cpp_FUN_00543fd0
// Address: 00543fd0
// Address Range: [[00543fd0, 005440f9]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_FUN_00543fd0(CScript *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_script_cpp_FUN_00543fd0(CScript *this_ptr)

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
  core_script_cpp_FUN_00543790(this_ptr);
  index = 0;
  do {
    iVar2 = shape_edittool_cpp_FUN_0049df50((CStrList *)&this_ptr->field_0x34);
    if (iVar2 <= index) {
      return;
    }
    pcVar7 = &DAT_01e808a8;
    pcVar3 = shape_edittool_cpp_CStrList_getStringAt_FUN_004998a0
                       ((CStrList *)&this_ptr->field_0x34,index);
    core_script_cpp_trimLine_FUN_005431a0(pcVar3,pcVar7);
    if (DAT_01e808a8 != '\0') {
      pvVar4 = realloc
                         (*(void **)&this_ptr->field_0x30,(*(int *)&this_ptr->field_0x2c + 1) * 8);
      *(void **)&this_ptr->field_0x30 = pvVar4;
      if (pvVar4 == (void *)0x0) {
        _DAT_01d1d400 = "..\\core\\script.cpp";
        _DAT_01d1d404 = 0x3a3;
        core_main_c_FUN_005030e0("Out of memory loading script at line %d",index + 1);
      }
      *(int *)(*(int *)&this_ptr->field_0x30 + *(int *)&this_ptr->field_0x2c * 8) = index + 1;
      uVar5 = 0xffffffff;
      pcVar3 = &DAT_01e808a8;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + (uint)bVar6 * -2 + 1;
      } while (cVar1 != '\0');
      pvVar4 = FUN_005c08d0(~uVar5);
      *(void **)(*(int *)&this_ptr->field_0x30 + 4 + *(int *)&this_ptr->field_0x2c * 8) = pvVar4;
      if (*(int *)&this_ptr->field_0x30 == 0) {
        _DAT_01d1d400 = "..\\core\\script.cpp";
        _DAT_01d1d404 = 0x3a6;
        core_main_c_FUN_005030e0("Out of memory loading script at line %d",index + 1);
      }
      pcVar7 = &DAT_01e808a8;
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
