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
  float10 fVar2;
  int in_stack_0000001c;
  int in_stack_00000020;
  char *pcVar3;
  char acStack_60 [80];
  int local_10;
  ulong local_c;
  
  local_10 = current_index;
  local_c = total_count;
  fVar2 = ((float10)current_index / (float10)total_count) * (float10)20;
  pcVar3 = "\r%s [                    ]\r";
  pcVar1 = &stack0xffffff88;
  crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(label,&stack0xffffff88));
  local_10 = (int)ROUND(fVar2);
  crt_stdio_c_sprintf_FUN_005fdbd0(pcVar3,label);
  do {
    pcVar3 = pcVar1;
    if (*pcVar1 == '[') goto LAB_0055695d;
    if (*pcVar1 == '\0') break;
    pcVar3 = pcVar1 + 1;
    if (*pcVar3 == '[') goto LAB_0055695d;
    pcVar1 = pcVar1 + 2;
  } while (*pcVar3 != '\0');
  pcVar3 = (char *)0x0;
LAB_0055695d:
  crt_memory_c_memset_FUN_005fde40(pcVar3 + 1,0x2e,local_c);
  engine_2d_c_drawText_FUN_00401fd0(&stack0xffffff94,0,(g_QuantizeCurrentLineNumber + 4) * 0xb);
  wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
  if (in_stack_0000001c + -1 != in_stack_00000020) {
    return 0;
  }
  crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffff9c,"%s [....................]\n");
  engine_2d_c_drawText_FUN_00401fd0(acStack_60,0,(g_QuantizeCurrentLineNumber + 4) * 0xb);
  acStack_60[0] = -0xc;
  acStack_60[1] = 'i';
  acStack_60[2] = 'U';
  acStack_60[3] = '\0';
  wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
  return 0;
}
