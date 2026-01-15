// Name: shape_edittool.cpp_CStrList_getFieldAt_FUN_004a2f80
// Address: 004a2f80
// Address Range: [[004a2f80, 004a3022]]
// Convention: __cdecl
// Signature: void shape_edittool.cpp_CStrList_getFieldAt_FUN_004a2f80(CStrList * this_ptr, int string_index, char * output_buffer, int field_number)

#include "nocturne.h"

void __cdecl
shape_edittool_cpp_CStrList_getFieldAt_FUN_004a2f80
          (CStrList *this_ptr,int string_index,char *output_buffer,int field_number)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char local_134 [300];
  
  pcVar3 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(this_ptr,(int)output_buffer);
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
      *(char *)string_index = cVar1;
      cVar1 = *pcVar3;
      string_index = string_index + 1;
    }
    *(char *)string_index = '\0';
    return;
  }
  *(byte *)string_index = 0;
  return;
}
