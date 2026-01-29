// Name: core_skeledit.cpp_FUN_00589fe0
// Address: 00589fe0
// Address Range: [[00589fe0, 0058a0e5]]
// Convention: unknown
// Signature: void core_skeledit_cpp_FUN_00589fe0(void)

#include "nocturne.h"

void core_skeledit_cpp_FUN_00589fe0(void)

{
  byte *in_stack_00000004;
  _FILE *in_stack_00000008;
  byte auStack_c [4];
  
  __STK(0x1c);
  core_skeledit_cpp_FUN_00589fc0();
  _fscanf(in_stack_00000008,"%*[^\n]\n");
  _fscanf(in_stack_00000008,"%d\n",auStack_c);
  _fscanf(in_stack_00000008,"%*[^\n]\n");
  *in_stack_00000004 = 0;
  _fscanf(in_stack_00000008," \"%[^\"]",in_stack_00000004);
  _fscanf(in_stack_00000008,"\"\n");
  _fscanf(in_stack_00000008,"%*[^\n]\n");
  in_stack_00000004[0x100] = 0;
  _fscanf(in_stack_00000008," \"%[^\"]",in_stack_00000004 + 0x100);
  _fscanf(in_stack_00000008,"\"\n");
  _fscanf(in_stack_00000008,"%*[^\n]\n");
  in_stack_00000004[0x200] = 0;
  _fscanf(in_stack_00000008," \"%[^\"]",in_stack_00000004 + 0x200);
  _fscanf(in_stack_00000008,"\"\n");
  _fscanf(in_stack_00000008,"%*[^\n]\n");
  _fscanf(in_stack_00000008,"%d\n",in_stack_00000004 + 0x30c);
  return;
}
