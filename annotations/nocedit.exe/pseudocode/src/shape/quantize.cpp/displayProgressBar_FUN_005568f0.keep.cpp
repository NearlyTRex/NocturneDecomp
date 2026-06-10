// Name: shape_quantize.cpp_displayProgressBar_FUN_005568f0
// Address: 005568f0
// MANUAL RECONSTRUCTION
// Address Range: [[005568f0, 005569fb]]
// Convention: __cdecl
// Signature: int __cdecl shape_quantize_cpp_displayProgressBar_FUN_005568f0(char *label,int total_count,int current_index)

#include "nocturne.h"

int __cdecl shape_quantize_cpp_displayProgressBar_FUN_005568f0(char *label,int total_count,int current_index)

{
  double dVar1;
  char *pcVar1;
  char local_78 [100];

  dVar1 = ((double)current_index / (double)total_count) * 20;
  _sprintf(local_78,"\r%s [                    ]\r",label);
  pcVar1 = strchr(local_78,'[');
  memset(pcVar1 + 1,0x2e,(int)ROUND(ROUND(dVar1)));
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
