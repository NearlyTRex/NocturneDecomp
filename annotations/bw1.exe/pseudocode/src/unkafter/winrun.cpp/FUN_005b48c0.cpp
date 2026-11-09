// Name: unkafter_winrun.cpp_FUN_005b48c0
// Address: 005b48c0
// Address Range: [[005b48c0, 005b495d]]
// Convention: unknown
// Signature: void unkafter_winrun_cpp_FUN_005b48c0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void unkafter_winrun_cpp_FUN_005b48c0(void)

{
  int *in_EAX;
  char in_CL;
  int unaff_EBX;
  int unaff_EBP;
  char *unaff_EDI;
  int in_stack_00000094;
  int in_stack_00000098;
  int iStack000000a4;
  int iStack000000a8;
  
  *in_EAX = (int)(*in_EAX + (int)in_EAX);
  *unaff_EDI = *unaff_EDI + in_CL;
  *(char *)in_EAX = (char)*in_EAX + (char)in_EAX;
  *(char *)(unaff_EBX + 0xa824ac) = *(char *)(unaff_EBX + 0xa824ac) + in_CL;
  *(char *)in_EAX = (char)*in_EAX + (char)in_EAX;
  iStack000000a4 = (int)in_EAX * 2;
  iStack000000a8 = unaff_EBP * 2;
  MoveWindow(_DAT_02c9d298,in_stack_00000094 / 2 - iStack000000a4 / 2,
             in_stack_00000098 / 2 - iStack000000a8 / 2,iStack000000a4,iStack000000a8,1);
  return;
}
