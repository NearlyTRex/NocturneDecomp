// Name: core_skeledit.cpp_FUN_0058a0f0
// Address: 0058a0f0
// Address Range: [[0058a0f0, 0058a1a8]]
// Convention: __cdecl
// Signature: void __cdecl core_skeledit_cpp_FUN_0058a0f0(void)

#include "nocturne.h"

void __cdecl core_skeledit_cpp_FUN_0058a0f0(void)

{
  int in_stack_00000004;
  _FILE *in_stack_00000008;
  
  __STK();
  _fprintf(in_stack_00000008,"// version\n");
  _fprintf(in_stack_00000008,"1\n");
  _fprintf(in_stack_00000008,"// posFilename\n");
  _fprintf(in_stack_00000008,"\"%s\"\n",in_stack_00000004);
  _fprintf(in_stack_00000008,"// sklFilename\n");
  _fprintf(in_stack_00000008,"\"%s\"\n",in_stack_00000004 + 0x100);
  _fprintf(in_stack_00000008,"// s3dFilename\n");
  _fprintf(in_stack_00000008,"\"%s\"\n",in_stack_00000004 + 0x200);
  _fprintf(in_stack_00000008,"// forShadows\n");
  _fprintf(in_stack_00000008,"%d\n",*(uint *)(in_stack_00000004 + 0x30c));
  return;
}
