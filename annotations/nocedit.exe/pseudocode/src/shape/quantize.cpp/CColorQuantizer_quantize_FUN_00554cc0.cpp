// Name: shape_quantize.cpp_CColorQuantizer_quantize_FUN_00554cc0
// Address: 00554cc0
// Address Range: [[00554cc0, 00554d3f]]
// Convention: __cdecl
// Signature: int __cdecl shape_quantize_cpp_CColorQuantizer_quantize_FUN_00554cc0(CColorQuantizer *this_ptr)

#include "nocturne.h"

int __cdecl shape_quantize_cpp_CColorQuantizer_quantize_FUN_00554cc0(CColorQuantizer *this_ptr)

{
  int iVar1;
  
  if (this_ptr->pixel_count == 0) {
    g_CurrentFilename = "..\\shape\\quantize.cpp";
    g_CurrentLineNumber = 97;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Nothing to quantize.");
    return 0;
  }
  shape_quantize_cpp_CColorQuantizer_computeBoxStatistics_FUN_00555090(this_ptr,0);
  iVar1 = shape_quantize_cpp_CColorQuantizer_reduceColors_FUN_00555a40(this_ptr);
  if (iVar1 == 0) {
    return 0;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f460(this_ptr->pixel_data,"..\\shape\\quantize.cpp",121);
  this_ptr->pixel_data = (void *)0x0;
  shape_quantize_cpp_CColorQuantizer_generateSortedPalette_FUN_00555ff0
            (this_ptr,(uchar *)this_ptr->output_region);
  return 1;
}
