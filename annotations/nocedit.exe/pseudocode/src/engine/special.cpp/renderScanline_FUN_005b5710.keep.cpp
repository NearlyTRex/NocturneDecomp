// Name: engine_special.cpp_renderScanline_FUN_005b5710
// Address: 005b5710
// MANUAL RECONSTRUCTION
// Address Range: [[005b5710, 005b5715]]
// Convention: __edi_esi_ebx
// Signature: void __edi_esi_ebx engine_special_cpp_renderScanline_FUN_005b5710(SSoftwareEdge *left,SSoftwareEdge *right,int scanline_y)

#include "nocturne.h"

void __edi_esi_ebx engine_special_cpp_renderScanline_FUN_005b5710(SSoftwareEdge *left,SSoftwareEdge *right,int scanline_y)

{
  (*g_ScanlineRenderFunc)(left,right,scanline_y);
  return;
}
