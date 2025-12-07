// Name: shape_quantize.cpp_displayProgressBar_FUN_005568f0
// Address: 005568f0
// Address Range: [[005568f0, 005569fb]]
// Convention: __cdecl
// Signature: int shape_quantize.cpp_displayProgressBar_FUN_005568f0(char * label, int total_count, int current_index)

#include "nocturne.h"

int __cdecl
shape_quantize_cpp_displayProgressBar_FUN_005568f0(char *label,int total_count,int current_index)

{
  BADSPACEBASE *in_ESP;
  char *pcVar1;
  char *pcVar2;
  double dVar3;
  int in_stack_00000014;
  int in_stack_00000018;
  char *buffer;
  char *pcVar4;
  char acStack_68 [80];
  int iStack_18;
  ulong local_14;
  int local_10;
  int local_c;
  
  local_10 = current_index;
  local_c = total_count;
  pcVar4 = "\r%s [                    ]\r";
  pcVar1 = &stack0xffffff88;
  pcVar2 = &stack0xffffff88;
  buffer = (char *)0x556933;
  dVar3 = crt_math_c_round_FUN_005fe6b0
                    (((double)current_index / (double)total_count) * 20);
  iStack_18 = (int)ROUND(dVar3);
  crt_stdio_c_sprintf_FUN_005fdbd0(buffer,pcVar1,pcVar4,label);
  do {
    pcVar1 = pcVar2;
    if (*pcVar2 == '[') goto LAB_0055695d;
    if (*pcVar2 == '\0') break;
    pcVar1 = pcVar2 + 1;
    if (*pcVar1 == '[') goto LAB_0055695d;
    pcVar2 = pcVar2 + 2;
  } while (*pcVar1 != '\0');
  pcVar1 = (char *)0x0;
LAB_0055695d:
  crt_memory_c_memset_FUN_005fde40(pcVar1 + 1,0x2e,local_14);
  engine_2d_c_drawText_FUN_00401fd0(&stack0xffffff8c,0,(g_QuantizeCurrentLineNumber + 4) * 0xb);
  wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
  if (in_stack_00000014 + -1 != in_stack_00000018) {
    return 0;
  }
  crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffff94,"%s [....................]\n");
  engine_2d_c_drawText_FUN_00401fd0(acStack_68,0,(g_QuantizeCurrentLineNumber + 4) * 0xb);
  acStack_68[0] = -0xc;
  acStack_68[1] = 'i';
  acStack_68[2] = 'U';
  acStack_68[3] = '\0';
  wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
  return 0;
}
