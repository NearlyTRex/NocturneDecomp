// Name: wincore_windll.cpp_renderScanline_FUN_005b5710
// Address: 005b5710
// Address Range: [[005b5710, 005b5715]]
// Convention: __edi_esi_ebx
// Signature: void __edi_esi_ebx wincore_windll_cpp_renderScanline_FUN_005b5710(void *left_data,void *right_data,int scanline_y)

#include "nocturne.h"

void __edi_esi_ebx
wincore_windll_cpp_renderScanline_FUN_005b5710(void *left_data,void *right_data,int scanline_y)

{
                    /* WARNING: Could not recover jumptable at 0x005b5710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*g_ScanlineRenderFunc)(left_data,right_data,scanline_y);
  return;
}
