// Name: engine_special.cpp_renderScanline_FUN_00530710
// Address: 00530710
// Address Range: [[00530710, 00530715]]
// Convention: __edi_esi_ebx
// Signature: void __edi_esi_ebx engine_special_cpp_renderScanline_FUN_00530710(SSoftwareEdge *left,SSoftwareEdge *right,int scanline_y)

#include "nocturne.h"

void __edi_esi_ebx engine_special_cpp_renderScanline_FUN_00530710(SSoftwareEdge *left,SSoftwareEdge *right,int scanline_y)

{
                    /* WARNING: Could not recover jumptable at 0x00530710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*g_ScanlineRenderFunc)(left,right,scanline_y);
  return;
}
