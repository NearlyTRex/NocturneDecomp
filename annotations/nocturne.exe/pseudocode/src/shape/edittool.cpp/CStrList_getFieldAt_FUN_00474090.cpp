// Name: shape_edittool.cpp_CStrList_getFieldAt_FUN_00474090
// Address: 00474090
// Address Range: [[00474090, 00474132]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CStrList_getFieldAt_FUN_00474090(CStrList *this_ptr,char *output_buffer,int string_index,int field_number)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CStrList_getFieldAt_FUN_00474090(CStrList *this_ptr,char *output_buffer,int string_index,int field_number)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char local_134 [300];
  
  pcVar3 = shape_edittool_cpp_CStrList_getStringAt_FUN_00474080(this_ptr,string_index);
  for (; (pcVar3 != (char *)0x0 && (0 < field_number)); field_number = field_number + -1) {
    cVar1 = *pcVar3;
    pcVar4 = local_134;
    pcVar2 = pcVar3;
    while ((pcVar3 = pcVar2, cVar1 != '\0' && (pcVar3 = pcVar2 + 1, *pcVar2 != '\t'))) {
      *pcVar4 = *pcVar2;
      pcVar4 = pcVar4 + 1;
      cVar1 = *pcVar3;
      pcVar2 = pcVar3;
    }
    *pcVar4 = '\0';
  }
  if (pcVar3 != (char *)0x0) {
    cVar1 = *pcVar3;
    while ((cVar1 != '\0' && (*pcVar3 != '\t'))) {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      *output_buffer = cVar1;
      cVar1 = *pcVar3;
      output_buffer = output_buffer + 1;
    }
    *output_buffer = '\0';
    return;
  }
  *output_buffer = '\0';
  return;
}
