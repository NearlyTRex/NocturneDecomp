// Name: core_script.cpp_CCmdParse_toString_FUN_005624f0
// Address: 005624f0
// MANUAL RECONSTRUCTION
// Address Range: [[005624f0, 00562615]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_CCmdParse_toString_FUN_005624f0(CCmdParse *this_ptr,char *output_buffer)

#include "nocturne.h"

void __cdecl core_script_cpp_CCmdParse_toString_FUN_005624f0(CCmdParse *this_ptr,char *output_buffer)

{
  int iVar6;

  strcpy(output_buffer,this_ptr->cmd_name);
  strcat(output_buffer,this_ptr->argument_text);
  for (iVar6 = 0; iVar6 < this_ptr->param_count; iVar6 = iVar6 + 1) {
    strcat(output_buffer,this_ptr->params[iVar6].prefix_text);
    strcat(output_buffer,this_ptr->params[iVar6].parsed_value);
  }
  strcat(output_buffer,this_ptr->remaining_text);
  return;
}
