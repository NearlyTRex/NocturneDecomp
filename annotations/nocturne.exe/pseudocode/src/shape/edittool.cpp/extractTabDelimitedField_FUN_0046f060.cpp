// Name: shape_edittool.cpp_extractTabDelimitedField_FUN_0046f060
// Address: 0046f060
// Address Range: [[0046f060, 0046f091]]
// Convention: unknown
// Signature: char * shape_edittool_cpp_extractTabDelimitedField_FUN_0046f060(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * shape_edittool_cpp_extractTabDelimitedField_FUN_0046f060(void)

{
  char *pcVar1;
  char cVar2;
  char *in_stack_00000004;
  char *in_stack_00000008;
  
  cVar2 = *in_stack_00000004;
  while( true ) {
    if (cVar2 == '\0') {
      *in_stack_00000008 = '\0';
      return in_stack_00000004;
    }
    pcVar1 = in_stack_00000004 + 1;
    if (*in_stack_00000004 == '\t') break;
    *in_stack_00000008 = *in_stack_00000004;
    in_stack_00000008 = in_stack_00000008 + 1;
    cVar2 = *pcVar1;
    in_stack_00000004 = pcVar1;
  }
  *in_stack_00000008 = '\0';
  return pcVar1;
}
