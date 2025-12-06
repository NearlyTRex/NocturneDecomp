// Name: shape_edittool.cpp_extractTabDelimitedField_FUN_0049d250
// Address: 0049d250
// Address Range: [[0049d250, 0049d281]]
// Convention: __cdecl
// Signature: char * shape_edittool.cpp_extractTabDelimitedField_FUN_0049d250(char * source_str, char * dest_buffer)

#include "nocturne.h"

char * __cdecl
shape_edittool_cpp_extractTabDelimitedField_FUN_0049d250(char *source_str,char *dest_buffer)

{
  char *pcVar1;
  char cVar2;
  
  cVar2 = *source_str;
  while( true ) {
    if (cVar2 == '\0') {
      *dest_buffer = '\0';
      return source_str;
    }
    pcVar1 = source_str + 1;
    if (*source_str == '\t') break;
    *dest_buffer = *source_str;
    dest_buffer = dest_buffer + 1;
    cVar2 = *pcVar1;
    source_str = pcVar1;
  }
  *dest_buffer = '\0';
  return pcVar1;
}
