// Name: core_script.cpp_FUN_004fee30
// Address: 004fee30
// Address Range: [[004fee30, 004fef59]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_FUN_004fee30(CScript *this_ptr)

#include "nocturne.h"

void __cdecl core_script_cpp_FUN_004fee30(CScript *this_ptr)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  SScriptXRef *pSVar4;
  void *pvVar5;
  uint uVar6;
  int index;
  byte bVar7;
  char *pcVar8;
  
  bVar7 = 0;
  core_script_cpp_CScript_freeParsedLines_FUN_004fe550(this_ptr);
  index = 0;
  do {
    iVar2 = shape_edittool_cpp_CStrList_getItemCount_FUN_00477660
                      ((CStrList *)&this_ptr->parsed_line_count);
    if (iVar2 <= index) {
      return;
    }
    pcVar8 = &DAT_01e55c18;
    pcVar3 = shape_edittool_cpp_CStrList_getStringAt_FUN_00474080
                       ((CStrList *)&this_ptr->parsed_line_count,index);
    core_script_cpp_trimLine_FUN_004fdf60(pcVar3,pcVar8);
    if (DAT_01e55c18 != '\0') {
      pSVar4 = (SScriptXRef *)realloc
                         (this_ptr->xref_entries,(this_ptr->xref_count + 1) * 8);
      this_ptr->xref_entries = pSVar4;
      if (pSVar4 == (SScriptXRef *)0x0) {
        PTR_01cc4800 = "..\\core\\script.cpp";
        INT_01cc4804 = 0x398;
        core_main_c_FUN_004c8440("Out of memory loading script at line %d",index + 1);
      }
      *(int *)(this_ptr->xref_entries->name + this_ptr->xref_count * 8) = index + 1;
      uVar6 = 0xffffffff;
      pcVar3 = &DAT_01e55c18;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + (uint)bVar7 * -2 + 1;
      } while (cVar1 != '\0');
      pvVar5 = malloc(~uVar6);
      *(void **)(this_ptr->xref_entries->name + this_ptr->xref_count * 8 + 4) = pvVar5;
      if (this_ptr->xref_entries == (SScriptXRef *)0x0) {
        PTR_01cc4800 = "..\\core\\script.cpp";
        INT_01cc4804 = 0x39b;
        core_main_c_FUN_004c8440("Out of memory loading script at line %d",index + 1);
      }
      pcVar8 = &DAT_01e55c18;
      pcVar3 = *(char **)(this_ptr->xref_entries->name + this_ptr->xref_count * 8 + 4);
      do {
        cVar1 = *pcVar8;
        *pcVar3 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar8[1];
        pcVar8 = pcVar8 + 2;
        pcVar3[1] = cVar1;
        pcVar3 = pcVar3 + 2;
      } while (cVar1 != '\0');
      this_ptr->xref_count = this_ptr->xref_count + 1;
    }
    index = index + 1;
  } while( true );
}
