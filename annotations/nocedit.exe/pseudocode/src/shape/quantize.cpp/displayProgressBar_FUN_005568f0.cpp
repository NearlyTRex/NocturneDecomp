// Name: shape_quantize.cpp_displayProgressBar_FUN_005568f0
// Address: 005568f0
// Address Range: [[005568f0, 005569fb]]
// Convention: __cdecl
// Signature: int __cdecl shape_quantize_cpp_displayProgressBar_FUN_005568f0(char *label,int total_count,int current_index)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

int __cdecl shape_quantize_cpp_displayProgressBar_FUN_005568f0(char *label,int total_count,int current_index)

{
  char *pcVar1;
  char *pcVar2;
  char local_78 [100];
  ulong local_14;
  int local_10;
  int local_c;
  
  local_10 = current_index;
  local_c = total_count;
  pcVar2 = local_78;
  local_14 = (ulong)ROUND(ROUND(((double)current_index / (double)total_count) * 20));
  _sprintf(local_78,"\r%s [                    ]\r",label);
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
  memset(pcVar1 + 1,0x2e,local_14);
  engine_2d_c_drawText_FUN_00401fd0(local_78,0,(g_QuantizeCurrentLineNumber + 4) * 0xb);
  wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
  if (total_count + -1 != current_index) {
    return 0;
  }
  _sprintf(local_78,"%s [....................]\n",label);
  engine_2d_c_drawText_FUN_00401fd0(local_78,0,(g_QuantizeCurrentLineNumber + 4) * 0xb);
  wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
  return 0;
}
